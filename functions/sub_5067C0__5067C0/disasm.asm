0x5067C0: mov     eax, [esp+arg_8]
0x5067C4: push    ebx
0x5067C5: push    esi
0x5067C6: mov     esi, [esp+8+arg_18]
0x5067CA: push    esi
0x5067CB: push    0
0x5067CD: push    0
0x5067CF: push    eax
0x5067D0: call    sub_4F8720
0x5067D5: add     esp, 10h
0x5067D8: cmp     byte ptr ds:0B361ACh, 0
0x5067DF: mov     bl, al
0x5067E1: jz      short loc_506806
0x5067E3: fldz
0x5067E5: fcomp   qword ptr [esi]
0x5067E7: fnstsw  ax
0x5067E9: test    ah, 44h
0x5067EC: mov     eax, offset aActorIgnoresFr; "Actor ignores friendly hits"
0x5067F1: jp      short loc_5067F8
0x5067F3: mov     eax, offset aActorCountsFri; "Actor counts friendly hits"
0x5067F8: push    eax
0x5067F9: push    offset aS; "%s"
0x5067FE: call    Interface_ConsolePrint
0x506803: add     esp, 8
0x506806: pop     esi
0x506807: mov     al, bl
0x506809: pop     ebx
0x50680A: retn
