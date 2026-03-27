0xA020D0: mov     eax, dword_B3CA30
0xA020D5: mov     ecx, eax
0xA020D7: add     eax, 1
0xA020DA: test    ecx, ecx
0xA020DC: mov     dword_B3CA30, eax
0xA020E1: jnz     short locret_A020F5
0xA020E3: push    offset sub_6C31F0
0xA020E8: push    offset sub_6C2DB0
0xA020ED: call    sub_747C40
0xA020F2: add     esp, 8
0xA020F5: retn
