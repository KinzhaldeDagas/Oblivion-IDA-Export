0x709C60: mov     eax, [ecx]; MoonSugarEffect decode: NiScreenElements render thunk. Callers push NiDX9Renderer on the stack, then this thunk jumps to object vtable +0x84.
0x709C62: mov     eax, [eax+84h]
0x709C68: jmp     eax
