0x79E150: push    ebx
0x79E151: mov     ebx, [esp+4+arg_4]
0x79E155: push    esi
0x79E156: mov     esi, [esp+8+arg_0]
0x79E15A: cmp     esi, ebx
0x79E15C: jz      short loc_79E182
0x79E15E: push    edi
0x79E15F: xor     edi, edi
0x79E161: mov     eax, [esi+4]
0x79E164: cmp     eax, edi
0x79E166: jz      short loc_79E171
0x79E168: push    eax
0x79E169: call    FormHeapFree
0x79E16E: add     esp, 4
0x79E171: mov     [esi+4], edi
0x79E174: mov     [esi+8], edi
0x79E177: mov     [esi+0Ch], edi
0x79E17A: add     esi, 30h ; '0'
0x79E17D: cmp     esi, ebx
0x79E17F: jnz     short loc_79E161
0x79E181: pop     edi
0x79E182: pop     esi
0x79E183: pop     ebx
0x79E184: retn
