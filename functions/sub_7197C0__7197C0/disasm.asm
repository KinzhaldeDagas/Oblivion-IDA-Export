0x7197C0: push    esi
0x7197C1: mov     esi, ecx
0x7197C3: call    NiAVObject_UpdateWorldTransform; NiAVObject/NiNode virtual +0x74. Updates this->worldTransform at +0x64. With a parent, composes parent world with this local via 0x53D7A0; without a parent, copies local directly. Then notifies an attached collision object through virtual +0x50. Return register contents are incidental; native callers use no return value.
0x7197C8: fld     dword ptr [esi+64h]
0x7197CB: fstp    dword ptr [esi+108h]
0x7197D1: fld     dword ptr [esi+70h]
0x7197D4: fstp    dword ptr [esi+10Ch]
0x7197DA: fld     dword ptr [esi+7Ch]
0x7197DD: fstp    dword ptr [esi+110h]
0x7197E3: add     dword ptr [esi+0B8h], 1
0x7197EA: pop     esi
0x7197EB: retn
