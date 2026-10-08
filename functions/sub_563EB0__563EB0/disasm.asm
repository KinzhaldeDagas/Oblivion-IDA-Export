0x563EB0: cmp     byte ptr ds:0B125E8h, 0; BSTreeNode runtime update override: if SpeedTree enabled/visible, calls vtbl+0xE0 contact update then base update-downward path.
0x563EB7: push    esi
0x563EB8: mov     esi, ecx
0x563EBA: jz      short loc_563F14
0x563EBC: push    1; createIfMissing
0x563EBE: call    BSTreeManager_GetInstance; Returns SpeedTree singleton dword_B39E04, creating it on demand when caller passes true.
0x563EC3: add     esp, 4
0x563EC6: cmp     byte ptr [eax+20h], 0
0x563ECA: jz      short loc_563F14
0x563ECC: fldz
0x563ECE: fcomp   [esp+4+arg_0]
0x563ED2: fnstsw  ax
0x563ED4: test    ah, 5
0x563ED7: jp      short loc_563EEC
0x563ED9: mov     eax, ds:0B39E00h
0x563EDE: push    eax
0x563EDF: push    esi
0x563EE0: call    sub_47F7B0
0x563EE5: add     esp, 8
0x563EE8: test    al, al
0x563EEA: jz      short loc_563F14
0x563EEC: mov     edx, [esi]
0x563EEE: fld     [esp+4+arg_0]
0x563EF2: mov     eax, [edx+0E0h]
0x563EF8: push    ecx
0x563EF9: mov     ecx, esi
0x563EFB: fstp    [esp+8+var_8]
0x563EFE: call    eax
0x563F00: fld     [esp+4+arg_0]
0x563F04: mov     ecx, [esp+4+arg_4]
0x563F08: push    ecx; int
0x563F09: push    ecx
0x563F0A: mov     ecx, esi
0x563F0C: fstp    [esp+0Ch+var_C]; float
0x563F0F: call    NiNode_UpdateDownwardPass; NiNode virtual UpdateDownwardPass (+0x60). Optionally updates this node's properties/controllers, invokes virtual UpdateWorldTransform (+0x74), clears its world-bound radius, recursively updates every non-null child in +0xB0/count +0xB6, and copies/merges nonempty child spheres into the node bound.
0x563F14: pop     esi
0x563F15: retn    8
