0x4E3490: push    0FFFFFFFFh
0x4E3492: push    offset SEH_4E3490
0x4E3497: mov     eax, large fs:0
0x4E349D: push    eax
0x4E349E: sub     esp, 220h
0x4E34A4: mov     eax, ds:0B30AACh
0x4E34A9: xor     eax, esp
0x4E34AB: mov     [esp+22Ch+var_10], eax
0x4E34B2: push    ebx
0x4E34B3: push    ebp
0x4E34B4: push    esi
0x4E34B5: push    edi
0x4E34B6: mov     eax, ds:0B30AACh
0x4E34BB: xor     eax, esp
0x4E34BD: push    eax
0x4E34BE: lea     eax, [esp+240h+var_C]
0x4E34C5: mov     large fs:0, eax
0x4E34CB: mov     ebp, ecx
0x4E34CD: mov     ecx, [ebp+3Ch]
0x4E34D0: xor     edi, edi
0x4E34D2: test    ecx, ecx
0x4E34D4: mov     [esp+240h+var_220], edi
0x4E34D8: jz      short loc_4E34E7
0x4E34DA: mov     eax, [ecx]
0x4E34DC: mov     edx, [eax+8]
0x4E34DF: call    edx
0x4E34E1: mov     edi, eax
0x4E34E3: mov     [esp+240h+var_220], eax
0x4E34E7: mov     eax, [ebp+0]
0x4E34EA: mov     edx, [eax+168h]
0x4E34F0: mov     ecx, ebp
0x4E34F2: call    edx
0x4E34F4: mov     ebx, eax
0x4E34F6: push    0
0x4E34F8: mov     ecx, ebp
0x4E34FA: mov     [esp+244h+var_21C], ebx
0x4E34FE: mov     [esp+244h+var_224], 0
0x4E3506: call    sub_4D83B0
0x4E350B: test    edi, edi
0x4E350D: jz      loc_4E3F06
0x4E3513: mov     eax, [ebp+8]
0x4E3516: shr     eax, 5
0x4E3519: test    al, 1
0x4E351B: jnz     loc_4E3F06
0x4E3521: mov     esi, [ebp+1Ch]
0x4E3524: cmp     byte ptr [esi+4], 23h ; '#'
0x4E3528: mov     [esp+240h+var_228], esi
0x4E352C: jz      short loc_4E3536
0x4E352E: mov     ecx, esi
0x4E3530: cmp     byte ptr [ecx+4], 24h ; '$'
0x4E3534: jnz     short loc_4E35A1
0x4E3536: mov     edx, [ebp+1Ch]
0x4E3539: push    0; int
0x4E353B: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x4E3540: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4E3545: push    0; int
0x4E3547: push    edx; void *
0x4E3548: call    OblivionDynamicCast
0x4E354D: mov     edx, [eax]
0x4E354F: mov     ecx, eax
0x4E3551: mov     eax, [edx+14h]
0x4E3554: add     esp, 14h
0x4E3557: call    eax
0x4E3559: mov     esi, eax
0x4E355B: push    5Ch ; '\'; Ch
0x4E355D: push    esi; Str
0x4E355E: call    _strrchr
0x4E3563: add     esp, 8
0x4E3566: test    eax, eax
0x4E3568: jz      short loc_4E359D
0x4E356A: push    8; MaxCount
0x4E356C: add     eax, 1
0x4E356F: push    offset aSkeleton; "Skeleton"
0x4E3574: push    eax; Str1
0x4E3575: call    __strnicmp
0x4E357A: add     esp, 0Ch
0x4E357D: test    eax, eax
0x4E357F: jz      short loc_4E359D
0x4E3581: mov     ecx, [ebp+1Ch]
0x4E3584: mov     edx, [ecx]
0x4E3586: mov     eax, [edx+0D4h]
0x4E358C: push    esi
0x4E358D: call    eax
0x4E358F: push    eax; ArgList
0x4E3590: push    offset aActorSNeedsToH; "Actor '%s' needs to have a 'skeleton*.n"...
0x4E3595: call    PrintError
0x4E359A: add     esp, 0Ch
0x4E359D: mov     esi, [esp+240h+var_228]
0x4E35A1: mov     ecx, [ebp+1Ch]
0x4E35A4: movzx   eax, byte ptr [ecx+4]
0x4E35A8: sub     eax, 23h ; '#'
0x4E35AB: jz      loc_4E3ACD
0x4E35B1: sub     eax, 1
0x4E35B4: jz      loc_4E3813
0x4E35BA: cmp     word ptr [edi+0B6h], 0
0x4E35C2: jbe     loc_4E37FD
0x4E35C8: mov     edx, [edi+0B0h]
0x4E35CE: cmp     dword ptr [edx], 0
0x4E35D1: jz      loc_4E37FD
0x4E35D7: push    0
0x4E35D9: mov     ecx, edi
0x4E35DB: call    sub_405790
0x4E35E0: cmp     dword ptr [eax+0Ch], 0
0x4E35E4: jz      loc_4E37FD
0x4E35EA: mov     eax, [ebp+0]
0x4E35ED: mov     edx, [eax+48h]
0x4E35F0: push    2000000h
0x4E35F5: mov     ecx, ebp
0x4E35F7: call    edx
0x4E35F9: push    0
0x4E35FB: mov     ecx, edi
0x4E35FD: call    sub_405790
0x4E3602: mov     eax, [eax+0Ch]
0x4E3605: push    eax
0x4E3606: push    offset stru_B3CAC0
0x4E360B: call    NiRTTI_Cast
0x4E3610: mov     esi, eax
0x4E3612: add     esp, 8
0x4E3615: test    esi, esi
0x4E3617: jz      loc_4E3E4B
0x4E361D: cmp     byte ptr [esi+6Ch], 0
0x4E3621: jz      short loc_4E3656
0x4E3623: mov     eax, [ebp+1Ch]
0x4E3626: mov     edx, [ebp+0]
0x4E3629: movzx   edi, byte ptr [eax+4]
0x4E362D: mov     eax, [edx+170h]
0x4E3633: mov     ecx, ebp
0x4E3635: call    eax
0x4E3637: push    eax
0x4E3638: call    GetFormModelPAth
0x4E363D: lea     ecx, [edi+edi*2]
0x4E3640: mov     edx, ds:0B05E04h[ecx*4]
0x4E3647: push    eax
0x4E3648: push    edx; ArgList
0x4E3649: push    offset aSSIsCumulative; "%s '%s' is cumulative. This is not allo"...
0x4E364E: call    PrintError
0x4E3653: add     esp, 10h
0x4E3656: mov     eax, [ebp+0]
0x4E3659: mov     edx, [eax+170h]
0x4E365F: mov     ecx, ebp
0x4E3661: mov     [esp+240h+var_229], 0
0x4E3666: call    edx
0x4E3668: test    eax, eax
0x4E366A: jz      short loc_4E36EB
0x4E366C: mov     eax, [ebp+0]
0x4E366F: mov     edx, [eax+170h]
0x4E3675: mov     ecx, ebp
0x4E3677: call    edx
0x4E3679: cmp     byte ptr [eax+4], 18h
0x4E367D: jnz     short loc_4E36EB
0x4E367F: mov     ecx, ds:0B33B00h
0x4E3685: call    sub_45A500
0x4E368A: lea     ecx, [ebp+44h]
0x4E368D: mov     byte ptr [esp+240h+var_21C], al
0x4E3691: call    sub_420FD0
0x4E3696: test    eax, eax
0x4E3698: jz      short loc_4E36A7
0x4E369A: mov     ecx, ds:0B33B00h
0x4E36A0: push    1
0x4E36A2: call    sub_45A530
0x4E36A7: mov     ecx, ds:0B33B00h
0x4E36AD: push    1
0x4E36AF: push    ebp
0x4E36B0: call    sub_4533F0
0x4E36B5: mov     edi, eax
0x4E36B7: push    edi
0x4E36B8: mov     ecx, ebp
0x4E36BA: call    sub_4D6E60
0x4E36BF: mov     ecx, edi
0x4E36C1: shr     ecx, 13h
0x4E36C4: and     cl, 1
0x4E36C7: cmp     al, cl
0x4E36C9: setnz   dl
0x4E36CC: push    1; char
0x4E36CE: mov     ecx, ebp
0x4E36D0: push    edx; float
0x4E36D1: call    sub_4DE460
0x4E36D6: mov     eax, [esp+240h+var_21C]
0x4E36DA: mov     ecx, ds:0B33B00h
0x4E36E0: push    eax
0x4E36E1: mov     [esp+244h+var_229], 1
0x4E36E6: call    sub_45A530
0x4E36EB: mov     ecx, ds:0B102E0h
0x4E36F1: push    ecx
0x4E36F2: mov     ecx, esi
0x4E36F4: call    sub_4715A0
0x4E36F9: mov     edx, ds:0B10328h
0x4E36FF: push    edx
0x4E3700: mov     ecx, esi
0x4E3702: mov     edi, eax
0x4E3704: call    sub_4715A0
0x4E3709: test    edi, edi
0x4E370B: mov     ebx, eax
0x4E370D: jnz     short loc_4E3783
0x4E370F: test    ebx, ebx
0x4E3711: jnz     loc_4E37D1
0x4E3717: cmp     [esp+240h+var_229], 0
0x4E371C: jnz     short loc_4E376B
0x4E371E: fldz
0x4E3720: or      word ptr [esi+8], 8
0x4E3725: push    ecx
0x4E3726: fstp    dword ptr [esp+244h+var_244]; float
0x4E3729: mov     ecx, esi
0x4E372B: call    sub_4715C0
0x4E3730: fldz
0x4E3732: mov     eax, [esi+40h]
0x4E3735: mov     edi, [eax]
0x4E3737: push    ebx; int
0x4E3738: sub     esp, 8
0x4E373B: fstp    [esp+24Ch+a2]; float
0x4E373F: mov     ecx, esi
0x4E3741: fld1
0x4E3743: fstp    [esp+24Ch+var_24C]; float
0x4E3746: push    ebx; int
0x4E3747: push    ebx; int
0x4E3748: push    edi; int
0x4E3749: call    sub_470B20
0x4E374E: fld     dword ptr ds:0A7DEB4h
0x4E3754: fchs
0x4E3756: push    1; a3
0x4E3758: fstp    dword ptr [edi+48h]
0x4E375B: push    ecx
0x4E375C: fld     dword ptr [edi+2Ch]
0x4E375F: mov     ecx, [esp+248h+var_220]; this
0x4E3763: fstp    [esp+248h+a2]; a2
0x4E3766: call    NiAVObject_UpdateNiAVObject
0x4E376B: fldz
0x4E376D: push    ecx
0x4E376E: mov     ecx, esi
0x4E3770: fstp    dword ptr [esp+244h+var_244]; float
0x4E3773: call    sub_4715C0
0x4E3778: and     word ptr [esi+8], 0FFF7h
0x4E377E: jmp     loc_4E3E4B
0x4E3783: cmp     dword ptr [edi+24h], 0
0x4E3787: jnz     short loc_4E37B2
0x4E3789: fldz
0x4E378B: push    0; int
0x4E378D: sub     esp, 8
0x4E3790: fstp    [esp+24Ch+a2]; float
0x4E3794: fld1
0x4E3796: mov     ecx, esi
0x4E3798: fstp    [esp+24Ch+var_24C]; float
0x4E379B: push    0; int
0x4E379D: push    0; int
0x4E379F: push    edi; int
0x4E37A0: call    sub_470B20
0x4E37A5: fld     dword ptr ds:0A7DEB4h
0x4E37AB: fchs
0x4E37AD: fstp    dword ptr [edi+48h]
0x4E37B0: jmp     short loc_4E37C9
0x4E37B2: mov     ecx, [ebp+1Ch]
0x4E37B5: push    ecx
0x4E37B6: call    GetFormModelPAth
0x4E37BB: push    eax; ArgList
0x4E37BC: push    offset aIdleAnimationM; "Idle animation must be looping '%s'."
0x4E37C1: call    PrintError
0x4E37C6: add     esp, 0Ch
0x4E37C9: test    ebx, ebx
0x4E37CB: jz      loc_4E3E4B
0x4E37D1: fldz
0x4E37D3: push    0; int
0x4E37D5: sub     esp, 8
0x4E37D8: fstp    [esp+24Ch+a2]; float
0x4E37DC: fld1
0x4E37DE: mov     ecx, esi
0x4E37E0: fstp    [esp+24Ch+var_24C]; float
0x4E37E3: push    0; int
0x4E37E5: push    0; int
0x4E37E7: push    ebx; int
0x4E37E8: call    sub_470B20
0x4E37ED: fld     dword ptr ds:0A7DEB4h
0x4E37F3: fchs
0x4E37F5: fstp    dword ptr [ebx+48h]
0x4E37F8: jmp     loc_4E3E4B
0x4E37FD: mov     edx, [edi]
0x4E37FF: fldz
0x4E3801: mov     eax, [edx+60h]
0x4E3804: push    0
0x4E3806: push    ecx
0x4E3807: mov     ecx, edi
0x4E3809: fstp    [esp+248h+a2]
0x4E380C: call    eax
0x4E380E: jmp     loc_4E3E4B
0x4E3813: push    0DCh ; 'Ü'; Size
0x4E3818: call    FormHeapAlloc
0x4E381D: add     esp, 4
0x4E3820: mov     [esp+240h+var_21C], eax
0x4E3824: test    eax, eax
0x4E3826: mov     [esp+240h+var_4], 0
0x4E3831: jz      short loc_4E383C
0x4E3833: mov     ecx, eax
0x4E3835: call    NewActorAnimData
0x4E383A: jmp     short loc_4E383E
0x4E383C: xor     eax, eax
0x4E383E: push    eax
0x4E383F: mov     ecx, ebp
0x4E3841: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4E384C: call    sub_4D83B0
0x4E3851: mov     ecx, [ebp+3Ch]
0x4E3854: test    ecx, ecx
0x4E3856: mov     [esp+240h+var_224], eax
0x4E385A: jz      short loc_4E386D
0x4E385C: mov     edx, [ecx]
0x4E385E: mov     eax, [edx+8]
0x4E3861: call    eax
0x4E3863: mov     ebx, eax
0x4E3865: test    ebx, ebx
0x4E3867: mov     [esp+240h+var_220], ebx
0x4E386B: jnz     short loc_4E3890
0x4E386D: mov     eax, [esi+0Ch]
0x4E3870: mov     edx, [esi]
0x4E3872: push    eax
0x4E3873: mov     eax, [edx+0D4h]
0x4E3879: mov     ecx, esi
0x4E387B: call    eax
0x4E387D: push    eax; ArgList
0x4E387E: push    offset aSetanimationCl; "SetAnimation cleared 3D because %s (%08"...
0x4E3883: call    PrintError
0x4E3888: add     esp, 0Ch
0x4E388B: jmp     loc_4E3F06
0x4E3890: mov     ecx, ebp
0x4E3892: call    sub_4E1580
0x4E3897: mov     ecx, ebp; this
0x4E3899: call    TESObjectREFR_GetHealth
0x4E389E: fcomp   dword ptr ds:0A2FAA8h
0x4E38A4: fnstsw  ax
0x4E38A6: test    ah, 41h
0x4E38A9: jnz     short loc_4E38D1
0x4E38AB: mov     edx, [esi+0ACh]
0x4E38B1: mov     eax, [edx+14h]
0x4E38B4: lea     ecx, [esi+0ACh]
0x4E38BA: push    0; int
0x4E38BC: call    eax
0x4E38BE: mov     ecx, ds:0B33A1Ch
0x4E38C4: push    eax; char *
0x4E38C5: call    sub_435830
0x4E38CA: mov     edi, eax
0x4E38CC: jmp     loc_4E3A18
0x4E38D1: mov     ecx, ds:0A2FFB8h
0x4E38D7: mov     dx, ds:0A2FFBCh
0x4E38DE: lea     eax, [esp+240h+Str]
0x4E38E2: mov     dword ptr [esp+240h+Str], ecx
0x4E38E6: mov     [esp+240h+var_214], dx
0x4E38EB: add     eax, 0FFFFFFFFh
0x4E38EE: mov     edi, edi
0x4E38F0: mov     cl, [eax+1]
0x4E38F3: add     eax, 1
0x4E38F6: test    cl, cl
0x4E38F8: jnz     short loc_4E38F0
0x4E38FA: mov     ecx, ds:0A3CA70h
0x4E3900: mov     dx, ds:0A3CA74h
0x4E3907: mov     [eax], ecx
0x4E3909: mov     cl, ds:0A3CA76h
0x4E390F: lea     edi, [esp+240h+Str]
0x4E3913: mov     [eax+4], dx
0x4E3917: mov     [eax+6], cl
0x4E391A: add     edi, 0FFFFFFFFh
0x4E391D: lea     ecx, [ecx+0]
0x4E3920: mov     al, [edi+1]
0x4E3923: add     edi, 1
0x4E3926: test    al, al
0x4E3928: jnz     short loc_4E3920
0x4E392A: mov     dx, ds:0A3207Ch
0x4E3931: mov     eax, [ebp+0]
0x4E3934: mov     [edi], dx
0x4E3937: mov     edx, [eax+170h]
0x4E393D: mov     ecx, ebp
0x4E393F: call    edx
0x4E3941: push    eax
0x4E3942: call    GetFormModelPAth
0x4E3947: add     esp, 4
0x4E394A: mov     ecx, eax
0x4E394C: lea     esp, [esp+0]
0x4E3950: mov     dl, [eax]
0x4E3952: add     eax, 1
0x4E3955: test    dl, dl
0x4E3957: jnz     short loc_4E3950
0x4E3959: lea     edi, [esp+240h+Str]
0x4E395D: sub     eax, ecx
0x4E395F: mov     esi, ecx
0x4E3961: add     edi, 0FFFFFFFFh
0x4E3964: mov     cl, [edi+1]
0x4E3967: add     edi, 1
0x4E396A: test    cl, cl
0x4E396C: jnz     short loc_4E3964
0x4E396E: mov     ecx, eax
0x4E3970: shr     ecx, 2
0x4E3973: rep movsd
0x4E3975: mov     ecx, eax
0x4E3977: lea     eax, [esp+240h+Str]
0x4E397B: and     ecx, 3
0x4E397E: push    5Ch ; '\'; Ch
0x4E3980: push    eax; Str
0x4E3981: rep movsb
0x4E3983: call    _strrchr
0x4E3988: mov     ecx, ds:0A370DCh
0x4E398E: mov     esi, eax
0x4E3990: mov     [esi], ecx
0x4E3992: mov     edx, ds:0A370E0h
0x4E3998: mov     [esi+4], edx
0x4E399B: mov     al, ds:0A370E4h
0x4E39A0: mov     [esi+8], al
0x4E39A3: mov     edx, [ebp+0]
0x4E39A6: mov     eax, [edx+170h]
0x4E39AC: add     esp, 8
0x4E39AF: push    0; int
0x4E39B1: mov     ecx, ebp
0x4E39B3: call    eax
0x4E39B5: push    eax
0x4E39B6: call    GetFormModelPAth
0x4E39BB: add     esp, 4
0x4E39BE: push    eax; char *
0x4E39BF: lea     ecx, [esp+248h+Str]
0x4E39C3: push    ecx; Str
0x4E39C4: mov     ecx, ds:0B33A1Ch
0x4E39CA: call    sub_434850
0x4E39CF: mov     edx, ds:0A370D0h
0x4E39D5: mov     [esi], edx
0x4E39D7: mov     edi, eax
0x4E39D9: mov     eax, ds:0A370D4h
0x4E39DE: mov     [esi+4], eax
0x4E39E1: mov     cx, ds:0A370D8h
0x4E39E8: mov     [esi+8], cx
0x4E39EC: mov     edx, [ebp+0]
0x4E39EF: mov     eax, [edx+170h]
0x4E39F5: push    edi; int
0x4E39F6: mov     ecx, ebp
0x4E39F8: call    eax
0x4E39FA: push    eax
0x4E39FB: call    GetFormModelPAth
0x4E3A00: add     esp, 4
0x4E3A03: push    eax; char *
0x4E3A04: lea     ecx, [esp+248h+Str]
0x4E3A08: push    ecx; Str
0x4E3A09: mov     ecx, ds:0B33A1Ch
0x4E3A0F: call    sub_434850
0x4E3A14: mov     esi, [esp+240h+var_228]
0x4E3A18: push    ebp; int
0x4E3A19: push    ebx; int
0x4E3A1A: mov     ebx, [esp+248h+var_224]
0x4E3A1E: push    edi; int
0x4E3A1F: mov     ecx, ebx; this
0x4E3A21: call    Menu_PickIdles??
0x4E3A26: test    al, al
0x4E3A28: jnz     short loc_4E3A48
0x4E3A2A: mov     eax, [esi+0Ch]
0x4E3A2D: mov     edx, [esi]
0x4E3A2F: push    eax
0x4E3A30: mov     eax, [edx+0D4h]
0x4E3A36: mov     ecx, esi
0x4E3A38: call    eax
0x4E3A3A: push    eax; ArgList
0x4E3A3B: push    offset aBadInitanimati; "Bad InitAnimation for Creature '%s' (%0"...
0x4E3A40: call    PrintError
0x4E3A45: add     esp, 0Ch
0x4E3A48: mov     ecx, ebp; this
0x4E3A4A: call    TESObjectREFR_GetHealth
0x4E3A4F: fcomp   dword ptr ds:0A2FAA8h
0x4E3A55: fnstsw  ax
0x4E3A57: test    ah, 41h
0x4E3A5A: jnz     short loc_4E3ABE
0x4E3A5C: mov     edi, [esp+240h+var_228]
0x4E3A60: lea     esi, [edi+94h]
0x4E3A66: mov     ecx, esi
0x4E3A68: call    TESAnimation_HasAnimations
0x4E3A6D: test    al, al
0x4E3A6F: jz      short loc_4E3ABE
0x4E3A71: mov     edx, [edi+0ACh]
0x4E3A77: mov     eax, [edx+14h]
0x4E3A7A: lea     ecx, [edi+0ACh]
0x4E3A80: call    eax
0x4E3A82: lea     edx, [esp+240h+Str]
0x4E3A86: mov     cl, [eax]
0x4E3A88: mov     [edx], cl
0x4E3A8A: add     eax, 1
0x4E3A8D: add     edx, 1
0x4E3A90: test    cl, cl
0x4E3A92: jnz     short loc_4E3A86
0x4E3A94: lea     ecx, [esp+240h+Str]
0x4E3A98: push    5Ch ; '\'; Ch
0x4E3A9A: push    ecx; Str
0x4E3A9B: call    _strrchr
0x4E3AA0: add     esp, 8
0x4E3AA3: test    eax, eax
0x4E3AA5: jz      short loc_4E3ABE
0x4E3AA7: lea     edx, [esp+240h+Str]
0x4E3AAB: push    edx
0x4E3AAC: mov     ecx, esi
0x4E3AAE: mov     byte ptr [eax], 0
0x4E3AB1: call    sub_6899C0
0x4E3AB6: push    eax
0x4E3AB7: mov     ecx, ebx
0x4E3AB9: call    sub_476080
0x4E3ABE: test    ebx, ebx
0x4E3AC0: jz      loc_4E3E4B
0x4E3AC6: mov     ecx, ebx
0x4E3AC8: jmp     loc_4E3E33
0x4E3ACD: test    ebx, ebx
0x4E3ACF: jz      loc_4E3E4B
0x4E3AD5: mov     ecx, ebx
0x4E3AD7: call    sub_4796F0
0x4E3ADC: push    0DCh ; 'Ü'; Size
0x4E3AE1: call    FormHeapAlloc
0x4E3AE6: add     esp, 4
0x4E3AE9: mov     [esp+240h+var_220], eax
0x4E3AED: test    eax, eax
0x4E3AEF: mov     [esp+240h+var_4], 1
0x4E3AFA: jz      short loc_4E3B05
0x4E3AFC: mov     ecx, eax
0x4E3AFE: call    NewActorAnimData
0x4E3B03: jmp     short loc_4E3B07
0x4E3B05: xor     eax, eax
0x4E3B07: push    eax
0x4E3B08: mov     ecx, ebp
0x4E3B0A: mov     [esp+244h+var_4], 0FFFFFFFFh
0x4E3B15: call    sub_4D83B0
0x4E3B1A: mov     ecx, [ebp+3Ch]
0x4E3B1D: test    ecx, ecx
0x4E3B1F: mov     [esp+240h+var_224], eax
0x4E3B23: jz      short loc_4E3B36
0x4E3B25: mov     eax, [ecx]
0x4E3B27: mov     edx, [eax+8]
0x4E3B2A: call    edx
0x4E3B2C: mov     ebx, eax
0x4E3B2E: test    ebx, ebx
0x4E3B30: mov     [esp+240h+var_220], ebx
0x4E3B34: jnz     short loc_4E3B5B
0x4E3B36: mov     ecx, [esp+240h+var_228]
0x4E3B3A: mov     eax, [ecx+0Ch]
0x4E3B3D: push    eax
0x4E3B3E: mov     eax, [ecx]
0x4E3B40: mov     edx, [eax+0D4h]
0x4E3B46: call    edx
0x4E3B48: push    eax; ArgList
0x4E3B49: push    offset aSetanimationCl; "SetAnimation cleared 3D because %s (%08"...
0x4E3B4E: call    PrintError
0x4E3B53: add     esp, 0Ch
0x4E3B56: jmp     loc_4E3F06
0x4E3B5B: mov     ecx, ebp
0x4E3B5D: call    sub_4E1580
0x4E3B62: mov     ecx, ebp; this
0x4E3B64: call    TESObjectREFR_GetHealth
0x4E3B69: fcomp   dword ptr ds:0A2FAA8h
0x4E3B6F: fnstsw  ax
0x4E3B71: test    ah, 41h
0x4E3B74: jnz     short loc_4E3BA0
0x4E3B76: mov     esi, [esp+240h+var_228]
0x4E3B7A: mov     eax, [esi+0ACh]
0x4E3B80: mov     edx, [eax+14h]
0x4E3B83: lea     ecx, [esi+0ACh]
0x4E3B89: push    0; int
0x4E3B8B: call    edx
0x4E3B8D: mov     ecx, ds:0B33A1Ch
0x4E3B93: push    eax; char *
0x4E3B94: call    sub_435830
0x4E3B99: mov     edi, eax
0x4E3B9B: jmp     loc_4E3CE8
0x4E3BA0: mov     eax, ds:0A2FFB8h
0x4E3BA5: mov     cx, ds:0A2FFBCh
0x4E3BAC: mov     dword ptr [esp+240h+Str], eax
0x4E3BB0: lea     eax, [esp+240h+Str]
0x4E3BB4: mov     [esp+240h+var_214], cx
0x4E3BB9: add     eax, 0FFFFFFFFh
0x4E3BBC: lea     esp, [esp+0]
0x4E3BC0: mov     cl, [eax+1]
0x4E3BC3: add     eax, 1
0x4E3BC6: test    cl, cl
0x4E3BC8: jnz     short loc_4E3BC0
0x4E3BCA: mov     edx, ds:0A3CA70h
0x4E3BD0: mov     cx, ds:0A3CA74h
0x4E3BD7: mov     [eax], edx
0x4E3BD9: mov     dl, ds:0A3CA76h
0x4E3BDF: lea     edi, [esp+240h+Str]
0x4E3BE3: mov     [eax+4], cx
0x4E3BE7: mov     [eax+6], dl
0x4E3BEA: add     edi, 0FFFFFFFFh
0x4E3BED: lea     ecx, [ecx+0]
0x4E3BF0: mov     al, [edi+1]
0x4E3BF3: add     edi, 1
0x4E3BF6: test    al, al
0x4E3BF8: jnz     short loc_4E3BF0
0x4E3BFA: mov     ax, ds:0A3207Ch
0x4E3C00: mov     edx, [ebp+0]
0x4E3C03: mov     [edi], ax
0x4E3C06: mov     eax, [edx+170h]
0x4E3C0C: mov     ecx, ebp
0x4E3C0E: call    eax
0x4E3C10: push    eax
0x4E3C11: call    GetFormModelPAth
0x4E3C16: add     esp, 4
0x4E3C19: mov     ecx, eax
0x4E3C1B: jmp     short loc_4E3C20
0x4E3C1D: align 10h
0x4E3C20: mov     dl, [eax]
0x4E3C22: add     eax, 1
0x4E3C25: test    dl, dl
0x4E3C27: jnz     short loc_4E3C20
0x4E3C29: lea     edi, [esp+240h+Str]
0x4E3C2D: sub     eax, ecx
0x4E3C2F: mov     esi, ecx
0x4E3C31: add     edi, 0FFFFFFFFh
0x4E3C34: mov     cl, [edi+1]
0x4E3C37: add     edi, 1
0x4E3C3A: test    cl, cl
0x4E3C3C: jnz     short loc_4E3C34
0x4E3C3E: mov     ecx, eax
0x4E3C40: shr     ecx, 2
0x4E3C43: rep movsd
0x4E3C45: mov     ecx, eax
0x4E3C47: and     ecx, 3
0x4E3C4A: rep movsb
0x4E3C4C: lea     ecx, [esp+240h+Str]
0x4E3C50: push    5Ch ; '\'; Ch
0x4E3C52: push    ecx; Str
0x4E3C53: call    _strrchr
0x4E3C58: mov     edx, ds:0A370DCh
0x4E3C5E: mov     esi, eax
0x4E3C60: mov     [esi], edx
0x4E3C62: mov     eax, ds:0A370E0h
0x4E3C67: mov     [esi+4], eax
0x4E3C6A: mov     cl, ds:0A370E4h
0x4E3C70: mov     [esi+8], cl
0x4E3C73: mov     edx, [ebp+0]
0x4E3C76: mov     eax, [edx+170h]
0x4E3C7C: add     esp, 8
0x4E3C7F: push    0; int
0x4E3C81: mov     ecx, ebp
0x4E3C83: call    eax
0x4E3C85: push    eax
0x4E3C86: call    GetFormModelPAth
0x4E3C8B: add     esp, 4
0x4E3C8E: push    eax; char *
0x4E3C8F: lea     ecx, [esp+248h+Str]
0x4E3C93: push    ecx; Str
0x4E3C94: mov     ecx, ds:0B33A1Ch
0x4E3C9A: call    sub_434850
0x4E3C9F: mov     edx, ds:0A370D0h
0x4E3CA5: mov     [esi], edx
0x4E3CA7: mov     edi, eax
0x4E3CA9: mov     eax, ds:0A370D4h
0x4E3CAE: mov     [esi+4], eax
0x4E3CB1: mov     cx, ds:0A370D8h
0x4E3CB8: mov     [esi+8], cx
0x4E3CBC: mov     edx, [ebp+0]
0x4E3CBF: mov     eax, [edx+170h]
0x4E3CC5: push    edi; int
0x4E3CC6: mov     ecx, ebp
0x4E3CC8: call    eax
0x4E3CCA: push    eax
0x4E3CCB: call    GetFormModelPAth
0x4E3CD0: add     esp, 4
0x4E3CD3: push    eax; char *
0x4E3CD4: lea     ecx, [esp+248h+Str]
0x4E3CD8: push    ecx; Str
0x4E3CD9: mov     ecx, ds:0B33A1Ch
0x4E3CDF: call    sub_434850
0x4E3CE4: mov     esi, [esp+240h+var_228]
0x4E3CE8: mov     ecx, [esp+240h+var_224]; this
0x4E3CEC: push    ebp; int
0x4E3CED: push    ebx; int
0x4E3CEE: push    edi; int
0x4E3CEF: call    Menu_PickIdles??
0x4E3CF4: test    al, al
0x4E3CF6: jnz     short loc_4E3D16
0x4E3CF8: mov     eax, [esi+0Ch]
0x4E3CFB: mov     edx, [esi]
0x4E3CFD: push    eax
0x4E3CFE: mov     eax, [edx+0D4h]
0x4E3D04: mov     ecx, esi
0x4E3D06: call    eax
0x4E3D08: push    eax; ArgList
0x4E3D09: push    offset aBadInitanima_0; "Bad InitAnimation for NPC '%s' (%08X). "...
0x4E3D0E: call    PrintError
0x4E3D13: add     esp, 0Ch
0x4E3D16: mov     ecx, ebp; this
0x4E3D18: call    TESObjectREFR_GetHealth
0x4E3D1D: fcomp   dword ptr ds:0A2FAA8h
0x4E3D23: fnstsw  ax
0x4E3D25: test    ah, 41h
0x4E3D28: jnz     short loc_4E3D97
0x4E3D2A: mov     edi, [esp+240h+var_228]
0x4E3D2E: lea     esi, [edi+94h]
0x4E3D34: mov     ecx, esi
0x4E3D36: call    TESAnimation_HasAnimations
0x4E3D3B: test    al, al
0x4E3D3D: jz      short loc_4E3D97
0x4E3D3F: mov     edx, [edi+0ACh]
0x4E3D45: mov     eax, [edx+14h]
0x4E3D48: lea     ecx, [edi+0ACh]
0x4E3D4E: call    eax
0x4E3D50: lea     edx, [esp+240h+var_114]
0x4E3D57: mov     cl, [eax]
0x4E3D59: mov     [edx], cl
0x4E3D5B: add     eax, 1
0x4E3D5E: add     edx, 1
0x4E3D61: test    cl, cl
0x4E3D63: jnz     short loc_4E3D57
0x4E3D65: lea     ecx, [esp+240h+var_114]
0x4E3D6C: push    5Ch ; '\'; Ch
0x4E3D6E: push    ecx; Str
0x4E3D6F: call    _strrchr
0x4E3D74: add     esp, 8
0x4E3D77: test    eax, eax
0x4E3D79: jz      short loc_4E3D97
0x4E3D7B: lea     edx, [esp+240h+var_114]
0x4E3D82: push    edx
0x4E3D83: mov     ecx, esi
0x4E3D85: mov     byte ptr [eax], 0
0x4E3D88: call    sub_6899C0
0x4E3D8D: mov     ecx, [esp+244h+var_224]
0x4E3D91: push    eax
0x4E3D92: call    sub_476080
0x4E3D97: mov     esi, [ebp+58h]
0x4E3D9A: test    esi, esi
0x4E3D9C: jz      loc_4E3E2B
0x4E3DA2: mov     eax, [esi]
0x4E3DA4: mov     edx, [eax+2FCh]
0x4E3DAA: mov     ecx, esi
0x4E3DAC: call    edx
0x4E3DAE: test    al, al
0x4E3DB0: jz      short loc_4E3DC0
0x4E3DB2: mov     eax, [esi]
0x4E3DB4: mov     edx, [eax+308h]
0x4E3DBA: push    1
0x4E3DBC: mov     ecx, esi
0x4E3DBE: call    edx
0x4E3DC0: mov     ecx, ds:0B333C4h
0x4E3DC6: cmp     ebp, ecx
0x4E3DC8: jnz     short loc_4E3E04
0x4E3DCA: push    1
0x4E3DCC: call    sub_6600D0
0x4E3DD1: mov     ebx, [esp+240h+var_21C]
0x4E3DD5: cmp     ebx, eax
0x4E3DD7: jnz     short loc_4E3E08
0x4E3DD9: mov     edi, [ebp+58h]
0x4E3DDC: mov     esi, [edi]
0x4E3DDE: mov     ecx, ds:0B333C4h; this
0x4E3DE4: push    ebp
0x4E3DE5: push    1; a2
0x4E3DE7: add     esi, 150h
0x4E3DED: call    Player_GetAnimData
0x4E3DF2: push    eax
0x4E3DF3: push    ebx
0x4E3DF4: mov     ecx, ebp
0x4E3DF6: call    Actor_IsWeaponOut
0x4E3DFB: mov     ecx, edi
0x4E3DFD: push    eax
0x4E3DFE: mov     eax, [esi]
0x4E3E00: call    eax
0x4E3E02: jmp     short loc_4E3E2B
0x4E3E04: mov     ebx, [esp+240h+var_21C]
0x4E3E08: mov     edi, [ebp+58h]
0x4E3E0B: mov     esi, [edi]
0x4E3E0D: push    ebp
0x4E3E0E: mov     ecx, ebp
0x4E3E10: add     esi, 150h
0x4E3E16: call    TESObjectREFR_GetAnimData
0x4E3E1B: push    eax
0x4E3E1C: push    ebx
0x4E3E1D: mov     ecx, ebp
0x4E3E1F: call    Actor_IsWeaponOut
0x4E3E24: mov     edx, [esi]
0x4E3E26: mov     ecx, edi
0x4E3E28: push    eax
0x4E3E29: call    edx
0x4E3E2B: mov     ecx, [esp+240h+var_224]; this
0x4E3E2F: test    ecx, ecx
0x4E3E31: jz      short loc_4E3E4B
0x4E3E33: fld     dword ptr ds:0A30634h
0x4E3E39: sub     esp, 8
0x4E3E3C: fstp    dword ptr [esp+248h+var_244]; float
0x4E3E40: fldz
0x4E3E42: fstp    [esp+248h+a2]; float
0x4E3E45: push    ebp; int
0x4E3E46: call    sub_476D10
0x4E3E4B: mov     eax, [ebp+0]
0x4E3E4E: mov     edx, [eax+190h]
0x4E3E54: mov     ecx, ebp
0x4E3E56: call    edx
0x4E3E58: test    al, al
0x4E3E5A: jz      short loc_4E3ED9
0x4E3E5C: mov     ecx, [ebp+58h]
0x4E3E5F: test    ecx, ecx
0x4E3E61: jz      short loc_4E3EC2
0x4E3E63: mov     eax, [ecx]
0x4E3E65: mov     edx, [eax+8]
0x4E3E68: call    edx
0x4E3E6A: cmp     eax, 1
0x4E3E6D: ja      short loc_4E3EC2
0x4E3E6F: mov     esi, [ebp+58h]
0x4E3E72: test    esi, esi
0x4E3E74: jz      short loc_4E3EC2
0x4E3E76: mov     edi, [esi]
0x4E3E78: mov     eax, [edi+0ECh]
0x4E3E7E: push    0
0x4E3E80: push    1
0x4E3E82: mov     ecx, esi
0x4E3E84: call    eax
0x4E3E86: mov     edx, [edi+104h]
0x4E3E8C: push    eax
0x4E3E8D: mov     ecx, esi
0x4E3E8F: call    edx
0x4E3E91: mov     ecx, [esp+240h+var_224]
0x4E3E95: mov     eax, [esi]
0x4E3E97: mov     edx, [eax+114h]
0x4E3E9D: push    ecx
0x4E3E9E: mov     ecx, esi
0x4E3EA0: call    edx
0x4E3EA2: mov     ecx, ds:0B333C4h; this
0x4E3EA8: cmp     ebp, ecx
0x4E3EAA: jnz     short loc_4E3EC2
0x4E3EAC: mov     edi, [esi]
0x4E3EAE: push    1; a2
0x4E3EB0: add     edi, 114h
0x4E3EB6: call    Player_GetAnimData
0x4E3EBB: push    eax
0x4E3EBC: mov     eax, [edi]
0x4E3EBE: mov     ecx, esi
0x4E3EC0: call    eax
0x4E3EC2: mov     ecx, [esp+240h+var_220]
0x4E3EC6: push    offset dword_B3CD7C
0x4E3ECB: call    sub_700010
0x4E3ED0: test    eax, eax
0x4E3ED2: jz      short loc_4E3ED9
0x4E3ED4: or      word ptr [eax+8], 40h
0x4E3ED9: lea     esi, [ebp+44h]
0x4E3EDC: mov     ecx, esi
0x4E3EDE: call    sub_41E620
0x4E3EE3: test    eax, eax
0x4E3EE5: jz      short loc_4E3F06
0x4E3EE7: cmp     [esp+240h+var_224], 0
0x4E3EEC: jz      short loc_4E3F06
0x4E3EEE: fld     dword ptr [eax+10h]
0x4E3EF1: push    1; a3
0x4E3EF3: push    ecx
0x4E3EF4: mov     ecx, [ebp+3Ch]; this
0x4E3EF7: fstp    [esp+248h+a2]; a2
0x4E3EFA: call    NiAVObject_UpdateNiAVObject
0x4E3EFF: mov     ecx, esi
0x4E3F01: call    sub_41F5A0
0x4E3F06: mov     ecx, dword ptr [esp+240h+var_C]
0x4E3F0D: mov     large fs:0, ecx
0x4E3F14: pop     ecx
0x4E3F15: pop     edi
0x4E3F16: pop     esi
0x4E3F17: pop     ebp
0x4E3F18: pop     ebx
0x4E3F19: mov     ecx, [esp+22Ch+var_10]
0x4E3F20: xor     ecx, esp
0x4E3F22: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4E3F27: add     esp, 22Ch
0x4E3F2D: retn
