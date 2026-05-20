#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "latency_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__latency_interfaces__msg__LatencyMsg() -> *const std::ffi::c_void;
}

#[link(name = "latency_interfaces__rosidl_generator_c")]
extern "C" {
    fn latency_interfaces__msg__LatencyMsg__init(msg: *mut LatencyMsg) -> bool;
    fn latency_interfaces__msg__LatencyMsg__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LatencyMsg>, size: usize) -> bool;
    fn latency_interfaces__msg__LatencyMsg__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LatencyMsg>);
    fn latency_interfaces__msg__LatencyMsg__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LatencyMsg>, out_seq: *mut rosidl_runtime_rs::Sequence<LatencyMsg>) -> bool;
}

// Corresponds to latency_interfaces__msg__LatencyMsg
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LatencyMsg {

    // This member is not documented.
    #[allow(missing_docs)]
    pub message_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for LatencyMsg {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !latency_interfaces__msg__LatencyMsg__init(&mut msg as *mut _) {
        panic!("Call to latency_interfaces__msg__LatencyMsg__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LatencyMsg {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { latency_interfaces__msg__LatencyMsg__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { latency_interfaces__msg__LatencyMsg__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { latency_interfaces__msg__LatencyMsg__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LatencyMsg {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LatencyMsg where Self: Sized {
  const TYPE_NAME: &'static str = "latency_interfaces/msg/LatencyMsg";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__latency_interfaces__msg__LatencyMsg() }
  }
}


