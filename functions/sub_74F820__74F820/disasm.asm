0x74F820: fld     dword ptr ds:0A7DEB4h
0x74F826: fchs
0x74F828: fstp    dword ptr [ecx+50h]
0x74F82B: jmp     NiTimeController_Deactivate; Clears active flag bit 3, invalidates last application time +0x20, and for APP_INIT timing (bit 0) also invalidates start time +0x1C.
