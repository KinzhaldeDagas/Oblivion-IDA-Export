0x556CD0: mov     eax, [esp+arg_4]
0x556CD4: mov     ecx, [esp+Src]
0x556CD8: mov     edx, [esp+Dst]
0x556CDC: sub     eax, ecx
0x556CDE: push    esi; MaxCount
0x556CDF: lea     esi, [eax+edx]
0x556CE2: jz      short loc_556CF0
0x556CE4: push    eax; Src
0x556CE5: push    ecx; Src
0x556CE6: push    eax; DstSize
0x556CE7: push    edx; Dst
0x556CE8: call    _memmove_s
0x556CED: add     esp, 10h
0x556CF0: mov     eax, esi
0x556CF2: pop     esi
0x556CF3: retn    0Ch
