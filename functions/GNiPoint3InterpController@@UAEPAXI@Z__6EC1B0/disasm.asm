0x6EC1B0: push    esi
0x6EC1B1: mov     esi, ecx
0x6EC1B3: call    ??1NiPoint3InterpController@@UAE@XZ; NiPoint3InterpController::~NiPoint3InterpController(void)
0x6EC1B8: test    byte ptr [esp+4+arg_0], 1
0x6EC1BD: jz      short loc_6EC1C8
0x6EC1BF: push    esi
0x6EC1C0: call    FormHeapFree
0x6EC1C5: add     esp, 4
0x6EC1C8: mov     eax, esi
0x6EC1CA: pop     esi
0x6EC1CB: retn    4
