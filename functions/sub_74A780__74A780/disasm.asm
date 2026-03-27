0x74A780: push    ebx
0x74A781: mov     ebx, [esp+4+arg_0]
0x74A785: push    edi
0x74A786: push    ebx
0x74A787: mov     edi, ecx
0x74A789: call    sub_74F160
0x74A78E: test    al, al
0x74A790: jnz     short loc_74A797
0x74A792: pop     edi
0x74A793: pop     ebx
0x74A794: retn    4
0x74A797: movzx   eax, word ptr [ebx+5Ah]
0x74A79B: push    ebp
0x74A79C: movzx   ebp, word ptr [edi+5Ah]
0x74A7A0: cmp     ebp, eax
0x74A7A2: jz      short loc_74A7AC
0x74A7A4: pop     ebp
0x74A7A5: pop     edi
0x74A7A6: xor     al, al
0x74A7A8: pop     ebx
0x74A7A9: retn    4
0x74A7AC: push    esi
0x74A7AD: xor     esi, esi
0x74A7AF: test    ebp, ebp
0x74A7B1: jbe     short loc_74A7DA
0x74A7B3: mov     ecx, [edi+54h]
0x74A7B6: mov     ecx, [ecx+esi*4]
0x74A7B9: test    ecx, ecx
0x74A7BB: mov     edx, [ebx+54h]
0x74A7BE: mov     eax, [edx+esi*4]
0x74A7C1: jz      short loc_74A7F3
0x74A7C3: test    eax, eax
0x74A7C5: jz      short loc_74A7EA
0x74A7C7: mov     edx, [ecx]
0x74A7C9: push    eax
0x74A7CA: mov     eax, [edx+2Ch]
0x74A7CD: call    eax
0x74A7CF: test    al, al
0x74A7D1: jz      short loc_74A7EA
0x74A7D3: add     esi, 1
0x74A7D6: cmp     esi, ebp
0x74A7D8: jb      short loc_74A7B3
0x74A7DA: mov     ecx, [edi+70h]
0x74A7DD: cmp     ecx, [ebx+70h]
0x74A7E0: jnz     short loc_74A7EA
0x74A7E2: mov     edx, [edi+74h]
0x74A7E5: cmp     edx, [ebx+74h]
0x74A7E8: jz      short loc_74A7F9
0x74A7EA: pop     esi
0x74A7EB: pop     ebp
0x74A7EC: pop     edi
0x74A7ED: xor     al, al
0x74A7EF: pop     ebx
0x74A7F0: retn    4
0x74A7F3: test    eax, eax
0x74A7F5: jnz     short loc_74A7EA
0x74A7F7: jmp     short loc_74A7D3
0x74A7F9: add     ebx, 78h ; 'x'
0x74A7FC: push    ebx
0x74A7FD: lea     ecx, [edi+78h]
0x74A800: call    sub_8AA390
0x74A805: pop     esi
0x74A806: pop     ebp
0x74A807: test    al, al
0x74A809: pop     edi
0x74A80A: setz    al
0x74A80D: pop     ebx
0x74A80E: retn    4
