0x9DF660: push    offset aWitchesFestiva; "Witches' Festival"
0x9DF665: push    offset aSholidaywitche; "sHolidayWitchesFestival"
0x9DF66A: mov     ecx, 0B351D4h; self
0x9DF66F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DF674: push    offset sub_A1A0F0; void (__cdecl *)()
0x9DF679: call    _atexit
0x9DF67E: pop     ecx
0x9DF67F: retn
