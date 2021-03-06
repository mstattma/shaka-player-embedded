// Copyright 2016 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SHAKA_EMBEDDED_JS_TIMEOUTS_H_
#define SHAKA_EMBEDDED_JS_TIMEOUTS_H_

#include "shaka/optional.h"
#include "src/mapping/callback.h"

namespace shaka {
namespace js {

class Timeouts {
 public:
  static void Install();

  static int SetTimeout(Callback callback, optional<uint64_t> timeout);
  static int SetInterval(Callback callback, optional<uint64_t> timeout);

  // These are optional since jasmine passes in undefined sometimes.
  static void ClearTimeout(optional<int> id);
  static void ClearInterval(optional<int> id);
};

}  // namespace js
}  // namespace shaka

#endif  // SHAKA_EMBEDDED_JS_TIMEOUTS_H_
