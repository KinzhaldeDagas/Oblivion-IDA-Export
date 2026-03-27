0x987B14: push    ebp
0x987B15: mov     ebp, esp
0x987B17: sub     esp, 2Ch
0x987B1A: mov     eax, ___security_cookie
0x987B1F: xor     eax, ebp
0x987B21: mov     [ebp+var_4], eax
0x987B24: mov     eax, [ebp+Context]
0x987B27: mov     ecx, [ebp+Str]
0x987B2A: push    esi
0x987B2B: mov     esi, [ebp+Delim]
0x987B2E: push    edi
0x987B2F: xor     edi, edi
0x987B31: cmp     eax, edi
0x987B33: mov     [ebp+var_2C], ecx
0x987B36: mov     [ebp+var_28], eax
0x987B39: jnz     short loc_987B5A
0x987B3B: call    __errno
0x987B40: push    edi
0x987B41: push    edi
0x987B42: push    edi
0x987B43: push    edi
0x987B44: push    edi
0x987B45: mov     dword ptr [eax], 16h
0x987B4B: call    __invalid_parameter
0x987B50: add     esp, 14h
0x987B53: xor     eax, eax
0x987B55: jmp     loc_987BF2
0x987B5A: cmp     esi, edi
0x987B5C: jz      short loc_987B3B
0x987B5E: cmp     ecx, edi
0x987B60: jnz     short loc_987B66
0x987B62: cmp     [eax], edi
0x987B64: jz      short loc_987B3B
0x987B66: push    8
0x987B68: pop     ecx
0x987B69: xor     eax, eax
0x987B6B: lea     edi, [ebp+var_24]
0x987B6E: push    7
0x987B70: rep stosd
0x987B72: pop     edi
0x987B73: push    ebx
0x987B74: mov     dl, [esi]
0x987B76: movzx   ecx, dl
0x987B79: mov     eax, ecx
0x987B7B: and     ecx, edi
0x987B7D: mov     bl, 1
0x987B7F: shl     bl, cl
0x987B81: shr     eax, 3
0x987B84: lea     eax, [ebp+eax+var_24]
0x987B88: or      [eax], bl
0x987B8A: inc     esi
0x987B8B: test    dl, dl
0x987B8D: jnz     short loc_987B74
0x987B8F: mov     edx, [ebp+var_2C]
0x987B92: test    edx, edx
0x987B94: jnz     short loc_987BA2
0x987B96: mov     eax, [ebp+var_28]
0x987B99: mov     edx, [eax]
0x987B9B: jmp     short loc_987BA2
0x987B9D: test    al, al
0x987B9F: jz      short loc_987BBB
0x987BA1: inc     edx
0x987BA2: mov     al, [edx]
0x987BA4: movzx   esi, al
0x987BA7: xor     ebx, ebx
0x987BA9: mov     ecx, esi
0x987BAB: and     ecx, edi
0x987BAD: inc     ebx
0x987BAE: shl     ebx, cl
0x987BB0: shr     esi, 3
0x987BB3: mov     cl, [ebp+esi+var_24]
0x987BB7: test    cl, bl
0x987BB9: jnz     short loc_987B9D
0x987BBB: mov     ebx, edx
0x987BBD: jmp     short loc_987BD7
0x987BBF: movzx   esi, byte ptr [edx]
0x987BC2: xor     eax, eax
0x987BC4: mov     ecx, esi
0x987BC6: and     ecx, edi
0x987BC8: inc     eax
0x987BC9: shl     eax, cl
0x987BCB: shr     esi, 3
0x987BCE: mov     cl, [ebp+esi+var_24]
0x987BD2: test    cl, al
0x987BD4: jnz     short loc_987BDE
0x987BD6: inc     edx
0x987BD7: cmp     byte ptr [edx], 0
0x987BDA: jnz     short loc_987BBF
0x987BDC: jmp     short loc_987BE2
0x987BDE: mov     byte ptr [edx], 0
0x987BE1: inc     edx
0x987BE2: mov     eax, [ebp+var_28]
0x987BE5: mov     [eax], edx
0x987BE7: mov     eax, ebx
0x987BE9: sub     eax, edx
0x987BEB: neg     eax
0x987BED: sbb     eax, eax
0x987BEF: and     eax, ebx
0x987BF1: pop     ebx
0x987BF2: mov     ecx, [ebp+var_4]
0x987BF5: pop     edi
0x987BF6: xor     ecx, ebp
0x987BF8: pop     esi
0x987BF9: call    @__security_check_cookie@4
0x987BFE: leave
0x987BFF: retn
