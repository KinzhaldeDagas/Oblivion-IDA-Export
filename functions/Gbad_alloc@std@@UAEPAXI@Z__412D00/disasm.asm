0x412D00: push    esi
0x412D01: mov     esi, ecx
0x412D03: mov     dword ptr [esi], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x412D09: call    ??1exception@std@@UAE@XZ; std::exception::~exception(void)
0x412D0E: test    byte ptr [esp+4+arg_0], 1
0x412D13: jz      short loc_412D1E
0x412D15: push    esi
0x412D16: call    FormHeapFree
0x412D1B: add     esp, 4
0x412D1E: mov     eax, esi
0x412D20: pop     esi
0x412D21: retn    4
