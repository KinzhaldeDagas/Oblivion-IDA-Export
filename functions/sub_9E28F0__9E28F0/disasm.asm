0x9E28F0: push    offset aThisDoorLeadsN; "This door leads nowhere."
0x9E28F5: push    offset aSrandomdoortel; "sRandomDoorTeleportFailureMessage"
0x9E28FA: mov     ecx, offset dword_B35B34
0x9E28FF: call    GameSetting_ConstrAndReg
0x9E2904: push    offset sub_A1B730; void (__cdecl *)()
0x9E2909: call    _atexit
0x9E290E: pop     ecx
0x9E290F: retn
