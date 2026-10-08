0x9DA120: push    offset aYouAlreadyHave; "You already have that kind of Bound Ite"...
0x9DA125: push    offset aSmagiccastmult; "sMagicCastMultipleBoundEffects"
0x9DA12A: mov     ecx, 0B33544h; self
0x9DA12F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9DA134: push    offset sub_A17630; void (__cdecl *)()
0x9DA139: call    _atexit
0x9DA13E: pop     ecx
0x9DA13F: retn
