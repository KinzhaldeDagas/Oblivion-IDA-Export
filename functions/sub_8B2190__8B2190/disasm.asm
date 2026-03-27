0x8B2190: mov     eax, [ecx+18h]
0x8B2193: push    esi
0x8B2194: lea     esi, [ecx+10h]
0x8B2197: mov     ecx, [esi+4]
0x8B219A: and     eax, 3FFFFFFFh
0x8B219F: cmp     ecx, eax
0x8B21A1: jnz     short loc_8B21AE
0x8B21A3: push    30h ; '0'
0x8B21A5: push    esi
0x8B21A6: call    sub_8A6EE0
0x8B21AB: add     esp, 8
0x8B21AE: mov     ecx, [esi+4]
0x8B21B1: mov     edx, [esi]
0x8B21B3: lea     eax, [ecx+ecx*2]
0x8B21B6: shl     eax, 4
0x8B21B9: add     eax, edx
0x8B21BB: inc     ecx
0x8B21BC: mov     [esi+4], ecx
0x8B21BF: mov     ecx, [esp+4+arg_4]
0x8B21C3: movaps  xmm0, xmmword ptr [ecx]
0x8B21C6: movaps  xmmword ptr [eax], xmm0
0x8B21C9: mov     edx, [ecx+10h]
0x8B21CC: mov     [eax+10h], edx
0x8B21CF: mov     ecx, [ecx+14h]
0x8B21D2: mov     edx, [esp+4+arg_0]
0x8B21D6: mov     [eax+14h], ecx
0x8B21D9: mov     ecx, [edx+0Ch]
0x8B21DC: test    ecx, ecx
0x8B21DE: pop     esi
0x8B21DF: jz      short loc_8B21EA
0x8B21E1: mov     edx, ecx
0x8B21E3: mov     ecx, [edx+0Ch]
0x8B21E6: test    ecx, ecx
0x8B21E8: jnz     short loc_8B21E1
0x8B21EA: mov     [eax+20h], edx
0x8B21ED: retn    8
