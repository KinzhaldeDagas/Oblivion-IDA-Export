0x68B100: cmp     byte ptr [ecx+4], 0; Verified stores a TESObjectREFR* into payload +0 only when kind==0. The route node does not take an extra reference to the TESObjectREFR.
0x68B104: jnz     short locret_68B10C
0x68B106: mov     eax, [esp+reference]
0x68B10A: mov     [ecx], eax
0x68B10C: retn    4
