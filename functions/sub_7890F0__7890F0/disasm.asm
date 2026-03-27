0x7890F0: push    ebp
0x7890F1: mov     ebp, [esp+4+arg_0]
0x7890F5: push    edi
0x7890F6: mov     edi, [esp+8+arg_4]
0x7890FA: test    edi, edi
0x7890FC: mov     eax, edi
0x7890FE: mov     ecx, ebp
0x789100: jbe     short loc_789116
0x789102: push    esi
0x789103: mov     esi, [esp+0Ch+arg_8]
0x789107: mov     dl, [esi]
0x789109: mov     [ecx], dl
0x78910B: sub     eax, 1
0x78910E: add     ecx, 1
0x789111: test    eax, eax
0x789113: ja      short loc_789107
0x789115: pop     esi
0x789116: lea     eax, [edi+ebp]
0x789119: pop     edi
0x78911A: pop     ebp
0x78911B: retn    0Ch
