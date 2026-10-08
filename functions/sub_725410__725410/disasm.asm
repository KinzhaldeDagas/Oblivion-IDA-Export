0x725410: push    esi
0x725411: mov     esi, ecx
0x725413: call    NiAVObject_UpdateWorldTransform; NiAVObject/NiNode virtual +0x74. Updates this->worldTransform at +0x64. With a parent, composes parent world with this local via 0x53D7A0; without a parent, copies local directly. Then notifies an attached collision object through virtual +0x50. Return register contents are incidental; native callers use no return value.
0x725418: add     dword ptr [esi+0B8h], 1
0x72541F: pop     esi
0x725420: retn
