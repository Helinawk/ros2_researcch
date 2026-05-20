#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to latency_interfaces__msg__LatencyMsg

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LatencyMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: Vec<u8>,

}



impl Default for LatencyMsg {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LatencyMsg::default())
  }
}

impl rosidl_runtime_rs::Message for LatencyMsg {
  type RmwMsg = super::msg::rmw::LatencyMsg;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        message_id: msg.message_id,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        payload: msg.payload.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      message_id: msg.message_id,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
        payload: msg.payload.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      message_id: msg.message_id,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      payload: msg.payload
          .into_iter()
          .collect(),
    }
  }
}


