0x506570: mov     eax, [esp+arg_8]
0x506574: push    ebx
0x506575: push    esi
0x506576: mov     esi, [esp+8+arg_18]
0x50657A: push    esi
0x50657B: push    0
0x50657D: push    0
0x50657F: push    eax
0x506580: call    sub_4F5D60
0x506585: add     esp, 10h
0x506588: cmp     byte ptr ds:0B361ACh, 0
0x50658F: mov     bl, al
0x506591: jz      short loc_5065A8
0x506593: fld     qword ptr [esi]
0x506595: sub     esp, 8
0x506598: fstp    [esp+10h+var_10]
0x50659B: push    offset aActorTurningIn; "Actor turning in >> %0.2f"
0x5065A0: call    Interface_ConsolePrint
0x5065A5: add     esp, 0Ch
0x5065A8: pop     esi
0x5065A9: mov     al, bl
0x5065AB: pop     ebx
0x5065AC: retn
