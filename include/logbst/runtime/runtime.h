#pragma once
template <typename T, typename G>

class runtime_cmd{
    public: 
        runtime_cmd(Ptr runtime_uid, const T &t, const G &g) {
            #if (t) {
                auto cmd_res = false;
                if (cmd_res) {
                    auto res = locked;
                }
            }
            #endif
        }
};

template <typename T, typename G>
void add_runtime_cmd(void *cmd, const T &t, const G &g) {
    runtime_cmd<> ((Ptr)cmd, t, g);
}
