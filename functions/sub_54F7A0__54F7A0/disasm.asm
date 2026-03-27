0x54F7A0: push    esi
0x54F7A1: mov     esi, ecx
0x54F7A3: mov     ecx, [esi+4]
0x54F7A6: test    ecx, ecx
0x54F7A8: push    edi
0x54F7A9: mov     edi, [esp+8+arg_0]
0x54F7AD: jz      short loc_54F7BB
0x54F7AF: mov     eax, [esi+8]
0x54F7B2: sub     eax, ecx
0x54F7B4: sar     eax, 2
0x54F7B7: cmp     edi, eax
0x54F7B9: jb      short loc_54F7C0
0x54F7BB: call    __invalid_parameter_noinfo
0x54F7C0: mov     eax, [esi+4]
0x54F7C3: lea     eax, [eax+edi*4]
0x54F7C6: pop     edi
0x54F7C7: pop     esi
0x54F7C8: retn    4
