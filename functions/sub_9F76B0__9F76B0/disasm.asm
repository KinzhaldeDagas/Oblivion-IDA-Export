0x9F76B0: push    offset aEyeShades; "Eye shades"
0x9F76B5: push    offset aSeyestex; "sEyesTex"
0x9F76BA: mov     ecx, offset stru_B39320; self
0x9F76BF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F76C4: push    offset sub_A22D60; void (__cdecl *)()
0x9F76C9: call    _atexit
0x9F76CE: pop     ecx
0x9F76CF: retn
