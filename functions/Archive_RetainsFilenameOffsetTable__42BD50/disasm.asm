0x42BD50: mov     eax, iRetainFilenameOffsetTable_Archive
0x42BD55: cmp     eax, 1
0x42BD58: jnz     short loc_42BD66
0x42BD5A: mov     eax, [ecx+160h]
0x42BD60: shr     eax, 5
0x42BD63: and     al, 1
0x42BD65: retn
0x42BD66: test    eax, eax
0x42BD68: setnz   al
0x42BD6B: retn
