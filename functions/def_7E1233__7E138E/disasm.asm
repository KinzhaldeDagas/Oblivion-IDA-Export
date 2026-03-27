0x7E138E: mov     ebp, [edi]; jumptable 007E1233 default case
0x7E1390: mov     edx, [esi+0D0h]
0x7E1396: mov     eax, [esi+edx*4+0B4h]
0x7E139D: mov     ebx, [ebp+44h]
0x7E13A0: add     ebp, 44h ; 'D'
0x7E13A3: cmp     ebx, eax
0x7E13A5: mov     [esp+arg_10], eax
0x7E13A9: jz      short loc_7E13E0
0x7E13AB: test    ebx, ebx
0x7E13AD: jz      short loc_7E13CF
0x7E13AF: lea     eax, [ebx+4]
0x7E13B2: push    eax; lpAddend
0x7E13B3: call    dword ptr ds:0A2807Ch
0x7E13B9: test    eax, eax
0x7E13BB: jnz     short loc_7E13CB
0x7E13BD: test    ebx, ebx
0x7E13BF: jz      short loc_7E13CB
0x7E13C1: mov     edx, [ebx]
0x7E13C3: mov     eax, [edx]
0x7E13C5: push    1
0x7E13C7: mov     ecx, ebx
0x7E13C9: call    eax
0x7E13CB: mov     eax, [esp+4+arg_C]
0x7E13CF: test    eax, eax
0x7E13D1: mov     [ebp+0], eax
0x7E13D4: jz      short loc_7E13E0
0x7E13D6: add     eax, 4
0x7E13D9: push    eax; lpAddend
0x7E13DA: call    dword ptr ds:0A28078h
0x7E13E0: mov     ecx, [esi+38h]
0x7E13E3: push    edi
0x7E13E4: push    ecx
0x7E13E5: lea     ecx, [esi+40h]
0x7E13E8: call    sub_76CE40
0x7E13ED: add     dword ptr [esi+38h], 1
0x7E13F1: xor     eax, eax
0x7E13F3: mov     ecx, [esp+4+arg_10]
0x7E13F7: mov     large fs:0, ecx
0x7E13FE: pop     ecx
0x7E13FF: pop     edi
0x7E1400: pop     esi
0x7E1401: pop     ebp
0x7E1402: pop     ebx
0x7E1403: add     esp, 10h
0x7E1406: retn    1Ch
