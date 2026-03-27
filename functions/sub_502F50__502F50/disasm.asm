0x502F50: mov     eax, [esp+arg_18]
0x502F54: mov     ecx, [esp+arg_8]
0x502F58: push    eax
0x502F59: push    0
0x502F5B: push    0
0x502F5D: push    ecx
0x502F5E: call    Cmd_GetcurrentWeatherPercent
0x502F63: add     esp, 10h
0x502F66: retn
