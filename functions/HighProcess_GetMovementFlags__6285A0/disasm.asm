0x6285A0: mov     ax, [ecx+1FCh]; TES4 authoritative: HighProcess movement flags getter. Returns word at process+0x1FC; Player_OnInput reads this through process vtable +0x2C0 before assembling v232.
0x6285A7: retn
