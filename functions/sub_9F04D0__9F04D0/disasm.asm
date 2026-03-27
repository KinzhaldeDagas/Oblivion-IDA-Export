0x9F04D0: push    offset aPeopleKilled; "People Killed: "
0x9F04D5: push    offset aSmiscnumperson; "sMiscNumPersonKills"
0x9F04DA: mov     ecx, offset sMiscNumPersonKills
0x9F04DF: call    GameSetting_ConstrAndReg
0x9F04E4: push    offset sub_A20F60; void (__cdecl *)()
0x9F04E9: call    _atexit
0x9F04EE: pop     ecx
0x9F04EF: retn
