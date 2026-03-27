0x506D80: mov     eax, [esp+arg_8]
0x506D84: push    esi
0x506D85: mov     esi, [esp+4+arg_18]
0x506D89: push    esi
0x506D8A: push    0
0x506D8C: push    0
0x506D8E: push    eax
0x506D8F: call    sub_4F8740
0x506D94: add     esp, 10h
0x506D97: cmp     byte ptr ds:0B361ACh, 0
0x506D9E: jz      short loc_506DB5
0x506DA0: fld     qword ptr [esi]
0x506DA2: sub     esp, 8
0x506DA5: fstp    [esp+0Ch+var_C]
0x506DA8: push    offset aTimeDead0_2f; "time dead >> %0.2f"
0x506DAD: call    Interface_ConsolePrint
0x506DB2: add     esp, 0Ch
0x506DB5: mov     al, 1
0x506DB7: pop     esi
0x506DB8: retn
