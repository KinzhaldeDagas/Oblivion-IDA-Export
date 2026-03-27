0x5F3140: push    0FFFFFFFFh
0x5F3142: push    offset SEH_5F3140
0x5F3147: mov     eax, large fs:0
0x5F314D: push    eax
0x5F314E: sub     esp, 18h
0x5F3151: push    ebx
0x5F3152: push    ebp
0x5F3153: push    esi
0x5F3154: push    edi
0x5F3155: mov     eax, ds:0B30AACh
0x5F315A: xor     eax, esp
0x5F315C: push    eax
0x5F315D: lea     eax, [esp+38h+var_C]
0x5F3161: mov     large fs:0, eax
0x5F3167: mov     ebp, ecx
0x5F3169: mov     ecx, ds:0B333C4h
0x5F316F: cmp     ebp, ecx
0x5F3171: jnz     short loc_5F317C
0x5F3173: push    0
0x5F3175: call    sub_6600D0
0x5F317A: jmp     short loc_5F3189
0x5F317C: mov     eax, [ebp+0]
0x5F317F: mov     edx, [eax+168h]
0x5F3185: mov     ecx, ebp
0x5F3187: call    edx
0x5F3189: mov     [esp+38h+var_1C], eax
0x5F318D: mov     eax, [esp+38h+arg_0]
0x5F3191: push    eax
0x5F3192: call    sub_4691B0
0x5F3197: mov     edx, [ebp+0]
0x5F319A: mov     edi, eax
0x5F319C: mov     eax, [edx+170h]
0x5F31A2: add     esp, 4
0x5F31A5: mov     ecx, ebp
0x5F31A7: mov     [esp+38h+var_14], edi
0x5F31AB: call    eax
0x5F31AD: mov     esi, eax
0x5F31AF: test    esi, esi
0x5F31B1: jz      short loc_5F31C9
0x5F31B3: mov     edx, [ebp+0]
0x5F31B6: mov     eax, [edx+190h]
0x5F31BC: mov     ecx, ebp
0x5F31BE: call    eax
0x5F31C0: test    al, al
0x5F31C2: jz      short loc_5F31C9
0x5F31C4: lea     eax, [esi+44h]
0x5F31C7: jmp     short loc_5F31CB
0x5F31C9: xor     eax, eax
0x5F31CB: push    eax
0x5F31CC: push    ebp; a1
0x5F31CD: call    ContainerExtraData_GetContainerExtraDataForRef
0x5F31D2: add     esp, 8
0x5F31D5: test    edi, edi
0x5F31D7: mov     esi, eax
0x5F31D9: mov     byte ptr [esp+38h+var_20], 0
0x5F31DE: mov     [esp+38h+var_21], 0
0x5F31E3: jz      loc_5F33FD
0x5F31E9: mov     edi, [esp+38h+var_14]
0x5F31ED: push    0
0x5F31EF: push    7
0x5F31F1: mov     ecx, edi
0x5F31F3: call    TESBipedModelForm_CoversSlot
0x5F31F8: test    al, al
0x5F31FA: jnz     short loc_5F320F
0x5F31FC: push    0
0x5F31FE: push    6
0x5F3200: mov     ecx, edi
0x5F3202: call    TESBipedModelForm_CoversSlot
0x5F3207: test    al, al
0x5F3209: jz      loc_5F32F0
0x5F320F: push    0
0x5F3211: push    7
0x5F3213: mov     ecx, edi
0x5F3215: call    TESBipedModelForm_CoversSlot
0x5F321A: test    al, al
0x5F321C: jz      short loc_5F3223
0x5F321E: mov     byte ptr [esp+38h+var_20], 1
0x5F3223: push    0
0x5F3225: mov     ecx, esi
0x5F3227: mov     [esp+3Ch+var_21], 0
0x5F322C: call    sub_485F10
0x5F3231: test    eax, eax
0x5F3233: jz      short loc_5F323A
0x5F3235: mov     [esp+38h+var_21], 1
0x5F323A: push    1
0x5F323C: mov     ecx, esi
0x5F323E: xor     bl, bl
0x5F3240: call    sub_485F10
0x5F3245: test    eax, eax
0x5F3247: jz      short loc_5F324B
0x5F3249: mov     bl, 1
0x5F324B: mov     cl, [esp+38h+var_21]
0x5F324F: test    cl, cl
0x5F3251: jz      short loc_5F32C0
0x5F3253: test    bl, bl
0x5F3255: jz      short loc_5F32C0
0x5F3257: cmp     [esp+38h+var_1C], 0
0x5F325C: jz      loc_5F33FD
0x5F3262: cmp     byte ptr [esp+38h+var_20], 0
0x5F3267: push    0
0x5F3269: mov     ecx, esi
0x5F326B: jz      short loc_5F3280
0x5F326D: push    7
0x5F326F: call    ContainerExtraData_GetEquippedInstance
0x5F3274: mov     ecx, [esp+38h+var_1C]
0x5F3278: mov     ecx, [ecx+0BCh]
0x5F327E: jmp     short loc_5F3291
0x5F3280: push    6
0x5F3282: call    ContainerExtraData_GetEquippedInstance
0x5F3287: mov     edx, [esp+38h+var_1C]
0x5F328B: mov     ecx, [edx+0ACh]
0x5F3291: xor     edx, edx
0x5F3293: test    eax, eax
0x5F3295: jz      short loc_5F329F
0x5F3297: mov     eax, [eax]
0x5F3299: test    eax, eax
0x5F329B: jz      short loc_5F329F
0x5F329D: mov     edx, [eax]
0x5F329F: test    ecx, ecx
0x5F32A1: jz      loc_5F33FD
0x5F32A7: mov     eax, [esp+38h+var_20]
0x5F32AB: push    1
0x5F32AD: push    0
0x5F32AF: push    eax
0x5F32B0: push    edx
0x5F32B1: push    1
0x5F32B3: push    ecx
0x5F32B4: mov     ecx, ebp
0x5F32B6: call    Actor_UnequipItem
0x5F32BB: jmp     loc_5F33FD
0x5F32C0: mov     al, byte ptr [esp+38h+var_20]
0x5F32C4: test    al, al
0x5F32C6: jz      short loc_5F32D6
0x5F32C8: test    bl, bl
0x5F32CA: jz      short loc_5F32D6
0x5F32CC: mov     byte ptr [esp+38h+var_20], 0
0x5F32D1: jmp     loc_5F33FD
0x5F32D6: test    cl, cl
0x5F32D8: jz      loc_5F33FD
0x5F32DE: test    al, al
0x5F32E0: jnz     loc_5F33FD
0x5F32E6: mov     byte ptr [esp+38h+var_20], 1
0x5F32EB: jmp     loc_5F33FD
0x5F32F0: cmp     [esp+38h+var_1C], 0
0x5F32F5: jz      loc_5F33FD
0x5F32FB: xor     esi, esi
0x5F32FD: mov     [esp+38h+var_18], esi
0x5F3301: mov     ecx, [esp+38h+var_14]
0x5F3305: push    0
0x5F3307: push    esi
0x5F3308: call    TESBipedModelForm_CoversSlot
0x5F330D: test    al, al
0x5F330F: jz      loc_5F33D3
0x5F3315: mov     ebx, [esp+38h+var_1C]
0x5F3319: add     ebx, 4Ch ; 'L'
0x5F331C: mov     [esp+38h+var_10], 10h
0x5F3324: mov     edi, [ebx]
0x5F3326: push    0; int
0x5F3328: push    offset ??_R0?AVTESBipedModelForm@@@8; struct TypeDescriptor *
0x5F332D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5F3332: push    0; int
0x5F3334: push    edi; void *
0x5F3335: call    OblivionDynamicCast
0x5F333A: add     esp, 14h
0x5F333D: test    eax, eax
0x5F333F: jz      loc_5F33C1
0x5F3345: push    0
0x5F3347: push    esi
0x5F3348: mov     ecx, eax
0x5F334A: call    TESBipedModelForm_CoversSlot
0x5F334F: test    al, al
0x5F3351: jz      short loc_5F33C1
0x5F3353: cmp     byte ptr [edi+4], 9
0x5F3357: jz      short loc_5F33C1
0x5F3359: mov     ecx, [esp+38h+var_18]
0x5F335D: push    0
0x5F335F: push    ecx
0x5F3360: lea     ecx, [ebp+44h]; this
0x5F3363: call    ExtraDataList_GetContainerChanges
0x5F3368: mov     ecx, eax
0x5F336A: call    ContainerExtraData_GetEquippedInstance
0x5F336F: mov     esi, eax
0x5F3371: xor     ecx, ecx
0x5F3373: test    esi, esi
0x5F3375: jz      short loc_5F3395
0x5F3377: mov     eax, [esi]
0x5F3379: test    eax, eax
0x5F337B: jz      short loc_5F3395
0x5F337D: cmp     [eax], ecx
0x5F337F: jz      short loc_5F3395
0x5F3381: mov     ecx, [eax]
0x5F3383: call    sub_41DF40
0x5F3388: test    al, al
0x5F338A: jz      short loc_5F3391
0x5F338C: mov     [esp+38h+var_21], 1
0x5F3391: mov     eax, [esi]
0x5F3393: mov     ecx, [eax]
0x5F3395: cmp     [esp+38h+var_21], 0
0x5F339A: jnz     short loc_5F33AD
0x5F339C: push    1
0x5F339E: push    0
0x5F33A0: push    0
0x5F33A2: push    ecx
0x5F33A3: push    1
0x5F33A5: push    edi
0x5F33A6: mov     ecx, ebp
0x5F33A8: call    Actor_UnequipItem
0x5F33AD: test    esi, esi
0x5F33AF: jz      short loc_5F33C1
0x5F33B1: mov     ecx, esi
0x5F33B3: call    ContainerEntryExtraData_DestroyDataTable
0x5F33B8: push    esi
0x5F33B9: call    FormHeapFree
0x5F33BE: add     esp, 4
0x5F33C1: mov     esi, [esp+38h+var_18]
0x5F33C5: add     ebx, 10h
0x5F33C8: sub     [esp+38h+var_10], 1
0x5F33CD: jnz     loc_5F3324
0x5F33D3: add     esi, 1
0x5F33D6: cmp     esi, 10h
0x5F33D9: mov     [esp+38h+var_18], esi
0x5F33DD: jl      loc_5F3301
0x5F33E3: cmp     [esp+38h+var_21], 0
0x5F33E8: jz      short loc_5F33FD
0x5F33EA: mov     ecx, ds:0B33B00h
0x5F33F0: call    sub_45A500
0x5F33F5: test    al, al
0x5F33F7: jz      loc_5F3706
0x5F33FD: cmp     dword ptr [ebp+58h], 0
0x5F3401: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F3407: mov     edi, [esp+38h+arg_0]
0x5F340B: movzx   eax, byte ptr [edi+4]
0x5F340F: add     eax, 0FFFFFFECh; switch 15 cases
0x5F3412: cmp     eax, 0Eh
0x5F3415: ja      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F341B: movzx   edx, ds:byte_5F3858[eax]
0x5F3422: jmp     ds:jpt_5F3422[edx*4]; switch jump
0x5F3429: mov     ecx, [ebp+58h]; jumptable 005F3422 case 33
0x5F342C: mov     eax, [ecx]
0x5F342E: mov     edx, [eax+0ECh]
0x5F3434: push    0
0x5F3436: call    edx
0x5F3438: mov     esi, eax
0x5F343A: test    esi, esi
0x5F343C: jz      short loc_5F34B0
0x5F343E: mov     ecx, [ebp+58h]
0x5F3441: mov     eax, [ecx]
0x5F3443: mov     edx, [eax+138h]
0x5F3449: call    edx
0x5F344B: mov     [esp+3Ch+var_25], al
0x5F344F: mov     eax, edi
0x5F3451: xor     bl, bl
0x5F3453: cmp     [esi+8], eax
0x5F3456: jz      short loc_5F3471
0x5F3458: mov     eax, [esi]
0x5F345A: test    eax, eax
0x5F345C: jz      short loc_5F3471
0x5F345E: mov     eax, [eax]
0x5F3460: test    eax, eax
0x5F3462: jz      short loc_5F3471
0x5F3464: mov     ecx, eax
0x5F3466: call    sub_41DF40
0x5F346B: test    al, al
0x5F346D: jz      short loc_5F3471
0x5F346F: mov     bl, 1
0x5F3471: mov     ecx, [esi]
0x5F3473: mov     edx, [ecx]
0x5F3475: mov     eax, [esi+8]
0x5F3478: push    1
0x5F347A: push    0
0x5F347C: push    0
0x5F347E: push    edx
0x5F347F: push    1
0x5F3481: push    eax
0x5F3482: mov     ecx, ebp
0x5F3484: call    Actor_UnequipItem
0x5F3489: test    bl, bl
0x5F348B: jz      short loc_5F34A0
0x5F348D: mov     ecx, ds:0B33B00h
0x5F3493: call    sub_45A500
0x5F3498: test    al, al
0x5F349A: jz      loc_5F3706
0x5F34A0: cmp     [esp+3Ch+var_25], 0
0x5F34A5: jz      short loc_5F34B0
0x5F34A7: push    0
0x5F34A9: mov     ecx, ebp
0x5F34AB: call    sub_5E13D0
0x5F34B0: mov     ecx, [ebp+58h]
0x5F34B3: mov     edx, [ecx]
0x5F34B5: mov     eax, [edx+0F0h]
0x5F34BB: push    1
0x5F34BD: call    eax
0x5F34BF: test    eax, eax
0x5F34C1: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F34C7: mov     ecx, [ebp+58h]
0x5F34CA: mov     edx, [ecx]
0x5F34CC: mov     eax, [edx+304h]
0x5F34D2: call    eax
0x5F34D4: test    al, al
0x5F34D6: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F34DC: mov     ecx, edi
0x5F34DE: cmp     byte ptr [ecx+90h], 5
0x5F34E5: jz      short loc_5F34FE
0x5F34E7: mov     ecx, [ebp+58h]
0x5F34EA: mov     edx, [ecx]
0x5F34EC: mov     eax, [edx+0F8h]
0x5F34F2: push    0
0x5F34F4: call    eax
0x5F34F6: test    eax, eax
0x5F34F8: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F34FE: mov     ecx, ebp
0x5F3500: call    UnequipLight
0x5F3505: jmp     loc_5F3659
0x5F350A: mov     ecx, [ebp+58h]; jumptable 005F3422 case 26
0x5F350D: mov     edx, [ecx]
0x5F350F: mov     eax, [edx+0F0h]
0x5F3515: push    0
0x5F3517: call    eax
0x5F3519: test    eax, eax
0x5F351B: jz      short loc_5F3535
0x5F351D: mov     ecx, [eax]
0x5F351F: mov     ecx, [ecx]
0x5F3521: mov     eax, [eax+8]
0x5F3524: push    1
0x5F3526: push    0
0x5F3528: push    0
0x5F352A: push    ecx
0x5F352B: push    1
0x5F352D: push    eax
0x5F352E: mov     ecx, ebp
0x5F3530: call    Actor_UnequipItem
0x5F3535: cmp     ebp, ds:0B333C4h
0x5F353B: jnz     def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F3541: mov     esi, [esp+3Ch+arg_4]
0x5F3545: test    esi, esi
0x5F3547: jz      short loc_5F355A
0x5F3549: push    2Dh ; '-'; a2
0x5F354B: mov     ecx, esi; this
0x5F354D: call    BaseExtraList_GetExtraData
0x5F3552: test    eax, eax
0x5F3554: jnz     loc_5F3659
0x5F355A: cmp     dword ptr [edi+70h], 0
0x5F355E: jl      loc_5F3659
0x5F3564: lea     ecx, [ebp+44h]; this
0x5F3567: call    ExtraDataList_GetContainerChanges
0x5F356C: test    esi, esi
0x5F356E: mov     [esp+3Ch+var_14], eax
0x5F3572: jnz     loc_5F3641
0x5F3578: push    14h; Size
0x5F357A: call    FormHeapAlloc
0x5F357F: add     esp, 4
0x5F3582: mov     [esp+3Ch+arg_4], eax
0x5F3586: xor     ecx, ecx
0x5F3588: cmp     eax, ecx
0x5F358A: mov     [esp+3Ch+var_8], ecx
0x5F358E: jz      short loc_5F359D
0x5F3590: mov     ecx, eax
0x5F3592: call    ExtraDataList_constr
0x5F3597: mov     [esp+3Ch+var_1C], eax
0x5F359B: jmp     short loc_5F35A1
0x5F359D: mov     [esp+3Ch+var_1C], ecx
0x5F35A1: mov     ecx, [esp+3Ch+var_1C]
0x5F35A5: mov     edi, [esp+3Ch]
0x5F35A9: push    0
0x5F35AB: push    1
0x5F35AD: mov     [esp+44h+arg_4], ecx
0x5F35B1: mov     ecx, [esp+44h+var_14]
0x5F35B5: push    edi
0x5F35B6: mov     [esp+48h+var_8], 0FFFFFFFFh
0x5F35BE: call    ContainerExtraData_GetEntryForForm
0x5F35C3: mov     esi, eax
0x5F35C5: xor     bl, bl
0x5F35C7: test    esi, esi
0x5F35C9: jnz     short loc_5F35FF
0x5F35CB: push    0Ch; Size
0x5F35CD: call    FormHeapAlloc
0x5F35D2: add     esp, 4
0x5F35D5: mov     [esp+44h+var_20], eax
0x5F35D9: test    eax, eax
0x5F35DB: mov     [esp+44h+var_10], 1
0x5F35E3: jz      short loc_5F35F1
0x5F35E5: push    1
0x5F35E7: push    edi
0x5F35E8: mov     ecx, eax
0x5F35EA: call    ContainerEntryExtraData_constr
0x5F35EF: jmp     short loc_5F35F3
0x5F35F1: xor     eax, eax
0x5F35F3: mov     [esp+44h+var_10], 0FFFFFFFFh
0x5F35FB: mov     esi, eax
0x5F35FD: mov     bl, 1
0x5F35FF: cmp     dword ptr [esi], 0
0x5F3602: jnz     short loc_5F3625
0x5F3604: push    8; Size
0x5F3606: call    FormHeapAlloc
0x5F360B: add     esp, 4
0x5F360E: test    eax, eax
0x5F3610: jz      short loc_5F3621
0x5F3612: mov     dword ptr [eax], 0
0x5F3618: mov     dword ptr [eax+4], 0
0x5F361F: jmp     short loc_5F3623
0x5F3621: xor     eax, eax
0x5F3623: mov     [esi], eax
0x5F3625: mov     edx, [esp+20h]
0x5F3629: mov     ecx, [esi]
0x5F362B: push    edx
0x5F362C: call    BSSimpleList_PushFront
0x5F3631: test    bl, bl
0x5F3633: jz      short loc_5F3641
0x5F3635: mov     ecx, [esp+44h+var_1C]
0x5F3639: push    1
0x5F363B: push    esi
0x5F363C: call    ContainerExtraData_AddEntry
0x5F3641: mov     eax, [esp+30h+arg_8]
0x5F3645: fild    dword ptr [eax+70h]
0x5F3648: push    ecx
0x5F3649: mov     ecx, dword ptr [esp+34h+arg_C+4]
0x5F364D: fstp    [esp+34h+var_34]; float
0x5F3650: call    sub_41EDF0
0x5F3655: mov     edi, [esp+44h+var_8]; jumptable 005F3422 default case, cases 21-25,27-32
0x5F3659: mov     edx, [ebp+0]
0x5F365C: mov     eax, [edx+170h]
0x5F3662: mov     ecx, ebp
0x5F3664: call    eax
0x5F3666: mov     esi, eax
0x5F3668: test    esi, esi
0x5F366A: jz      loc_5F3749
0x5F3670: mov     edx, [ebp+0]
0x5F3673: mov     eax, [edx+190h]
0x5F3679: mov     ecx, ebp
0x5F367B: call    eax
0x5F367D: test    al, al
0x5F367F: jz      loc_5F3749
0x5F3685: lea     eax, [esi+44h]
0x5F3688: jmp     loc_5F374B
0x5F368D: mov     ecx, [esp+38h+var_14]; jumptable 005F3422 case 20
0x5F3691: push    0
0x5F3693: push    0Dh
0x5F3695: call    TESBipedModelForm_CoversSlot
0x5F369A: test    al, al
0x5F369C: jz      short def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F369E: mov     ecx, [ebp+58h]
0x5F36A1: mov     edx, [ecx]
0x5F36A3: mov     eax, [edx+0F8h]
0x5F36A9: push    0
0x5F36AB: call    eax
0x5F36AD: mov     esi, eax
0x5F36AF: test    esi, esi
0x5F36B1: jz      short def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F36B3: xor     bl, bl
0x5F36B5: cmp     [esi+8], edi
0x5F36B8: jz      short loc_5F36D3
0x5F36BA: mov     eax, [esi]
0x5F36BC: test    eax, eax
0x5F36BE: jz      short loc_5F36D3
0x5F36C0: mov     eax, [eax]
0x5F36C2: test    eax, eax
0x5F36C4: jz      short loc_5F36D3
0x5F36C6: mov     ecx, eax
0x5F36C8: call    sub_41DF40
0x5F36CD: test    al, al
0x5F36CF: jz      short loc_5F36D3
0x5F36D1: mov     bl, 1
0x5F36D3: mov     ecx, [esi]
0x5F36D5: mov     edx, [ecx]
0x5F36D7: mov     eax, [esi+8]
0x5F36DA: push    1
0x5F36DC: push    0
0x5F36DE: push    0
0x5F36E0: push    edx
0x5F36E1: push    1
0x5F36E3: push    eax
0x5F36E4: mov     ecx, ebp
0x5F36E6: call    Actor_UnequipItem
0x5F36EB: test    bl, bl
0x5F36ED: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F36F3: mov     ecx, ds:0B33B00h
0x5F36F9: call    sub_45A500
0x5F36FE: test    al, al
0x5F3700: jnz     def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F3706: xor     al, al
0x5F3708: jmp     loc_5F382C
0x5F370D: mov     ecx, [ebp+58h]; jumptable 005F3422 case 34
0x5F3710: mov     edx, [ecx]
0x5F3712: mov     eax, [edx+0F4h]
0x5F3718: push    1
0x5F371A: call    eax
0x5F371C: test    eax, eax
0x5F371E: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F3724: mov     ecx, [eax+8]
0x5F3727: cmp     ecx, edi
0x5F3729: jz      def_5F3422; jumptable 005F3422 default case, cases 21-25,27-32
0x5F372F: mov     edx, [eax]
0x5F3731: mov     eax, [edx]
0x5F3733: push    1
0x5F3735: push    0
0x5F3737: push    0
0x5F3739: push    eax
0x5F373A: push    1
0x5F373C: push    ecx
0x5F373D: mov     ecx, ebp
0x5F373F: call    Actor_UnequipItem
0x5F3744: jmp     loc_5F3659
0x5F3749: xor     eax, eax
0x5F374B: push    eax
0x5F374C: push    ebp; a1
0x5F374D: call    ContainerExtraData_GetContainerExtraDataForRef
0x5F3752: mov     ecx, [esp+4Ch+arg_0]
0x5F3756: mov     edx, [esp+4Ch+var_2C]
0x5F375A: add     esp, 8
0x5F375D: push    ecx
0x5F375E: mov     ecx, [esp+48h]
0x5F3762: push    edx
0x5F3763: mov     edx, [esp+4Ch+var_4]
0x5F3767: push    ecx
0x5F3768: push    ebp
0x5F3769: push    edx
0x5F376A: push    edi
0x5F376B: mov     ecx, eax
0x5F376D: call    ContainerExtraData_EquipItemForActor
0x5F3772: movzx   eax, byte ptr [edi+4]
0x5F3776: cmp     eax, 14h
0x5F3779: jz      short loc_5F3787
0x5F377B: cmp     eax, 1Ah
0x5F377E: jz      short loc_5F3797
0x5F3780: cmp     eax, 21h ; '!'
0x5F3783: jz      short loc_5F3797
0x5F3785: jmp     short loc_5F37A1
0x5F3787: push    0
0x5F3789: push    0Dh
0x5F378B: lea     ecx, [edi+64h]
0x5F378E: call    TESBipedModelForm_CoversSlot
0x5F3793: test    al, al
0x5F3795: jz      short loc_5F37A1
0x5F3797: push    0
0x5F3799: push    edi
0x5F379A: mov     ecx, ebp
0x5F379C: call    HideEquipment
0x5F37A1: push    0; int
0x5F37A3: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5F37A8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5F37AD: push    0; int
0x5F37AF: push    edi; void *
0x5F37B0: call    OblivionDynamicCast
0x5F37B5: add     esp, 14h
0x5F37B8: test    eax, eax
0x5F37BA: jz      short loc_5F37C1
0x5F37BC: mov     eax, [eax+4]
0x5F37BF: jmp     short loc_5F37C3
0x5F37C1: xor     eax, eax
0x5F37C3: test    eax, eax
0x5F37C5: jz      short loc_5F37E0
0x5F37C7: push    0
0x5F37C9: lea     ecx, [eax+18h]
0x5F37CC: call    sub_41A610
0x5F37D1: mov     ecx, ds:0B333C4h
0x5F37D7: cmp     ebp, ecx
0x5F37D9: jnz     short loc_5F37E0
0x5F37DB: call    sub_662DA0
0x5F37E0: cmp     byte ptr ds:0B42F3Eh, 0
0x5F37E7: jz      short loc_5F382A
0x5F37E9: cmp     byte ptr ds:0B42E84h, 0
0x5F37F0: jz      short loc_5F382A
0x5F37F2: cmp     dword ptr ds:0B42F48h, 2
0x5F37F9: jl      short loc_5F382A
0x5F37FB: lea     esi, [ebp+44h]
0x5F37FE: test    esi, esi
0x5F3800: jz      short loc_5F382A
0x5F3802: mov     ecx, esi; this
0x5F3804: call    ExtraDataList__GetRefractionProperty
0x5F3809: test    eax, eax
0x5F380B: jz      short loc_5F382A
0x5F380D: mov     edi, [ebp+0]
0x5F3810: mov     ecx, esi; this
0x5F3812: call    ExtraDataList__GetRefractionProperty
0x5F3817: fld     dword ptr [eax+0Ch]
0x5F381A: mov     eax, [edi+270h]
0x5F3820: push    ecx
0x5F3821: fstp    [esp+48h+var_48]
0x5F3824: push    1
0x5F3826: mov     ecx, ebp
0x5F3828: call    eax
0x5F382A: mov     al, 1
0x5F382C: mov     ecx, [esp+4Ch+var_20]
0x5F3830: mov     large fs:0, ecx
0x5F3837: pop     ecx
0x5F3838: pop     edi
0x5F3839: pop     esi
0x5F383A: pop     ebp
0x5F383B: pop     ebx
0x5F383C: add     esp, 24h
0x5F383F: retn    10h
