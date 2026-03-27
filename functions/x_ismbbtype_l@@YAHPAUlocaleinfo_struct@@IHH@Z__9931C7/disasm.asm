0x9931C7: push    ebp
0x9931C8: mov     ebp, esp
0x9931CA: sub     esp, 10h
0x9931CD: push    [ebp+arg_0]; struct localeinfo_struct *
0x9931D0: lea     ecx, [ebp+var_10]; this
0x9931D3: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9931D8: movzx   eax, [ebp+arg_4]
0x9931DC: mov     ecx, [ebp+var_C]
0x9931DF: mov     dl, [ebp+arg_C]
0x9931E2: test    [ecx+eax+1Dh], dl
0x9931E6: jnz     short loc_993206
0x9931E8: cmp     [ebp+arg_8], 0
0x9931EC: jz      short loc_993200
0x9931EE: mov     ecx, [ebp+var_10]
0x9931F1: mov     ecx, [ecx+0C8h]
0x9931F7: movzx   eax, word ptr [ecx+eax*2]
0x9931FB: and     eax, [ebp+arg_8]
0x9931FE: jmp     short loc_993202
0x993200: xor     eax, eax
0x993202: test    eax, eax
0x993204: jz      short loc_993209
0x993206: xor     eax, eax
0x993208: inc     eax
0x993209: cmp     [ebp+var_4], 0
0x99320D: jz      short locret_993216
0x99320F: mov     ecx, [ebp+var_8]
0x993212: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x993216: leave
0x993217: retn
