0x71FC80: push    esi
0x71FC81: mov     esi, ecx
0x71FC83: mov     eax, [esi+48h]
0x71FC86: push    edi
0x71FC87: mov     edi, [esp+8+arg_4]
0x71FC8B: cmp     edi, eax
0x71FC8D: jz      short loc_71FC9C
0x71FC8F: test    eax, eax
0x71FC91: jz      short loc_71FC9C
0x71FC93: push    eax
0x71FC94: call    FormHeapFree
0x71FC99: add     esp, 4
0x71FC9C: mov     ax, [esp+8+arg_0]
0x71FCA1: mov     [esi+40h], ax
0x71FCA5: movzx   eax, ax
0x71FCA8: mov     [esi+48h], edi
0x71FCAB: lea     eax, [eax+eax*2]
0x71FCAE: pop     edi
0x71FCAF: mov     [esi+44h], eax
0x71FCB2: pop     esi
0x71FCB3: retn    8
