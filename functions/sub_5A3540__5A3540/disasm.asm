0x5A3540: sub     esp, 8
0x5A3543: push    3FCh
0x5A3548: call    Menu_GetOpenMenuTile
0x5A354D: add     esp, 4
0x5A3550: test    eax, eax
0x5A3552: jz      short loc_5A355E
0x5A3554: mov     edx, [eax]
0x5A3556: mov     ecx, eax
0x5A3558: mov     eax, [edx]
0x5A355A: push    1
0x5A355C: call    eax
0x5A355E: push    ebx; a3
0x5A355F: push    esi; a3
0x5A3560: push    edi; a3
0x5A3561: push    1; arg1
0x5A3563: push    0; canCreate
0x5A3565: call    InterfaceManager_GetSingleton
0x5A356A: add     esp, 8
0x5A356D: mov     esi, eax
0x5A356F: call    InterfaceManager_GetDepth
0x5A3574: fstp    [esp+14h+var_8]; a3
0x5A3578: mov     ecx, [esi+68h]; TileWindow *
0x5A357B: push    offset aDataMenusOpt_4; "Data\\Menus\\Options\\gameplay_menu.xml"
0x5A3580: call    Menu_LoadXML
0x5A3585: mov     edi, eax
0x5A3587: mov     ecx, edi
0x5A3589: call    Tile_GetParentMenu
0x5A358E: mov     ebx, eax
0x5A3590: test    ebx, ebx
0x5A3592: jz      loc_5A3801
0x5A3598: mov     edx, [ebx]
0x5A359A: mov     eax, [edx+34h]
0x5A359D: mov     ecx, ebx
0x5A359F: call    eax
0x5A35A1: cmp     eax, 3FCh
0x5A35A6: jnz     loc_5A37F1
0x5A35AC: push    0; int
0x5A35AE: push    offset ??_R0?AVTileMenu@@@8; struct TypeDescriptor *
0x5A35B3: push    offset ??_R0?AVTile@@@8; struct _s_RTTICompleteObjectLocator *
0x5A35B8: push    0; int
0x5A35BA: push    edi; void *
0x5A35BB: call    OblivionDynamicCast
0x5A35C0: add     esp, 14h
0x5A35C3: push    eax
0x5A35C4: mov     ecx, ebx
0x5A35C6: call    Menu_SetTileMenu
0x5A35CB: push    0; int
0x5A35CD: push    offset ??_R0?AVGameplayMenu@@@8; struct TypeDescriptor *
0x5A35D2: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5A35D7: push    0; int
0x5A35D9: push    ebx; void *
0x5A35DA: call    OblivionDynamicCast
0x5A35DF: mov     esi, eax
0x5A35E1: add     esp, 14h
0x5A35E4: mov     ecx, esi
0x5A35E6: call    sub_5A3340
0x5A35EB: test    al, al
0x5A35ED: jnz     short loc_5A3605
0x5A35EF: push    offset aGameplayMenuCr; "Gameplay Menu Creation Failed... Are yo"...
0x5A35F4: call    PrintError
0x5A35F9: add     esp, 4
0x5A35FC: pop     edi
0x5A35FD: pop     esi
0x5A35FE: xor     al, al
0x5A3600: pop     ebx
0x5A3601: add     esp, 8
0x5A3604: retn
0x5A3605: push    0FA5h
0x5A360A: mov     ecx, edi
0x5A360C: call    Tile_GetFloat
0x5A3611: fcomp   dword ptr ds:0A69770h
0x5A3617: fnstsw  ax
0x5A3619: test    ah, 44h
0x5A361C: jnp     short loc_5A3637
0x5A361E: push    0FA5h
0x5A3623: mov     ecx, edi
0x5A3625: call    Tile_GetFloat
0x5A362A: fcomp   qword ptr ds:0A69778h
0x5A3630: fnstsw  ax
0x5A3632: test    ah, 44h
0x5A3635: jp      short loc_5A364B
0x5A3637: fld     [esp+14h+var_8]
0x5A363B: push    ecx
0x5A363C: fstp    [esp+18h+var_18]; a3
0x5A363F: push    0FABh; a2
0x5A3644: mov     ecx, edi; this
0x5A3646: call    Tile_SetFloat
0x5A364B: fld     dword ptr ds:0B37B78h
0x5A3651: push    ecx
0x5A3652: fld     dword ptr ds:0B37B70h
0x5A3658: mov     ecx, [esi+28h]; this
0x5A365B: fld     st
0x5A365D: fsubp   st(2), st
0x5A365F: fxch    st(1)
0x5A3661: fstp    [esp+18h+var_8]; a3
0x5A3665: fstp    [esp+18h+var_18]; a3
0x5A3668: push    0FAFh; a2
0x5A366D: call    Tile_SetFloat
0x5A3672: fld     dword ptr ds:0B37B78h
0x5A3678: push    ecx
0x5A3679: mov     ecx, [esi+28h]; this
0x5A367C: fstp    [esp+18h+var_18]; a3
0x5A367F: push    0FB0h; a2
0x5A3684: call    Tile_SetFloat
0x5A3689: fld     [esp+14h+var_8]
0x5A368D: fdiv    qword ptr ds:0A309F0h
0x5A3693: push    ecx
0x5A3694: mov     ecx, [esi+28h]; this
0x5A3697: fstp    [esp+18h+var_4]
0x5A369B: fld     [esp+18h+var_4]
0x5A369F: fstp    [esp+18h+var_18]; a3
0x5A36A2: push    0FB1h; a2
0x5A36A7: call    Tile_SetFloat
0x5A36AC: fld     [esp+14h+var_8]
0x5A36B0: fmul    qword ptr ds:0A3C770h
0x5A36B6: push    ecx
0x5A36B7: mov     ecx, [esi+28h]; this
0x5A36BA: fstp    [esp+18h+var_4]
0x5A36BE: fld     [esp+18h+var_4]
0x5A36C2: fstp    [esp+18h+var_18]; a3
0x5A36C5: push    0FB2h; a2
0x5A36CA: call    Tile_SetFloat
0x5A36CF: push    ecx
0x5A36D0: mov     ecx, ds:0B333C4h
0x5A36D6: fld     dword ptr [ecx+734h]
0x5A36DC: mov     ecx, [esi+28h]; this
0x5A36DF: fstp    [esp+18h+var_18]; a3
0x5A36E2: push    0FB3h; a2
0x5A36E7: call    Tile_SetFloat
0x5A36EC: fldz
0x5A36EE: push    ecx
0x5A36EF: fstp    [esp+18h+var_18]; a3
0x5A36F2: mov     ecx, [esi+28h]; this
0x5A36F5: push    0FB3h; a2
0x5A36FA: call    Tile_SetFloat
0x5A36FF: cmp     byte ptr ds:0B13200h, 0
0x5A3706: mov     ecx, [esi+34h]
0x5A3709: jz      short loc_5A3714
0x5A370B: mov     edx, ds:0B38DA0h
0x5A3711: push    edx
0x5A3712: jmp     short loc_5A371A
0x5A3714: mov     eax, ds:0B38DA8h
0x5A3719: push    eax
0x5A371A: push    0FDEh
0x5A371F: call    Tile_SetString
0x5A3724: cmp     byte ptr ds:0B13208h, 0
0x5A372B: jz      short loc_5A3736
0x5A372D: mov     ecx, ds:0B38DA0h
0x5A3733: push    ecx
0x5A3734: jmp     short loc_5A373D
0x5A3736: mov     edx, ds:0B38DA8h
0x5A373C: push    edx
0x5A373D: mov     ecx, [esi+30h]
0x5A3740: push    0FDEh
0x5A3745: call    Tile_SetString
0x5A374A: cmp     byte ptr ds:0B13210h, 0
0x5A3751: jz      short loc_5A375B
0x5A3753: mov     eax, ds:0B38DA0h
0x5A3758: push    eax
0x5A3759: jmp     short loc_5A3762
0x5A375B: mov     ecx, ds:0B38DA8h
0x5A3761: push    ecx
0x5A3762: mov     ecx, [esi+38h]
0x5A3765: push    0FDEh
0x5A376A: call    Tile_SetString
0x5A376F: cmp     byte ptr ds:0B13218h, 0
0x5A3776: mov     ecx, [esi+3Ch]
0x5A3779: jz      short loc_5A3784
0x5A377B: mov     edx, ds:0B38DA0h
0x5A3781: push    edx
0x5A3782: jmp     short loc_5A378A
0x5A3784: mov     eax, ds:0B38DA8h
0x5A3789: push    eax
0x5A378A: push    0FDEh
0x5A378F: call    Tile_SetString
0x5A3794: cmp     byte ptr ds:0B13220h, 0
0x5A379B: jz      short loc_5A37A6
0x5A379D: mov     ecx, ds:0B38DA0h
0x5A37A3: push    ecx
0x5A37A4: jmp     short loc_5A37AD
0x5A37A6: mov     edx, ds:0B38DA8h
0x5A37AC: push    edx
0x5A37AD: mov     ecx, [esi+40h]
0x5A37B0: push    0FDEh
0x5A37B5: call    Tile_SetString
0x5A37BA: cmp     byte ptr ds:0B13228h, 0
0x5A37C1: jz      short loc_5A37CB
0x5A37C3: mov     eax, ds:0B38DA0h
0x5A37C8: push    eax
0x5A37C9: jmp     short loc_5A37D2
0x5A37CB: mov     ecx, ds:0B38DA8h
0x5A37D1: push    ecx
0x5A37D2: mov     ecx, [esi+44h]
0x5A37D5: push    0FDEh
0x5A37DA: call    Tile_SetString
0x5A37DF: push    0; char
0x5A37E1: mov     ecx, ebx; int
0x5A37E3: call    EnableMenu
0x5A37E8: pop     edi
0x5A37E9: pop     esi
0x5A37EA: mov     al, 1
0x5A37EC: pop     ebx
0x5A37ED: add     esp, 8
0x5A37F0: retn
0x5A37F1: cmp     dword ptr [ebx+4], 0
0x5A37F5: jz      short loc_5A3801
0x5A37F7: mov     edx, [ebx]
0x5A37F9: mov     eax, [edx]
0x5A37FB: push    1
0x5A37FD: mov     ecx, ebx
0x5A37FF: call    eax
0x5A3801: pop     edi
0x5A3802: pop     esi
0x5A3803: xor     al, al
0x5A3805: pop     ebx
0x5A3806: add     esp, 8
0x5A3809: retn
