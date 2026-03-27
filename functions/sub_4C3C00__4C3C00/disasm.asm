0x4C3C00: mov     eax, [esp+arg_0]
0x4C3C04: sub     esp, 50h
0x4C3C07: push    esi
0x4C3C08: push    0
0x4C3C0A: mov     esi, ecx
0x4C3C0C: push    eax
0x4C3C0D: lea     ecx, [esp+5Ch+var_50]
0x4C3C11: push    ecx
0x4C3C12: mov     ecx, esi
0x4C3C14: call    sub_4C3030
0x4C3C19: test    al, al
0x4C3C1B: jnz     short loc_4C3C24
0x4C3C1D: pop     esi
0x4C3C1E: add     esp, 50h
0x4C3C21: retn    0Ch
0x4C3C24: mov     edx, [esp+54h+arg_8]
0x4C3C28: mov     eax, [esp+54h+arg_4]
0x4C3C2C: push    edx
0x4C3C2D: push    eax
0x4C3C2E: lea     ecx, [esp+5Ch+var_50]
0x4C3C32: push    ecx
0x4C3C33: mov     ecx, esi
0x4C3C35: call    sub_4C3540
0x4C3C3A: pop     esi
0x4C3C3B: add     esp, 50h
0x4C3C3E: retn    0Ch
