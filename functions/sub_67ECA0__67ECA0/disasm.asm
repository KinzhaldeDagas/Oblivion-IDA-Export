0x67ECA0: cmp     [esp+value], 0; Verified sets/clears stateFlags bit 0x02, the graph-search processed/closed marker.
0x67ECA5: jz      short loc_67ECAE
0x67ECA7: or      byte ptr [ecx+10h], 2
0x67ECAB: retn    4
0x67ECAE: and     byte ptr [ecx+10h], 0FDh
0x67ECB2: retn    4
