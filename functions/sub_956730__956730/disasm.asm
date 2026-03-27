0x956730: push    ebx
0x956731: push    esi
0x956732: mov     esi, ecx
0x956734: mov     ebx, [esi+0Ch]
0x956737: mov     eax, [esi+8]
0x95673A: mov     ecx, [esi+10h]
0x95673D: sub     eax, ebx
0x95673F: mov     ebx, [esp+8+arg_0]
0x956743: mov     [eax+ecx-1], bl
0x956747: mov     edx, [esi+0Ch]
0x95674A: mov     ecx, [esi+8]
0x95674D: inc     edx
0x95674E: mov     eax, edx
0x956750: cmp     eax, ecx
0x956752: mov     [esi+0Ch], edx
0x956755: jl      short loc_95675E
0x956757: mov     ecx, esi
0x956759: call    sub_9564D0
0x95675E: mov     ecx, [esi+0Ch]
0x956761: mov     eax, [esi+8]
0x956764: sub     eax, ecx
0x956766: mov     ecx, [esi+10h]
0x956769: mov     edx, ebx
0x95676B: sar     edx, 8
0x95676E: mov     [eax+ecx-1], dl
0x956772: mov     edx, [esi+0Ch]
0x956775: mov     ecx, [esi+8]
0x956778: inc     edx
0x956779: mov     eax, edx
0x95677B: cmp     eax, ecx
0x95677D: mov     [esi+0Ch], edx
0x956780: jl      short loc_956789
0x956782: mov     ecx, esi
0x956784: call    sub_9564D0
0x956789: mov     eax, [esi+0Ch]
0x95678C: mov     edx, [esi+8]
0x95678F: sub     edx, eax
0x956791: mov     eax, [esi+10h]
0x956794: sar     ebx, 10h
0x956797: mov     [edx+eax-1], bl
0x95679B: mov     edx, [esi+0Ch]
0x95679E: mov     ecx, [esi+8]
0x9567A1: inc     edx
0x9567A2: mov     eax, edx
0x9567A4: cmp     eax, ecx
0x9567A6: mov     [esi+0Ch], edx
0x9567A9: jl      short loc_9567B2
0x9567AB: mov     ecx, esi
0x9567AD: call    sub_9564D0
0x9567B2: pop     esi
0x9567B3: pop     ebx
0x9567B4: retn    4
