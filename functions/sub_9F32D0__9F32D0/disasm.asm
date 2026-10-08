0x9F32D0: push    offset aSneakAttackFor; "Sneak attack for "
0x9F32D5: push    offset aSsuccessfulsne; "sSuccessfulSneakAttackMain"
0x9F32DA: mov     ecx, 0B38F08h; self
0x9F32DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F32E4: push    offset sub_A22530; void (__cdecl *)()
0x9F32E9: call    _atexit
0x9F32EE: pop     ecx
0x9F32EF: retn
