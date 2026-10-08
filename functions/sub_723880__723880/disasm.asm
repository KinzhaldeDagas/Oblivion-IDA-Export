0x723880: push    esi
0x723881: mov     esi, ecx
0x723883: call    NiAVObject_UpdateWorldTransform; NiAVObject/NiNode virtual +0x74. Updates this->worldTransform at +0x64. With a parent, composes parent world with this local via 0x53D7A0; without a parent, copies local directly. Then notifies an attached collision object through virtual +0x50. Return register contents are incidental; native callers use no return value.
0x723888: mov     ecx, [esi+0FCh]
0x72388E: test    ecx, ecx
0x723890: jz      short loc_72389A
0x723892: mov     eax, [ecx]
0x723894: mov     edx, [eax+50h]
0x723897: push    esi
0x723898: call    edx
0x72389A: pop     esi
0x72389B: retn
