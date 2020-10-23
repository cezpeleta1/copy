#include "PackageStatus.h"

namespace PackageTracking {

  //* Done *//
  PackageStatus::PackageStatus() noexcept {
    shipments = {};
    tracking_number_ = " ";
  }
  //* Done *//
  PackageStatus::PackageStatus(const std::string& tracking_number) noexcept {
    shipments = {};
    tracking_number_ = tracking_number;
  }
  //*DONE*//
  const std::string& PackageStatus::TrackingNumber() const noexcept { return tracking_number_; }
  //* Done *//
  int PackageStatus::Size() const noexcept { return shipments.size(); }
  //* Done *//
  bool PackageStatus::Empty() const noexcept { return shipments.empty(); }

  //? Not Done ?//
  void PackageStatus::AddUpdate(const std::string& description, const std::string& location, std::time_t timestamp){
  }

  //? Not Done ?//
  bool PackageStatus::MoveCursorBackward() noexcept {
  }

  //? Not Done ?//
  bool PackageStatus::MoveCursorForward() noexcept {

  }

  //? Not Done ?//
  const ShippingUpdate& PackageStatus::GetCursor() const {

  }

  //? Not Done ?//
  std::string PackageStatus::DescribeCursorUpdate() {

  }

  //? Not Done ?//
  std::string PackageStatus::DescribePreviousUpdates() {

  }

  //? Not Done ?//
  std::string PackageStatus::DescribeFollowingUpdates() {

  }

  //? Not Done ?//
  std::string PackageStatus::DescribeAllUpdates() {

  }

}
