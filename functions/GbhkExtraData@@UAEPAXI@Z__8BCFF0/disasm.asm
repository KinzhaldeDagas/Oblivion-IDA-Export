0x8BCFF0: push    esi
0x8BCFF1: mov     esi, ecx
0x8BCFF3: call    ??1bhkExtraData@@UAE@XZ; bhkExtraData::~bhkExtraData(void)
0x8BCFF8: test    byte ptr [esp+4+arg_0], 1
0x8BCFFD: jz      short loc_8BD008
0x8BCFFF: push    esi
0x8BD000: call    FormHeapFree
0x8BD005: add     esp, 4
0x8BD008: mov     eax, esi
0x8BD00A: pop     esi
0x8BD00B: retn    4
