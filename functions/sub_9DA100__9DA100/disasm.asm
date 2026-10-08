0x9DA100: push    offset aYouCanOnlyCast; "You can only cast Powers once per day"
0x9DA105: push    offset aSmagiccastpowe; "sMagicCastPowerUsed"
0x9DA10A: mov     ecx, 0B3353Ch; self
0x9DA10F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA114: push    offset sub_A17620; void (__cdecl *)()
0x9DA119: call    _atexit
0x9DA11E: pop     ecx
0x9DA11F: retn
