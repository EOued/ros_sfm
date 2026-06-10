#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "sfm_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sfm_ros2__msg__MapGraph() -> *const std::ffi::c_void;
}

#[link(name = "sfm_ros2__rosidl_generator_c")]
extern "C" {
    fn sfm_ros2__msg__MapGraph__init(msg: *mut MapGraph) -> bool;
    fn sfm_ros2__msg__MapGraph__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MapGraph>, size: usize) -> bool;
    fn sfm_ros2__msg__MapGraph__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MapGraph>);
    fn sfm_ros2__msg__MapGraph__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MapGraph>, out_seq: *mut rosidl_runtime_rs::Sequence<MapGraph>) -> bool;
}

// Corresponds to sfm_ros2__msg__MapGraph
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapGraph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// /map to /odom transform
    /// Always identity when the graph is optimized from the latest pose.
    pub map_to_odom: geometry_msgs::msg::rmw::TransformStamped,

    /// The poses
    pub poses_id: rosidl_runtime_rs::Sequence<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Pose>,

    /// The links
    pub links: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Link>,

}



impl Default for MapGraph {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sfm_ros2__msg__MapGraph__init(&mut msg as *mut _) {
        panic!("Call to sfm_ros2__msg__MapGraph__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MapGraph {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sfm_ros2__msg__MapGraph__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sfm_ros2__msg__MapGraph__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sfm_ros2__msg__MapGraph__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MapGraph {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MapGraph where Self: Sized {
  const TYPE_NAME: &'static str = "sfm_ros2/msg/MapGraph";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sfm_ros2__msg__MapGraph() }
  }
}


#[link(name = "sfm_ros2__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__sfm_ros2__msg__Link() -> *const std::ffi::c_void;
}

#[link(name = "sfm_ros2__rosidl_generator_c")]
extern "C" {
    fn sfm_ros2__msg__Link__init(msg: *mut Link) -> bool;
    fn sfm_ros2__msg__Link__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Link>, size: usize) -> bool;
    fn sfm_ros2__msg__Link__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Link>);
    fn sfm_ros2__msg__Link__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Link>, out_seq: *mut rosidl_runtime_rs::Sequence<Link>) -> bool;
}

// Corresponds to sfm_ros2__msg__Link
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Link {

    // This member is not documented.
    #[allow(missing_docs)]
    pub from_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub to_id: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub transform: geometry_msgs::msg::rmw::TransformStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub information: [f64; 36],

}



impl Default for Link {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !sfm_ros2__msg__Link__init(&mut msg as *mut _) {
        panic!("Call to sfm_ros2__msg__Link__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Link {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sfm_ros2__msg__Link__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sfm_ros2__msg__Link__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { sfm_ros2__msg__Link__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Link {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Link where Self: Sized {
  const TYPE_NAME: &'static str = "sfm_ros2/msg/Link";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__sfm_ros2__msg__Link() }
  }
}


