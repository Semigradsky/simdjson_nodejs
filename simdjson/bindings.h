#ifdef __AVX2__
#include <napi.h>
#include "src/simdjson.h"

namespace simdjsonnode {
  Napi::Boolean HasAVX2Wrapped(const Napi::CallbackInfo& info);

  bool isValid(std::string_view p);
  Napi::Boolean IsValidWrapped(const Napi::CallbackInfo& info);

  Napi::Object parse(Napi::Env env, std::string_view p);
  Napi::Value makeJSONObject(Napi::Env env, ParsedJson::iterator & pj);
  Napi::Object ParseWrapped(const Napi::CallbackInfo& info);

  Napi::Object LazyParseWrapped(const Napi::CallbackInfo& info);
  Napi::Value ValueForKeyPathWrapped(const Napi::CallbackInfo& info);
  Napi::Value findKeyPath(Napi::Env env, std::vector<std::string> subpaths, ParsedJson::iterator & pjh);

  Napi::Object Init(Napi::Env env, Napi::Object exports);
}

#endif