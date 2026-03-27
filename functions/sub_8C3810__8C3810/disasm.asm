0x8C3810: mov     eax, [esp+arg_4]
0x8C3814: push    esi
0x8C3815: mov     esi, ecx
0x8C3817: mov     ecx, [esp+4+arg_0]
0x8C381B: push    eax
0x8C381C: push    ecx
0x8C381D: mov     ecx, esi
0x8C381F: call    sub_914420
0x8C3824: push    offset stru_BA8380; lpCriticalSection
0x8C3829: mov     dword ptr [esi], offset ??_7hkScaledMoppBvTreeShape@@6B@; const hkScaledMoppBvTreeShape::`vftable'
0x8C382F: call    dword ptr ds:0A2806Ch
0x8C3835: call    dword ptr ds:0A2808Ch
0x8C383B: fld     [esp+4+arg_8]
0x8C383F: mov     ds:0BA83F8h, eax
0x8C3844: mov     eax, 1
0x8C3849: add     ds:0BA83FCh, eax
0x8C384F: fstp    dword ptr [esi+14h]
0x8C3852: sub     ds:0BA83FCh, eax
0x8C3858: jnz     short loc_8C3864
0x8C385A: mov     dword ptr ds:0BA83F8h, 0
0x8C3864: push    offset stru_BA8380; lpCriticalSection
0x8C3869: call    dword ptr ds:0A28074h
0x8C386F: mov     eax, esi
0x8C3871: pop     esi
0x8C3872: retn    0Ch
