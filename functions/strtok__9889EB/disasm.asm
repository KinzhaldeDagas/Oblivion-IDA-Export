0x9889EB: push    ebp
0x9889EC: mov     ebp, esp
0x9889EE: sub     esp, 2Ch
0x9889F1: mov     eax, ___security_cookie
0x9889F6: xor     eax, ebp
0x9889F8: mov     [ebp+var_4], eax
0x9889FB: mov     eax, [ebp+Str]
0x9889FE: push    ebx
0x9889FF: push    esi
0x988A00: mov     esi, [ebp+Delim]
0x988A03: push    edi
0x988A04: mov     [ebp+var_2C], eax
0x988A07: call    __getptd
0x988A0C: push    8
0x988A0E: pop     ecx
0x988A0F: mov     [ebp+var_28], eax
0x988A12: xor     eax, eax
0x988A14: lea     edi, [ebp+var_24]
0x988A17: push    7
0x988A19: rep stosd
0x988A1B: pop     edi
0x988A1C: mov     dl, [esi]
0x988A1E: movzx   ecx, dl
0x988A21: mov     eax, ecx
0x988A23: and     ecx, edi
0x988A25: mov     bl, 1
0x988A27: shl     bl, cl
0x988A29: shr     eax, 3
0x988A2C: lea     eax, [ebp+eax+var_24]
0x988A30: or      [eax], bl
0x988A32: inc     esi
0x988A33: test    dl, dl
0x988A35: jnz     short loc_988A1C
0x988A37: mov     edx, [ebp+var_2C]
0x988A3A: test    edx, edx
0x988A3C: jnz     short loc_988A4B
0x988A3E: mov     eax, [ebp+var_28]
0x988A41: mov     edx, [eax+18h]
0x988A44: jmp     short loc_988A4B
0x988A46: test    al, al
0x988A48: jz      short loc_988A64
0x988A4A: inc     edx
0x988A4B: mov     al, [edx]
0x988A4D: movzx   esi, al
0x988A50: xor     ebx, ebx
0x988A52: mov     ecx, esi
0x988A54: and     ecx, edi
0x988A56: inc     ebx
0x988A57: shl     ebx, cl
0x988A59: shr     esi, 3
0x988A5C: mov     cl, [ebp+esi+var_24]
0x988A60: test    cl, bl
0x988A62: jnz     short loc_988A46
0x988A64: mov     ebx, edx
0x988A66: jmp     short loc_988A80
0x988A68: movzx   esi, byte ptr [edx]
0x988A6B: xor     eax, eax
0x988A6D: mov     ecx, esi
0x988A6F: and     ecx, edi
0x988A71: inc     eax
0x988A72: shl     eax, cl
0x988A74: shr     esi, 3
0x988A77: mov     cl, [ebp+esi+var_24]
0x988A7B: test    cl, al
0x988A7D: jnz     short loc_988A87
0x988A7F: inc     edx
0x988A80: cmp     byte ptr [edx], 0
0x988A83: jnz     short loc_988A68
0x988A85: jmp     short loc_988A8B
0x988A87: mov     byte ptr [edx], 0
0x988A8A: inc     edx
0x988A8B: mov     eax, [ebp+var_28]
0x988A8E: mov     ecx, [ebp+var_4]
0x988A91: mov     [eax+18h], edx
0x988A94: mov     eax, ebx
0x988A96: sub     eax, edx
0x988A98: neg     eax
0x988A9A: sbb     eax, eax
0x988A9C: pop     edi
0x988A9D: and     eax, ebx
0x988A9F: pop     esi
0x988AA0: xor     ecx, ebp
0x988AA2: pop     ebx
0x988AA3: call    @__security_check_cookie@4
0x988AA8: leave
0x988AA9: retn
