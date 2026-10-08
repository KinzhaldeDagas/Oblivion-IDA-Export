0x9DA4A0: push    offset off_A349F0; defaultValue
0x9DA4A5: push    offset aSmagicprojec_2; "sMagicProjectileTypeFog"
0x9DA4AA: mov     ecx, 0B33684h; self
0x9DA4AF: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA4B4: push    offset sub_A177F0; void (__cdecl *)()
0x9DA4B9: call    _atexit
0x9DA4BE: pop     ecx
0x9DA4BF: retn
