0x42ACD0: sub     esp, 8; Verified: computes the PlayerCharacter-scaled lock magnitude from ExtraLockData, applies the iLockLevelMaxVeryEasy/Easy/Average/Hard/VeryHard thresholds, and returns a LOCK_LEVEL value 0..5. Its direct caller indexes LockLevelNames with this result to display the lock category.
0x42ACD3: test    byte ptr [ecx+8], 4
0x42ACD7: movsx   eax, byte ptr [ecx]
0x42ACDA: mov     [esp+8+var_4], eax
0x42ACDE: jz      short loc_42AD0D
0x42ACE0: mov     ecx, dword ptr reference
0x42ACE6: call    Actor_GetLevel
0x42ACEB: movzx   eax, ax
0x42ACEE: mov     [esp+8+var_8], eax
0x42ACF1: fild    [esp+8+var_8]
0x42ACF4: fmul    dword ptr ds:0B33880h
0x42ACFA: fiadd   [esp+8+var_4]
0x42ACFE: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x42AD03: cmp     eax, 63h ; 'c'
0x42AD06: jle     short loc_42AD0D
0x42AD08: mov     eax, 63h ; 'c'
0x42AD0D: cmp     eax, ds:0B338B8h
0x42AD13: jg      short loc_42AD1B
0x42AD15: xor     eax, eax
0x42AD17: add     esp, 8
0x42AD1A: retn
0x42AD1B: cmp     eax, ds:0B338C0h
0x42AD21: jg      short loc_42AD2C
0x42AD23: mov     eax, 1
0x42AD28: add     esp, 8
0x42AD2B: retn
0x42AD2C: cmp     eax, ds:0B338C8h
0x42AD32: jg      short loc_42AD3D
0x42AD34: mov     eax, 2
0x42AD39: add     esp, 8
0x42AD3C: retn
0x42AD3D: cmp     eax, ds:0B338D0h
0x42AD43: jg      short loc_42AD4E
0x42AD45: mov     eax, 3
0x42AD4A: add     esp, 8
0x42AD4D: retn
0x42AD4E: xor     ecx, ecx
0x42AD50: cmp     eax, ds:0B338D8h
0x42AD56: setnle  cl
0x42AD59: add     ecx, 4
0x42AD5C: mov     eax, ecx
0x42AD5E: add     esp, 8
0x42AD61: retn
