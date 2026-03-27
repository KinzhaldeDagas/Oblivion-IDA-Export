0x5E3590: sub     esp, 10h
0x5E3593: push    esi
0x5E3594: mov     esi, ecx
0x5E3596: mov     eax, [esi]
0x5E3598: mov     edx, [eax+25Ch]
0x5E359E: call    edx
0x5E35A0: test    al, al
0x5E35A2: jz      short loc_5E35AB
0x5E35A4: fldz
0x5E35A6: pop     esi
0x5E35A7: add     esp, 10h
0x5E35AA: retn
0x5E35AB: cmp     dword ptr [esi+58h], 0
0x5E35AF: jz      short loc_5E35DC
0x5E35B1: mov     ecx, [esi+58h]
0x5E35B4: mov     eax, [ecx]
0x5E35B6: mov     edx, [eax+2C0h]
0x5E35BC: call    edx
0x5E35BE: test    ax, 400h
0x5E35C2: jz      short loc_5E35DC
0x5E35C4: mov     ecx, [esi+58h]
0x5E35C7: mov     eax, [ecx]
0x5E35C9: mov     edx, [eax+2C0h]
0x5E35CF: call    edx
0x5E35D1: test    ax, 800h
0x5E35D5: mov     byte ptr [esp+14h+var_C], 1
0x5E35DA: jz      short loc_5E35E1
0x5E35DC: mov     byte ptr [esp+14h+var_C], 0
0x5E35E1: mov     ecx, [esi+58h]
0x5E35E4: mov     eax, [ecx]
0x5E35E6: mov     edx, [eax+304h]
0x5E35EC: call    edx
0x5E35EE: test    al, al
0x5E35F0: setz    al
0x5E35F3: mov     ecx, esi
0x5E35F5: mov     byte ptr [esp+10h+var_4], al
0x5E35F9: call    Actor_CalcCurrentEncumberance?
0x5E35FE: fstp    dword ptr [esp+10h]
0x5E3602: mov     edx, [esi]
0x5E3604: mov     eax, [edx+170h]
0x5E360A: mov     ecx, esi
0x5E360C: call    eax
0x5E360E: fld     dword ptr [esp+10h]
0x5E3612: cmp     byte ptr [eax+4], 23h ; '#'
0x5E3616: mov     eax, [esp+10h+var_4]
0x5E361A: setz    cl
0x5E361D: mov     byte ptr [esp+10h+var_C], cl
0x5E3621: mov     edx, [esp+10h+var_C]
0x5E3625: mov     ecx, [esp+10h+var_8]
0x5E3629: push    edx
0x5E362A: mov     edx, [esi]
0x5E362C: push    eax
0x5E362D: mov     eax, [edx+284h]
0x5E3633: push    ecx
0x5E3634: push    ecx
0x5E3635: fstp    [esp+20h+var_20]
0x5E3638: push    4
0x5E363A: mov     ecx, esi
0x5E363C: call    eax
0x5E363E: mov     [esp+24h+var_4], eax
0x5E3642: fild    [esp+24h+var_4]
0x5E3646: push    ecx
0x5E3647: fstp    [esp+28h+var_28]
0x5E364A: call    Calc_WalkSpeed
0x5E364F: add     esp, 14h
0x5E3652: fstp    [esp+14h+var_C]
0x5E3656: cmp     dword ptr [esi+58h], 0
0x5E365A: jz      loc_5E3738
0x5E3660: mov     ecx, [esi+58h]
0x5E3663: mov     edx, [ecx]
0x5E3665: mov     eax, [edx+184h]
0x5E366B: call    eax
0x5E366D: test    eax, eax
0x5E366F: jz      loc_5E3738
0x5E3675: cmp     byte ptr [eax+20h], 1
0x5E3679: jnz     loc_5E3738
0x5E367F: mov     eax, [esi+58h]
0x5E3682: test    eax, eax
0x5E3684: jz      loc_5E3738
0x5E368A: mov     eax, [eax+8]
0x5E368D: test    eax, eax
0x5E368F: jz      loc_5E3738
0x5E3695: mov     ecx, [eax+28h]
0x5E3698: test    ecx, ecx
0x5E369A: jz      loc_5E3738
0x5E36A0: push    edi
0x5E36A1: call    sub_569E60
0x5E36A6: mov     edi, eax
0x5E36A8: test    edi, edi
0x5E36AA: jz      loc_5E3737
0x5E36B0: cmp     edi, ds:0B333C4h
0x5E36B6: jz      short loc_5E3737
0x5E36B8: mov     edx, [edi]
0x5E36BA: mov     eax, [edx+190h]
0x5E36C0: mov     ecx, edi
0x5E36C2: call    eax
0x5E36C4: test    al, al
0x5E36C6: jz      short loc_5E3737
0x5E36C8: cmp     dword ptr [edi+58h], 0
0x5E36CC: jz      short loc_5E3737
0x5E36CE: mov     ecx, edi
0x5E36D0: call    sub_5E3590
0x5E36D5: fstp    [esp+18h+var_10]
0x5E36D9: fldz
0x5E36DB: fcomp   [esp+18h+var_10]
0x5E36DF: fnstsw  ax
0x5E36E1: test    ah, 5
0x5E36E4: jp      short loc_5E3737
0x5E36E6: push    0
0x5E36E8: push    edi
0x5E36E9: mov     ecx, esi
0x5E36EB: call    TesObjectREF_GetDistance
0x5E36F0: fcomp   dword ptr ds:0A44BA4h
0x5E36F6: fnstsw  ax
0x5E36F8: test    ah, 5
0x5E36FB: jp      short loc_5E370B
0x5E36FD: fld     [esp+18h+var_10]
0x5E3701: fsub    qword ptr ds:0A3F3D0h
0x5E3707: fstp    [esp+18h+var_10]
0x5E370B: fld     [esp+18h+var_10]
0x5E370F: fldz
0x5E3711: fcomp   st(1)
0x5E3713: fnstsw  ax
0x5E3715: test    ah, 5
0x5E3718: jp      short loc_5E3735
0x5E371A: fld     [esp+18h+var_C]
0x5E371E: fcomp   st(1)
0x5E3720: fnstsw  ax
0x5E3722: test    ah, 5
0x5E3725: jnp     short loc_5E3735
0x5E3727: fstp    [esp+18h+var_C]
0x5E372B: pop     edi
0x5E372C: fld     [esp+14h+var_C]
0x5E3730: pop     esi
0x5E3731: add     esp, 10h
0x5E3734: retn
0x5E3735: fstp    st
0x5E3737: pop     edi
0x5E3738: fld     [esp+14h+var_C]
0x5E373C: pop     esi
0x5E373D: add     esp, 10h
0x5E3740: retn
