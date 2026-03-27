0x4A4BC0: push    ecx
0x4A4BC1: xor     eax, eax
0x4A4BC3: push    esi
0x4A4BC4: mov     esi, [esp+8+arg_0]
0x4A4BC8: push    eax; a3
0x4A4BC9: mov     [esp+0Ch+var_4], eax
0x4A4BCD: mov     [esi], eax
0x4A4BCF: mov     [esi+4], ax
0x4A4BD3: mov     [esi+6], ax
0x4A4BD7: mov     eax, [ecx+8]
0x4A4BDA: push    eax; a2
0x4A4BDB: mov     ecx, esi; this
0x4A4BDD: call    BSStringT_Set
0x4A4BE2: mov     eax, esi
0x4A4BE4: pop     esi
0x4A4BE5: pop     ecx
0x4A4BE6: retn    4
