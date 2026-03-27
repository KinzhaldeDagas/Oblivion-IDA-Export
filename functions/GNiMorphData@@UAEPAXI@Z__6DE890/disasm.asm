0x6DE890: push    esi
0x6DE891: mov     esi, ecx
0x6DE893: call    ??1NiMorphData@@UAE@XZ; NiMorphData::~NiMorphData(void)
0x6DE898: test    byte ptr [esp+4+arg_0], 1
0x6DE89D: jz      short loc_6DE8A8
0x6DE89F: push    esi
0x6DE8A0: call    FormHeapFree
0x6DE8A5: add     esp, 4
0x6DE8A8: mov     eax, esi
0x6DE8AA: pop     esi
0x6DE8AB: retn    4
