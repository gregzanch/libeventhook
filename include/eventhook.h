#pragma once

#include <functional>
#include <string>
#include <unordered_map>
#include <vector>
namespace EventHook {

template <typename... Args> using EventHandler = std::function<void(Args...)>;

class EventRegistry {
public:
  EventRegistry() = default;
  ~EventRegistry() = delete;

  template <typename... Args>
  void addHandler(std::string id, EventHandler<Args...> handler);

private:
  std::unordered_map<std::string, std::vector<EventHandler<>>> registry;
};
}; // namespace EventHook