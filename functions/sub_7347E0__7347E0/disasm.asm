0x7347E0: movzx   eax, word ptr [ecx+10Eh]
0x7347E7: xor     edx, edx
0x7347E9: test    eax, 0FFFFFFFEh
0x7347EE: jbe     short locret_734822
0x7347F0: push    esi
0x7347F1: mov     esi, [esp+4+arg_0]
0x7347F5: push    edi
0x7347F6: mov     edi, [esp+8+arg_4]
0x7347FA: lea     ebx, [ebx+0]
0x734800: mov     al, [esi]
0x734802: sub     al, [ecx+104h]
0x734808: add     edx, 1
0x73480B: mov     [edi], al
0x73480D: movzx   eax, word ptr [ecx+10Eh]
0x734814: shr     eax, 1
0x734816: add     esi, 1
0x734819: add     edi, 1
0x73481C: cmp     edx, eax
0x73481E: jb      short loc_734800
0x734820: pop     edi
0x734821: pop     esi
0x734822: retn    8
