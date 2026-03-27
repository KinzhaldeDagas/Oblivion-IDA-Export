0x707D80: push    esi
0x707D81: push    edi
0x707D82: mov     edi, ecx
0x707D84: mov     esi, [edi+0Ch]
0x707D87: test    esi, esi
0x707D89: jz      short loc_707DA4
0x707D8B: jmp     short loc_707D90
0x707D8D: align 10h
0x707D90: mov     eax, [esi]
0x707D92: mov     edx, [eax+5Ch]
0x707D95: mov     ecx, esi
0x707D97: call    edx
0x707D99: test    al, al
0x707D9B: jnz     short loc_707E09
0x707D9D: mov     esi, [esi+34h]
0x707DA0: test    esi, esi
0x707DA2: jnz     short loc_707D90
0x707DA4: xor     al, al
0x707DA6: mov     dl, [esp+8+arg_4]
0x707DAA: mov     ecx, [esp+8+arg_8]
0x707DAE: test    al, al
0x707DB0: setz    al
0x707DB3: test    dl, dl
0x707DB5: mov     [ecx], al
0x707DB7: jnz     short loc_707DBE
0x707DB9: test    al, al
0x707DBB: setz    dl
0x707DBE: mov     eax, [edi+9Ch]
0x707DC4: test    eax, eax
0x707DC6: jz      short loc_707DDD
0x707DC8: lea     ecx, [eax+8]
0x707DCB: mov     ecx, [ecx]
0x707DCD: test    ecx, ecx
0x707DCF: mov     eax, [eax]
0x707DD1: jz      short loc_707DD9
0x707DD3: cmp     dword ptr [ecx+0Ch], 0
0x707DD7: jnz     short loc_707E0D
0x707DD9: test    eax, eax
0x707DDB: jnz     short loc_707DC8
0x707DDD: xor     cl, cl
0x707DDF: test    dl, dl
0x707DE1: jnz     short loc_707E0F
0x707DE3: cmp     dword ptr [edi+0Ch], 0
0x707DE7: jnz     short loc_707E0F
0x707DE9: mov     edx, [esp+8+arg_0]
0x707DED: mov     [edx], cl
0x707DEF: and     word ptr [edi+18h], 0FFFDh
0x707DF5: and     word ptr [edi+18h], 0FFFBh
0x707DFB: test    cl, cl
0x707DFD: jz      short loc_707E2C
0x707DFF: or      word ptr [edi+18h], 18h
0x707E04: pop     edi
0x707E05: pop     esi
0x707E06: retn    0Ch
0x707E09: mov     al, 1
0x707E0B: jmp     short loc_707DA6
0x707E0D: mov     cl, 1
0x707E0F: mov     eax, [esp+8+arg_0]
0x707E13: mov     byte ptr [eax], 1
0x707E16: or      word ptr [edi+18h], 2
0x707E1B: test    dl, dl
0x707E1D: movzx   eax, word ptr [edi+18h]
0x707E21: jz      short loc_707DF5
0x707E23: or      eax, 4
0x707E26: mov     [edi+18h], ax
0x707E2A: jmp     short loc_707DFB
0x707E2C: and     word ptr [edi+18h], 0FFF7h
0x707E32: or      word ptr [edi+18h], 10h
0x707E37: pop     edi
0x707E38: pop     esi
0x707E39: retn    0Ch
