0x6E34C0: push    ebx
0x6E34C1: mov     ebx, [esp+4+a2]
0x6E34C5: push    esi
0x6E34C6: push    ebx; a2
0x6E34C7: mov     esi, ecx
0x6E34C9: call    sub_700670
0x6E34CE: test    al, al
0x6E34D0: jnz     short loc_6E34D9
0x6E34D2: pop     esi
0x6E34D3: xor     al, al
0x6E34D5: pop     ebx
0x6E34D6: retn    4
0x6E34D9: mov     ecx, [esi+8]
0x6E34DC: cmp     ecx, [ebx+8]
0x6E34DF: jnz     short loc_6E34D2
0x6E34E1: mov     eax, [esi+10h]
0x6E34E4: cmp     eax, [ebx+10h]
0x6E34E7: jnz     short loc_6E34D2
0x6E34E9: mov     dl, [esi+14h]
0x6E34EC: cmp     dl, [ebx+14h]
0x6E34EF: jnz     short loc_6E34D2
0x6E34F1: push    ebp
0x6E34F2: mov     ebp, ds:0B3D4A0h[eax*4]
0x6E34F9: push    edi
0x6E34FA: xor     edi, edi
0x6E34FC: test    ecx, ecx
0x6E34FE: jbe     short loc_6E3524
0x6E3500: movzx   eax, byte ptr [esi+14h]
0x6E3504: mov     ecx, [ebx+0Ch]
0x6E3507: imul    eax, edi
0x6E350A: mov     edx, [esi+0Ch]
0x6E350D: add     ecx, eax
0x6E350F: add     edx, eax
0x6E3511: push    ecx
0x6E3512: push    edx
0x6E3513: call    ebp ; dword_B3D4A0
0x6E3515: add     esp, 8
0x6E3518: test    al, al
0x6E351A: jz      short loc_6E352D
0x6E351C: add     edi, 1
0x6E351F: cmp     edi, [esi+8]
0x6E3522: jb      short loc_6E3500
0x6E3524: pop     edi
0x6E3525: pop     ebp
0x6E3526: pop     esi
0x6E3527: mov     al, 1
0x6E3529: pop     ebx
0x6E352A: retn    4
0x6E352D: pop     edi
0x6E352E: pop     ebp
0x6E352F: pop     esi
0x6E3530: xor     al, al
0x6E3532: pop     ebx
0x6E3533: retn    4
