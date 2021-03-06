// Generated by gencpp from file nist_gear/SubmitShipment.msg
// DO NOT EDIT!


#ifndef NIST_GEAR_MESSAGE_SUBMITSHIPMENT_H
#define NIST_GEAR_MESSAGE_SUBMITSHIPMENT_H

#include <ros/service_traits.h>


#include <nist_gear/SubmitShipmentRequest.h>
#include <nist_gear/SubmitShipmentResponse.h>


namespace nist_gear
{

struct SubmitShipment
{

typedef SubmitShipmentRequest Request;
typedef SubmitShipmentResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SubmitShipment
} // namespace nist_gear


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::nist_gear::SubmitShipment > {
  static const char* value()
  {
    return "942098783c59c2efb4c125806191e938";
  }

  static const char* value(const ::nist_gear::SubmitShipment&) { return value(); }
};

template<>
struct DataType< ::nist_gear::SubmitShipment > {
  static const char* value()
  {
    return "nist_gear/SubmitShipment";
  }

  static const char* value(const ::nist_gear::SubmitShipment&) { return value(); }
};


// service_traits::MD5Sum< ::nist_gear::SubmitShipmentRequest> should match 
// service_traits::MD5Sum< ::nist_gear::SubmitShipment > 
template<>
struct MD5Sum< ::nist_gear::SubmitShipmentRequest>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::SubmitShipment >::value();
  }
  static const char* value(const ::nist_gear::SubmitShipmentRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::SubmitShipmentRequest> should match 
// service_traits::DataType< ::nist_gear::SubmitShipment > 
template<>
struct DataType< ::nist_gear::SubmitShipmentRequest>
{
  static const char* value()
  {
    return DataType< ::nist_gear::SubmitShipment >::value();
  }
  static const char* value(const ::nist_gear::SubmitShipmentRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::nist_gear::SubmitShipmentResponse> should match 
// service_traits::MD5Sum< ::nist_gear::SubmitShipment > 
template<>
struct MD5Sum< ::nist_gear::SubmitShipmentResponse>
{
  static const char* value()
  {
    return MD5Sum< ::nist_gear::SubmitShipment >::value();
  }
  static const char* value(const ::nist_gear::SubmitShipmentResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::nist_gear::SubmitShipmentResponse> should match 
// service_traits::DataType< ::nist_gear::SubmitShipment > 
template<>
struct DataType< ::nist_gear::SubmitShipmentResponse>
{
  static const char* value()
  {
    return DataType< ::nist_gear::SubmitShipment >::value();
  }
  static const char* value(const ::nist_gear::SubmitShipmentResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // NIST_GEAR_MESSAGE_SUBMITSHIPMENT_H
