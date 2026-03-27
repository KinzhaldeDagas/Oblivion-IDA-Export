0x9DA100: push    offset aYouCanOnlyCast; "You can only cast Powers once per day"
0x9DA105: push    offset aSmagiccastpowe; "sMagicCastPowerUsed"
0x9DA10A: mov     ecx, offset sMagicCastPowerUsed
0x9DA10F: call    GameSetting_ConstrAndReg
0x9DA114: push    offset sub_A17620; void (__cdecl *)()
0x9DA119: call    _atexit
0x9DA11E: pop     ecx
0x9DA11F: retn
