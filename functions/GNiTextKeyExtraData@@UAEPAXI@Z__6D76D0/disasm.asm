0x6D76D0: push    esi
0x6D76D1: mov     esi, ecx
0x6D76D3: call    ??1NiTextKeyExtraData@@UAE@XZ; NiTextKeyExtraData::~NiTextKeyExtraData(void)
0x6D76D8: test    byte ptr [esp+4+arg_0], 1
0x6D76DD: jz      short loc_6D76E8
0x6D76DF: push    esi
0x6D76E0: call    FormHeapFree
0x6D76E5: add     esp, 4
0x6D76E8: mov     eax, esi
0x6D76EA: pop     esi
0x6D76EB: retn    4
