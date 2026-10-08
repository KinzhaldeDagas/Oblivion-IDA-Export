0x429990: sub     esp, 8; Verified player-scaled lock level calculation. This reads ExtraLockData.level as a signed byte; when flags bit 0x04 is set it adds PlayerCharacter::GetLevel() multiplied by GameSettingFloat fLeveledLockMult and clamps to 99. Fallout's REFR_LOCK::GetLevel accepts an owner reference and uses that reference's calculated level when non-null; Oblivion always uses global PlayerCharacter reference. This is a direct implementation divergence.
0x429993: test    byte ptr [ecx+8], 4
0x429997: movsx   eax, byte ptr [ecx]
0x42999A: mov     [esp+8+var_4], eax
0x42999E: jz      short loc_4299CD; XLOC bit2 naming cross-check: ExtraLock leveling adjustment tests flags byte+8 &4 at0x42999E and when set derives difficulty from lock level plus Actor level times the leveled-lock global. This corroborates the loaded flag name leveled_lock; bit0 is independently proven by ExtraLock_IsLocked0x428E70. Other byte bits remain unnamed/unknown.
0x4299A0: mov     ecx, dword ptr reference
0x4299A6: call    Actor_GetLevel
0x4299AB: movzx   eax, ax
0x4299AE: mov     [esp+8+var_8], eax
0x4299B1: fild    [esp+8+var_8]
0x4299B4: fmul    dword ptr ds:0B33880h
0x4299BA: fiadd   [esp+8+var_4]
0x4299BE: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x4299C3: cmp     eax, 63h ; 'c'
0x4299C6: jle     short loc_4299CD
0x4299C8: mov     eax, 63h ; 'c'
0x4299CD: add     esp, 8
0x4299D0: retn
