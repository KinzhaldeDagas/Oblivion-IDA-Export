0x6D9DC0: push    ebx
0x6D9DC1: mov     ebx, [esp+4+a2]
0x6D9DC5: push    esi
0x6D9DC6: push    ebx; a2
0x6D9DC7: mov     esi, ecx
0x6D9DC9: call    sub_700670
0x6D9DCE: test    al, al
0x6D9DD0: jnz     short loc_6D9DD9
0x6D9DD2: pop     esi
0x6D9DD3: xor     al, al
0x6D9DD5: pop     ebx
0x6D9DD6: retn    4
0x6D9DD9: mov     ecx, [esi+8]
0x6D9DDC: cmp     ecx, [ebx+8]
0x6D9DDF: jnz     short loc_6D9DD2
0x6D9DE1: mov     eax, [esi+10h]
0x6D9DE4: cmp     eax, [ebx+10h]
0x6D9DE7: jnz     short loc_6D9DD2
0x6D9DE9: mov     dl, [esi+14h]
0x6D9DEC: cmp     dl, [ebx+14h]
0x6D9DEF: jnz     short loc_6D9DD2
0x6D9DF1: push    ebp
0x6D9DF2: mov     ebp, ds:0B3D4B8h[eax*4]
0x6D9DF9: push    edi
0x6D9DFA: xor     edi, edi
0x6D9DFC: test    ecx, ecx
0x6D9DFE: jbe     short loc_6D9E24
0x6D9E00: movzx   eax, byte ptr [esi+14h]
0x6D9E04: mov     ecx, [ebx+0Ch]
0x6D9E07: imul    eax, edi
0x6D9E0A: mov     edx, [esi+0Ch]
0x6D9E0D: add     ecx, eax
0x6D9E0F: add     edx, eax
0x6D9E11: push    ecx
0x6D9E12: push    edx
0x6D9E13: call    ebp
0x6D9E15: add     esp, 8
0x6D9E18: test    al, al
0x6D9E1A: jz      short loc_6D9E2D
0x6D9E1C: add     edi, 1
0x6D9E1F: cmp     edi, [esi+8]
0x6D9E22: jb      short loc_6D9E00
0x6D9E24: pop     edi
0x6D9E25: pop     ebp
0x6D9E26: pop     esi
0x6D9E27: mov     al, 1
0x6D9E29: pop     ebx
0x6D9E2A: retn    4
0x6D9E2D: pop     edi
0x6D9E2E: pop     ebp
0x6D9E2F: pop     esi
0x6D9E30: xor     al, al
0x6D9E32: pop     ebx
0x6D9E33: retn    4
