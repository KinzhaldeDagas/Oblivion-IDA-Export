0x6B7130: xor     eax, eax
0x6B7132: cmp     [esp+arg_0], al
0x6B7136: push    esi
0x6B7137: mov     esi, ecx
0x6B7139: jz      short loc_6B714C
0x6B713B: cmp     [esi+4Ah], al
0x6B713E: jnz     short loc_6B7172
0x6B7140: mov     byte ptr [esi+4Ah], 1
0x6B7144: mov     word ptr [esi+46h], 2710h
0x6B714A: jmp     short loc_6B7158
0x6B714C: cmp     [esi+4Ah], al
0x6B714F: jz      short loc_6B7172
0x6B7151: mov     [esi+4Ah], al
0x6B7154: mov     [esi+46h], ax
0x6B7158: fld     dword ptr [esi+3Ch]
0x6B715B: push    ecx
0x6B715C: fstp    [esp+8+var_8]; float
0x6B715F: call    sub_6B6F20
0x6B7164: fld     dword ptr [esi+3Ch]
0x6B7167: push    ecx
0x6B7168: mov     ecx, esi
0x6B716A: fstp    [esp+8+var_8]; float
0x6B716D: call    sub_6B6F20
0x6B7172: pop     esi
0x6B7173: retn    4
