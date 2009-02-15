/*
 * MessagePack unpacking routine for C
 *
 * Copyright (C) 2008 FURUHASHI Sadayuki
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#ifndef UNPACK_CONTEXT_H__
#define UNPACK_CONTEXT_H__

#include "msgpack/unpack.h"

typedef void* msgpack_object;

typedef msgpack_unpack_t msgpack_unpack_context;

#include "msgpack/unpack/inline_context.h"

#endif /* unpack_context.h */

