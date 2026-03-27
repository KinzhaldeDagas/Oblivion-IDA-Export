0x4299E0: mov     eax, [esp+arg_0]
0x4299E4: cmp     eax, iLockLevelMaxVeryEasy
0x4299EA: jg      short loc_4299EF
0x4299EC: xor     eax, eax
0x4299EE: retn
0x4299EF: cmp     eax, iLockLevelMaxEasy
0x4299F5: jg      short loc_4299FD
0x4299F7: mov     eax, 1
0x4299FC: retn
0x4299FD: cmp     eax, iLockLevelMaxAverage
0x429A03: jg      short loc_429A0B
0x429A05: mov     eax, 2
0x429A0A: retn
0x429A0B: cmp     eax, iLockLevelMaxHard
0x429A11: jg      short loc_429A19
0x429A13: mov     eax, 3
0x429A18: retn
0x429A19: xor     ecx, ecx
0x429A1B: cmp     eax, iLockLevelMaxVeryHard
0x429A21: setnle  cl
0x429A24: add     ecx, 4
0x429A27: mov     eax, ecx
0x429A29: retn
