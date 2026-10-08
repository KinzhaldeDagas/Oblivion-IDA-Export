0x9F13A0: push    offset aSaveSuccessful; "Save successful."
0x9F13A5: push    offset aSsavesuccessfu; "sSaveSuccessful"
0x9F13AA: mov     ecx, offset stru_B387D0; self
0x9F13AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F13B4: push    offset sub_A216C0; void (__cdecl *)()
0x9F13B9: call    _atexit
0x9F13BE: pop     ecx
0x9F13BF: retn
