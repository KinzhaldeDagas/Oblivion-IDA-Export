0x9F6830: push    offset aFace_0; "Face"
0x9F6835: push    offset aSface; "sFace"
0x9F683A: mov     ecx, offset stru_B38F80; self
0x9F683F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F6844: push    offset sub_A22620; void (__cdecl *)()
0x9F6849: call    _atexit
0x9F684E: pop     ecx
0x9F684F: retn
