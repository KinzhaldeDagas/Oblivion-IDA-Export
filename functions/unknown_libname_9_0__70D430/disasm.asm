0x70D430: push    esi
0x70D431: mov     esi, ecx
0x70D433: call    NiAVObject_UpdateWorldTransform; NiAVObject/NiNode virtual +0x74. Updates this->worldTransform at +0x64. With a parent, composes parent world with this local via 0x53D7A0; without a parent, copies local directly. Then notifies an attached collision object through virtual +0x50. Return register contents are incidental; native callers use no return value.
0x70D438: mov     ecx, esi
0x70D43A: pop     esi
0x70D43B: jmp     sub_70CC90
