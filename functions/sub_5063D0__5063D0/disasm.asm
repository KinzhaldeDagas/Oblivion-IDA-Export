0x5063D0: mov     eax, [esp+arg_8]
0x5063D4: push    ebx
0x5063D5: push    esi
0x5063D6: mov     esi, [esp+8+arg_18]
0x5063DA: push    esi
0x5063DB: push    0
0x5063DD: push    0
0x5063DF: push    eax
0x5063E0: call    sub_4F5C50
0x5063E5: add     esp, 10h
0x5063E8: cmp     byte ptr ds:0B361ACh, 0
0x5063EF: mov     bl, al
0x5063F1: jz      short loc_506408
0x5063F3: fld     qword ptr [esi]
0x5063F5: sub     esp, 8
0x5063F8: fstp    [esp+10h+var_10]
0x5063FB: push    offset aGetnorumors0_2; "GetNoRumors >> %0.2f"
0x506400: call    Interface_ConsolePrint
0x506405: add     esp, 0Ch
0x506408: pop     esi
0x506409: mov     al, bl
0x50640B: pop     ebx
0x50640C: retn
