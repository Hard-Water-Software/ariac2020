#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/gents/ariac2020/ws/src/ARIAC/ariac_example"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/gents/ariac2020/ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/gents/ariac2020/ws/install/lib/python2.7/dist-packages:/home/gents/ariac2020/ws/build/ariac_example/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/gents/ariac2020/ws/build/ariac_example" \
    "/usr/bin/python2" \
    "/home/gents/ariac2020/ws/src/ARIAC/ariac_example/setup.py" \
    build --build-base "/home/gents/ariac2020/ws/build/ariac_example" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/gents/ariac2020/ws/install" --install-scripts="/home/gents/ariac2020/ws/install/bin"
