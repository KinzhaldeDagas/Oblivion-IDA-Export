0x42BD30: mov     eax, iRetainFilenameStringTable_Archive
0x42BD35: cmp     eax, 1
0x42BD38: jnz     short loc_42BD46
0x42BD3A: mov     eax, [ecx+160h]
0x42BD40: shr     eax, 4
0x42BD43: and     al, 1
0x42BD45: retn
0x42BD46: test    eax, eax
0x42BD48: setnz   al
0x42BD4B: retn
