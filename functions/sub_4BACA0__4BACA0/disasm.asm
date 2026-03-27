0x4BACA0: push    ebx
0x4BACA1: mov     ebx, [esp+4+arg_0]
0x4BACA5: mov     edx, [ebx]
0x4BACA7: test    edx, edx
0x4BACA9: push    esi
0x4BACAA: mov     esi, ecx
0x4BACAC: jnz     short loc_4BACB6
0x4BACAE: pop     esi
0x4BACAF: or      eax, 0FFFFFFFFh
0x4BACB2: pop     ebx
0x4BACB3: retn    4
0x4BACB6: push    ebp
0x4BACB7: push    edi
0x4BACB8: movzx   edi, word ptr [esi+0Ah]
0x4BACBC: xor     eax, eax
0x4BACBE: test    di, di
0x4BACC1: jbe     short loc_4BACD8
0x4BACC3: mov     ecx, [esi+4]
0x4BACC6: movzx   ebp, ax
0x4BACC9: cmp     dword ptr [ecx+ebp*4], 0
0x4BACCD: jz      short loc_4BAD03
0x4BACCF: add     eax, 1
0x4BACD2: cmp     ax, [esi+0Ah]
0x4BACD6: jb      short loc_4BACC6
0x4BACD8: movzx   eax, word ptr [esi+8]
0x4BACDC: movzx   edi, di
0x4BACDF: cmp     edi, eax
0x4BACE1: jb      short loc_4BACF1
0x4BACE3: movzx   ecx, word ptr [esi+0Eh]
0x4BACE7: add     ecx, edi
0x4BACE9: push    ecx
0x4BACEA: mov     ecx, esi
0x4BACEC: call    NiTArray_SetSize
0x4BACF1: push    ebx
0x4BACF2: push    edi
0x4BACF3: mov     ecx, esi
0x4BACF5: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x4BACFA: mov     eax, edi
0x4BACFC: pop     edi
0x4BACFD: pop     ebp
0x4BACFE: pop     esi
0x4BACFF: pop     ebx
0x4BAD00: retn    4
0x4BAD03: movzx   eax, ax
0x4BAD06: pop     edi
0x4BAD07: pop     ebp
0x4BAD08: mov     [ecx+eax*4], edx
0x4BAD0B: add     word ptr [esi+0Ch], 1
0x4BAD10: pop     esi
0x4BAD11: pop     ebx
0x4BAD12: retn    4
