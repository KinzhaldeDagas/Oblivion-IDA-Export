0x6930F0: mov     ecx, ds:0B333C4h
0x6930F6: mov     eax, [ecx]
0x6930F8: mov     edx, [eax+284h]
0x6930FE: push    3Ah ; ':'
0x693100: call    edx
0x693102: test    eax, eax
0x693104: setnle  al
0x693107: mov     ds:0B3C0ABh, al
0x69310C: retn
