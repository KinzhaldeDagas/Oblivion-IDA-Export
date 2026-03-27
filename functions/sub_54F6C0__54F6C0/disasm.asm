0x54F6C0: push    esi
0x54F6C1: mov     esi, ecx
0x54F6C3: mov     eax, [esi+4]
0x54F6C6: test    eax, eax
0x54F6C8: push    edi
0x54F6C9: mov     edi, [esp+8+arg_0]
0x54F6CD: jz      short loc_54F6E9
0x54F6CF: mov     ecx, [esi+8]
0x54F6D2: sub     ecx, eax
0x54F6D4: mov     eax, 4EC4EC4Fh
0x54F6D9: imul    ecx
0x54F6DB: sar     edx, 4
0x54F6DE: mov     eax, edx
0x54F6E0: shr     eax, 1Fh
0x54F6E3: add     eax, edx
0x54F6E5: cmp     edi, eax
0x54F6E7: jb      short loc_54F6EE
0x54F6E9: call    __invalid_parameter_noinfo
0x54F6EE: mov     eax, edi
0x54F6F0: imul    eax, 34h ; '4'
0x54F6F3: add     eax, [esi+4]
0x54F6F6: pop     edi
0x54F6F7: pop     esi
0x54F6F8: retn    4
