0x9F32F0: push    offset aXDamage; "X damage!"
0x9F32F5: push    offset aSsuccessfuls_0; "sSuccessfulSneakAttackEnd"
0x9F32FA: mov     ecx, 0B38F10h; self
0x9F32FF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F3304: push    offset sub_A22540; void (__cdecl *)()
0x9F3309: call    _atexit
0x9F330E: pop     ecx
0x9F330F: retn
