0x757E50: push    esi
0x757E51: mov     esi, ecx
0x757E53: call    ??1NiPSysModifierFloatCtlr@@UAE@XZ; NiPSysModifierFloatCtlr::~NiPSysModifierFloatCtlr(void)
0x757E58: test    byte ptr [esp+4+arg_0], 1
0x757E5D: jz      short loc_757E68
0x757E5F: push    esi
0x757E60: call    FormHeapFree
0x757E65: add     esp, 4
0x757E68: mov     eax, esi
0x757E6A: pop     esi
0x757E6B: retn    4
