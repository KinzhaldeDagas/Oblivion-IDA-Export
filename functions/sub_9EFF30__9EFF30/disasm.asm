0x9EFF30: push    offset aWasEquippedOnT; "was equipped on the player"
0x9EFF35: push    offset aSequipitemonpl; "sEquipItemOnPlayer"
0x9EFF3A: mov     ecx, offset stru_B382B8; self
0x9EFF3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EFF44: push    offset sub_A20C90; void (__cdecl *)()
0x9EFF49: call    _atexit
0x9EFF4E: pop     ecx
0x9EFF4F: retn
