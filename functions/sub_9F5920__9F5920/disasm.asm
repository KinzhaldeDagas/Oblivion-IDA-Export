0x9F5920: push    offset aAssignAButtonI; "assign a button in the Controls menu"
0x9F5925: push    offset aSpccontrolst_0; "sPCControlsTextNone"
0x9F592A: mov     ecx, offset stru_B38F20; self
0x9F592F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F5934: push    offset sub_A22560; void (__cdecl *)()
0x9F5939: call    _atexit
0x9F593E: pop     ecx
0x9F593F: retn
