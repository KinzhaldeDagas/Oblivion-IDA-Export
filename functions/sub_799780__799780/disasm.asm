0x799780: sub     esp, 8
0x799783: push    esi
0x799784: mov     esi, ecx
0x799786: mov     edx, [esi+4]
0x799789: test    edx, edx
0x79978B: jnz     short loc_799791
0x79978D: xor     ecx, ecx
0x79978F: jmp     short loc_799799
0x799791: mov     ecx, [esi+8]
0x799794: sub     ecx, edx
0x799796: sar     ecx, 2
0x799799: test    edx, edx
0x79979B: jz      short loc_7997C2
0x79979D: mov     eax, [esi+0Ch]
0x7997A0: sub     eax, edx
0x7997A2: sar     eax, 2
0x7997A5: cmp     ecx, eax
0x7997A7: jnb     short loc_7997C2
0x7997A9: mov     eax, [esi+8]
0x7997AC: mov     ecx, [esp+0Ch+arg_0]
0x7997B0: fld     dword ptr [ecx]
0x7997B2: add     eax, 4
0x7997B5: fstp    dword ptr [eax-4]
0x7997B8: mov     [esi+8], eax
0x7997BB: pop     esi
0x7997BC: add     esp, 8
0x7997BF: retn    4
0x7997C2: push    edi
0x7997C3: mov     edi, [esi+8]
0x7997C6: cmp     edx, edi
0x7997C8: jbe     short loc_7997CF
0x7997CA: call    __invalid_parameter_noinfo
0x7997CF: mov     edx, [esp+10h+arg_0]
0x7997D3: push    edx; int
0x7997D4: push    edi; Src
0x7997D5: push    esi; int
0x7997D6: lea     eax, [esp+1Ch+var_8]
0x7997DA: push    eax; int
0x7997DB: mov     ecx, esi
0x7997DD: call    sub_7996F0
0x7997E2: pop     edi
0x7997E3: pop     esi
0x7997E4: add     esp, 8
0x7997E7: retn    4
