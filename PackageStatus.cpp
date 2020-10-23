///////////////////////////////////////////////////////////////////////////////
// PackageStatus.cpp
//
// class PackageStatus
////////////////////////////////////////////////////////////////////////////////

// TODO: You may add additional #includes here if you wish.
// Before submitting your assignment, delete all TODO comments
// including this one.

#include "PackageStatus.h"

namespace PackageTracking {

  PackageStatus::PackageStatus() noexcept {

    Update = 0;
    heading = new PackageStatus;
    ending = new PackageStatus;


     heading->setNext(heading);
     ending-> setPrev(ending);

    iterator = heading;
    int strnum=0;
    tracking_number_ = strnum ;

  }

  PackageStatus::PackageStatus(const std::string& tracking_number) noexcept {
    if(!Empty()) {


      delete heading;
      delete ending;
    }
  }

  const std::string& PackageStatus::TrackingNumber() const noexcept {
    return tracking_number_;
  }

  int PackageStatus::Size() const noexcept {
    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    
    return 0;
  }

  bool PackageStatus::Empty() const noexcept {
    if (heading -> getNext() == ending)
      return true;
    return false;
  }

  void PackageStatus::AddUpdate(const std::string& description,
				const std::string& location,
				std::time_t timestamp){

      ShippingUpdate*ptr_newupdate = new ShippingUpdate(?)
      if(!ptr_newupdate)
            return-1;

      ptr_newupdate-> setNext(ending);

      ShippingUpdate *ptr_preending = heading ->getPrev();
      ptr_newupdate-> setPrev(ptr_preending);
      ptr_preending->setNext(ptr_newupdate);
      ending-> setPrev(ptr_newupdate);

      Update++;

      iterator = ptr_newupdate;

      return 1; --------??
    // TODO: Implement this function.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
  }

  bool PackageStatus::MoveCursorBackward() noexcept {

    ShippingUpdate* ptr_iteratorpre = iterator->getPrev();
    if(ptr_iteratorpre == heading)
    return -1;

    iterator = ptr_iteratorpre;
    return 1; -----??

    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    return false;
  }

  bool PackageStatus::MoveCursorForward() noexcept {

    ShippingUpdate* ptr_iteratornext = iterator-> getNext();
    if(ptr_iteratornext == ending)
      return -1;

    iterator = ptr_iteratornext;
    return 1; ---??

    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    return false;
  }

  const ShippingUpdate& PackageStatus::GetCursor() const {
    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    throw std::logic_error("not implemented");
  }

  std::string PackageStatus::DescribeCursorUpdate() {
    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    return "";
    ]""
  }

  std::string PackageStatus::DescribePreviousUpdates() {
    if(Empty() || iterator->getPrev() == heading)
    {
      cout << "No previous Updates" << endl;
      return -1;
    }

    ShippingUpdate* iterator = heading;
    while(heading->getPrev()!=header)
    {
      MoveCursorBackward;
      cout << //gettime() << ":" << getStatus 90 << ";" << GETlocation90 ,, ENDL;
     }
     iterator = ptr_iteraaator;
    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    return "";
  }

  std::string PackageStatus::DescribeFollowingUpdates() {
    //cout<<m_getTime()<<": "<<m_getStatus()<<": "<<m_getLocation()<<endl;
    if (Empty() || iterator->getNext() == heading)
    {
      cout << "No Following Updates" << endl;
      return -1;
    }
    ShippingUpdate* ptr_iteraaator = iterator;
    while (iterator-> getNext()! == ending)
    {
      MoveCursorForward;
      //cout<<m_getTime()<<": "<<m_getStatus()<<": "<<m_getLocation()<<endl;
    }

    iterator = ptr_iteraaator
    return 1; ?

    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    return "";
  }

  std::string PackageStatus::DescribeAllUpdates() {
    // TODO: Implement this function, including the return statement.
    // Before submitting your assignment, delete all TODO comments
    // including this one.
    return "";
  }

}
