0x5E0340: push    ecx
0x5E0341: push    esi
0x5E0342: mov     esi, ecx
0x5E0344: mov     ecx, offset TimeGlobals
0x5E0349: call    TimeGlobals_GetGameHour
0x5E034E: fstp    [esp+8+var_4]
0x5E0352: fld     [esp+8+var_4]
0x5E0356: mov     eax, [esp+8+arg_0]
0x5E035A: sub     esp, 8
0x5E035D: fstp    [esp+10h+var_C]; float
0x5E0361: fld     [esp+10h+arg_4]
0x5E0365: fstp    [esp+10h+var_10]; float
0x5E0368: push    eax; int
0x5E0369: push    esi; int
0x5E036A: call    sub_4686C0
0x5E036F: add     esp, 10h
0x5E0372: pop     esi
0x5E0373: pop     ecx
