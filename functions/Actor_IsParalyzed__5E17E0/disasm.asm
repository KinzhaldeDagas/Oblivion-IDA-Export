0x5E17E0: mov     eax, [ecx]
0x5E17E2: mov     edx, [eax+284h]
0x5E17E8: push    30h ; '0'
0x5E17EA: call    edx
0x5E17EC: test    eax, eax
0x5E17EE: setnz   al
0x5E17F1: retn
