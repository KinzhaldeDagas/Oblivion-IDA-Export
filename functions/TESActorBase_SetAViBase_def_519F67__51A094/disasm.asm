0x51A094: fild    [esp+arg_8]; jumptable 00519F67 default case
0x51A098: push    ecx
0x51A099: lea     ecx, [esi+0D0h]
0x51A09F: fstp    [esp+4+var_4]; float
0x51A0A2: push    eax; int
0x51A0A3: call    AVCollection_ModAV
0x51A0A8: push    10000000h; a2
0x51A0AD: mov     ecx, esi; this
0x51A0AF: call    TESForm_MarkAsModified
0x51A0B4: pop     esi; jumptable 00519F67 cases 11-32,37-39
0x51A0B5: retn    8
