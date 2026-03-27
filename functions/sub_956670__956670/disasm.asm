0x956670: push    ebx
0x956671: push    esi
0x956672: mov     esi, ecx
0x956674: mov     ebx, [esi+0Ch]
0x956677: mov     eax, [esi+8]
0x95667A: mov     ecx, [esi+10h]
0x95667D: sub     eax, ebx
0x95667F: mov     ebx, [esp+8+arg_4]
0x956683: mov     [eax+ecx-1], bl
0x956687: mov     edx, [esi+0Ch]
0x95668A: mov     ecx, [esi+8]
0x95668D: inc     edx
0x95668E: mov     eax, edx
0x956690: cmp     eax, ecx
0x956692: mov     [esi+0Ch], edx
0x956695: jl      short loc_95669E
0x956697: mov     ecx, esi
0x956699: call    sub_9564D0
0x95669E: mov     ecx, [esi+0Ch]
0x9566A1: mov     eax, [esi+8]
0x9566A4: sub     eax, ecx
0x9566A6: mov     ecx, [esi+10h]
0x9566A9: mov     edx, ebx
0x9566AB: sar     edx, 8
0x9566AE: mov     [eax+ecx-1], dl
0x9566B2: mov     edx, [esi+0Ch]
0x9566B5: mov     ecx, [esi+8]
0x9566B8: inc     edx
0x9566B9: mov     eax, edx
0x9566BB: cmp     eax, ecx
0x9566BD: mov     [esi+0Ch], edx
0x9566C0: jl      short loc_9566C9
0x9566C2: mov     ecx, esi
0x9566C4: call    sub_9564D0
0x9566C9: mov     eax, [esi+0Ch]
0x9566CC: mov     edx, [esi+8]
0x9566CF: sub     edx, eax
0x9566D1: mov     eax, [esi+10h]
0x9566D4: sar     ebx, 10h
0x9566D7: mov     [edx+eax-1], bl
0x9566DB: mov     edx, [esi+0Ch]
0x9566DE: mov     ecx, [esi+8]
0x9566E1: inc     edx
0x9566E2: mov     eax, edx
0x9566E4: cmp     eax, ecx
0x9566E6: mov     [esi+0Ch], edx
0x9566E9: jl      short loc_9566F2
0x9566EB: mov     ecx, esi
0x9566ED: call    sub_9564D0
0x9566F2: mov     ebx, [esi+0Ch]
0x9566F5: mov     ecx, [esi+8]
0x9566F8: mov     edx, [esi+10h]
0x9566FB: mov     al, [esp+8+arg_0]
0x9566FF: sub     ecx, ebx
0x956701: mov     [ecx+edx-1], al
0x956705: mov     edx, [esi+0Ch]
0x956708: mov     ecx, [esi+8]
0x95670B: inc     edx
0x95670C: mov     eax, edx
0x95670E: cmp     eax, ecx
0x956710: mov     [esi+0Ch], edx
0x956713: jl      short loc_95671C
0x956715: mov     ecx, esi
0x956717: call    sub_9564D0
0x95671C: pop     esi
0x95671D: pop     ebx
0x95671E: retn    8
