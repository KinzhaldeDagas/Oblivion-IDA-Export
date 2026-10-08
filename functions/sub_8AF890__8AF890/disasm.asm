0x8AF890: push    ecx; TES4 authoritative: sorts collector contact hits by entry+0x1C when more than one hit is present.
0x8AF891: mov     eax, [ecx+14h]
0x8AF894: cmp     eax, 1
0x8AF897: mov     byte ptr [esp+4+flags], 0
0x8AF89B: jle     short loc_8AF8B1
0x8AF89D: mov     edx, [esp+4+flags]
0x8AF8A0: push    edx; flags
0x8AF8A1: dec     eax
0x8AF8A2: push    eax; right
0x8AF8A3: mov     eax, [ecx+10h]
0x8AF8A6: push    0; left
0x8AF8A8: push    eax; entries
0x8AF8A9: call    hkpCdPointEntry30_QuickSortByDistance; TES4 authoritative: quicksort over 0x30-byte contact entries using float at entry+0x1C as the sort key.
0x8AF8AE: add     esp, 10h
0x8AF8B1: pop     ecx
0x8AF8B2: retn
