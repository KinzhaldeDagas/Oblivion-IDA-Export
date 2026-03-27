0x4455E0: push    ecx
0x4455E1: push    ebp
0x4455E2: push    esi
0x4455E3: mov     esi, ecx
0x4455E5: mov     byte ptr ds:0B43384h, 1
0x4455EC: cmp     byte ptr [esi+51h], 0
0x4455F0: push    edi
0x4455F1: jnz     short loc_445604
0x4455F3: cmp     byte ptr [esi+52h], 0
0x4455F7: jnz     short loc_445604
0x4455F9: mov     ecx, ds:0B33398h
0x4455FF: call    sub_40D160
0x445604: mov     byte ptr ds:0B43074h, 1
0x44560B: call    InitBSShaderAccumulator
0x445610: mov     ecx, eax
0x445612: call    sub_7AB6F0
0x445617: mov     eax, ds:0B35C24h
0x44561C: mov     byte ptr [eax+19h], 0
0x445620: mov     ecx, ds:0B35C24h
0x445626: push    0
0x445628: call    sub_88B680
0x44562D: mov     edi, [esi+34h]
0x445630: mov     ebp, [esp+10h+a2]
0x445634: cmp     edi, ebp
0x445636: jnz     short loc_445654
0x445638: mov     ecx, [esp+10h+arg_4]
0x44563C: push    0
0x44563E: push    ecx
0x44563F: mov     ecx, esi
0x445641: call    sub_444FB0
0x445646: pop     edi
0x445647: pop     esi
0x445648: mov     byte ptr ds:0B43384h, 0
0x44564F: pop     ebp
0x445650: pop     ecx
0x445651: retn    8
0x445654: cmp     byte ptr ds:0B051CCh, 0
0x44565B: push    ebx
0x44565C: jz      short loc_445684
0x44565E: test    edi, edi
0x445660: jnz     short loc_445684
0x445662: call    sub_4C9300
0x445667: push    edi
0x445668: push    1
0x44566A: mov     ecx, esi
0x44566C: mov     bl, al
0x44566E: call    sub_43FFF0
0x445673: test    eax, eax
0x445675: jnz     short loc_44567B
0x445677: test    bl, bl
0x445679: jz      short loc_445684
0x44567B: push    0; a2
0x44567D: mov     ecx, esi; this
0x44567F: call    sub_43FC20
0x445684: test    ebp, ebp
0x445686: mov     edx, ds:0B33398h
0x44568C: mov     dword ptr [edx+18h], 0
0x445693: jz      short loc_4456B8
0x445695: mov     ecx, ds:0B33B00h
0x44569B: call    sub_45A500
0x4456A0: test    al, al
0x4456A2: jnz     short loc_4456B8
0x4456A4: call    sub_40FDA0
0x4456A9: test    al, al
0x4456AB: jnz     short loc_4456B8
0x4456AD: mov     ecx, ds:0B33398h
0x4456B3: call    sub_40D4D0
0x4456B8: push    0
0x4456BA: call    GetShadowSceneNode
0x4456BF: add     esp, 4
0x4456C2: mov     ecx, eax
0x4456C4: call    sub_7C7E50
0x4456C9: test    edi, edi
0x4456CB: mov     byte ptr [esp+14h+a2], 0
0x4456D0: jz      short loc_445713
0x4456D2: mov     ecx, edi
0x4456D4: mov     byte ptr [esp+14h+a2], 1
0x4456D9: call    sub_4D6450
0x4456DE: push    3
0x4456E0: call    nullsub_returnTrue_0arg
0x4456E5: call    sub_7B84E0
0x4456EA: push    2
0x4456EC: call    nullsub_returnTrue_0arg
0x4456F1: mov     ecx, ds:0B333C4h
0x4456F7: add     esp, 8
0x4456FA: push    0
0x4456FC: call    PlayerCharacter_GetPlayerNode
0x445701: push    eax
0x445702: push    0
0x445704: call    GetShadowSceneNode
0x445709: add     esp, 4
0x44570C: mov     ecx, eax
0x44570E: call    ShadowSceneNodeAddShadowCaster
0x445713: push    ebp; a2
0x445714: mov     ecx, esi; this
0x445716: call    TES__IsInteriorCellPreloaded
0x44571B: test    al, al
0x44571D: jnz     short loc_445738
0x44571F: mov     eax, [esi+38h]
0x445722: mov     ecx, ds:0B051D4h
0x445728: mov     eax, [eax+ecx*4-4]
0x44572C: test    eax, eax
0x44572E: jz      short loc_445738
0x445730: push    eax
0x445731: mov     ecx, esi
0x445733: call    sub_440120
0x445738: test    ebp, ebp
0x44573A: mov     [esi+34h], ebp
0x44573D: jz      loc_445983
0x445743: cmp     dword ptr [esi+48h], 7FFFFFFFh
0x44574A: jnz     short loc_44576A
0x44574C: cmp     byte ptr [esp+14h+a2], 0
0x445751: jnz     short loc_44576A
0x445753: mov     edx, [esi+20h]
0x445756: mov     eax, [esi+24h]
0x445759: push    0
0x44575B: push    1
0x44575D: mov     ecx, esi
0x44575F: mov     [esi+48h], edx
0x445762: mov     [esi+4Ch], eax
0x445765: call    sub_441D50
0x44576A: mov     eax, [esp+14h+arg_4]
0x44576E: fld     dword ptr [eax]
0x445770: fstp    [esp+14h+var_4]
0x445774: fld     [esp+14h+var_4]
0x445778: fistp   [esp+14h+arg_4]
0x44577C: mov     ecx, [esp+14h+arg_4]
0x445780: sar     ecx, 0Ch
0x445783: mov     [esi+20h], ecx
0x445786: fld     dword ptr [eax+4]
0x445789: fstp    [esp+14h+var_4]
0x44578D: fld     [esp+14h+var_4]
0x445791: fistp   [esp+14h+arg_4]
0x445795: mov     edx, [esp+14h+arg_4]
0x445799: sar     edx, 0Ch
0x44579C: mov     ecx, ebp
0x44579E: mov     [esi+24h], edx
0x4457A1: call    sub_4D4310
0x4457A6: mov     ecx, ds:0B33B00h
0x4457AC: call    sub_45A500
0x4457B1: mov     ecx, ebp; this
0x4457B3: mov     bl, al
0x4457B5: call    TESObjectCELL_IsInterior
0x4457BA: test    al, al
0x4457BC: jz      short loc_4457CA
0x4457BE: lea     ecx, [ebp+28h]
0x4457C1: call    sub_424180
0x4457C6: mov     edi, eax
0x4457C8: jmp     short loc_4457D0
0x4457CA: mov     edi, ds:0B35C24h
0x4457D0: test    edi, edi
0x4457D2: jz      short loc_4457DB
0x4457D4: mov     ecx, edi
0x4457D6: call    sub_889E00
0x4457DB: lea     eax, [ebp+48h]
0x4457DE: xor     ecx, ecx
0x4457E0: test    eax, eax
0x4457E2: jz      short loc_445808
0x4457E4: cmp     dword ptr [eax], 0
0x4457E7: jz      short loc_4457EC
0x4457E9: add     ecx, 1
0x4457EC: mov     eax, [eax+4]
0x4457EF: test    eax, eax
0x4457F1: jnz     short loc_4457E4
0x4457F3: test    ecx, ecx
0x4457F5: jz      short loc_445808
0x4457F7: cmp     byte ptr [ebp+26h], 3
0x4457FB: jz      short loc_445808
0x4457FD: push    eax
0x4457FE: push    eax
0x4457FF: push    1
0x445801: mov     ecx, esi
0x445803: call    sub_440AF0
0x445808: mov     eax, [esi+0Ch]
0x44580B: push    eax
0x44580C: mov     ecx, ebp
0x44580E: call    sub_4D63A0
0x445813: mov     ecx, ebp
0x445815: call    sub_4AF170
0x44581A: test    eax, eax
0x44581C: jz      short loc_445825
0x44581E: mov     ecx, eax
0x445820: call    sub_4E7610
0x445825: push    1
0x445827: mov     ecx, ebp
0x445829: call    sub_4D5BD0
0x44582E: mov     ecx, ds:0B33A1Ch
0x445834: push    ebp
0x445835: call    sub_43E000
0x44583A: test    al, al
0x44583C: jz      short loc_44584B
0x44583E: push    0
0x445840: push    0
0x445842: push    1
0x445844: mov     ecx, esi
0x445846: call    sub_440AF0
0x44584B: push    ebp
0x44584C: mov     ecx, esi
0x44584E: call    sub_440190
0x445853: test    bl, bl
0x445855: jnz     short loc_445864
0x445857: mov     ecx, ds:0B33A10h
0x44585D: push    1
0x44585F: call    sub_434020
0x445864: test    edi, edi
0x445866: jz      short loc_445871
0x445868: push    0
0x44586A: mov     ecx, edi
0x44586C: call    sub_88D1D0
0x445871: cmp     byte ptr [esi+51h], 0
0x445875: jnz     short loc_44589F
0x445877: cmp     byte ptr [esi+52h], 0
0x44587B: jnz     short loc_44589F
0x44587D: test    bl, bl
0x44587F: jnz     short loc_4458D2
0x445881: call    sub_5ADB40
0x445886: fld     dword ptr ds:0B33A48h
0x44588C: push    ecx
0x44588D: mov     ecx, ds:0B3A6B0h
0x445893: fstp    [esp+18h+var_18]; float
0x445896: push    2; int
0x445898: call    sub_5732D0
0x44589D: jmp     short loc_4458A3
0x44589F: test    bl, bl
0x4458A1: jnz     short loc_4458D2
0x4458A3: mov     ecx, offset ActorProcessManager_ptr
0x4458A8: call    sub_677360
0x4458AD: mov     ecx, esi
0x4458AF: call    sub_441610
0x4458B4: mov     ecx, offset ActorProcessManager_ptr
0x4458B9: call    sub_678750
0x4458BE: mov     ecx, offset ActorProcessManager_ptr
0x4458C3: call    sub_675F40
0x4458C8: mov     ecx, offset ActorProcessManager_ptr
0x4458CD: call    sub_675FC0
0x4458D2: push    0; a2
0x4458D4: mov     ecx, esi; this
0x4458D6: call    sub_43FC20
0x4458DB: mov     ecx, ds:0B33A98h
0x4458E1: call    sub_447130
0x4458E6: mov     ecx, ebp
0x4458E8: call    sub_4D58B0
0x4458ED: mov     edi, eax
0x4458EF: mov     ecx, edi; this
0x4458F1: call    NiAVObject_InitializePropertyState
0x4458F6: mov     ecx, edi
0x4458F8: call    NiNode_UpdateDynamicEffectState
0x4458FD: cmp     word ptr [edi+0B8h], 0
0x445905: jnz     short loc_445916
0x445907: fldz
0x445909: push    0; a3
0x44590B: push    ecx
0x44590C: fstp    [esp+1Ch+var_1C]; a2
0x44590F: mov     ecx, edi; this
0x445911: call    NiAVObject_UpdateNiAVObject
0x445916: push    1
0x445918: mov     ecx, ebp
0x44591A: call    sub_4CB670
0x44591F: movzx   ecx, byte ptr [ebp+24h]
0x445923: shr     ecx, 1
0x445925: test    cl, 1
0x445928: jz      short loc_445961
0x44592A: mov     ecx, [esi+54h]
0x44592D: test    ecx, ecx
0x44592F: jz      short loc_445936
0x445931: call    sub_498F30
0x445936: mov     ecx, [esi+58h]
0x445939: push    ebp
0x44593A: call    sub_49A000
0x44593F: mov     edx, ds:0B333A0h
0x445945: cmp     dword ptr [edx+34h], 0
0x445949: jz      short loc_44597B
0x44594B: mov     ecx, [esi+58h]
0x44594E: test    ecx, ecx
0x445950: jz      short loc_44597B
0x445952: mov     eax, [esi+24h]
0x445955: mov     edx, [esi+20h]
0x445958: push    eax
0x445959: push    edx
0x44595A: call    sub_49B5F0
0x44595F: jmp     short loc_44597B
0x445961: mov     ecx, [esi+58h]
0x445964: test    ecx, ecx
0x445966: jz      short loc_44596D
0x445968: call    sub_499FF0
0x44596D: mov     ecx, [esi+54h]
0x445970: test    ecx, ecx
0x445972: jz      short loc_44597B
0x445974: push    1
0x445976: call    WaterManager__Destroy?
0x44597B: push    ebp; a2
0x44597C: mov     ecx, esi; this
0x44597E: call    sub_43FD70
0x445983: cmp     byte ptr [esp+14h+a2], 0
0x445988: pop     ebx
0x445989: jnz     short loc_4459C0
0x44598B: call    InitBSShaderAccumulator
0x445990: test    eax, eax
0x445992: jz      short loc_44599B
0x445994: mov     ecx, eax
0x445996: call    sub_7A9CF0
0x44599B: push    3
0x44599D: call    nullsub_returnTrue_0arg
0x4459A2: call    sub_7C4D90
0x4459A7: push    1
0x4459A9: call    sub_7B2130
0x4459AE: push    2
0x4459B0: call    nullsub_returnTrue_0arg
0x4459B5: mov     ecx, [esi+8]
0x4459B8: add     esp, 0Ch
0x4459BB: call    sub_482670
0x4459C0: cmp     byte ptr [esi+51h], 0
0x4459C4: jnz     short loc_4459CC
0x4459C6: cmp     byte ptr [esi+52h], 0
0x4459CA: jz      short loc_4459E7
0x4459CC: call    sub_578E30
0x4459D1: call    sub_5A9010
0x4459D6: mov     eax, ds:0B33398h
0x4459DB: mov     ecx, [eax+24h]
0x4459DE: test    ecx, ecx
0x4459E0: jz      short loc_4459E7
0x4459E2: call    sub_6A9AA0
0x4459E7: push    0; a2
0x4459E9: mov     ecx, esi; this
0x4459EB: call    sub_43FC20
0x4459F0: push    0
0x4459F2: call    Player_UpdateHUDHealthBarTarget?
0x4459F7: add     esp, 4
0x4459FA: pop     edi
0x4459FB: pop     esi
0x4459FC: mov     byte ptr ds:0B43384h, 0
0x445A03: pop     ebp
0x445A04: pop     ecx
0x445A05: retn    8
