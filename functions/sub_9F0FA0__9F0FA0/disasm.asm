0x9F0FA0: push    offset aSDoesNotHaveSu; "%s does not have sufficent disk space a"...
0x9F0FA5: push    offset aSsavegameoutof; "sSaveGameOutOfDiskSpace"
0x9F0FAA: mov     ecx, offset unk_B386D0
0x9F0FAF: call    GameSetting_ConstrAndReg
0x9F0FB4: push    offset sub_A214C0; void (__cdecl *)()
0x9F0FB9: call    _atexit
0x9F0FBE: pop     ecx
0x9F0FBF: retn
