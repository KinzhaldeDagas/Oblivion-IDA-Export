0x42AEE0: push    esi
0x42AEE1: mov     esi, ecx
0x42AEE3: call    ??1ExtraRagDollData@@UAE@XZ; ExtraRagDollData::~ExtraRagDollData(void)
0x42AEE8: test    byte ptr [esp+4+arg_0], 1
0x42AEED: jz      short loc_42AEF8
0x42AEEF: push    esi
0x42AEF0: call    FormHeapFree
0x42AEF5: add     esp, 4
0x42AEF8: mov     eax, esi
0x42AEFA: pop     esi
0x42AEFB: retn    4
