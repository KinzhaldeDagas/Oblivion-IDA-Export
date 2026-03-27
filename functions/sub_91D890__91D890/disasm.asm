0x91D890: push    esi
0x91D891: mov     esi, ecx
0x91D893: mov     eax, [esi+24h]
0x91D896: test    eax, eax
0x91D898: mov     dword ptr [esi], offset off_A9D7C4
0x91D89E: mov     dword ptr [esi+8], offset off_A9D7AC
0x91D8A5: mov     dword ptr [esi+20h], offset off_A9D7FC
0x91D8AC: mov     dword ptr [esi+28h], offset off_A9D798
0x91D8B3: jz      short loc_91D8E9
0x91D8B5: mov     ecx, [eax+60h]
0x91D8B8: push    edi
0x91D8B9: xor     edi, edi
0x91D8BB: test    ecx, ecx
0x91D8BD: jle     short loc_91D8E8
0x91D8BF: push    ebx
0x91D8C0: mov     ebx, esi
0x91D8C2: test    ebx, ebx
0x91D8C4: mov     eax, [esi+24h]
0x91D8C7: mov     ecx, [eax+5Ch]
0x91D8CA: mov     ecx, [ecx+edi*4]
0x91D8CD: jz      short loc_91D8D4
0x91D8CF: lea     eax, [esi+28h]
0x91D8D2: jmp     short loc_91D8D6
0x91D8D4: xor     eax, eax
0x91D8D6: push    eax
0x91D8D7: call    sub_898AD0
0x91D8DC: mov     edx, [esi+24h]
0x91D8DF: mov     eax, [edx+60h]
0x91D8E2: inc     edi
0x91D8E3: cmp     edi, eax
0x91D8E5: jl      short loc_91D8C2
0x91D8E7: pop     ebx
0x91D8E8: pop     edi
0x91D8E9: mov     dword ptr [esi+28h], offset ??_7hkCollisionListener@@6B@; const hkCollisionListener::`vftable'
0x91D8F0: mov     ecx, esi
0x91D8F2: pop     esi
0x91D8F3: jmp     sub_949180
