0x9F9E80: push    offset aRestorationDes; "Restoration Description"
0x9F9E85: push    offset aSskilldescrest; "sSkillDescRestoration"
0x9F9E8A: mov     ecx, offset unk_B3A23C
0x9F9E8F: call    GameSetting_ConstrAndReg
0x9F9E94: push    offset sub_A23CB0; void (__cdecl *)()
0x9F9E99: call    _atexit
0x9F9E9E: pop     ecx
0x9F9E9F: retn
