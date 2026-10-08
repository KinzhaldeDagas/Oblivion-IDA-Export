0x71FA90: push    esi
0x71FA91: mov     esi, ecx
0x71FA93: call    ??1NiDevImageConverter@@UAE@XZ; NiDevImageConverter::~NiDevImageConverter(void)
0x71FA98: test    byte ptr [esp+4+arg_0], 1
0x71FA9D: jz      short loc_71FAA8
0x71FA9F: push    esi
0x71FAA0: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x71FAA5: add     esp, 4
0x71FAA8: mov     eax, esi
0x71FAAA: pop     esi
0x71FAAB: retn    4
