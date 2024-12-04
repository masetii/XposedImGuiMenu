#pragma once

// Simple hook example
float (*old_some_method)(...);
float some_method(void* instance) {
    if (!instance)
        return old_some_method(instance);

    if (some_feature)
        some_pointer(7.0f); // declared on Pointers.h

    return 3.0f;
}

void Hooks() {
    HOOKD("0x123456", some_method);
}