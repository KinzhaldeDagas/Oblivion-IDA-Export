0x506D40: mov     eax, [esp+arg_8]
0x506D44: push    esi
0x506D45: mov     esi, [esp+4+arg_18]
0x506D49: push    esi
0x506D4A: push    0
0x506D4C: push    0
0x506D4E: push    eax
0x506D4F: call    sub_4F5E60
0x506D54: add     esp, 10h
0x506D57: cmp     byte ptr ds:0B361ACh, 0
0x506D5E: jz      short loc_506D75
0x506D60: fld     qword ptr [esi]
0x506D62: sub     esp, 8
0x506D65: fstp    [esp+0Ch+var_C]
0x506D68: push    offset aPlayerIsMoving; "Player is moving to new area >> %0.2f"
0x506D6D: call    Interface_ConsolePrint
0x506D72: add     esp, 0Ch
0x506D75: mov     al, 1
0x506D77: pop     esi
0x506D78: retn
