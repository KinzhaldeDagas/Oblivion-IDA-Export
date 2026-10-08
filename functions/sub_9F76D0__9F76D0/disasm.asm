0x9F76D0: push    offset aNoseShades; "Nose shades"
0x9F76D5: push    offset aSnosetex; "sNoseTex"
0x9F76DA: mov     ecx, offset stru_B39328; self
0x9F76DF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F76E4: push    offset sub_A22D70; void (__cdecl *)()
0x9F76E9: call    _atexit
0x9F76EE: pop     ecx
0x9F76EF: retn
