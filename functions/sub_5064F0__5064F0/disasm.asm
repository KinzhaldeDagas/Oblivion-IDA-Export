0x5064F0: mov     eax, [esp+arg_8]
0x5064F4: push    ebx
0x5064F5: push    esi
0x5064F6: mov     esi, [esp+8+arg_18]
0x5064FA: push    esi
0x5064FB: push    0
0x5064FD: push    0
0x5064FF: push    eax
0x506500: call    sub_4F5D20
0x506505: add     esp, 10h
0x506508: cmp     byte ptr ds:0B361ACh, 0
0x50650F: mov     bl, al
0x506511: jz      short loc_506528
0x506513: fld     qword ptr [esi]
0x506515: sub     esp, 8
0x506518: fstp    [esp+10h+var_10]
0x50651B: push    offset aActorPlayersLa; "Actor players last ridden horse >> %0.2"...
0x506520: call    Interface_ConsolePrint
0x506525: add     esp, 0Ch
0x506528: pop     esi
0x506529: mov     al, bl
0x50652B: pop     ebx
0x50652C: retn
