0x506530: mov     eax, [esp+arg_8]
0x506534: push    ebx
0x506535: push    esi
0x506536: mov     esi, [esp+8+arg_18]
0x50653A: push    esi
0x50653B: push    0
0x50653D: push    0
0x50653F: push    eax
0x506540: call    sub_4F86A0
0x506545: add     esp, 10h
0x506548: cmp     byte ptr ds:0B361ACh, 0
0x50654F: mov     bl, al
0x506551: jz      short loc_506568
0x506553: fld     qword ptr [esi]
0x506555: sub     esp, 8
0x506558: fstp    [esp+10h+var_10]
0x50655B: push    offset aActorIsInLava0; "Actor is in lava >> %0.2f"
0x506560: call    Interface_ConsolePrint
0x506565: add     esp, 0Ch
0x506568: pop     esi
0x506569: mov     al, bl
0x50656B: pop     ebx
0x50656C: retn
