0x42ACD0: sub     esp, 8
0x42ACD3: test    byte ptr [ecx+8], 4
0x42ACD7: movsx   eax, byte ptr [ecx]
0x42ACDA: mov     [esp+8+var_4], eax
0x42ACDE: jz      short loc_42AD0D
0x42ACE0: mov     ecx, TESDataHandler_g_PlayerRef
0x42ACE6: call    Actor_GetLevel
0x42ACEB: movzx   eax, ax
0x42ACEE: mov     [esp+8+var_8], eax
0x42ACF1: fild    [esp+8+var_8]
0x42ACF4: fmul    fLeveledLockMult
0x42ACFA: fiadd   [esp+8+var_4]
0x42ACFE: call    Double_To_SInt32
0x42AD03: cmp     eax, 63h ; 'c'
0x42AD06: jle     short loc_42AD0D
0x42AD08: mov     eax, 63h ; 'c'
0x42AD0D: cmp     eax, iLockLevelMaxVeryEasy
0x42AD13: jg      short loc_42AD1B
0x42AD15: xor     eax, eax
0x42AD17: add     esp, 8
0x42AD1A: retn
0x42AD1B: cmp     eax, iLockLevelMaxEasy
0x42AD21: jg      short loc_42AD2C
0x42AD23: mov     eax, 1
0x42AD28: add     esp, 8
0x42AD2B: retn
0x42AD2C: cmp     eax, iLockLevelMaxAverage
0x42AD32: jg      short loc_42AD3D
0x42AD34: mov     eax, 2
0x42AD39: add     esp, 8
0x42AD3C: retn
0x42AD3D: cmp     eax, iLockLevelMaxHard
0x42AD43: jg      short loc_42AD4E
0x42AD45: mov     eax, 3
0x42AD4A: add     esp, 8
0x42AD4D: retn
0x42AD4E: xor     ecx, ecx
0x42AD50: cmp     eax, iLockLevelMaxVeryHard
0x42AD56: setnle  cl
0x42AD59: add     ecx, 4
0x42AD5C: mov     eax, ecx
0x42AD5E: add     esp, 8
0x42AD61: retn
