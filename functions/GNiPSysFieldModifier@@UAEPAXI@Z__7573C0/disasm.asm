0x7573C0: push    esi
0x7573C1: mov     esi, ecx
0x7573C3: call    ??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x7573C8: test    byte ptr [esp+4+arg_0], 1
0x7573CD: jz      short loc_7573D8
0x7573CF: push    esi
0x7573D0: call    FormHeapFree
0x7573D5: add     esp, 4
0x7573D8: mov     eax, esi
0x7573DA: pop     esi
0x7573DB: retn    4
