0x67F0F0: mov     al, [esp+enabled]; Verified: writes policy byte 2 at qword_B3BB2C[0xBA] and returns the assigned value. The second CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'allow disabled doors'.
0x67F0F4: mov     ds:0B3BE16h, al
0x67F0F9: retn
