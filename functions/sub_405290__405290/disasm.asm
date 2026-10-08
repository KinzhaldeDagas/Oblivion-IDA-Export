0x405290: cmp     byte ptr [esp+arg_0], 0
0x405295: jz      short loc_4052AA
0x405297: call    InterfaceManager_IsMenuMode; InterfaceManager_IsMenuMode. For a next-frame encounter handler, use this as a conservative gate: if true, leave pending encounter queued until menus are closed so spawn/combat starts in world update context.
0x40529C: test    al, al
0x40529E: jnz     short loc_4052A7
0x4052A0: fld     dword ptr ds:0B33E9Ch
0x4052A6: retn
0x4052A7: fldz
0x4052A9: retn
0x4052AA: cmp     [esp+arg_4], 0
0x4052AF: jz      short loc_4052CE
0x4052B1: mov     ecx, 0B332E0h
0x4052B6: call    TimeGlobals_GetGameHour
0x4052BB: fld     ds:dbl_A2FCC8
0x4052C1: fmul    st(1), st
0x4052C3: fmulp   st(1), st
0x4052C5: fstp    [esp+arg_0]
0x4052C9: fld     [esp+arg_0]
0x4052CD: retn
0x4052CE: mov     eax, ds:0B33EA0h
0x4052D3: fild    dword ptr ds:0B33EA0h
0x4052D9: test    eax, eax
0x4052DB: jge     short locret_4052E3
0x4052DD: fadd    ds:flt_A2FC78
0x4052E3: retn
