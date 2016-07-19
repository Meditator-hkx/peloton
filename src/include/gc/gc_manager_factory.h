//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// gc_manager_factory.h
//
// Identification: src/include/gc/gc_manager_factory.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


#pragma once

#include "gc/gc_manager.h"
#include "common/types.h"

namespace peloton {
namespace gc {

class GCManagerFactory {
 public:
  static GCManager &GetInstance() {
    static GCManager gc_manager(GC_TYPE_OFF);
    return gc_manager;
  }

  static void Configure(GCType gc_type) { gc_type_ = gc_type; }

  static GCType GetGCType() { return gc_type_; }

 private:
  // GC type
  static GCType gc_type_;
};

}  // namespace gc
}  // namespace peloton
