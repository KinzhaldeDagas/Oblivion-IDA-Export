0x7606A0: mov     ecx, ds:0B42044h
0x7606A6: mov     eax, [ecx+8]
0x7606A9: test    eax, eax
0x7606AB: push    esi
0x7606AC: lea     esi, [ecx+8]
0x7606AF: push    edi
0x7606B0: mov     edi, ecx
0x7606B2: jnz     short loc_7606C8
0x7606B4: mov     eax, [ecx+0Ch]
0x7606B7: push    ebx
0x7606B8: lea     ebx, [ecx+0Ch]
0x7606BB: push    eax
0x7606BC: call    sub_760600
0x7606C1: mov     ecx, [ebx]
0x7606C3: add     ecx, ecx
0x7606C5: mov     [ebx], ecx
0x7606C7: pop     ebx
0x7606C8: mov     eax, [edi]
0x7606CA: mov     ecx, [eax]
0x7606CC: add     dword ptr [esi], 0FFFFFFFFh
0x7606CF: test    ecx, ecx
0x7606D1: mov     esi, [esi]
0x7606D3: mov     edx, [eax+esi*4]
0x7606D6: mov     [eax], edx
0x7606D8: mov     eax, [esp+8+arg_0]
0x7606DC: pop     edi
0x7606DD: mov     [eax], ecx
0x7606DF: mov     edx, 1
0x7606E4: pop     esi
0x7606E5: jz      short loc_7606EA
0x7606E7: add     [ecx+60h], edx
0x7606EA: cmp     byte ptr [ecx+5Dh], 0
0x7606EE: jnz     short locret_7606F3
0x7606F0: mov     [ecx+5Dh], dl
0x7606F3: retn
