0x54CDB0: push    esi
0x54CDB1: mov     esi, ecx
0x54CDB3: call    ??1BSFaceGenAnimationData@@UAE@XZ; BSFaceGenAnimationData::~BSFaceGenAnimationData(void)
0x54CDB8: test    byte ptr [esp+4+arg_0], 1
0x54CDBD: jz      short loc_54CDC8
0x54CDBF: push    esi
0x54CDC0: call    FormHeapFree
0x54CDC5: add     esp, 4
0x54CDC8: mov     eax, esi
0x54CDCA: pop     esi
0x54CDCB: retn    4
