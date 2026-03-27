0x6A7290: test    ecx, ecx
0x6A7292: jz      short locret_6A72AC
0x6A7294: mov     eax, [ecx+8]
0x6A7297: test    eax, eax
0x6A7299: jz      short locret_6A72AC
0x6A729B: add     eax, 30h ; '0'
0x6A729E: push    eax
0x6A729F: mov     eax, [esp+4+arg_0]
0x6A72A3: push    eax
0x6A72A4: call    sub_43F3E0
0x6A72A9: add     esp, 8
0x6A72AC: retn    4
