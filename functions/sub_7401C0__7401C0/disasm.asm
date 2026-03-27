0x7401C0: push    ebx
0x7401C1: push    ebp
0x7401C2: mov     bp, [esp+8+arg_0]
0x7401C7: push    esi
0x7401C8: mov     esi, ecx
0x7401CA: cmp     bp, [esi+48h]
0x7401CE: movzx   ebx, bp
0x7401D1: jnb     short loc_74021A
0x7401D3: push    edi
0x7401D4: mov     ecx, [esi+5Ch]
0x7401D7: mov     eax, [ecx]
0x7401D9: mov     eax, [eax+8Ch]
0x7401DF: movzx   edx, bx
0x7401E2: push    edx
0x7401E3: lea     edx, [esp+14h+arg_0]
0x7401E7: push    edx
0x7401E8: call    eax
0x7401EA: mov     eax, dword ptr [esp+10h+arg_0]
0x7401EE: test    eax, eax
0x7401F0: jz      short loc_740210
0x7401F2: mov     edi, eax
0x7401F4: add     eax, 4
0x7401F7: push    eax; lpAddend
0x7401F8: call    dword ptr ds:0A2807Ch
0x7401FE: test    eax, eax
0x740200: jnz     short loc_740210
0x740202: test    edi, edi
0x740204: jz      short loc_740210
0x740206: mov     edx, [edi]
0x740208: mov     eax, [edx]
0x74020A: push    1
0x74020C: mov     ecx, edi
0x74020E: call    eax
0x740210: add     ebx, 1
0x740213: cmp     bx, [esi+48h]
0x740217: jb      short loc_7401D4
0x740219: pop     edi
0x74021A: movzx   eax, word ptr [esi+8]
0x74021E: cmp     bp, ax
0x740221: ja      short loc_74022D
0x740223: mov     [esi+48h], bp
0x740227: pop     esi
0x740228: pop     ebp
0x740229: pop     ebx
0x74022A: retn    4
0x74022D: mov     [esi+48h], ax
0x740231: pop     esi
0x740232: pop     ebp
0x740233: pop     ebx
0x740234: retn    4
