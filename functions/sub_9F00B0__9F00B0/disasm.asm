0x9F00B0: push    offset aEverythingYouD; "Everything you do is just a bit easier,"...
0x9F00B5: push    offset aSlevelup5; "sLevelUp5"
0x9F00BA: mov     ecx, offset sLevelUp5
0x9F00BF: call    GameSetting_ConstrAndReg
0x9F00C4: push    offset sub_A20D50; void (__cdecl *)()
0x9F00C9: call    _atexit
0x9F00CE: pop     ecx
0x9F00CF: retn
