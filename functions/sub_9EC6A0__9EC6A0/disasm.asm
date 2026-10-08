0x9EC6A0: push    0FFFFFFFEh; defaultValue
0x9EC6A2: push    offset aIpersuasiond_0; "iPersuasionDemandDisposition"
0x9EC6A7: mov     ecx, 0B378A0h; self
0x9EC6AC: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9EC6B1: push    offset sub_A1F860; void (__cdecl *)()
0x9EC6B6: call    _atexit
0x9EC6BB: pop     ecx
0x9EC6BC: retn
