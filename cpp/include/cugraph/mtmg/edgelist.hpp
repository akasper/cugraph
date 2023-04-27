/*
 * Copyright (c) 2023, NVIDIA CORPORATION.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <cugraph/mtmg/detail/device_shared_wrapper.hpp>
#include <cugraph/mtmg/detail/per_device_edgelist.hpp>

namespace cugraph {
namespace mtmg {

/**
 * @brief Edgelist object for each GPU
 */
template <typename vertex_t, typename weight_t, typename edge_t, typename edge_type_t>
using edgelist_t = detail::device_shared_wrapper_t<
  detail::per_device_edgelist_t<vertex_t, weight_t, edge_t, edge_type_t>>;

}  // namespace mtmg
}  // namespace cugraph
