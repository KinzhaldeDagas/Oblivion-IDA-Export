0x6E8A10: push    esi
0x6E8A11: mov     esi, ecx
0x6E8A13: call    ??1NiBoolData@@UAE@XZ; NiBoolData::~NiBoolData(void)
0x6E8A18: test    byte ptr [esp+4+arg_0], 1
0x6E8A1D: jz      short loc_6E8A28
0x6E8A1F: push    esi
0x6E8A20: call    FormHeapFree
0x6E8A25: add     esp, 4
0x6E8A28: mov     eax, esi
0x6E8A2A: pop     esi
0x6E8A2B: retn    4
