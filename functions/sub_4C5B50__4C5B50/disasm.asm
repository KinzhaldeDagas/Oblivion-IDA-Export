0x4C5B50: mov     eax, [esp+arg_0]
0x4C5B54: sub     esp, 50h
0x4C5B57: push    esi
0x4C5B58: push    0
0x4C5B5A: mov     esi, ecx
0x4C5B5C: push    eax
0x4C5B5D: lea     ecx, [esp+5Ch+var_50]
0x4C5B61: push    ecx
0x4C5B62: mov     ecx, esi
0x4C5B64: call    sub_4C3030
0x4C5B69: test    al, al
0x4C5B6B: jnz     short loc_4C5B80
0x4C5B6D: fld     dword ptr ds:0A37448h
0x4C5B73: mov     edx, [esp+54h+arg_4]
0x4C5B77: fstp    dword ptr [edx]
0x4C5B79: pop     esi
0x4C5B7A: add     esp, 50h
0x4C5B7D: retn    8
0x4C5B80: mov     eax, [esp+54h+arg_4]
0x4C5B84: push    eax
0x4C5B85: lea     ecx, [esp+58h+var_50]
0x4C5B89: push    ecx
0x4C5B8A: mov     ecx, esi
0x4C5B8C: call    sub_4C44C0
0x4C5B91: pop     esi
0x4C5B92: add     esp, 50h
0x4C5B95: retn    8
