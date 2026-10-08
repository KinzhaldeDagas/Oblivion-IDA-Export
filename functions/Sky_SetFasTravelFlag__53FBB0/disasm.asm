0x53FBB0: cmp     [esp+arg_0], 0; Sky::SetFastTravelFlag(bool): true clears weatherOverride and sets Sky+0xFC bit 0x10; false clears that bit.
0x53FBB5: jz      short loc_53FBC8
0x53FBB7: mov     dword ptr [ecx+1Ch], 0; Fast-travel true path clears weatherOverride only; it does not clear Sky+0x10 firstWeather.
0x53FBBE: or      dword ptr [ecx+0FCh], 10h
0x53FBC5: retn    4
0x53FBC8: and     dword ptr [ecx+0FCh], 0FFFFFFEFh
0x53FBCF: retn    4
