0x749310: push    esi
0x749311: mov     esi, ecx
0x749313: call    NiAVObject_UpdateWorldTransform; NiAVObject/NiNode virtual +0x74. Updates this->worldTransform at +0x64. With a parent, composes parent world with this local via 0x53D7A0; without a parent, copies local directly. Then notifies an attached collision object through virtual +0x50. Return register contents are incidental; native callers use no return value.
0x749318: cmp     byte ptr [esi+0C0h], 0
0x74931F: jz      short loc_749355
0x749321: mov     eax, ds:0B3F9A8h
0x749326: mov     [esi+88h], eax
0x74932C: mov     ecx, ds:0B3F9ACh
0x749332: mov     [esi+8Ch], ecx
0x749338: mov     edx, ds:0B3F9B0h
0x74933E: push    edi
0x74933F: mov     [esi+90h], edx
0x749345: lea     edi, [esi+64h]
0x749348: mov     ecx, 9
0x74934D: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x749352: rep movsd
0x749354: pop     edi
0x749355: pop     esi
0x749356: retn
