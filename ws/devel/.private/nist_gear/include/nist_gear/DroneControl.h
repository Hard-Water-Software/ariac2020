// Generated by gencpp from file nist_gear/DroneControl.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_DRONECONTROL_H
#define NIST_GEAR_MESSAGE_DRONECONTROL_H

#include <ros/service_traits.h>


#include <nist_gear/DroneControlRequest.h>
#include <nist_gear/DroneControlResponse.h>


namespace nist_gear
{

struct DroneControl
{

typedef DroneControlRequest Request;
typedef DroneControlResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DroneControl
} // namespace nist_gear


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nist_gear::DroneControl > {
  static const char* value()
  {
    return "5df8ff5f4552660de2945f5478b39f6b";
  }

  static const char* value(const ::nist_gear::DroneControl&) { return value(); }
};

template<>
struct DataType< ::nist_gear::DroneControl > {
  static const char* value()
  {
    return "nist_gear/DroneControl";
  }

  static const char* value(const ::nist_gear::DroneControl&) { return value(); }
};


// service_traits::MD5Sum< ::nist_gear::DroneControlRequest> should match 
// service_traits::MD5Sum< ::nist_gear::DroneControl > 
template<>
struct MD5Sum< ::nist_gear::DroneControlRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::DroneControl >::value();
  }
  static const char* value(const ::nist_gear::DroneControlRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::DroneControlRequest> should match 
// service_traits::DataType< ::nist_gear::DroneControl > 
template<>
struct DataType< ::nist_gear::DroneControlRequest>
{
  static const char* value()
  {
    return DataType< ::nist_gear::DroneControl >::value();
  }
  static const char* value(const ::nist_gear::DroneControlRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nist_gear::DroneControlResponse> should match 
// service_traits::MD5Sum< ::nist_gear::DroneControl > 
template<>
struct MD5Sum< ::nist_gear::DroneControlResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::DroneControl >::value();
  }
  static const char* value(const ::nist_gear::DroneControlResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::DroneControlResponse> should match 
// service_traits::DataType< ::nist_gear::DroneControl > 
template<>
struct DataType< ::nist_gear::DroneControlResponse>
{
  static const char* value()
  {
    return DataType< ::nist_gear::DroneControl >::value();
  }
  static const char* value(const ::nist_gear::DroneControlResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIST_GEAR_MESSAGE_DRONECONTROL_H
