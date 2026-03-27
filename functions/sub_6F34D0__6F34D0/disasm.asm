0x6F34D0: push    ebx
0x6F34D1: push    ebp
0x6F34D2: mov     ebp, [esp+8+arg_4]
0x6F34D6: test    ebp, ebp
0x6F34D8: push    esi
0x6F34D9: mov     esi, ecx
0x6F34DB: jz      short loc_6F34E3
0x6F34DD: cmp     ebp, [esp+0Ch+arg_C]
0x6F34E1: jz      short loc_6F34E8
0x6F34E3: call    __invalid_parameter_noinfo
0x6F34E8: mov     ebx, [esp+0Ch+arg_8]
0x6F34EC: mov     eax, [esp+0Ch+arg_10]
0x6F34F0: cmp     ebx, eax
0x6F34F2: jz      short loc_6F3519
0x6F34F4: mov     ecx, [esi+8]
0x6F34F7: push    edi
0x6F34F8: push    ebx
0x6F34F9: push    ecx
0x6F34FA: push    eax
0x6F34FB: call    sub_6F3110
0x6F3500: mov     edx, [esp+1Ch+arg_0]
0x6F3504: push    edx
0x6F3505: mov     edi, eax
0x6F3507: mov     eax, [esi+8]
0x6F350A: push    esi
0x6F350B: push    eax
0x6F350C: push    edi
0x6F350D: call    sub_557080
0x6F3512: add     esp, 1Ch
0x6F3515: mov     [esi+8], edi
0x6F3518: pop     edi
0x6F3519: mov     eax, [esp+0Ch+arg_0]
0x6F351D: pop     esi
0x6F351E: mov     [eax], ebp
0x6F3520: pop     ebp
0x6F3521: mov     [eax+4], ebx
0x6F3524: pop     ebx
0x6F3525: retn    14h
