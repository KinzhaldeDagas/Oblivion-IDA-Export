0x65FA90: push    ecx
0x65FA91: mov     eax, [esp+4+arg_0]
0x65FA95: fldz
0x65FA97: push    esi
0x65FA98: fstp    [esp+8+var_4]
0x65FA9C: mov     esi, ecx
0x65FA9E: lea     ecx, [eax-0Ch]
0x65FAA1: cmp     ecx, 14h
0x65FAA4: ja      short loc_65FABF
0x65FAA6: push    eax
0x65FAA7: push    2
0x65FAA9: call    ActorValue_GetGroupOffsetFromAV
0x65FAAE: movsx   edx, al
0x65FAB1: add     esp, 8
0x65FAB4: fld     dword ptr [esi+edx*4+130h]
0x65FABB: fstp    [esp+8+var_4]
0x65FABF: fld     [esp+8+var_4]
0x65FAC3: pop     esi
0x65FAC4: pop     ecx
0x65FAC5: retn    4
