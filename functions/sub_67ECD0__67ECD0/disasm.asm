0x67ECD0: cmp     [esp+value], 0; Verified sets/clears stateFlags bit 0x01, the graph-search discovered/open-list marker.
0x67ECD5: jz      short loc_67ECDE
0x67ECD7: or      byte ptr [ecx+10h], 1
0x67ECDB: retn    4
0x67ECDE: and     byte ptr [ecx+10h], 0FEh
0x67ECE2: retn    4
