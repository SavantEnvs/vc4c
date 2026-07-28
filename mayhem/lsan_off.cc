// Build-time LeakSanitizer off-switch: ASan + UBSan stay fully active, only leak detection is disabled.
extern "C" int __lsan_is_turned_off() { return 1; }
