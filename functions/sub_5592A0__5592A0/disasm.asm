0x5592A0: push    ebx
0x5592A1: push    ebp
0x5592A2: mov     ebp, [esp+8+arg_4]
0x5592A6: test    ebp, ebp
0x5592A8: push    esi
0x5592A9: mov     esi, ecx
0x5592AB: jz      short loc_5592B3
0x5592AD: cmp     ebp, [esp+0Ch+arg_C]
0x5592B1: jz      short loc_5592B8
0x5592B3: call    __invalid_parameter_noinfo
0x5592B8: mov     ebx, [esp+0Ch+arg_8]
0x5592BC: mov     eax, [esp+0Ch+arg_10]
0x5592C0: cmp     ebx, eax
0x5592C2: jz      short loc_5592E5
0x5592C4: mov     ecx, [esi+8]
0x5592C7: push    edi
0x5592C8: push    ebx
0x5592C9: push    ecx
0x5592CA: push    eax
0x5592CB: call    sub_558610
0x5592D0: mov     edx, [esi+8]
0x5592D3: add     esp, 0Ch
0x5592D6: mov     edi, eax
0x5592D8: push    edx
0x5592D9: push    edi
0x5592DA: mov     ecx, esi
0x5592DC: call    sub_557740
0x5592E1: mov     [esi+8], edi
0x5592E4: pop     edi
0x5592E5: mov     eax, [esp+0Ch+arg_0]
0x5592E9: pop     esi
0x5592EA: mov     [eax], ebp
0x5592EC: pop     ebp
0x5592ED: mov     [eax+4], ebx
0x5592F0: pop     ebx
0x5592F1: retn    14h
