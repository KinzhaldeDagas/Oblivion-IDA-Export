0x4EF1D0: movsx   eax, [esp+group_x]; Verified exact key encoding used by the DistantLOD cell model map: packed label = (signed cellX << 16) | unsigned cellY.
0x4EF1D5: movzx   ecx, [esp+group_y]
0x4EF1DA: shl     eax, 10h
0x4EF1DD: or      eax, ecx
0x4EF1DF: retn
