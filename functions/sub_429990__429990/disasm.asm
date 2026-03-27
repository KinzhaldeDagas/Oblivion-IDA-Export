0x429990: sub     esp, 8
0x429993: test    byte ptr [ecx+8], 4
0x429997: movsx   eax, byte ptr [ecx]
0x42999A: mov     [esp+8+var_4], eax
0x42999E: jz      short loc_4299CD
0x4299A0: mov     ecx, TESDataHandler_g_PlayerRef
0x4299A6: call    Actor_GetLevel
0x4299AB: movzx   eax, ax
0x4299AE: mov     [esp+8+var_8], eax
0x4299B1: fild    [esp+8+var_8]
0x4299B4: fmul    fLeveledLockMult
0x4299BA: fiadd   [esp+8+var_4]
0x4299BE: call    Double_To_SInt32
0x4299C3: cmp     eax, 63h ; 'c'
0x4299C6: jle     short loc_4299CD
0x4299C8: mov     eax, 63h ; 'c'
0x4299CD: add     esp, 8
0x4299D0: retn
