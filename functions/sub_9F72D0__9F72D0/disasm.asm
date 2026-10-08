0x9F72D0: push    offset aSkinFlushedPal; "Skin flushed/pale"
0x9F72D5: push    offset aSskinflushed; "sSkinflushed"
0x9F72DA: mov     ecx, offset stru_B39228; self
0x9F72DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F72E4: push    offset sub_A22B70; void (__cdecl *)()
0x9F72E9: call    _atexit
0x9F72EE: pop     ecx
0x9F72EF: retn
