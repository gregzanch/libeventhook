#include "../include/eventhook.h"

namespace EventHook {

template <typename... Args>
void EventRegistry::addHandler(std::string id, EventHandler<Args...> handler) {}

} // namespace EventHook
