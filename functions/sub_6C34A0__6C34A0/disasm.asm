0x6C34A0: mov     eax, ds:0B3CA30h
0x6C34A5: push    esi
0x6C34A6: mov     esi, ecx
0x6C34A8: mov     ecx, eax
0x6C34AA: add     eax, 1
0x6C34AD: test    ecx, ecx
0x6C34AF: mov     ds:0B3CA30h, eax
0x6C34B4: jnz     short loc_6C34C8
0x6C34B6: push    offset sub_6C31F0
0x6C34BB: push    offset sub_6C2DB0
0x6C34C0: call    sub_747C40
0x6C34C5: add     esp, 8
0x6C34C8: mov     eax, esi
0x6C34CA: pop     esi
0x6C34CB: retn
