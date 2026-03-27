0x5B4080: sub     esp, 0Ch
0x5B4083: push    ebx
0x5B4084: push    esi; a3
0x5B4085: push    edi; a3
0x5B4086: mov     esi, ecx
0x5B4088: call    dword ptr ds:0A280D0h
0x5B408E: mov     edi, eax
0x5B4090: mov     eax, [esi+58h]
0x5B4093: cmp     eax, 1
0x5B4096: jnz     loc_5B412C
0x5B409C: mov     eax, [esi+24h]
0x5B409F: cmp     eax, 4
0x5B40A2: jz      short loc_5B40A9
0x5B40A4: cmp     eax, 2
0x5B40A7: jnz     short loc_5B40B0
0x5B40A9: mov     ecx, esi; int
0x5B40AB: call    sub_584390
0x5B40B0: mov     ecx, [esi+28h]
0x5B40B3: mov     ebx, [esi+4]
0x5B40B6: push    0FADh
0x5B40BB: call    Tile_GetFloat
0x5B40C0: fstp    [esp+18h+var_8]
0x5B40C4: push    0FB0h
0x5B40C9: mov     ecx, ebx
0x5B40CB: call    Tile_GetFloat
0x5B40D0: mov     eax, edi
0x5B40D2: sub     eax, [esi+5Ch]
0x5B40D5: test    eax, eax
0x5B40D7: mov     [esp+18h+var_C], eax
0x5B40DB: fild    [esp+18h+var_C]
0x5B40DF: jge     short loc_5B40E7
0x5B40E1: fadd    dword ptr ds:0A2FC78h
0x5B40E7: fmulp   st(1), st
0x5B40E9: fadd    [esp+18h+var_8]
0x5B40ED: fstp    [esp+18h+var_C]
0x5B40F1: fld     [esp+18h+var_C]
0x5B40F5: fld     dword ptr [esi+54h]
0x5B40F8: fcomp   st(1)
0x5B40FA: fnstsw  ax
0x5B40FC: test    ah, 41h
0x5B40FF: jnz     short loc_5B410E
0x5B4101: fstp    st
0x5B4103: fld     dword ptr [esi+54h]
0x5B4106: fstp    [esp+18h+var_C]
0x5B410A: fld     [esp+18h+var_C]
0x5B410E: fld     dword ptr [esi+50h]
0x5B4111: push    ecx
0x5B4112: mov     ecx, [esi+28h]
0x5B4115: fcomp   st(1)
0x5B4117: fnstsw  ax
0x5B4119: test    ah, 41h
0x5B411C: jz      short loc_5B4199
0x5B411E: fstp    st
0x5B4120: mov     dword ptr [esi+58h], 0
0x5B4127: fld     dword ptr [esi+50h]
0x5B412A: jmp     short loc_5B4199
0x5B412C: cmp     eax, 3
0x5B412F: jnz     short loc_5B41A6
0x5B4131: mov     ecx, [esi+28h]
0x5B4134: mov     ebx, [esi+4]
0x5B4137: push    0FADh
0x5B413C: call    Tile_GetFloat
0x5B4141: fstp    [esp+18h+var_8]
0x5B4145: push    0FB0h
0x5B414A: mov     ecx, ebx
0x5B414C: call    Tile_GetFloat
0x5B4151: mov     ecx, edi
0x5B4153: sub     ecx, [esi+5Ch]
0x5B4156: test    ecx, ecx
0x5B4158: mov     [esp+18h+var_C], ecx
0x5B415C: fild    [esp+18h+var_C]
0x5B4160: jge     short loc_5B4168
0x5B4162: fadd    dword ptr ds:0A2FC78h
0x5B4168: fmulp   st(1), st
0x5B416A: fsubr   [esp+18h+var_8]
0x5B416E: fstp    [esp+18h+var_C]
0x5B4172: fld     [esp+18h+var_C]
0x5B4176: fld     dword ptr [esi+54h]
0x5B4179: fcomp   st(1)
0x5B417B: fnstsw  ax
0x5B417D: test    ah, 5
0x5B4180: jnp     short loc_5B4195
0x5B4182: mov     ecx, esi; int
0x5B4184: fstp    st
0x5B4186: mov     dword ptr [esi+58h], 2
0x5B418D: call    sub_584740
0x5B4192: fld     dword ptr [esi+54h]
0x5B4195: push    ecx
0x5B4196: mov     ecx, [esi+28h]; this
0x5B4199: fstp    [esp+1Ch+a2]; a3
0x5B419C: push    0FADh; a2
0x5B41A1: call    Tile_SetFloat
0x5B41A6: call    InterfaceManager_IsMenuMode
0x5B41AB: test    al, al
0x5B41AD: jnz     short loc_5B41D1
0x5B41AF: mov     ecx, esi; int
0x5B41B1: mov     dword ptr [esi+58h], 2
0x5B41B8: call    sub_584740
0x5B41BD: fld     dword ptr [esi+54h]
0x5B41C0: push    ecx
0x5B41C1: mov     ecx, [esi+28h]; this
0x5B41C4: fstp    [esp+1Ch+a2]; a3
0x5B41C7: push    0FADh; a2
0x5B41CC: call    Tile_SetFloat
0x5B41D1: mov     [esi+5Ch], edi
0x5B41D4: pop     edi
0x5B41D5: pop     esi
0x5B41D6: pop     ebx
0x5B41D7: add     esp, 0Ch
0x5B41DA: retn
