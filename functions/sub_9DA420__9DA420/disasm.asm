0x9DA420: push    offset aTarget_0; "Target"
0x9DA425: push    offset aSmagicrangetar; "sMagicRangeTarget"
0x9DA42A: mov     ecx, 0B33664h; self
0x9DA42F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA434: push    offset sub_A177B0; void (__cdecl *)()
0x9DA439: call    _atexit
0x9DA43E: pop     ecx
0x9DA43F: retn
