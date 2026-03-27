0x506D00: mov     eax, [esp+arg_8]
0x506D04: push    esi
0x506D05: mov     esi, [esp+4+arg_18]
0x506D09: push    esi
0x506D0A: push    0
0x506D0C: push    0
0x506D0E: push    eax
0x506D0F: call    sub_4F5E30
0x506D14: add     esp, 10h
0x506D17: cmp     byte ptr ds:0B361ACh, 0
0x506D1E: jz      short loc_506D35
0x506D20: fld     qword ptr [esi]
0x506D22: sub     esp, 8
0x506D25: fstp    [esp+0Ch+var_C]
0x506D28: push    offset aIsactor0_2f; "IsActor >> %0.2f"
0x506D2D: call    Interface_ConsolePrint
0x506D32: add     esp, 0Ch
0x506D35: mov     al, 1
0x506D37: pop     esi
0x506D38: retn
