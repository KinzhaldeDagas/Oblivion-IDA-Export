0x6970A0: push    0FFFFFFFFh
0x6970A2: push    offset SEH_8AA480
0x6970A7: mov     eax, large fs:0
0x6970AD: push    eax
0x6970AE: sub     esp, 1Ch
0x6970B1: push    ebx
0x6970B2: push    ebp
0x6970B3: push    esi
0x6970B4: push    edi
0x6970B5: mov     eax, ds:0B30AACh
0x6970BA: xor     eax, esp
0x6970BC: push    eax
0x6970BD: lea     eax, [esp+3Ch+var_C]
0x6970C1: mov     large fs:0, eax
0x6970C7: mov     esi, ecx
0x6970C9: mov     ebp, [esp+3Ch+arg_10]
0x6970CD: test    ebp, ebp
0x6970CF: jz      short loc_6970F1
0x6970D1: mov     eax, [ebp+0]
0x6970D4: mov     edx, [eax+190h]
0x6970DA: mov     ecx, ebp
0x6970DC: call    edx
0x6970DE: test    al, al
0x6970E0: jz      short loc_6970F1
0x6970E2: mov     ecx, ebp; this
0x6970E4: call    Actor_IsGhost
0x6970E9: test    al, al
0x6970EB: jnz     loc_6974D9
0x6970F1: fld     dword ptr [esi+78h]
0x6970F4: mov     ecx, esi; this
0x6970F6: fstp    [esp+3Ch+arg_10]
0x6970FA: fld     [esp+3Ch+arg_10]
0x6970FE: fstp    dword ptr [esi+0A0h]
0x697104: call    MobileObject_GetCharProxy
0x697109: test    eax, eax
0x69710B: jz      short loc_697175
0x69710D: mov     ecx, esi; this
0x69710F: call    MobileObject_GetCharProxy
0x697114: add     eax, 1F0h
0x697119: test    dword ptr [eax+4], 8000h
0x697120: jz      short loc_69712E
0x697122: mov     eax, [esi]
0x697124: mov     edx, [eax+214h]
0x69712A: mov     ecx, esi
0x69712C: call    edx
0x69712E: lea     eax, [esp+3Ch+arg_10]
0x697132: push    eax
0x697133: mov     ecx, esi; this
0x697135: call    MobileObject_GetCharProxy
0x69713A: mov     ecx, eax
0x69713C: call    sub_57E270
0x697141: mov     edi, [esp+3Ch+arg_10]
0x697145: mov     ecx, esi; this
0x697147: or      edi, 4000h
0x69714D: call    MobileObject_GetCharProxy
0x697152: mov     ecx, [eax+364h]
0x697158: test    ecx, ecx
0x69715A: jz      short loc_697175
0x69715C: mov     eax, [ecx+8]
0x69715F: test    eax, eax
0x697161: jz      short loc_69716B
0x697163: add     eax, 14h
0x697166: jz      short loc_69716B
0x697168: mov     [eax+1Ch], edi
0x69716B: mov     edx, [ecx]
0x69716D: mov     eax, [edx+80h]
0x697173: call    eax
0x697175: mov     edx, [esi]
0x697177: mov     eax, [edx+154h]
0x69717D: mov     ecx, esi
0x69717F: mov     dword ptr [esi+80h], 1
0x697189: call    eax
0x69718B: test    eax, eax
0x69718D: jz      short loc_6971DB
0x69718F: push    offset dword_B258DC
0x697194: lea     ecx, [esp+40h+var_24]
0x697198: push    ecx; float
0x697199: lea     ecx, [eax+64h]
0x69719C: call    sub_7101F0
0x6971A1: mov     edx, [esp+3Ch+arg_C]
0x6971A5: push    edx; int
0x6971A6: mov     edx, [eax]
0x6971A8: sub     esp, 0Ch
0x6971AB: mov     ecx, esp
0x6971AD: mov     [ecx], edx
0x6971AF: mov     edx, [eax+4]
0x6971B2: mov     eax, [eax+8]
0x6971B5: mov     [ecx+4], edx
0x6971B8: mov     edx, [esp+4Ch+arg_4]
0x6971BC: mov     [ecx+8], eax
0x6971BF: mov     ecx, [esp+4Ch+arg_0]
0x6971C3: sub     esp, 0Ch
0x6971C6: mov     eax, esp
0x6971C8: mov     [eax], ecx
0x6971CA: mov     ecx, [esp+58h+arg_8]
0x6971CE: mov     [eax+4], edx
0x6971D1: mov     [eax+8], ecx
0x6971D4: mov     ecx, esi
0x6971D6: call    sub_69F880
0x6971DB: test    ebp, ebp
0x6971DD: jz      short loc_697222
0x6971DF: mov     eax, ds:0B333C4h
0x6971E4: cmp     ebp, eax
0x6971E6: jnz     short loc_6971F1
0x6971E8: cmp     byte ptr [eax+588h], 0
0x6971EF: jz      short loc_697222
0x6971F1: mov     [esi+98h], ebp
0x6971F7: mov     edx, [ebp+0]
0x6971FA: mov     eax, [edx+154h]
0x697200: mov     ecx, ebp
0x697202: call    eax
0x697204: test    eax, eax
0x697206: jz      short loc_697222
0x697208: mov     edx, [eax]
0x69720A: mov     ecx, eax
0x69720C: mov     eax, [edx+58h]
0x69720F: push    offset aBip01Spine2; "Bip01 Spine2"
0x697214: call    eax
0x697216: push    eax; a2
0x697217: lea     ecx, [esi+90h]; this
0x69721D: call    NiSmartPointer_Set??
0x697222: mov     edx, [esi]
0x697224: mov     eax, [edx+154h]
0x69722A: mov     ecx, esi
0x69722C: call    eax
0x69722E: mov     ecx, [eax+54h]
0x697231: mov     edx, [eax+58h]
0x697234: mov     eax, [eax+5Ch]
0x697237: mov     [esp+3Ch+var_24], ecx
0x69723B: fld     [esp+3Ch+var_24]
0x69723F: fsub    [esp+3Ch+arg_0]
0x697243: mov     [esp+3Ch+var_20], edx
0x697247: mov     [esp+3Ch+var_1C], eax
0x69724B: fstp    [esp+3Ch+arg_C]
0x69724F: fld     [esp+3Ch+var_20]
0x697253: fsub    [esp+3Ch+arg_4]
0x697257: fstp    [esp+3Ch+arg_10]
0x69725B: fld     [esp+3Ch+var_1C]
0x69725F: fsub    [esp+3Ch+arg_8]
0x697263: fstp    [esp+3Ch+var_28]
0x697267: fld     [esp+3Ch+arg_10]
0x69726B: fld     [esp+3Ch+arg_C]
0x69726F: fld     [esp+3Ch+var_28]
0x697273: fld     st(1)
0x697275: fmulp   st(2), st
0x697277: fld     st(2)
0x697279: fmulp   st(3), st
0x69727B: fxch    st(1)
0x69727D: faddp   st(2), st
0x69727F: fmul    st, st
0x697281: faddp   st(1), st
0x697283: fstp    [esp+3Ch+arg_10]
0x697287: fld     [esp+3Ch+arg_10]
0x69728B: call    __CIsqrt
0x697290: fstp    [esp+3Ch+arg_10]
0x697294: fld     [esp+3Ch+arg_10]
0x697298: mov     ecx, [esi+7Ch]
0x69729B: fstp    [esp+3Ch+arg_10]
0x69729F: push    0; float
0x6972A1: fld     dword ptr [esi+5Ch]
0x6972A4: sub     esp, 0Ch
0x6972A7: fstp    [esp+4Ch+var_44]; float
0x6972AB: fld     [esp+4Ch+arg_10]
0x6972AF: fstp    [esp+4Ch+var_48]; float
0x6972B3: fld     dword ptr ds:0A34BA0h
0x6972B9: fstp    [esp+4Ch+var_4C]; float
0x6972BC: call    sub_7F3530
0x6972C1: cmp     [esp+3Ch+arg_14], 0
0x6972C6: jnz     short loc_69730F
0x6972C8: mov     edx, [esi]
0x6972CA: mov     eax, [edx+174h]
0x6972D0: mov     edi, [esi+6Ch]
0x6972D3: mov     ebx, [esi+68h]
0x6972D6: mov     ecx, esi
0x6972D8: call    eax
0x6972DA: fld1
0x6972DC: mov     edx, [eax]
0x6972DE: sub     esp, 8
0x6972E1: fst     [esp+44h+var_40]; float
0x6972E5: fstp    [esp+44h+var_44]; float
0x6972E8: push    0; float
0x6972EA: push    ebp; int
0x6972EB: push    esi; int
0x6972EC: sub     esp, 0Ch
0x6972EF: mov     ecx, esp
0x6972F1: mov     [ecx], edx
0x6972F3: mov     edx, [eax+4]
0x6972F6: mov     eax, [eax+8]
0x6972F9: mov     [ecx+4], edx
0x6972FC: mov     [ecx+8], eax
0x6972FF: mov     ecx, esi; this
0x697301: call    TESObjectREFR_GetParentCell
0x697306: push    eax; int
0x697307: push    edi; int
0x697308: mov     ecx, ebx
0x69730A: call    MagicCaster_TargetEffectHit??
0x69730F: mov     eax, [esi+74h]
0x697312: lea     ecx, [eax+18h]
0x697315: mov     dword ptr [esi+98h], 0
0x69731F: mov     edx, [ecx]
0x697321: mov     eax, [edx+14h]
0x697324: call    eax
0x697326: test    eax, eax
0x697328: jz      loc_697444
0x69732E: mov     ecx, [esi+70h]
0x697331: call    EffectItem_GetArea
0x697336: mov     eax, [esi+74h]
0x697339: mov     edx, [eax+18h]
0x69733C: lea     ecx, [eax+18h]
0x69733F: mov     eax, [edx+14h]
0x697342: call    eax
0x697344: mov     ecx, esi; this
0x697346: mov     [esp+3Ch+arg_10], eax
0x69734A: call    TESObjectREFR_GetParentCell
0x69734F: push    esi; TESObjectREFR *
0x697350: call    sub_4C9BE0
0x697355: add     esp, 4
0x697358: push    3
0x69735A: push    eax
0x69735B: mov     ecx, esi; this
0x69735D: call    TESObjectREFR_GetParentCell
0x697362: mov     ecx, eax
0x697364: call    sub_441800
0x697369: mov     edx, [esi]
0x69736B: mov     [esp+3Ch+arg_C], eax
0x69736F: mov     eax, [edx+154h]
0x697375: mov     ecx, esi
0x697377: call    eax
0x697379: test    eax, eax
0x69737B: jz      short loc_69739D
0x69737D: mov     edx, [esi]
0x69737F: mov     eax, [edx+154h]
0x697385: mov     ecx, esi
0x697387: call    eax
0x697389: push    offset dword_B258DC
0x69738E: lea     ecx, [esp+40h+var_18]
0x697392: push    ecx
0x697393: lea     ecx, [eax+30h]
0x697396: call    sub_7101F0
0x69739B: jmp     short loc_6973A2
0x69739D: mov     eax, offset dword_B258DC
0x6973A2: mov     edx, [eax+8]
0x6973A5: mov     ebp, [eax]
0x6973A7: mov     ebx, [eax+4]
0x6973AA: push    20h ; ' '; Size
0x6973AC: mov     [esp+40h+var_1C], edx
0x6973B0: call    FormHeapAlloc
0x6973B5: mov     edi, eax
0x6973B7: add     esp, 4
0x6973BA: mov     [esp+3Ch+var_28], edi
0x6973BE: test    edi, edi
0x6973C0: mov     [esp+3Ch+var_4], 0
0x6973C8: jz      short loc_697423
0x6973CA: fld1
0x6973CC: mov     ecx, [esp+3Ch+arg_0]
0x6973D0: mov     edx, [esp+3Ch+arg_4]
0x6973D4: push    0; float
0x6973D6: sub     esp, 10h
0x6973D9: fstp    [esp+50h+var_44]; float
0x6973DD: mov     eax, esp
0x6973DF: fld     dword ptr ds:0A31E2Ch
0x6973E5: mov     [eax], ecx
0x6973E7: mov     ecx, [esp+50h+arg_8]
0x6973EB: mov     [eax+4], edx
0x6973EE: mov     edx, [esp+50h+var_1C]
0x6973F2: mov     [eax+8], ecx
0x6973F5: mov     ecx, [esp+50h+arg_C]
0x6973F9: sub     esp, 0Ch
0x6973FC: mov     eax, esp
0x6973FE: mov     [eax], ebp
0x697400: mov     [eax+4], ebx
0x697403: mov     [eax+8], edx
0x697406: mov     eax, [esp+5Ch+arg_10]
0x69740A: push    eax; float
0x69740B: push    ecx; int
0x69740C: push    ecx
0x69740D: mov     ecx, esi; this
0x69740F: fstp    [esp+68h+var_68]; float
0x697412: call    TESObjectREFR_GetParentCell
0x697417: push    eax; int
0x697418: mov     ecx, edi
0x69741A: call    sub_5713F0
0x69741F: mov     edi, eax
0x697421: jmp     short loc_697425
0x697423: xor     edi, edi
0x697425: push    edi
0x697426: mov     ecx, offset ActorProcessManager_ptr
0x69742B: mov     [esp+40h+var_4], 0FFFFFFFFh
0x697433: call    sub_678D30
0x697438: push    offset aSpecialidle_ar; "SpecialIdle_AreaEffect"
0x69743D: mov     ecx, edi
0x69743F: call    sub_570C00
0x697444: mov     edx, ds:0B33398h
0x69744A: mov     ecx, [edx+24h]
0x69744D: test    ecx, ecx
0x69744F: jz      loc_6974D9
0x697455: mov     eax, [esi+74h]
0x697458: mov     eax, [eax+8Ch]
0x69745E: test    eax, eax
0x697460: jz      short loc_6974D9
0x697462: cmp     [esp+3Ch+arg_14], 0
0x697467: jnz     short loc_6974D9
0x697469: mov     eax, [eax+0Ch]
0x69746C: push    1
0x69746E: push    102h
0x697473: push    eax
0x697474: call    OSGLobals_PlaySound
0x697479: mov     edi, eax
0x69747B: test    edi, edi
0x69747D: jz      short loc_6974D9
0x69747F: mov     edx, [esi]
0x697481: mov     eax, [edx+174h]
0x697487: mov     ecx, esi
0x697489: call    eax
0x69748B: mov     ecx, [eax]
0x69748D: mov     edx, [eax+4]
0x697490: mov     eax, [eax+8]
0x697493: sub     esp, 0Ch
0x697496: mov     [esp+48h+arg_8], eax
0x69749A: fld     [esp+48h+arg_8]
0x69749E: fstp    [esp+48h+var_40]; float
0x6974A2: mov     [esp+48h+arg_4], edx
0x6974A6: fld     [esp+48h+arg_4]
0x6974AA: mov     [esp+48h+arg_0], ecx
0x6974AE: fstp    [esp+48h+var_44]; float
0x6974B2: mov     ecx, edi
0x6974B4: fld     [esp+48h+arg_0]
0x6974B8: fstp    [esp+48h+var_48]; float
0x6974BB: call    sub_6B7360
0x6974C0: push    0
0x6974C2: mov     ecx, edi
0x6974C4: call    sub_6B71C0
0x6974C9: mov     ecx, edi; this
0x6974CB: call    sub_6B73E0
0x6974D0: push    edi
0x6974D1: call    FormHeapFree
0x6974D6: add     esp, 4
0x6974D9: mov     ecx, [esp+3Ch+var_C]
0x6974DD: mov     large fs:0, ecx
0x6974E4: pop     ecx
0x6974E5: pop     edi
0x6974E6: pop     esi
0x6974E7: pop     ebp
0x6974E8: pop     ebx
0x6974E9: add     esp, 28h
0x6974EC: retn    18h
