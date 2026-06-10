#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to sfm_ros2__msg__MapGraph

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapGraph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// /map to /odom transform
    /// Always identity when the graph is optimized from the latest pose.
    pub map_to_odom: geometry_msgs::msg::TransformStamped,

    /// The poses
    pub poses_id: Vec<i32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: Vec<geometry_msgs::msg::Pose>,

    /// The links
    pub links: Vec<super::msg::Link>,

}



impl Default for MapGraph {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MapGraph::default())
  }
}

impl rosidl_runtime_rs::Message for MapGraph {
  type RmwMsg = super::msg::rmw::MapGraph;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        map_to_odom: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Owned(msg.map_to_odom)).into_owned(),
        poses_id: msg.poses_id.into(),
        poses: msg.poses
          .into_iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        links: msg.links
          .into_iter()
          .map(|elem| super::msg::Link::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        map_to_odom: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.map_to_odom)).into_owned(),
        poses_id: msg.poses_id.as_slice().into(),
        poses: msg.poses
          .iter()
          .map(|elem| geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        links: msg.links
          .iter()
          .map(|elem| super::msg::Link::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      map_to_odom: geometry_msgs::msg::TransformStamped::from_rmw_message(msg.map_to_odom),
      poses_id: msg.poses_id
          .into_iter()
          .collect(),
      poses: msg.poses
          .into_iter()
          .map(geometry_msgs::msg::Pose::from_rmw_message)
          .collect(),
      links: msg.links
          .into_iter()
          .map(super::msg::Link::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to sfm_ros2__msg__Link

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub transform: geometry_msgs::msg::TransformStamped,


    // This member is not documented.
    #[allow(missing_docs)]
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub information: [f64; 36],

}



impl Default for Link {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Link::default())
  }
}

impl rosidl_runtime_rs::Message for Link {
  type RmwMsg = super::msg::rmw::Link;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        from_id: msg.from_id,
        to_id: msg.to_id,
        type_: msg.type_,
        transform: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Owned(msg.transform)).into_owned(),
        information: msg.information,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      from_id: msg.from_id,
      to_id: msg.to_id,
      type_: msg.type_,
        transform: geometry_msgs::msg::TransformStamped::into_rmw_message(std::borrow::Cow::Borrowed(&msg.transform)).into_owned(),
        information: msg.information,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      from_id: msg.from_id,
      to_id: msg.to_id,
      type_: msg.type_,
      transform: geometry_msgs::msg::TransformStamped::from_rmw_message(msg.transform),
      information: msg.information,
    }
  }
}


