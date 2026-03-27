0x8066E0: push    ebx
0x8066E1: push    ebp
0x8066E2: push    esi
0x8066E3: push    edi
0x8066E4: mov     ebp, ecx
0x8066E6: call    sub_8025F0
0x8066EB: lea     edi, [ebp+9Ch]
0x8066F1: mov     ebx, 24h ; '$'
0x8066F6: mov     esi, [edi]
0x8066F8: test    esi, esi
0x8066FA: jz      short loc_80671E
0x8066FC: lea     eax, [esi+4]
0x8066FF: push    eax; lpAddend
0x806700: call    dword ptr ds:0A2807Ch
0x806706: test    eax, eax
0x806708: jnz     short loc_806718
0x80670A: test    esi, esi
0x80670C: jz      short loc_806718
0x80670E: mov     edx, [esi]
0x806710: mov     eax, [edx]
0x806712: push    1
0x806714: mov     ecx, esi
0x806716: call    eax
0x806718: mov     dword ptr [edi], 0
0x80671E: add     edi, 4
0x806721: sub     ebx, 1
0x806724: jnz     short loc_8066F6
0x806726: lea     edi, [ebp+12Ch]
0x80672C: mov     ebx, 1Eh
0x806731: mov     esi, [edi]
0x806733: test    esi, esi
0x806735: jz      short loc_806759
0x806737: lea     ecx, [esi+4]
0x80673A: push    ecx; lpAddend
0x80673B: call    dword ptr ds:0A2807Ch
0x806741: test    eax, eax
0x806743: jnz     short loc_806753
0x806745: test    esi, esi
0x806747: jz      short loc_806753
0x806749: mov     edx, [esi]
0x80674B: mov     eax, [edx]
0x80674D: push    1
0x80674F: mov     ecx, esi
0x806751: call    eax
0x806753: mov     dword ptr [edi], 0
0x806759: add     edi, 4
0x80675C: sub     ebx, 1
0x80675F: jnz     short loc_806731
0x806761: mov     esi, offset dword_B47620
0x806766: or      edi, 0FFFFFFFFh
0x806769: lea     esp, [esp+0]
0x806770: mov     ecx, [esi]
0x806772: test    ecx, ecx
0x806774: jz      short loc_806786
0x806776: add     [ecx+60h], edi
0x806779: jnz     short loc_806780
0x80677B: call    sub_7604D0
0x806780: mov     dword ptr [esi], 0
0x806786: add     esi, 4
0x806789: cmp     esi, offset unk_B47710
0x80678F: jl      short loc_806770
0x806791: pop     edi
0x806792: pop     esi
0x806793: pop     ebp
0x806794: mov     al, 1
0x806796: pop     ebx
0x806797: retn
