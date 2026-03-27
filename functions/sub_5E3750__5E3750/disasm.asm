0x5E3750: sub     esp, 10h
0x5E3753: push    esi
0x5E3754: mov     esi, ecx
0x5E3756: mov     eax, [esi]
0x5E3758: mov     edx, [eax+25Ch]
0x5E375E: call    edx
0x5E3760: test    al, al
0x5E3762: jz      short loc_5E376B
0x5E3764: fldz
0x5E3766: pop     esi
0x5E3767: add     esp, 10h
0x5E376A: retn
0x5E376B: mov     ecx, [esi+58h]
0x5E376E: mov     eax, [ecx]
0x5E3770: mov     edx, [eax+304h]
0x5E3776: call    edx
0x5E3778: test    al, al
0x5E377A: setz    al
0x5E377D: mov     ecx, esi
0x5E377F: mov     byte ptr [esp+14h+var_8], al
0x5E3783: call    Actor_CalcCurrentEncumberance?
0x5E3788: fstp    [esp+14h+var_4]
0x5E378C: cmp     dword ptr [esi+58h], 0
0x5E3790: jz      short loc_5E37BD
0x5E3792: mov     ecx, [esi+58h]
0x5E3795: mov     edx, [ecx]
0x5E3797: mov     eax, [edx+2C0h]
0x5E379D: call    eax
0x5E379F: test    ax, 400h
0x5E37A3: jz      short loc_5E37BD
0x5E37A5: mov     ecx, [esi+58h]
0x5E37A8: mov     edx, [ecx]
0x5E37AA: mov     eax, [edx+2C0h]
0x5E37B0: call    eax
0x5E37B2: test    ax, 800h
0x5E37B6: mov     byte ptr [esp+14h+var_C], 1
0x5E37BB: jz      short loc_5E37C2
0x5E37BD: mov     byte ptr [esp+14h+var_C], 0
0x5E37C2: mov     edx, [esi]
0x5E37C4: mov     eax, [edx+170h]
0x5E37CA: mov     ecx, esi
0x5E37CC: call    eax
0x5E37CE: cmp     byte ptr [eax+4], 23h ; '#'
0x5E37D2: mov     edx, [esp+0Ch+var_4]
0x5E37D6: setz    cl
0x5E37D9: mov     byte ptr [esp+0Ch+var_8], cl
0x5E37DD: mov     eax, [esp+0Ch+var_8]
0x5E37E1: push    edx
0x5E37E2: mov     edx, [esi]
0x5E37E4: push    eax
0x5E37E5: mov     eax, [edx+284h]
0x5E37EB: push    0Dh; int
0x5E37ED: mov     ecx, esi
0x5E37EF: call    eax
0x5E37F1: mov     edx, [esi]
0x5E37F3: mov     [esp+18h+var_8], eax
0x5E37F7: fild    [esp+18h+var_8]
0x5E37FB: mov     eax, [edx+284h]
0x5E3801: push    ecx
0x5E3802: mov     ecx, [esp+1Ch+var_4]
0x5E3806: fstp    [esp+1Ch+var_1C]; int
0x5E3809: push    ecx; float
0x5E380A: fld     dword ptr [esp+20h]
0x5E380E: push    ecx
0x5E380F: fstp    [esp+24h+var_24]; int
0x5E3812: push    4; float
0x5E3814: mov     ecx, esi
0x5E3816: call    eax
0x5E3818: mov     [esp+28h+var_4], eax
0x5E381C: fild    [esp+28h+var_4]
0x5E3820: push    ecx
0x5E3821: fstp    [esp+2Ch+var_2C]; float
0x5E3824: call    Calc_RunSpeed
0x5E3829: add     esp, 18h
0x5E382C: fstp    [esp+14h+var_C]
0x5E3830: cmp     dword ptr [esi+58h], 0
0x5E3834: jz      loc_5E3912
0x5E383A: mov     ecx, [esi+58h]
0x5E383D: mov     edx, [ecx]
0x5E383F: mov     eax, [edx+184h]
0x5E3845: call    eax
0x5E3847: test    eax, eax
0x5E3849: jz      loc_5E3912
0x5E384F: cmp     byte ptr [eax+20h], 1
0x5E3853: jnz     loc_5E3912
0x5E3859: mov     eax, [esi+58h]
0x5E385C: test    eax, eax
0x5E385E: jz      loc_5E3912
0x5E3864: mov     eax, [eax+8]
0x5E3867: test    eax, eax
0x5E3869: jz      loc_5E3912
0x5E386F: mov     ecx, [eax+28h]
0x5E3872: test    ecx, ecx
0x5E3874: jz      loc_5E3912
0x5E387A: push    edi
0x5E387B: call    sub_569E60
0x5E3880: mov     edi, eax
0x5E3882: test    edi, edi
0x5E3884: jz      loc_5E3911
0x5E388A: cmp     edi, ds:0B333C4h
0x5E3890: jz      short loc_5E3911
0x5E3892: mov     edx, [edi]
0x5E3894: mov     eax, [edx+190h]
0x5E389A: mov     ecx, edi
0x5E389C: call    eax
0x5E389E: test    al, al
0x5E38A0: jz      short loc_5E3911
0x5E38A2: cmp     dword ptr [edi+58h], 0
0x5E38A6: jz      short loc_5E3911
0x5E38A8: mov     ecx, edi
0x5E38AA: call    sub_5E3750
0x5E38AF: fstp    [esp+18h+var_10]
0x5E38B3: fldz
0x5E38B5: fcomp   [esp+18h+var_10]
0x5E38B9: fnstsw  ax
0x5E38BB: test    ah, 5
0x5E38BE: jp      short loc_5E3911
0x5E38C0: push    0
0x5E38C2: push    edi
0x5E38C3: mov     ecx, esi
0x5E38C5: call    TesObjectREF_GetDistance
0x5E38CA: fcomp   dword ptr ds:0A44BA4h
0x5E38D0: fnstsw  ax
0x5E38D2: test    ah, 5
0x5E38D5: jp      short loc_5E38E5
0x5E38D7: fld     [esp+18h+var_10]
0x5E38DB: fsub    qword ptr ds:0A3F3D0h
0x5E38E1: fstp    [esp+18h+var_10]
0x5E38E5: fld     [esp+18h+var_10]
0x5E38E9: fldz
0x5E38EB: fcomp   st(1)
0x5E38ED: fnstsw  ax
0x5E38EF: test    ah, 5
0x5E38F2: jp      short loc_5E390F
0x5E38F4: fld     [esp+18h+var_C]
0x5E38F8: fcomp   st(1)
0x5E38FA: fnstsw  ax
0x5E38FC: test    ah, 5
0x5E38FF: jnp     short loc_5E390F
0x5E3901: fstp    [esp+18h+var_C]
0x5E3905: pop     edi
0x5E3906: fld     [esp+14h+var_C]
0x5E390A: pop     esi
0x5E390B: add     esp, 10h
0x5E390E: retn
0x5E390F: fstp    st
0x5E3911: pop     edi
0x5E3912: fld     [esp+14h+var_C]
0x5E3916: pop     esi
0x5E3917: add     esp, 10h
0x5E391A: retn
