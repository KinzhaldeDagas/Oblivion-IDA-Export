0x9F0F80: push    offset aThereWasAnErro; "There was an error accessing the device"...
0x9F0F85: push    offset aSsavegamedevic; "sSaveGameDeviceError"
0x9F0F8A: mov     ecx, offset unk_B386C8
0x9F0F8F: call    GameSetting_ConstrAndReg
0x9F0F94: push    offset sub_A214B0; void (__cdecl *)()
0x9F0F99: call    _atexit
0x9F0F9E: pop     ecx
0x9F0F9F: retn
