0x67ED50: cmp     [esp+value], 0; Verified sets/clears stateFlags bit 0x40. PathGrid graph loading sets it when WorldSpace/Cell SubSpace lookup finds a containing TESSubSpace; actor-aware edge cost adds a penalty when endpoints differ on this bit.
0x67ED55: jz      short loc_67ED5E
0x67ED57: or      byte ptr [ecx+10h], 40h
0x67ED5B: retn    4
0x67ED5E: and     byte ptr [ecx+10h], 0BFh
0x67ED62: retn    4
