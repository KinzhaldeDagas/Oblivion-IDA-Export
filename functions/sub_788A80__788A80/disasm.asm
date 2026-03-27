0x788A80: mov     eax, [esp+arg_4]
0x788A84: mov     ecx, [esp+Src]
0x788A88: push    esi; MaxCount
0x788A89: mov     esi, [esp+4+arg_8]
0x788A8D: sub     eax, ecx
0x788A8F: sub     esi, eax
0x788A91: test    eax, eax
0x788A93: jle     short loc_788AA1
0x788A95: push    eax; Src
0x788A96: push    ecx; Src
0x788A97: push    eax; DstSize
0x788A98: push    esi; Dst
0x788A99: call    _memmove_s
0x788A9E: add     esp, 10h
0x788AA1: mov     eax, esi
0x788AA3: pop     esi
0x788AA4: retn
