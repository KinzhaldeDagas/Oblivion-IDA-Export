0x4D35D0: push    esi
0x4D35D1: mov     esi, [esp+4+arg_0]
0x4D35D5: test    esi, esi
0x4D35D7: push    edi
0x4D35D8: mov     edi, ecx
0x4D35DA: jz      loc_4D38DF
0x4D35E0: mov     eax, [esi]
0x4D35E2: mov     edx, [eax+170h]
0x4D35E8: mov     ecx, esi
0x4D35EA: call    edx
0x4D35EC: test    eax, eax
0x4D35EE: jz      loc_4D38DF
0x4D35F4: test    dword ptr [edi+8], 400h
0x4D35FB: jz      short loc_4D3667
0x4D35FD: push    edi; a2
0x4D35FE: mov     ecx, offset stru_B35C80; this
0x4D3603: call    sub_496EA0
0x4D3608: push    esi
0x4D3609: lea     ecx, [edi+48h]
0x4D360C: call    BSSimpleList_PushFront
0x4D3611: push    edi; a2
0x4D3612: mov     ecx, offset stru_B35C80; this
0x4D3617: call    sub_496F50
0x4D361C: push    edi
0x4D361D: lea     ecx, [esi+44h]
0x4D3620: call    sub_4247B0
0x4D3625: test    byte ptr [edi+24h], 1
0x4D3629: jnz     short loc_4D3638
0x4D362B: mov     ecx, [edi+50h]
0x4D362E: test    ecx, ecx
0x4D3630: jz      short loc_4D3638
0x4D3632: push    esi
0x4D3633: call    sub_4F0120
0x4D3638: mov     eax, ds:0BA9DE4h
0x4D363D: mov     ecx, large fs:2Ch
0x4D3644: mov     edx, [ecx+eax*4]
0x4D3647: cmp     byte ptr [edx+184h], 0
0x4D364E: jnz     loc_4D38DF
0x4D3654: mov     eax, [edi]
0x4D3656: mov     edx, [eax+90h]
0x4D365C: push    1
0x4D365E: mov     ecx, edi
0x4D3660: call    edx
0x4D3662: pop     edi
0x4D3663: pop     esi
0x4D3664: retn    4
0x4D3667: mov     ecx, esi; this
0x4D3669: call    TESObjectREFR_GetParentCell
0x4D366E: test    eax, eax
0x4D3670: jz      short loc_4D367A
0x4D3672: push    esi
0x4D3673: mov     ecx, eax
0x4D3675: call    sub_4CECD0
0x4D367A: push    edi; a2
0x4D367B: mov     ecx, offset stru_B35C80; this
0x4D3680: call    sub_496EA0
0x4D3685: push    esi
0x4D3686: lea     ecx, [edi+48h]
0x4D3689: call    BSSimpleList_PushFront
0x4D368E: mov     eax, [esi]
0x4D3690: mov     edx, [eax+194h]
0x4D3696: push    edi
0x4D3697: mov     ecx, esi
0x4D3699: call    edx
0x4D369B: push    edi; a2
0x4D369C: mov     ecx, offset stru_B35C80; this
0x4D36A1: call    sub_496F50
0x4D36A6: mov     eax, [esi+8]
0x4D36A9: shr     eax, 0Bh
0x4D36AC: test    al, 1
0x4D36AE: jnz     short loc_4D36E7
0x4D36B0: mov     edx, [esi]
0x4D36B2: mov     eax, [edx+154h]
0x4D36B8: mov     ecx, esi
0x4D36BA: call    eax
0x4D36BC: test    eax, eax
0x4D36BE: jz      short loc_4D36E7
0x4D36C0: push    0; int
0x4D36C2: push    offset ??_R0?AVMobileObject@@@8; struct TypeDescriptor *
0x4D36C7: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4D36CC: push    0; int
0x4D36CE: push    esi; void *
0x4D36CF: call    OblivionDynamicCast
0x4D36D4: add     esp, 14h
0x4D36D7: test    eax, eax
0x4D36D9: jnz     short loc_4D36E7
0x4D36DB: mov     edx, [esi]
0x4D36DD: mov     eax, [edx+148h]
0x4D36E3: mov     ecx, esi
0x4D36E5: call    eax
0x4D36E7: mov     ecx, [esi+8]
0x4D36EA: push    ebx
0x4D36EB: mov     ebx, ds:0BA9DE4h
0x4D36F1: shr     ecx, 0Eh
0x4D36F4: test    cl, 1
0x4D36F7: push    ebp
0x4D36F8: mov     ebp, large fs:2Ch
0x4D36FF: jnz     short loc_4D3726
0x4D3701: mov     ecx, esi; this
0x4D3703: call    TESObjectREFR_IsPersistent?
0x4D3708: test    al, al
0x4D370A: jnz     short loc_4D3726
0x4D370C: mov     edx, [ebp+ebx*4+0]
0x4D3710: cmp     [edx+184h], al
0x4D3716: jnz     short loc_4D3726
0x4D3718: mov     eax, [edi]
0x4D371A: mov     edx, [eax+90h]
0x4D3720: push    1
0x4D3722: mov     ecx, edi
0x4D3724: call    edx
0x4D3726: mov     eax, [ebp+ebx*4+0]
0x4D372A: cmp     byte ptr [eax+184h], 0
0x4D3731: jnz     loc_4D38D4
0x4D3737: mov     eax, [esi+8]
0x4D373A: mov     ecx, eax
0x4D373C: shr     ecx, 0Eh
0x4D373F: test    cl, 1
0x4D3742: jnz     loc_4D38D4
0x4D3748: shr     eax, 0Bh
0x4D374B: test    al, 1
0x4D374D: jnz     loc_4D38D4
0x4D3753: mov     edx, [esi]
0x4D3755: mov     eax, [edx+154h]
0x4D375B: mov     ecx, esi
0x4D375D: call    eax
0x4D375F: mov     ecx, ds:0B333A0h
0x4D3765: push    0; a2
0x4D3767: push    edi; a1
0x4D3768: mov     ebp, eax
0x4D376A: call    TESObjectCELL_IsProcessLevel?LowHigh
0x4D376F: test    al, al
0x4D3771: jz      loc_4D3897
0x4D3777: xor     bl, bl
0x4D3779: test    ebp, ebp
0x4D377B: jz      short loc_4D37DD
0x4D377D: push    esi
0x4D377E: mov     ecx, edi
0x4D3780: call    TESObjectCELL__AttachReference3DToQuad
0x4D3785: mov     edx, [esi]
0x4D3787: mov     eax, [edx+164h]
0x4D378D: mov     ecx, esi
0x4D378F: call    eax
0x4D3791: test    eax, eax
0x4D3793: jz      short loc_4D37CC
0x4D3795: push    esi; a2
0x4D3796: mov     ecx, eax; this
0x4D3798: call    sub_474510
0x4D379D: mov     eax, [esi]
0x4D379F: mov     edx, [eax+190h]
0x4D37A5: mov     ecx, esi
0x4D37A7: call    edx
0x4D37A9: test    al, al
0x4D37AB: jz      loc_4D38D4
0x4D37B1: push    esi
0x4D37B2: mov     ecx, offset ActorProcessManager_ptr
0x4D37B7: call    sub_6748B0
0x4D37BC: push    0
0x4D37BE: mov     ecx, esi
0x4D37C0: call    sub_4D80C0
0x4D37C5: pop     ebp
0x4D37C6: pop     ebx
0x4D37C7: pop     edi
0x4D37C8: pop     esi
0x4D37C9: retn    4
0x4D37CC: fldz
0x4D37CE: push    0; a3
0x4D37D0: push    ecx
0x4D37D1: fstp    [esp+18h+a2]; a2
0x4D37D4: mov     ecx, ebp; this
0x4D37D6: call    NiAVObject_UpdateNiAVObject
0x4D37DB: jmp     short loc_4D379D
0x4D37DD: push    0; int
0x4D37DF: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x4D37E4: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x4D37E9: push    0; int
0x4D37EB: push    esi; void *
0x4D37EC: call    OblivionDynamicCast
0x4D37F1: add     esp, 14h
0x4D37F4: test    eax, eax
0x4D37F6: jz      short loc_4D3803
0x4D37F8: mov     al, [edi+26h]
0x4D37FB: cmp     al, 6
0x4D37FD: jz      short loc_4D3803
0x4D37FF: cmp     al, 5
0x4D3801: jnz     short loc_4D3805
0x4D3803: mov     bl, 1
0x4D3805: mov     edx, [esi]
0x4D3807: mov     eax, [edx+190h]
0x4D380D: mov     ecx, esi
0x4D380F: call    eax
0x4D3811: test    al, al
0x4D3813: jz      short loc_4D3828
0x4D3815: mov     ecx, ds:0B333C4h; this
0x4D381B: call    PlayerCharacter__IsSleeping?
0x4D3820: test    al, al
0x4D3822: jnz     loc_4D379D
0x4D3828: test    bl, bl
0x4D382A: jz      loc_4D379D
0x4D3830: mov     edx, [esi]
0x4D3832: mov     eax, [edx+190h]
0x4D3838: mov     ecx, esi
0x4D383A: call    eax
0x4D383C: test    al, al
0x4D383E: jz      short loc_4D386C
0x4D3840: mov     ecx, ds:0B33B00h
0x4D3846: call    sub_45A500
0x4D384B: test    al, al
0x4D384D: jz      short loc_4D3860
0x4D384F: mov     ecx, ds:0B33B00h
0x4D3855: mov     edx, [ecx+18h]
0x4D3858: shr     edx, 4
0x4D385B: test    dl, 1
0x4D385E: jz      short loc_4D386C
0x4D3860: mov     eax, [esi]
0x4D3862: mov     edx, [eax+1A4h]
0x4D3868: mov     ecx, esi
0x4D386A: call    edx
0x4D386C: mov     ecx, ds:0B333A0h
0x4D3872: push    0
0x4D3874: push    edi
0x4D3875: call    sub_440C80
0x4D387A: mov     ecx, ds:0B33A1Ch
0x4D3880: push    eax
0x4D3881: push    esi
0x4D3882: call    sub_438060
0x4D3887: push    0
0x4D3889: mov     ecx, esi
0x4D388B: call    sub_4D80C0
0x4D3890: pop     ebp
0x4D3891: pop     ebx
0x4D3892: pop     edi
0x4D3893: pop     esi
0x4D3894: retn    4
0x4D3897: mov     eax, [esi]
0x4D3899: mov     edx, [eax+190h]
0x4D389F: mov     ecx, esi
0x4D38A1: call    edx
0x4D38A3: test    al, al
0x4D38A5: jz      short loc_4D38D4
0x4D38A7: mov     ecx, ds:0B333C4h; this
0x4D38AD: call    PlayerCharacter__IsSleeping?
0x4D38B2: test    al, al
0x4D38B4: jnz     short loc_4D38D4
0x4D38B6: mov     eax, ds:0B33B00h
0x4D38BB: mov     ecx, [eax+18h]
0x4D38BE: shr     ecx, 5
0x4D38C1: test    cl, 1
0x4D38C4: jnz     short loc_4D38D4
0x4D38C6: mov     edx, [esi]
0x4D38C8: mov     eax, [edx+150h]
0x4D38CE: push    0
0x4D38D0: mov     ecx, esi
0x4D38D2: call    eax
0x4D38D4: push    0
0x4D38D6: mov     ecx, esi
0x4D38D8: call    sub_4D80C0
0x4D38DD: pop     ebp
0x4D38DE: pop     ebx
0x4D38DF: pop     edi
0x4D38E0: pop     esi
0x4D38E1: retn    4
