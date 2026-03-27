0x5D3650: push    0FFFFFFFFh
0x5D3652: push    offset SEH_5D3650
0x5D3657: mov     eax, large fs:0
0x5D365D: push    eax
0x5D365E: sub     esp, 318h
0x5D3664: mov     eax, ds:0B30AACh
0x5D3669: xor     eax, esp
0x5D366B: mov     [esp+324h+var_10], eax
0x5D3672: push    ebx
0x5D3673: push    ebp
0x5D3674: push    esi; a3
0x5D3675: push    edi; a3
0x5D3676: mov     eax, ds:0B30AACh
0x5D367B: xor     eax, esp
0x5D367D: push    eax; a3
0x5D367E: lea     eax, [esp+338h+var_C]
0x5D3685: mov     large fs:0, eax
0x5D368B: mov     ebp, [esp+338h+Str2]
0x5D3692: mov     esi, [esp+338h+arg_8]
0x5D3699: xor     ebx, ebx
0x5D369B: cmp     [esp+338h+arg_4], 1
0x5D36A3: mov     [esp+338h+var_318], ecx
0x5D36A7: jnz     short loc_5D36AF
0x5D36A9: mov     ds:0B3B71Ch, ebx
0x5D36AF: mov     edi, [ecx+48h]
0x5D36B2: push    ebx; a3
0x5D36B3: push    offset aSave_game_temp; "save_game_template"
0x5D36B8: lea     ecx, [esp+340h+var_320]; this
0x5D36BC: mov     [esp+340h+var_320.m_data], ebx
0x5D36C0: mov     [esp+340h+var_320.m_dataLen], bx
0x5D36C5: mov     [esp+340h+var_320.m_bufLen], bx
0x5D36CA: call    BSStringT_Set
0x5D36CF: mov     eax, [esp+338h+var_320.m_data]
0x5D36D3: mov     ecx, [esp+338h+var_318]
0x5D36D7: push    ebx
0x5D36D8: push    eax
0x5D36D9: push    edi
0x5D36DA: mov     [esp+344h+var_4], ebx
0x5D36E1: call    Menu_CreateTileFromTemplate
0x5D36E6: cmp     esi, ebx
0x5D36E8: mov     edi, eax
0x5D36EA: jz      loc_5D3787
0x5D36F0: lea     ecx, [esp+338h+Str]
0x5D36F7: push    ecx; Str
0x5D36F8: lea     edx, [esp+33Ch+var_310]
0x5D36FC: push    edx; int
0x5D36FD: lea     eax, [esp+340h+var_110]
0x5D3704: push    eax; int
0x5D3705: lea     ecx, [esp+344h+var_324]
0x5D3709: push    ecx; int
0x5D370A: mov     ecx, ds:0B33B00h
0x5D3710: push    esi; int
0x5D3711: call    sub_464060
0x5D3716: lea     eax, [esp+338h+var_110]
0x5D371D: lea     edx, [eax+1]
0x5D3720: mov     cl, [eax]
0x5D3722: add     eax, 1
0x5D3725: cmp     cl, bl
0x5D3727: jnz     short loc_5D3720
0x5D3729: sub     eax, edx
0x5D372B: jnz     short loc_5D375B
0x5D372D: mov     eax, ds:0B386F8h
0x5D3732: lea     edx, [esp+338h+Str]
0x5D3739: push    edx
0x5D373A: mov     edx, [esp+33Ch+var_324]
0x5D373E: push    eax
0x5D373F: mov     eax, ds:0B386F0h
0x5D3744: lea     ecx, [esp+340h+var_310]
0x5D3748: push    ecx
0x5D3749: push    edx
0x5D374A: push    eax
0x5D374B: push    offset aSISSS; "%s %i - %s\n%s: %s"
0x5D3750: push    ebp
0x5D3751: call    __sprintf
0x5D3756: add     esp, 1Ch
0x5D3759: jmp     short loc_5D3787
0x5D375B: mov     edx, ds:0B386F8h
0x5D3761: lea     ecx, [esp+338h+Str]
0x5D3768: push    ecx
0x5D3769: push    edx
0x5D376A: lea     eax, [esp+340h+var_110]
0x5D3771: push    eax
0x5D3772: push    offset aSSS_2; "%s\n%s: %s"
0x5D3777: push    ebp
0x5D3778: call    __sprintf
0x5D377D: add     esp, 14h
0x5D3780: add     dword ptr ds:0B3B71Ch, 1
0x5D3787: cmp     edi, ebx
0x5D3789: jz      loc_5D3882
0x5D378F: fild    [esp+338h+arg_4]
0x5D3796: push    ecx
0x5D3797: mov     ecx, edi; this
0x5D3799: fstp    [esp+33Ch+a2]; a3
0x5D379C: push    0FAEh; a2
0x5D37A1: call    Tile_SetFloat
0x5D37A6: mov     esi, ebp
0x5D37A8: lea     ecx, [esp+338h+var_310]
0x5D37AC: xor     edx, edx
0x5D37AE: sub     esi, ecx
0x5D37B0: lea     eax, [esp+edx+338h+var_310]
0x5D37B4: mov     cl, [esi+eax]
0x5D37B7: cmp     cl, 20h ; ' '
0x5D37BA: mov     [eax], cl
0x5D37BC: jnz     short loc_5D37C1
0x5D37BE: mov     byte ptr [eax], 5Fh ; '_'
0x5D37C1: cmp     [eax], bl
0x5D37C3: jz      short loc_5D37D0
0x5D37C5: add     edx, 1
0x5D37C8: cmp     edx, 100h
0x5D37CE: jl      short loc_5D37B0
0x5D37D0: push    ebx; a3
0x5D37D1: lea     edx, [esp+33Ch+var_310]
0x5D37D5: lea     ecx, [edi+8]; this
0x5D37D8: push    edx; a2
0x5D37D9: mov     [esp+340h+var_211], bl
0x5D37E0: call    BSStringT_Set
0x5D37E5: push    ebp
0x5D37E6: push    0FB1h
0x5D37EB: mov     ecx, edi
0x5D37ED: call    Tile_SetString
0x5D37F2: mov     eax, [esp+338h+arg_4]
0x5D37F9: add     eax, 65h ; 'e'
0x5D37FC: mov     [esp+338h+var_324], eax
0x5D3800: fild    [esp+338h+var_324]
0x5D3804: push    ecx
0x5D3805: mov     ecx, edi; this
0x5D3807: fstp    [esp+33Ch+a2]; a3
0x5D380A: push    0FA8h; a2
0x5D380F: call    Tile_SetFloat
0x5D3814: cmp     ebp, ebx
0x5D3816: jz      short loc_5D382F
0x5D3818: mov     ecx, [esp+338h+var_318]
0x5D381C: mov     eax, [ecx+50h]
0x5D381F: cmp     eax, ebx
0x5D3821: jz      short loc_5D382F
0x5D3823: push    ebp; Str2
0x5D3824: push    eax; Str1
0x5D3825: call    __strcmp
0x5D382A: add     esp, 8
0x5D382D: jmp     short loc_5D383A
0x5D382F: xor     eax, eax
0x5D3831: cmp     ebp, ebx
0x5D3833: setz    al
0x5D3836: lea     eax, [eax+eax-1]
0x5D383A: cmp     eax, ebx
0x5D383C: jnz     short loc_5D3882
0x5D383E: push    1; arg1
0x5D3840: push    ebx; canCreate
0x5D3841: call    InterfaceManager_GetSingleton
0x5D3846: push    1; arg1
0x5D3848: push    ebx; canCreate
0x5D3849: call    InterfaceManager_GetSingleton
0x5D384E: add     dword ptr [eax+8Ch], 1
0x5D3855: fild    dword ptr [eax+8Ch]
0x5D385B: mov     edx, [eax+8Ch]
0x5D3861: add     eax, 8Ch ; 'Œ'
0x5D3866: test    edx, edx
0x5D3868: jge     short loc_5D3870
0x5D386A: fadd    dword ptr ds:0A2FC78h
0x5D3870: add     esp, 0Ch
0x5D3873: fstp    [esp+33Ch+a2]; a3
0x5D3876: push    0FF0h; a2
0x5D387B: mov     ecx, edi; this
0x5D387D: call    Tile_SetFloat
0x5D3882: mov     eax, [esp+338h+var_320.m_data]
0x5D3886: push    eax
0x5D3887: call    FormHeapFree
0x5D388C: add     esp, 4
0x5D388F: mov     ecx, [esp+338h+var_C]
0x5D3896: mov     large fs:0, ecx
0x5D389D: pop     ecx
0x5D389E: pop     edi
0x5D389F: pop     esi
0x5D38A0: pop     ebp
0x5D38A1: pop     ebx
0x5D38A2: mov     ecx, [esp+324h+var_10]
0x5D38A9: xor     ecx, esp
0x5D38AB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D38B0: add     esp, 324h
0x5D38B6: retn    10h
