0x516970: mov     eax, 1
0x516975: test    ds:0B3620Ch, al
0x51697B: jnz     short loc_51699A
0x51697D: or      ds:0B3620Ch, eax
0x516983: push    offset sub_A1C100; void (__cdecl *)()
0x516988: mov     dword ptr ds:0B36208h, 0
0x516992: call    _atexit
0x516997: add     esp, 4
0x51699A: mov     eax, offset stru_B36208
0x51699F: retn
