0x96DEA0: push    esi
0x96DEA1: mov     esi, ecx
0x96DEA3: call    ??1NiCollisionData@@UAE@XZ; NiCollisionData::~NiCollisionData(void)
0x96DEA8: test    byte ptr [esp+4+arg_0], 1
0x96DEAD: jz      short loc_96DEB8
0x96DEAF: push    esi
0x96DEB0: call    FormHeapFree
0x96DEB5: add     esp, 4
0x96DEB8: mov     eax, esi
0x96DEBA: pop     esi
0x96DEBB: retn    4
