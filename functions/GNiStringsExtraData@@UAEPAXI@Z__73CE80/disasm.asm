0x73CE80: push    esi
0x73CE81: mov     esi, ecx
0x73CE83: call    ??1NiStringsExtraData@@UAE@XZ; NiStringsExtraData::~NiStringsExtraData(void)
0x73CE88: test    byte ptr [esp+4+arg_0], 1
0x73CE8D: jz      short loc_73CE98
0x73CE8F: push    esi
0x73CE90: call    FormHeapFree
0x73CE95: add     esp, 4
0x73CE98: mov     eax, esi
0x73CE9A: pop     esi
0x73CE9B: retn    4
