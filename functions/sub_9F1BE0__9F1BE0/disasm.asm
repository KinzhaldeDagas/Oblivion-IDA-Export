0x9F1BE0: push    offset aCongratulati_0; "Congratulations!  You have created a ne"...
0x9F1BE5: push    offset aSenchantmentsu; "sEnchantmentSuccess"
0x9F1BEA: mov     ecx, 0B389E0h; self
0x9F1BEF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1BF4: push    offset sub_A21AE0; void (__cdecl *)()
0x9F1BF9: call    _atexit
0x9F1BFE: pop     ecx
0x9F1BFF: retn
