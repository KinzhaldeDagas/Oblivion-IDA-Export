0x54F840: push    esi
0x54F841: push    offset stru_B39C00; lpCriticalSection
0x54F846: mov     esi, ecx
0x54F848: call    dword ptr ds:0A2806Ch
0x54F84E: call    dword ptr ds:0A2808Ch
0x54F854: add     dword ptr ds:0B39C7Ch, 1
0x54F85B: lea     ecx, [esi+4]
0x54F85E: mov     ds:0B39C78h, eax
0x54F863: call    NiTMap_Clear
0x54F868: sub     dword ptr ds:0B39C7Ch, 1
0x54F86F: pop     esi
0x54F870: jnz     short loc_54F87C
0x54F872: mov     dword ptr ds:0B39C78h, 0
0x54F87C: push    offset stru_B39C00; lpCriticalSection
0x54F881: call    dword ptr ds:0A28074h
0x54F887: retn
