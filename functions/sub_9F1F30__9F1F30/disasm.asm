0x9F1F30: push    offset aYourHeavyArm_0; "Your heavy armor is causing you to sink"...
0x9F1F35: push    offset aSheavyarmorsin; "sHeavyArmorSink"
0x9F1F3A: mov     ecx, offset stru_B38A58; self
0x9F1F3F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1F44: push    offset sub_A21BD0; void (__cdecl *)()
0x9F1F49: call    _atexit
0x9F1F4E: pop     ecx
0x9F1F4F: retn
