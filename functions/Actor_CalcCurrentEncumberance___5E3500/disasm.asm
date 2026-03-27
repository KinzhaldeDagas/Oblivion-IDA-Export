0x5E3500: sub     esp, 8
0x5E3503: push    esi
0x5E3504: mov     esi, ecx
0x5E3506: mov     eax, [esi]
0x5E3508: mov     edx, [eax+170h]
0x5E350E: push    edi
0x5E350F: call    edx
0x5E3511: mov     edi, eax
0x5E3513: test    edi, edi
0x5E3515: jz      short loc_5E352C
0x5E3517: mov     eax, [esi]
0x5E3519: mov     edx, [eax+190h]
0x5E351F: mov     ecx, esi
0x5E3521: call    edx
0x5E3523: test    al, al
0x5E3525: jz      short loc_5E352C
0x5E3527: lea     eax, [edi+44h]
0x5E352A: jmp     short loc_5E352E
0x5E352C: xor     eax, eax
0x5E352E: push    eax
0x5E352F: push    esi; a1
0x5E3530: call    ContainerExtraData_GetContainerExtraDataForRef
0x5E3535: add     esp, 8
0x5E3538: push    esi
0x5E3539: mov     ecx, eax
0x5E353B: call    ContainerExtraData_GetArmorWeight
0x5E3540: fstp    [esp+10h+var_4]
0x5E3544: mov     ecx, esi
0x5E3546: call    sub_4D8FB0
0x5E354B: fstp    [esp+10h+var_8]
0x5E354F: mov     eax, [esi]
0x5E3551: mov     edx, [eax+288h]
0x5E3557: push    0Bh
0x5E3559: mov     ecx, esi
0x5E355B: call    edx
0x5E355D: fsub    [esp+14h+var_C]
0x5E3561: pop     edi
0x5E3562: pop     esi
0x5E3563: fstp    [esp+0Ch+var_C]
0x5E3566: fld     [esp+0Ch+var_C]
0x5E3569: fadd    [esp+0Ch+var_8]
0x5E356D: fstp    [esp+0Ch+var_8]
0x5E3571: fld     [esp+0Ch+var_8]
0x5E3575: fcom    qword ptr ds:0A2FC68h
0x5E357B: fnstsw  ax
0x5E357D: test    ah, 5
0x5E3580: jp      short loc_5E3586
0x5E3582: fstp    st
0x5E3584: fldz
0x5E3586: fstp    [esp+0Ch+var_C]
0x5E3589: fld     [esp+0Ch+var_C]
0x5E358C: add     esp, 8
0x5E358F: retn
