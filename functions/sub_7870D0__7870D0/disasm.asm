0x7870D0: mov     eax, [ecx+10h]; CSpeedTreeRT::SetLeafRockingState thin wrapper: writes the bool to CWindEngine+0x14.
0x7870D3: mov     cl, [esp+enabled]
0x7870D7: mov     [eax+14h], cl
0x7870DA: retn    4
