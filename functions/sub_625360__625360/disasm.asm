0x625360: push    ecx
0x625361: push    0; a2
0x625363: call    Actor_GetActorBaseForm
0x625368: test    eax, eax
0x62536A: jz      short loc_625387
0x62536C: fld     dword ptr [eax+10Ch]
0x625372: fstp    [esp+4+var_4]
0x625375: fldz
0x625377: fld     [esp+4+var_4]
0x62537A: fucom   st(1)
0x62537C: fnstsw  ax
0x62537E: fstp    st(1)
0x625380: test    ah, 44h
0x625383: jp      short loc_625393
0x625385: fstp    st
0x625387: fld     dword ptr ds:0B3A4C0h
0x62538D: fstp    [esp+4+var_4]
0x625390: fld     [esp+4+var_4]
0x625393: pop     ecx
0x625394: retn
