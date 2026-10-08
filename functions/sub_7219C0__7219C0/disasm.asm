0x7219C0: mov     eax, [esp+arg_4]
0x7219C4: fld     [esp+arg_0]
0x7219C8: push    esi
0x7219C9: mov     esi, ecx
0x7219CB: or      word ptr [esi+0DCh], 8
0x7219D3: fst     dword ptr [esi+0E0h]
0x7219D9: push    eax; int
0x7219DA: push    ecx
0x7219DB: fstp    [esp+0Ch+var_C]; float
0x7219DE: call    NiNode_UpdateDownwardPass; NiNode virtual UpdateDownwardPass (+0x60). Optionally updates this node's properties/controllers, invokes virtual UpdateWorldTransform (+0x74), clears its world-bound radius, recursively updates every non-null child in +0xB0/count +0xB6, and copies/merges nonempty child spheres into the node bound.
0x7219E3: mov     edx, [esi]
0x7219E5: mov     eax, [edx+78h]
0x7219E8: mov     ecx, esi
0x7219EA: call    eax
0x7219EC: pop     esi
0x7219ED: retn    8
