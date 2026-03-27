0x72F2D0: push    esi
0x72F2D1: mov     esi, ecx
0x72F2D3: call    ??1NiSkinData@@UAE@XZ; NiSkinData::~NiSkinData(void)
0x72F2D8: test    byte ptr [esp+4+arg_0], 1
0x72F2DD: jz      short loc_72F2E8
0x72F2DF: push    esi
0x72F2E0: call    FormHeapFree
0x72F2E5: add     esp, 4
0x72F2E8: mov     eax, esi
0x72F2EA: pop     esi
0x72F2EB: retn    4
