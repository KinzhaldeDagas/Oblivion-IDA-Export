0x67ED30: cmp     [esp+value], 0; Verified sets/clears stateFlags bit 0x10 from the result of Actor_IsUnderwater during point traversal-cost evaluation.
0x67ED35: jz      short loc_67ED3E
0x67ED37: or      byte ptr [ecx+10h], 10h
0x67ED3B: retn    4
0x67ED3E: and     byte ptr [ecx+10h], 0EFh
0x67ED42: retn    4
