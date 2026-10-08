0x67F0D0: mov     al, [esp+enabled]; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x67F0D4: mov     ds:0B3BE15h, al
0x67F0D9: retn
