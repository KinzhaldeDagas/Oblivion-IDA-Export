0x6E4620: push    esi
0x6E4621: mov     esi, ecx
0x6E4623: call    ??1NiColorData@@UAE@XZ; NiColorData::~NiColorData(void)
0x6E4628: test    byte ptr [esp+4+arg_0], 1
0x6E462D: jz      short loc_6E4638
0x6E462F: push    esi
0x6E4630: call    FormHeapFree
0x6E4635: add     esp, 4
0x6E4638: mov     eax, esi
0x6E463A: pop     esi
0x6E463B: retn    4
