0x6600F0: cmp     byte ptr [ecx+588h], 0
0x6600F7: jnz     short loc_660103
0x6600F9: mov     eax, [ecx+5D0h]
0x6600FF: test    eax, eax
0x660101: jnz     short locret_660108
0x660103: jmp     TESObjectREFR__GetNiNode
0x660108: retn
