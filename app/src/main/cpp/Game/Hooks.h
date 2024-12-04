#pragma once

// Simple hook example
float old_some_method(void* instance);
float some_method(void* instance) {
    if (!instance)
        return old_some_method(instance);

    return 7.0f;
}

void Hooks() {
    HOOKD("0x123456", some_method);
}