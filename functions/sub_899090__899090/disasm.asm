0x899090: push    ebx
0x899091: push    ebp
0x899092: mov     ebp, [esp+8+arg_0]
0x899096: mov     ebx, [ebp+38h]
0x899099: mov     eax, [ebp+3Ch]
0x89909C: lea     ecx, [ebx+eax*4]
0x89909F: cmp     ebx, ecx
0x8990A1: push    esi
0x8990A2: push    edi
0x8990A3: jz      short loc_8990DA
0x8990A5: mov     esi, [ebx]
0x8990A7: mov     eax, [esi+60h]
0x8990AA: add     esi, 5Ch ; '\'
0x8990AD: xor     edi, edi
0x8990AF: test    eax, eax
0x8990B1: jle     short loc_8990CA
0x8990B3: mov     edx, [esi]
0x8990B5: mov     eax, [edx+edi*4]
0x8990B8: mov     ecx, [esp+10h+arg_4]
0x8990BC: push    eax
0x8990BD: call    sub_8DA150
0x8990C2: mov     eax, [esi+4]
0x8990C5: inc     edi
0x8990C6: cmp     edi, eax
0x8990C8: jl      short loc_8990B3
0x8990CA: mov     ecx, [ebp+3Ch]
0x8990CD: mov     edx, [ebp+38h]
0x8990D0: add     ebx, 4
0x8990D3: lea     eax, [edx+ecx*4]
0x8990D6: cmp     ebx, eax
0x8990D8: jnz     short loc_8990A5
0x8990DA: mov     ebx, [ebp+44h]
0x8990DD: mov     ecx, [ebp+48h]
0x8990E0: lea     edx, [ebx+ecx*4]
0x8990E3: cmp     ebx, edx
0x8990E5: jz      short loc_89911C
0x8990E7: mov     esi, [ebx]
0x8990E9: mov     eax, [esi+60h]
0x8990EC: add     esi, 5Ch ; '\'
0x8990EF: xor     edi, edi
0x8990F1: test    eax, eax
0x8990F3: jle     short loc_89910C
0x8990F5: mov     eax, [esi]
0x8990F7: mov     ecx, [eax+edi*4]
0x8990FA: push    ecx
0x8990FB: mov     ecx, [esp+14h+arg_4]
0x8990FF: call    sub_8DA150
0x899104: mov     eax, [esi+4]
0x899107: inc     edi
0x899108: cmp     edi, eax
0x89910A: jl      short loc_8990F5
0x89910C: mov     edx, [ebp+48h]
0x89910F: mov     eax, [ebp+44h]
0x899112: add     ebx, 4
0x899115: lea     ecx, [eax+edx*4]
0x899118: cmp     ebx, ecx
0x89911A: jnz     short loc_8990E7
0x89911C: pop     edi
0x89911D: pop     esi
0x89911E: pop     ebp
0x89911F: pop     ebx
0x899120: retn
