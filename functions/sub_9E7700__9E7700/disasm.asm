0x9E7700: push    32h ; '2'
0x9E7702: push    offset aIalertagressio; "iAlertAgressionMin"
0x9E7707: mov     ecx, offset unk_B36A48
0x9E770C: call    GameSetting_ConstrAndReg
0x9E7711: push    offset sub_A1DBB0; void (__cdecl *)()
0x9E7716: call    _atexit
0x9E771B: pop     ecx
0x9E771C: retn
