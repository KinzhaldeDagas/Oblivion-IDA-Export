0x94A560: push    esi
0x94A561: push    edi
0x94A562: mov     edi, ecx
0x94A564: mov     eax, [edi+10h]
0x94A567: xor     esi, esi
0x94A569: cmp     eax, esi
0x94A56B: jnz     short loc_94A5E4
0x94A56D: mov     ecx, ds:0BA7D98h
0x94A573: mov     eax, [ecx]
0x94A575: push    24h ; '$'
0x94A577: push    18h
0x94A579: call    dword ptr [eax+10h]
0x94A57C: cmp     eax, esi
0x94A57E: jz      short loc_94A598
0x94A580: mov     [eax], esi
0x94A582: mov     [eax+4], esi
0x94A585: mov     ecx, 80000000h
0x94A58A: mov     [eax+8], ecx
0x94A58D: mov     [eax+0Ch], esi
0x94A590: mov     [eax+10h], esi
0x94A593: mov     [eax+14h], ecx
0x94A596: mov     esi, eax
0x94A598: mov     ecx, ds:0BA7D98h
0x94A59E: mov     edx, [ecx]
0x94A5A0: push    8
0x94A5A2: push    60h ; '`'
0x94A5A4: call    dword ptr [edx+10h]
0x94A5A7: push    esi
0x94A5A8: mov     ecx, eax
0x94A5AA: mov     word ptr [eax+4], 60h ; '`'
0x94A5B0: call    sub_94CCB0
0x94A5B5: mov     esi, [esp+8+arg_0]
0x94A5B9: mov     [edi+10h], eax
0x94A5BC: mov     eax, [esi+8]
0x94A5BF: mov     ecx, [esi+4]
0x94A5C2: and     eax, 3FFFFFFFh
0x94A5C7: cmp     ecx, eax
0x94A5C9: jnz     short loc_94A5D6
0x94A5CB: push    4
0x94A5CD: push    esi
0x94A5CE: call    sub_8A6EE0
0x94A5D3: add     esp, 8
0x94A5D6: mov     eax, [edi+10h]
0x94A5D9: mov     ecx, [esi+4]
0x94A5DC: mov     edx, [esi]
0x94A5DE: mov     [edx+ecx*4], eax
0x94A5E1: inc     dword ptr [esi+4]
0x94A5E4: mov     eax, [edi+10h]
0x94A5E7: pop     edi
0x94A5E8: pop     esi
0x94A5E9: retn    4
