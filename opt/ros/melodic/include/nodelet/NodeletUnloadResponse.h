// Generated by gencpp from file nodelet/NodeletUnloadResponse.msg
// DO NOT EDIT!


#ifndef NODELET_MESSAGE_NODELETUNLOADRESPONSE_H
#define NODELET_MESSAGE_NODELETUNLOADRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nodelet
{
template <class ContainerAllocator>
struct NodeletUnloadResponse_
{
  typedef NodeletUnloadResponse_<ContainerAllocator> Type;

  NodeletUnloadResponse_()
    : success(false)  {
    }
  NodeletUnloadResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> const> ConstPtr;

}; // struct NodeletUnloadResponse_

typedef ::nodelet::NodeletUnloadResponse_<std::allocator<void> > NodeletUnloadResponse;

typedef boost::shared_ptr< ::nodelet::NodeletUnloadResponse > NodeletUnloadResponsePtr;
typedef boost::shared_ptr< ::nodelet::NodeletUnloadResponse const> NodeletUnloadResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nodelet::NodeletUnloadResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nodelet

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::nodelet::NodeletUnloadResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nodelet/NodeletUnloadResponse";
  }

  static const char* value(const ::nodelet::NodeletUnloadResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::nodelet::NodeletUnloadResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NodeletUnloadResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nodelet::NodeletUnloadResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nodelet::NodeletUnloadResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NODELET_MESSAGE_NODELETUNLOADRESPONSE_H
