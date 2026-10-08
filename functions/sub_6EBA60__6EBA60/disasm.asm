0x6EBA60: push    esi; Default range clone: clone through the NiObject pointer map, then invoke the clone's post-clone/collapse virtual. Subclasses override when authored data must be sliced.
0x6EBA61: call    NiObject_CloneWithPointerMap; Clones a loaded NiObject with a temporary pointer map and runs clone post-processing; the returned scene object is distinct from its source.
0x6EBA66: mov     esi, eax
0x6EBA68: mov     eax, [esi]
0x6EBA6A: mov     edx, [eax+90h]
0x6EBA70: mov     ecx, esi
0x6EBA72: call    edx
0x6EBA74: mov     eax, esi
0x6EBA76: pop     esi
0x6EBA77: retn    8
