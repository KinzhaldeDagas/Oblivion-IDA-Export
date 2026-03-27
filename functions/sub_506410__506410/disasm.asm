0x506410: mov     eax, [esp+arg_8]
0x506414: push    ebx
0x506415: push    esi
0x506416: mov     esi, [esp+8+arg_18]
0x50641A: push    esi
0x50641B: push    0
0x50641D: push    0
0x50641F: push    eax
0x506420: call    sub_4F5C90
0x506425: add     esp, 10h
0x506428: cmp     byte ptr ds:0B361ACh, 0
0x50642F: mov     bl, al
0x506431: jz      short loc_506448
0x506433: fld     qword ptr [esi]
0x506435: sub     esp, 8
0x506438: fstp    [esp+10h+var_10]
0x50643B: push    offset aGetwhichserivc; "GetWhichSerivce >> %0.2f"
0x506440: call    Interface_ConsolePrint
0x506445: add     esp, 0Ch
0x506448: pop     esi
0x506449: mov     al, bl
0x50644B: pop     ebx
0x50644C: retn
