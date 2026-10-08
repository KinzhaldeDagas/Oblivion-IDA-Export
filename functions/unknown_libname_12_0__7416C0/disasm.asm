0x7416C0: push    esi
0x7416C1: mov     esi, ecx
0x7416C3: call    NiAVObject_UpdateWorldTransform; NiAVObject/NiNode virtual +0x74. Updates this->worldTransform at +0x64. With a parent, composes parent world with this local via 0x53D7A0; without a parent, copies local directly. Then notifies an attached collision object through virtual +0x50. Return register contents are incidental; native callers use no return value.
0x7416C8: mov     ecx, esi
0x7416CA: pop     esi
0x7416CB: jmp     sub_741630
