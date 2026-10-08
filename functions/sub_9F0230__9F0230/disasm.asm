0x9F0230: push    offset aLifeIsnTOver_Y; "Life isn't over. You can still get smar"...
0x9F0235: push    offset aSlevelup17; "sLevelUp17"
0x9F023A: mov     ecx, offset stru_B38378; self
0x9F023F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F0244: push    offset sub_A20E10; void (__cdecl *)()
0x9F0249: call    _atexit
0x9F024E: pop     ecx
0x9F024F: retn
