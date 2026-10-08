0x9E7800: push    6; defaultValue
0x9E7802: push    offset aInumberactorsa; "iNumberActorsAllowedToFollowPlayer"
0x9E7807: mov     ecx, offset stru_B36A80; self
0x9E780C: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9E7811: push    offset sub_A1DC20; void (__cdecl *)()
0x9E7816: call    _atexit
0x9E781B: pop     ecx
0x9E781C: retn
