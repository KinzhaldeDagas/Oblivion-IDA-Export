0x9F1440: push    offset aNewContentHasB; "New content has been added.  You will n"...
0x9F1445: push    offset aSrestarttousen; "sRestartToUseNewContent"
0x9F144A: mov     ecx, offset stru_B387F8; self
0x9F144F: call    GameSetting_ConstrAndReg; Verified GameSetting_ConstrAndReg stores setting value/default at object +0 and name key at +4, rejects duplicate names through g_GameSettingsByName, and inserts the key-to-setting mapping. String blood-particle Extra registrations therefore enter the generic named setting collection.
0x9F1454: push    offset sub_A21710; void (__cdecl *)()
0x9F1459: call    _atexit
0x9F145E: pop     ecx
0x9F145F: retn
