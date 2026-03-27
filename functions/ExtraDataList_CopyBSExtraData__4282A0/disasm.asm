0x4282A0: push    0FFFFFFFFh
0x4282A2: push    offset ExtraDataList_CopyBSExtraData_SEH
0x4282A7: mov     eax, large fs:0
0x4282AD: push    eax
0x4282AE: push    ebx
0x4282AF: push    ebp
0x4282B0: push    esi
0x4282B1: push    edi
0x4282B2: mov     eax, ___security_cookie
0x4282B7: xor     eax, esp
0x4282B9: push    eax
0x4282BA: lea     eax, [esp+20h+var_C]
0x4282BE: mov     large fs:0, eax
0x4282C4: mov     edi, ecx
0x4282C6: mov     esi, [esp+20h+arg_0]
0x4282CA: xor     ebx, ebx
0x4282CC: cmp     esi, ebx
0x4282CE: jz      loc_4287E9
0x4282D4: push    esi
0x4282D5: call    sub_41E340
0x4282DA: test    al, al
0x4282DC: jz      loc_4287E9
0x4282E2: mov     cl, [esi+4]
0x4282E5: movzx   eax, cl
0x4282E8: add     eax, 0FFFFFFFDh; switch 86 cases
0x4282EB: cmp     eax, 55h
0x4282EE: ja      ExtraDataList_CopyBSExtraData___def_4282FB; jumptable 004282FB default case, cases 6-10,13,14,16,17,20-23,26,29,37,48,52,53,57-62,64-66,69,70,73-76,82,83,86
0x4282F4: movzx   eax, ds:byte_4288C4[eax]
0x4282FB: jmp     ds:jpt_4282FB[eax*4]; switch jump
0x428302: push    57h ; 'W'; jumptable 004282FB case 87
0x428304: mov     ecx, edi; this
0x428306: call    BaseExtraList_GetExtraData
0x42830B: mov     ebp, eax
0x42830D: cmp     ebp, ebx
0x42830F: jnz     short loc_428345
0x428311: push    30h ; '0'; Size
0x428313: call    FormHeapAlloc
0x428318: add     esp, 4
0x42831B: mov     [esp+20h+arg_0], eax
0x42831F: cmp     eax, ebx
0x428321: mov     [esp+20h+var_4], ebx
0x428325: jz      short loc_428331
0x428327: push    ebx
0x428328: mov     ecx, eax
0x42832A: call    sub_42B090
0x42832F: jmp     short loc_428333
0x428331: xor     eax, eax
0x428333: push    eax; BSExtraData *
0x428334: mov     ecx, edi; ExtraDataList *
0x428336: mov     [esp+24h+var_4], 0FFFFFFFFh
0x42833E: mov     ebp, eax
0x428340: call    BaseExtraList_AddExtra
0x428345: mov     ecx, [esi+24h]
0x428348: mov     [ebp+24h], ecx
0x42834B: mov     edx, [esi+28h]
0x42834E: mov     [ebp+28h], edx
0x428351: mov     eax, [esi+2Ch]
0x428354: mov     [ebp+2Ch], eax
0x428357: mov     ecx, [esi+0Ch]
0x42835A: mov     [ebp+0Ch], ecx
0x42835D: mov     edx, [esi+10h]
0x428360: mov     [ebp+10h], edx
0x428363: mov     eax, [esi+14h]
0x428366: mov     [ebp+14h], eax
0x428369: mov     edx, [esi+18h]
0x42836C: lea     eax, [esi+18h]
0x42836F: lea     ecx, [ebp+18h]
0x428372: mov     [ecx], edx
0x428374: mov     edx, [eax+4]
0x428377: mov     [ecx+4], edx
0x42837A: mov     eax, [eax+8]
0x42837D: mov     [ecx+8], eax
0x428380: jmp     loc_4287E9
0x428385: movzx   ecx, byte ptr [esi+0Ch]; jumptable 004282FB case 19
0x428389: push    ecx
0x42838A: mov     ecx, edi
0x42838C: call    sub_423DA0
0x428391: jmp     loc_4287E9
0x428396: mov     edx, [esi+0Ch]; jumptable 004282FB case 39
0x428399: push    edx
0x42839A: mov     ecx, edi
0x42839C: call    ExtraDataList__SetOrRemoveExtraOwnership
0x4283A1: jmp     loc_4287E9
0x4283A6: mov     eax, [esi+0Ch]; jumptable 004282FB case 40
0x4283A9: push    eax
0x4283AA: mov     ecx, edi
0x4283AC: call    sub_423720
0x4283B1: jmp     loc_4287E9
0x4283B6: mov     ecx, [esi+0Ch]; jumptable 004282FB case 41
0x4283B9: push    ecx
0x4283BA: mov     ecx, edi
0x4283BC: call    sub_4237E0
0x4283C1: jmp     loc_4287E9
0x4283C6: movzx   edx, word ptr [esi+0Ch]; jumptable 004282FB case 42
0x4283CA: push    edx
0x4283CB: mov     ecx, edi
0x4283CD: call    ExtraDataList_SetExtraCount
0x4283D2: jmp     loc_4287E9
0x4283D7: push    ebx; jumptable 004282FB case 27
0x4283D8: push    1
0x4283DA: mov     ecx, edi
0x4283DC: call    SetWorn
0x4283E1: jmp     loc_4287E9
0x4283E6: movzx   eax, byte ptr [esi+0Ch]; jumptable 004282FB case 85
0x4283EA: push    eax
0x4283EB: mov     ecx, edi
0x4283ED: call    sub_422BA0
0x4283F2: jmp     loc_4287E9
0x4283F7: push    1; jumptable 004282FB case 28
0x4283F9: push    1
0x4283FB: mov     ecx, edi
0x4283FD: call    SetWorn
0x428402: jmp     loc_4287E9
0x428407: mov     ecx, edi; jumptable 004282FB case 80
0x428409: call    sub_41F2F0
0x42840E: jmp     loc_4287E9
0x428413: movzx   ecx, byte ptr [esi+0Ch]; jumptable 004282FB case 56
0x428417: push    ecx
0x428418: mov     ecx, edi
0x42841A: call    sub_423BD0
0x42841F: jmp     loc_4287E9
0x428424: mov     edx, [esi+0Ch]; jumptable 004282FB case 54
0x428427: push    edx
0x428428: mov     ecx, edi
0x42842A: call    ExtraDataList_AddExtraLeveledItem
0x42842F: movzx   eax, byte ptr [esi+10h]
0x428433: push    eax
0x428434: mov     ecx, edi
0x428436: call    sub_41FF40
0x42843B: jmp     loc_4287E9
0x428440: fld     dword ptr [esi+0Ch]; jumptable 004282FB case 43
0x428443: push    ecx
0x428444: mov     ecx, edi
0x428446: fstp    [esp+24h+a3]; float
0x428449: call    ExtraDataList_SetHealthValue
0x42844E: jmp     loc_4287E9
0x428453: movzx   ecx, byte ptr [esi+0Ch]; jumptable 004282FB case 44
0x428457: push    ecx
0x428458: mov     ecx, edi
0x42845A: call    ExtraDataList_SetUses
0x42845F: jmp     loc_4287E9
0x428464: fld     dword ptr [esi+0Ch]; jumptable 004282FB case 45
0x428467: push    ecx
0x428468: mov     ecx, edi
0x42846A: fstp    [esp+24h+a3]; float
0x42846D: call    sub_41EDF0
0x428472: jmp     loc_4287E9
0x428477: fld     dword ptr [esi+0Ch]; jumptable 004282FB case 46
0x42847A: push    ecx
0x42847B: mov     ecx, edi
0x42847D: fstp    [esp+24h+a3]; float
0x428480: call    sub_41EE90
0x428485: jmp     loc_4287E9
0x42848A: movsx   edx, byte ptr [esi+0Ch]; jumptable 004282FB case 47
0x42848E: push    edx
0x42848F: mov     ecx, edi
0x428491: call    BaseExtraList_SetSoulLevel
0x428496: jmp     loc_4287E9
0x42849B: mov     eax, [esi+0Ch]; jumptable 004282FB case 18
0x42849E: push    eax
0x42849F: mov     ecx, edi
0x4284A1: call    ExtraDataList_AddScript
0x4284A6: mov     ecx, [esi+10h]
0x4284A9: push    ecx
0x4284AA: mov     ecx, edi
0x4284AC: call    ExtraDataList_SetScriptEventList
0x4284B1: jmp     loc_4287E9
0x4284B6: fld     dword ptr [esi+0Ch]; jumptable 004282FB case 55
0x4284B9: push    ecx
0x4284BA: mov     ecx, edi
0x4284BC: fstp    [esp+24h+a3]; float
0x4284BF: call    sub_423A30
0x4284C4: jmp     loc_4287E9
0x4284C9: push    0Ch; jumptable 004282FB case 49
0x4284CB: call    FormHeapAlloc
0x4284D0: add     esp, 4
0x4284D3: cmp     eax, ebx
0x4284D5: jz      short loc_4284E1
0x4284D7: mov     [eax], bl
0x4284D9: mov     [eax+4], ebx
0x4284DC: mov     [eax+8], bl
0x4284DF: jmp     short loc_4284E3
0x4284E1: xor     eax, eax
0x4284E3: mov     esi, [esi+0Ch]
0x4284E6: mov     edx, [esi]
0x4284E8: mov     [eax], edx
0x4284EA: mov     ecx, [esi+4]
0x4284ED: mov     [eax+4], ecx
0x4284F0: mov     edx, [esi+8]
0x4284F3: push    eax
0x4284F4: mov     ecx, edi
0x4284F6: mov     [eax+8], edx
0x4284F9: call    sub_41EAF0
0x4284FE: jmp     loc_4287E9
0x428503: push    1Ch; jumptable 004282FB case 50
0x428505: call    FormHeapAlloc
0x42850A: add     esp, 4
0x42850D: mov     [esp+20h+arg_0], eax
0x428511: cmp     eax, ebx
0x428513: mov     [esp+20h+var_4], 1
0x42851B: jz      short loc_428526
0x42851D: mov     ecx, eax
0x42851F: call    sub_42B590
0x428524: mov     ebx, eax
0x428526: mov     eax, [esi+0Ch]
0x428529: push    eax
0x42852A: mov     ecx, ebx
0x42852C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x428534: call    sub_42B4B0
0x428539: push    ebx
0x42853A: mov     ecx, edi
0x42853C: call    ExtraDataList__SetTeleportData
0x428541: jmp     loc_4287E9
0x428546: push    10h; jumptable 004282FB case 51
0x428548: call    FormHeapAlloc
0x42854D: add     esp, 4
0x428550: mov     [esp+20h+arg_0], eax
0x428554: cmp     eax, ebx
0x428556: mov     [esp+20h+var_4], 2
0x42855E: jz      short loc_428569
0x428560: mov     ecx, eax
0x428562: call    sub_42B3F0
0x428567: mov     ebx, eax
0x428569: mov     ecx, [esi+0Ch]
0x42856C: push    ecx
0x42856D: mov     ecx, ebx
0x42856F: mov     [esp+24h+var_4], 0FFFFFFFFh
0x428577: call    sub_42B2A0
0x42857C: push    ebx
0x42857D: mov     ecx, edi
0x42857F: call    sub_423590
0x428584: jmp     loc_4287E9
0x428589: mov     edx, [esi+0Ch]; jumptable 004282FB case 30
0x42858C: push    ebx; int
0x42858D: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x428592: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x428597: push    ebx; int
0x428598: push    edx; void *
0x428599: call    OblivionDynamicCast
0x42859E: push    ebx; int
0x42859F: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4285A4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4285A9: mov     ebp, eax
0x4285AB: mov     eax, [esi+0Ch]
0x4285AE: push    ebx; int
0x4285AF: push    eax; void *
0x4285B0: call    OblivionDynamicCast
0x4285B5: fld     dword ptr [esi+1Ch]
0x4285B8: add     esp, 24h
0x4285BB: fstp    [esp+24h+a3]; float
0x4285BE: add     esi, 10h
0x4285C1: push    esi; int
0x4285C2: push    eax; int
0x4285C3: push    ebp; int
0x4285C4: mov     ecx, edi
0x4285C6: call    sub_41F4C0
0x4285CB: jmp     loc_4287E9
0x4285D0: mov     ecx, [esi+0Ch]; jumptable 004282FB case 25
0x4285D3: push    ecx
0x4285D4: mov     ecx, edi
0x4285D6: call    sub_424970
0x4285DB: jmp     loc_4287E9
0x4285E0: add     esi, 0Ch; jumptable 004282FB case 24
0x4285E3: push    esi
0x4285E4: mov     ecx, edi
0x4285E6: call    sub_420100
0x4285EB: jmp     loc_4287E9
0x4285F0: mov     esi, [esi+0Ch]; jumptable 004282FB case 35
0x4285F3: cmp     esi, ebx
0x4285F5: jz      loc_4287E9
0x4285FB: jmp     short loc_428600
0x4285FD: align 10h
0x428600: mov     eax, [esi]
0x428602: cmp     eax, ebx
0x428604: jz      loc_4287E9
0x42860A: push    eax
0x42860B: mov     ecx, edi
0x42860D: call    sub_424C50
0x428612: mov     esi, [esi+4]
0x428615: cmp     esi, ebx
0x428617: jnz     short loc_428600
0x428619: jmp     loc_4287E9
0x42861E: mov     esi, [esi+0Ch]; jumptable 004282FB case 78
0x428621: cmp     esi, ebx
0x428623: jz      loc_4287E9
0x428629: lea     esp, [esp+0]
0x428630: cmp     [esi], ebx
0x428632: jz      loc_4287E9
0x428638: mov     esi, [esi+4]
0x42863B: cmp     esi, ebx
0x42863D: jnz     short loc_428630
0x42863F: jmp     loc_4287E9
0x428644: mov     edx, [esi+0Ch]; jumptable 004282FB case 79
0x428647: push    edx
0x428648: mov     ecx, edi
0x42864A: call    sub_423970
0x42864F: jmp     loc_4287E9
0x428654: mov     eax, [esi+0Ch]; jumptable 004282FB case 72
0x428657: push    eax
0x428658: mov     ecx, edi
0x42865A: call    sub_41EFD0
0x42865F: jmp     loc_4287E9
0x428664: mov     ecx, [esi+0Ch]; jumptable 004282FB case 3
0x428667: push    ecx
0x428668: mov     ecx, edi
0x42866A: call    ExtraDataList_SetCell3D
0x42866F: jmp     loc_4287E9
0x428674: fld     dword ptr [esi+0Ch]; jumptable 004282FB case 4
0x428677: push    ecx
0x428678: mov     ecx, edi
0x42867A: fstp    [esp+24h+a3]; float
0x42867D: call    sub_423FF0
0x428682: jmp     loc_4287E9
0x428687: mov     edx, [esi+0Ch]; jumptable 004282FB case 5
0x42868A: push    edx
0x42868B: mov     ecx, edi
0x42868D: call    sub_4204E0
0x428692: jmp     loc_4287E9
0x428697: movsx   eax, byte ptr [esi+0Ch]; jumptable 004282FB case 11
0x42869B: push    eax
0x42869C: mov     ecx, edi
0x42869E: call    sub_4242C0
0x4286A3: jmp     loc_4287E9
0x4286A8: mov     edx, [esi+10h]; jumptable 004282FB case 15
0x4286AB: mov     eax, [esi+0Ch]
0x4286AE: lea     ecx, [esp+20h+arg_0]
0x4286B2: push    ecx
0x4286B3: push    edx
0x4286B4: push    eax
0x4286B5: mov     ecx, edi
0x4286B7: call    sub_424440
0x4286BC: mov     ecx, [esi+18h]
0x4286BF: mov     eax, [esp+20h+arg_0]
0x4286C3: mov     [eax+4], ecx
0x4286C6: mov     edx, [esi+14h]
0x4286C9: mov     [eax], edx
0x4286CB: jmp     loc_4287E9
0x4286D0: mov     eax, [esi+0Ch]; jumptable 004282FB case 12
0x4286D3: push    eax
0x4286D4: mov     ecx, edi
0x4286D6: call    TESObjectCELL_SetInteriorClimate
0x4286DB: jmp     loc_4287E9
0x4286E0: mov     ecx, [esi+0Ch]; jumptable 004282FB case 34
0x4286E3: push    ecx
0x4286E4: mov     ecx, edi
0x4286E6: call    ExtraDataList_SetReferencePointer
0x4286EB: jmp     loc_4287E9
0x4286F0: movzx   edx, byte ptr [esi+19h]; jumptable 004282FB case 31
0x4286F4: movzx   eax, byte ptr [esi+18h]
0x4286F8: mov     ecx, [esi+14h]
0x4286FB: push    edx
0x4286FC: mov     edx, [esi+10h]
0x4286FF: push    eax
0x428700: mov     eax, [esi+0Ch]
0x428703: push    ecx
0x428704: push    edx
0x428705: push    eax
0x428706: mov     ecx, edi
0x428708: call    sub_4268B0
0x42870D: jmp     loc_4287E9
0x428712: mov     ecx, [esi+0Ch]; jumptable 004282FB case 32
0x428715: push    ecx
0x428716: mov     ecx, edi
0x428718: call    sub_41FBC0
0x42871D: jmp     loc_4287E9
0x428722: mov     esi, [esi+0Ch]; jumptable 004282FB case 33
0x428725: cmp     esi, ebx
0x428727: jz      loc_4287E9
0x42872D: lea     ecx, [ecx+0]
0x428730: mov     eax, [esi]
0x428732: cmp     eax, ebx
0x428734: jz      short loc_428745
0x428736: movzx   edx, byte ptr [eax+4]
0x42873A: mov     eax, [eax]
0x42873C: push    edx
0x42873D: push    eax
0x42873E: mov     ecx, edi
0x428740: call    sub_41FFC0
0x428745: mov     esi, [esi+4]
0x428748: cmp     esi, ebx
0x42874A: jnz     short loc_428730
0x42874C: jmp     loc_4287E9
0x428751: mov     ecx, [esi+0Ch]; jumptable 004282FB cases 38,84
0x428754: push    ecx
0x428755: mov     ecx, edi
0x428757: call    sub_41E710
0x42875C: jmp     loc_4287E9
0x428761: mov     edx, [esi+0Ch]; jumptable 004282FB case 63
0x428764: push    edx
0x428765: mov     ecx, edi
0x428767: call    sub_420280
0x42876C: movzx   eax, byte ptr [esi+10h]
0x428770: push    eax
0x428771: mov     ecx, edi
0x428773: call    sub_420380
0x428778: jmp     short loc_4287E9
0x42877A: mov     ecx, [esi+0Ch]; jumptable 004282FB case 67
0x42877D: push    ecx
0x42877E: mov     ecx, edi
0x428780: call    sub_4205C0
0x428785: jmp     short loc_4287E9
0x428787: mov     edx, [esi+0Ch]; jumptable 004282FB case 68
0x42878A: push    edx
0x42878B: mov     ecx, edi
0x42878D: call    sub_4206A0
0x428792: jmp     short loc_4287E9
0x428794: mov     eax, [esi+0Ch]; jumptable 004282FB case 88
0x428797: push    eax
0x428798: mov     ecx, edi
0x42879A: call    sub_420860
0x42879F: jmp     short loc_4287E9
0x4287A1: mov     ecx, [esi+0Ch]; jumptable 004282FB case 77
0x4287A4: push    ecx
0x4287A5: mov     ecx, edi
0x4287A7: call    sub_420D40
0x4287AC: jmp     short loc_4287E9
0x4287AE: mov     edx, [esi+0Ch]; jumptable 004282FB case 36
0x4287B1: push    edx
0x4287B2: mov     ecx, edi
0x4287B4: call    sub_420780
0x4287B9: jmp     short loc_4287E9
0x4287BB: fld     dword ptr [esi+0Ch]; jumptable 004282FB case 81
0x4287BE: push    ecx
0x4287BF: fstp    [esp+24h+a3]; a3
0x4287C2: push    1; enable
0x4287C4: mov     ecx, edi; this
0x4287C6: call    ExtraDataList_ToggleRefractionProperty
0x4287CB: jmp     short loc_4287E9
0x4287CD: push    1; jumptable 004282FB case 71
0x4287CF: mov     ecx, edi
0x4287D1: call    sub_41F370
0x4287D6: jmp     short loc_4287E9
0x4287D8: movzx   eax, cl; jumptable 004282FB default case, cases 6-10,13,14,16,17,20-23,26,29,37,48,52,53,57-62,64-66,69,70,73-76,82,83,86
0x4287DB: push    eax; ArgList
0x4287DC: push    offset aNoCopyFunction; "No Copy function available for Extra Da"...
0x4287E1: call    PrintError
0x4287E6: add     esp, 8
0x4287E9: mov     ecx, [esp+20h+var_C]
0x4287ED: mov     large fs:0, ecx
0x4287F4: pop     ecx
0x4287F5: pop     edi
0x4287F6: pop     esi
0x4287F7: pop     ebp
0x4287F8: pop     ebx
0x4287F9: add     esp, 0Ch
0x4287FC: retn    4
