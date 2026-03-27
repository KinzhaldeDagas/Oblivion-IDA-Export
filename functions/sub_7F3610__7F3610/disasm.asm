0x7F3610: sub     esp, 5Ch
0x7F3613: push    esi
0x7F3614: push    edi
0x7F3615: mov     edi, [esp+64h+a8]
0x7F361C: lea     eax, [esp+64h+var_24]
0x7F3620: mov     esi, ecx
0x7F3622: push    eax
0x7F3623: mov     ecx, edi
0x7F3625: call    sub_7103C0
0x7F362A: fld     dword ptr [edi+24h]
0x7F362D: fchs
0x7F362F: mov     ecx, ds:0B46658h
0x7F3635: fstp    [esp+64h+var_5C]
0x7F3639: mov     edx, ds:0B4665Ch
0x7F363F: fld     dword ptr [edi+28h]
0x7F3642: mov     eax, ds:0B46660h
0x7F3647: fchs
0x7F3649: mov     [esp+64h+var_34], ecx
0x7F364D: fstp    [esp+64h+var_58]
0x7F3651: mov     [esp+64h+var_30], edx
0x7F3655: fld     dword ptr [edi+2Ch]
0x7F3658: mov     ecx, ds:0B46664h
0x7F365E: fchs
0x7F3660: mov     [esp+64h+var_2C], eax
0x7F3664: fstp    [esp+64h+var_54]
0x7F3668: lea     edx, [esp+64h+var_5C]
0x7F366C: fld     dword ptr [edi+30h]
0x7F366F: push    edx
0x7F3670: fld1
0x7F3672: lea     eax, [esp+68h+var_40]
0x7F3676: fdivrp  st(1), st
0x7F3678: mov     [esp+68h+var_28], ecx
0x7F367C: push    eax
0x7F367D: lea     ecx, [esp+6Ch+var_24]
0x7F3681: fstp    [esp+6Ch+a8]
0x7F3688: fld     [esp+6Ch+var_5C]
0x7F368C: fadd    [esp+6Ch+var_34]
0x7F3690: fstp    [esp+6Ch+var_50]
0x7F3694: fld     [esp+6Ch+var_58]
0x7F3698: fadd    [esp+6Ch+var_30]
0x7F369C: fstp    [esp+6Ch+var_4C]
0x7F36A0: fld     [esp+6Ch+var_54]
0x7F36A4: fadd    [esp+6Ch+var_2C]
0x7F36A8: fstp    [esp+6Ch+var_48]
0x7F36AC: fld     [esp+6Ch+var_50]
0x7F36B0: fld     [esp+6Ch+a8]
0x7F36B7: fld     st
0x7F36B9: fmulp   st(2), st
0x7F36BB: fxch    st(1)
0x7F36BD: fstp    [esp+6Ch+var_5C]
0x7F36C1: fld     [esp+6Ch+var_4C]
0x7F36C5: fmul    st, st(1)
0x7F36C7: fstp    [esp+6Ch+var_58]
0x7F36CB: fmul    [esp+6Ch+var_48]
0x7F36CF: fstp    [esp+6Ch+var_54]
0x7F36D3: call    sub_7101F0
0x7F36D8: fld     [esp+64h+var_40]
0x7F36DC: fstp    [esp+64h+var_50]
0x7F36E0: mov     ecx, [esp+64h+var_50]
0x7F36E4: fld     [esp+64h+var_3C]
0x7F36E8: mov     [esi+128h], ecx
0x7F36EE: fstp    [esp+64h+var_4C]
0x7F36F2: mov     edx, [esp+64h+var_4C]
0x7F36F6: fld     [esp+64h+var_38]
0x7F36FA: mov     [esi+12Ch], edx
0x7F3700: mov     edx, [esp+64h+a9]
0x7F3707: fstp    [esp+64h+var_48]
0x7F370B: fld1
0x7F370D: mov     eax, [esp+64h+var_48]
0x7F3711: push    edx; a9
0x7F3712: fstp    [esp+68h+var_44]
0x7F3716: mov     ecx, [esp+68h+var_44]
0x7F371A: mov     edx, [esp+68h+a5]
0x7F371E: mov     [esi+130h], eax
0x7F3724: mov     eax, [esp+68h+a7]
0x7F372B: push    edi; a8
0x7F372C: push    eax; a7
0x7F372D: mov     eax, [esp+70h+a4]
0x7F3731: mov     [esi+134h], ecx
0x7F3737: mov     ecx, [esp+70h+a6]
0x7F373E: push    ecx; a6
0x7F373F: push    edx; a5
0x7F3740: mov     ecx, [esp+78h+a3]
0x7F3747: mov     edx, [esp+78h+a2]
0x7F374B: push    eax; a4
0x7F374C: push    ecx; a3
0x7F374D: push    edx; a2
0x7F374E: mov     ecx, esi; this
0x7F3750: call    sub_779710
0x7F3755: pop     edi
0x7F3756: pop     esi
0x7F3757: add     esp, 5Ch
0x7F375A: retn    20h ; ' '
