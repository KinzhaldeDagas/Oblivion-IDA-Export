0x6D8D70: push    ebx
0x6D8D71: mov     ebx, [esp+4+a2]
0x6D8D75: push    esi
0x6D8D76: push    ebx; a2
0x6D8D77: mov     esi, ecx
0x6D8D79: call    sub_700670
0x6D8D7E: test    al, al
0x6D8D80: jnz     short loc_6D8D89
0x6D8D82: pop     esi
0x6D8D83: xor     al, al
0x6D8D85: pop     ebx
0x6D8D86: retn    4
0x6D8D89: mov     ecx, [esi+8]
0x6D8D8C: cmp     ecx, [ebx+8]
0x6D8D8F: jnz     short loc_6D8D82
0x6D8D91: mov     eax, [esi+10h]
0x6D8D94: cmp     eax, [ebx+10h]
0x6D8D97: jnz     short loc_6D8D82
0x6D8D99: mov     dl, [esi+14h]
0x6D8D9C: cmp     dl, [ebx+14h]
0x6D8D9F: jnz     short loc_6D8D82
0x6D8DA1: push    ebp
0x6D8DA2: mov     ebp, ds:0B3D4D0h[eax*4]
0x6D8DA9: push    edi
0x6D8DAA: xor     edi, edi
0x6D8DAC: test    ecx, ecx
0x6D8DAE: jbe     short loc_6D8DD4
0x6D8DB0: movzx   eax, byte ptr [esi+14h]
0x6D8DB4: mov     ecx, [ebx+0Ch]
0x6D8DB7: imul    eax, edi
0x6D8DBA: mov     edx, [esi+0Ch]
0x6D8DBD: add     ecx, eax
0x6D8DBF: add     edx, eax
0x6D8DC1: push    ecx
0x6D8DC2: push    edx
0x6D8DC3: call    ebp ; dword_B3D4D0
0x6D8DC5: add     esp, 8
0x6D8DC8: test    al, al
0x6D8DCA: jz      short loc_6D8DDD
0x6D8DCC: add     edi, 1
0x6D8DCF: cmp     edi, [esi+8]
0x6D8DD2: jb      short loc_6D8DB0
0x6D8DD4: pop     edi
0x6D8DD5: pop     ebp
0x6D8DD6: pop     esi
0x6D8DD7: mov     al, 1
0x6D8DD9: pop     ebx
0x6D8DDA: retn    4
0x6D8DDD: pop     edi
0x6D8DDE: pop     ebp
0x6D8DDF: pop     esi
0x6D8DE0: xor     al, al
0x6D8DE2: pop     ebx
0x6D8DE3: retn    4
