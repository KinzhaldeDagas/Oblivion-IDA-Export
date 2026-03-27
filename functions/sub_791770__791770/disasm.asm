0x791770: sub     esp, 8
0x791773: push    esi
0x791774: mov     esi, ecx
0x791776: mov     edx, [esi+4]
0x791779: test    edx, edx
0x79177B: jnz     short loc_791781
0x79177D: xor     ecx, ecx
0x79177F: jmp     short loc_791789
0x791781: mov     ecx, [esi+8]
0x791784: sub     ecx, edx
0x791786: sar     ecx, 2
0x791789: test    edx, edx
0x79178B: jz      short loc_7917B1
0x79178D: mov     eax, [esi+0Ch]
0x791790: sub     eax, edx
0x791792: sar     eax, 2
0x791795: cmp     ecx, eax
0x791797: jnb     short loc_7917B1
0x791799: mov     eax, [esi+8]
0x79179C: mov     ecx, [esp+0Ch+arg_0]
0x7917A0: mov     edx, [ecx]
0x7917A2: mov     [eax], edx
0x7917A4: add     eax, 4
0x7917A7: mov     [esi+8], eax
0x7917AA: pop     esi
0x7917AB: add     esp, 8
0x7917AE: retn    4
0x7917B1: push    edi
0x7917B2: mov     edi, [esi+8]
0x7917B5: cmp     edx, edi
0x7917B7: jbe     short loc_7917BE
0x7917B9: call    __invalid_parameter_noinfo
0x7917BE: mov     eax, [esp+10h+arg_0]
0x7917C2: push    eax; int
0x7917C3: push    edi; Src
0x7917C4: push    esi; int
0x7917C5: lea     ecx, [esp+1Ch+var_8]
0x7917C9: push    ecx; int
0x7917CA: mov     ecx, esi
0x7917CC: call    sub_7A3620
0x7917D1: pop     edi
0x7917D2: pop     esi
0x7917D3: add     esp, 8
0x7917D6: retn    4
