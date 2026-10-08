0x4299E0: mov     eax, [esp+numericLockMagnitude]; Verified numeric lock magnitude to LOCK_LEVEL mapper. Thresholds are iLockLevelMaxVeryEasy, iLockLevelMaxEasy, iLockLevelMaxAverage, iLockLevelMaxHard, and iLockLevelMaxVeryHard; outputs 0..5 map through LockLevelNames to VeryEasy, Easy, Average, Hard, VeryHard, Impossible. Fallout independently uses the matching LOCK_LEVEL names, but this mapping is directly established by Oblivion code and data.
0x4299E4: cmp     eax, ds:0B338B8h
0x4299EA: jg      short loc_4299EF
0x4299EC: xor     eax, eax
0x4299EE: retn
0x4299EF: cmp     eax, ds:0B338C0h
0x4299F5: jg      short loc_4299FD
0x4299F7: mov     eax, 1
0x4299FC: retn
0x4299FD: cmp     eax, ds:0B338C8h
0x429A03: jg      short loc_429A0B
0x429A05: mov     eax, 2
0x429A0A: retn
0x429A0B: cmp     eax, ds:0B338D0h
0x429A11: jg      short loc_429A19
0x429A13: mov     eax, 3
0x429A18: retn
0x429A19: xor     ecx, ecx
0x429A1B: cmp     eax, ds:0B338D8h
0x429A21: setnle  cl
0x429A24: add     ecx, 4
0x429A27: mov     eax, ecx
0x429A29: retn
