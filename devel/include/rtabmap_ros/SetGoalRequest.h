// Generated by gencpp from file rtabmap_ros/SetGoalRequest.msg
// DO NOT EDIT!


#ifndef RTABMAP_ROS_MESSAGE_SETGOALREQUEST_H
#define RTABMAP_ROS_MESSAGE_SETGOALREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rtabmap_ros
{
template <class ContainerAllocator>
struct SetGoalRequest_
{
  typedef SetGoalRequest_<ContainerAllocator> Type;

  SetGoalRequest_()
    : node_id(0)
    , node_label()
    , frame_id()  {
    }
  SetGoalRequest_(const ContainerAllocator& _alloc)
    : node_id(0)
    , node_label(_alloc)
    , frame_id(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _node_id_type;
  _node_id_type node_id;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _node_label_type;
  _node_label_type node_label;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _frame_id_type;
  _frame_id_type frame_id;





  typedef boost::shared_ptr< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGoalRequest_

typedef ::rtabmap_ros::SetGoalRequest_<std::allocator<void> > SetGoalRequest;

typedef boost::shared_ptr< ::rtabmap_ros::SetGoalRequest > SetGoalRequestPtr;
typedef boost::shared_ptr< ::rtabmap_ros::SetGoalRequest const> SetGoalRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator1> & lhs, const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator2> & rhs)
{
  return lhs.node_id == rhs.node_id &&
    lhs.node_label == rhs.node_label &&
    lhs.frame_id == rhs.frame_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator1> & lhs, const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rtabmap_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "375ab24253ceefb71e0472c1b972fff4";
  }

  static const char* value(const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x375ab24253ceefb7ULL;
  static const uint64_t static_value2 = 0x1e0472c1b972fff4ULL;
};

template<class ContainerAllocator>
struct DataType< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rtabmap_ros/SetGoalRequest";
  }

  static const char* value(const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#request\n"
"\n"
"# Set either node_id or node_label\n"
"int32 node_id\n"
"string node_label\n"
"\n"
"# optional: if not set, the base frame of the robot is used\n"
"string frame_id\n"
"\n"
;
  }

  static const char* value(const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.node_id);
      stream.next(m.node_label);
      stream.next(m.frame_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGoalRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rtabmap_ros::SetGoalRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rtabmap_ros::SetGoalRequest_<ContainerAllocator>& v)
  {
    s << indent << "node_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.node_id);
    s << indent << "node_label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.node_label);
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.frame_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RTABMAP_ROS_MESSAGE_SETGOALREQUEST_H
