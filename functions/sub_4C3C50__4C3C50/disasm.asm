0x4C3C50: mov     eax, [esp+arg_0]
0x4C3C54: sub     esp, 50h
0x4C3C57: push    esi
0x4C3C58: push    0
0x4C3C5A: mov     esi, ecx
0x4C3C5C: push    eax
0x4C3C5D: lea     ecx, [esp+5Ch+var_50]
0x4C3C61: push    ecx
0x4C3C62: mov     ecx, esi
0x4C3C64: call    sub_4C3030
0x4C3C69: test    al, al
0x4C3C6B: jnz     short loc_4C3C74
0x4C3C6D: pop     esi
0x4C3C6E: add     esp, 50h
0x4C3C71: retn    4
0x4C3C74: mov     edx, [esi+24h]
0x4C3C77: mov     eax, [edx+10h]
0x4C3C7A: mov     ecx, [esp+54h+var_38]
0x4C3C7E: mov     edx, [eax+ecx*4]
0x4C3C81: mov     eax, [esp+54h+var_14]
0x4C3C85: mov     al, [eax+edx]
0x4C3C88: pop     esi
0x4C3C89: add     esp, 50h
0x4C3C8C: retn    4
