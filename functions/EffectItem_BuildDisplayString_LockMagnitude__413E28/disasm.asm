0x413E28: push    edx; numericLockMagnitude
0x413E29: call    GetLockLevel; Verified numeric lock magnitude to LOCK_LEVEL mapper. Thresholds are iLockLevelMaxVeryEasy, iLockLevelMaxEasy, iLockLevelMaxAverage, iLockLevelMaxHard, and iLockLevelMaxVeryHard; outputs 0..5 map through LockLevelNames to VeryEasy, Easy, Average, Hard, VeryHard, Impossible. Fallout independently uses the matching LOCK_LEVEL names, but this mapping is directly established by Oblivion code and data.
0x413E2E: mov     eax, LockLevelNames[eax*4]
0x413E35: add     esp, 4
0x413E38: cmp     eax, ebx
0x413E3A: jz      short loc_413E40
0x413E3C: mov     eax, [eax]
0x413E3E: jmp     short loc_413E42
0x413E40: xor     eax, eax
0x413E42: mov     ecx, ds:0B334A8h
0x413E48: push    ecx
0x413E49: push    eax
0x413E4A: push    offset aSS_4; " %s %s"
0x413E4F: lea     edx, [esp+0Ch+arg_20]
0x413E53: push    edx
