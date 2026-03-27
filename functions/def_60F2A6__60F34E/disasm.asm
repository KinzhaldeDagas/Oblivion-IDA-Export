0x60F34E: mov     eax, [edi]; jumptable 0060F2A6 default case
0x60F350: mov     edx, [eax+380h]
0x60F356: mov     ecx, edi
0x60F358: call    edx
0x60F35A: test    eax, eax
0x60F35C: jz      short loc_60F397
0x60F35E: mov     ecx, [edi+58h]
0x60F361: mov     eax, [ecx]
0x60F363: mov     edx, [eax+36Ch]
0x60F369: call    edx
0x60F36B: test    eax, eax
0x60F36D: jnz     short loc_60F397
0x60F36F: mov     eax, [edi]
0x60F371: mov     edx, [eax+380h]
0x60F377: mov     ecx, edi
0x60F379: call    edx
0x60F37B: mov     edx, [eax]
0x60F37D: mov     ecx, eax
0x60F37F: mov     eax, [edx+38Ch]
0x60F385: push    0
0x60F387: call    eax
0x60F389: mov     edx, [edi]
0x60F38B: mov     eax, [edx+384h]
0x60F391: push    0
0x60F393: mov     ecx, edi
0x60F395: call    eax
0x60F397: mov     ecx, edi; this
0x60F399: call    sub_5E6C60
0x60F39E: test    al, al
0x60F3A0: jz      loc_60F5DA
0x60F3A6: test    esi, esi
0x60F3A8: mov     ebp, [esp+8+arg_24]
0x60F3AC: jz      short loc_60F3B9
0x60F3AE: test    ebp, ebp
0x60F3B0: jnz     short loc_60F3B9
0x60F3B2: mov     ebp, [esi+0Ch]
0x60F3B5: mov     [esp+8+arg_24], ebp
0x60F3B9: push    0
0x60F3BB: push    0Fh
0x60F3BD: push    ebp
0x60F3BE: mov     ecx, offset ActorProcessManager_ptr
0x60F3C3: call    sub_6758E0
0x60F3C8: test    eax, eax
0x60F3CA: mov     ecx, [ebp+58h]
0x60F3CD: jnz     short loc_60F3DC
0x60F3CF: mov     edx, [ecx]
0x60F3D1: push    eax
0x60F3D2: mov     eax, [edx+234h]
0x60F3D8: call    eax
0x60F3DA: jmp     short loc_60F3FA
0x60F3DC: xor     edx, edx
0x60F3DE: mov     edi, edi
0x60F3E0: cmp     dword ptr [eax], 0
0x60F3E3: jz      short loc_60F3E8
0x60F3E5: add     edx, 1
0x60F3E8: mov     eax, [eax+4]
0x60F3EB: test    eax, eax
0x60F3ED: jnz     short loc_60F3E0
0x60F3EF: mov     eax, [ecx]
0x60F3F1: push    edx
0x60F3F2: mov     edx, [eax+234h]
0x60F3F8: call    edx
0x60F3FA: mov     ecx, [ebp+58h]
0x60F3FD: mov     eax, [ecx]
0x60F3FF: mov     edx, [eax+444h]
0x60F405: call    edx
0x60F407: cmp     eax, ds:0B36A70h
0x60F40D: jl      loc_60F4D1
0x60F413: test    esi, esi
0x60F415: jz      loc_60FB86
0x60F41B: mov     ecx, [esi+0Ch]
0x60F41E: call    sub_5E32D0
0x60F423: test    al, al
0x60F425: jz      loc_60FB86
0x60F42B: cmp     byte ptr [esi+11h], 0
0x60F42F: jnz     loc_60FB86
0x60F435: mov     eax, [edi]
0x60F437: mov     edx, [eax+284h]
0x60F43D: push    24h ; '$'
0x60F43F: mov     ecx, edi
0x60F441: call    edx
0x60F443: cmp     eax, 64h ; 'd'
0x60F446: jge     short loc_60F45E
0x60F448: mov     ecx, edi
0x60F44A: call    Actor_GetBaseClass
0x60F44F: mov     ecx, eax
0x60F451: call    TESClass__IsGuardClass
0x60F456: test    al, al
0x60F458: jz      loc_60FB86
0x60F45E: push    1; a2
0x60F460: mov     ecx, edi; this
0x60F462: call    Actor_GetActorBaseForm
0x60F467: mov     ebx, eax
0x60F469: lea     ecx, [ebx+3Ch]
0x60F46C: call    BSSimpleList_IsEmpty
0x60F471: test    al, al
0x60F473: jz      short loc_60F480
0x60F475: push    0; a2
0x60F477: mov     ecx, edi; this
0x60F479: call    Actor_GetActorBaseForm
0x60F47E: mov     ebx, eax
0x60F480: push    0; int
0x60F482: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x60F487: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x60F48C: push    0; int
0x60F48E: push    ebx; void *
0x60F48F: call    OblivionDynamicCast
0x60F494: add     esp, 14h
0x60F497: mov     ecx, esi
0x60F499: mov     edi, eax
0x60F49B: call    sub_606140
0x60F4A0: fstp    [esp+10h+arg_18]
0x60F4A4: mov     ecx, edi
0x60F4A6: call    sub_5234A0
0x60F4AB: fmul    [esp+10h+arg_18]
0x60F4AF: mov     ecx, [esi+0Ch]
0x60F4B2: mov     eax, [ecx]
0x60F4B4: mov     edx, [eax+254h]
0x60F4BA: fstp    [esp+10h+arg_18]
0x60F4BE: fld     [esp+10h+arg_18]
0x60F4C2: push    ecx
0x60F4C3: fstp    [esp+14h+var_14]
0x60F4C6: call    edx
0x60F4C8: mov     byte ptr [esi+11h], 1
0x60F4CC: jmp     loc_60FB86
0x60F4D1: mov     eax, ds:0B333C4h
0x60F4D6: cmp     ebp, eax
0x60F4D8: jnz     loc_60F5C8
0x60F4DE: cmp     byte ptr [eax+738h], 0
0x60F4E5: jz      loc_60F5C8
0x60F4EB: test    esi, esi
0x60F4ED: jz      loc_60F5A4
0x60F4F3: mov     ecx, [esi+0Ch]
0x60F4F6: call    sub_5E32D0
0x60F4FB: test    al, al
0x60F4FD: jz      loc_60F5A4
0x60F503: cmp     byte ptr [esi+11h], 0
0x60F507: jnz     loc_60F5A4
0x60F50D: mov     eax, [edi]
0x60F50F: mov     edx, [eax+284h]
0x60F515: push    24h ; '$'
0x60F517: mov     ecx, edi
0x60F519: call    edx
0x60F51B: cmp     eax, 64h ; 'd'
0x60F51E: jge     short loc_60F532
0x60F520: mov     ecx, edi
0x60F522: call    Actor_GetBaseClass
0x60F527: mov     ecx, eax
0x60F529: call    TESClass__IsGuardClass
0x60F52E: test    al, al
0x60F530: jz      short loc_60F5A4
0x60F532: push    1; a2
0x60F534: mov     ecx, edi; this
0x60F536: call    Actor_GetActorBaseForm
0x60F53B: mov     ebx, eax
0x60F53D: lea     ecx, [ebx+3Ch]
0x60F540: call    BSSimpleList_IsEmpty
0x60F545: test    al, al
0x60F547: jz      short loc_60F554
0x60F549: push    0; a2
0x60F54B: mov     ecx, edi; this
0x60F54D: call    Actor_GetActorBaseForm
0x60F552: mov     ebx, eax
0x60F554: push    0; int
0x60F556: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x60F55B: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x60F560: push    0; int
0x60F562: push    ebx; void *
0x60F563: call    OblivionDynamicCast
0x60F568: add     esp, 14h
0x60F56B: mov     ecx, esi
0x60F56D: mov     ebx, eax
0x60F56F: call    sub_606140
0x60F574: fstp    [esp+10h+arg_18]
0x60F578: mov     ecx, ebx
0x60F57A: call    sub_5234A0
0x60F57F: fmul    [esp+10h+arg_18]
0x60F583: mov     ecx, [esi+0Ch]
0x60F586: mov     eax, [ecx]
0x60F588: mov     edx, [eax+254h]
0x60F58E: fstp    [esp+10h+arg_18]
0x60F592: fld     [esp+10h+arg_18]
0x60F596: push    ecx
0x60F597: fstp    [esp+14h+var_14]
0x60F59A: call    edx
0x60F59C: mov     byte ptr [esi+11h], 1
0x60F5A0: mov     byte ptr [esi+2Ch], 1
0x60F5A4: mov     ecx, [edi+58h]
0x60F5A7: mov     eax, [ecx]
0x60F5A9: mov     edx, [eax+228h]
0x60F5AF: push    1
0x60F5B1: push    0
0x60F5B3: push    0
0x60F5B5: push    0
0x60F5B7: push    0
0x60F5B9: push    0
0x60F5BB: push    0
0x60F5BD: push    0
0x60F5BF: push    ebp
0x60F5C0: push    edi
0x60F5C1: call    edx
0x60F5C3: jmp     loc_60FB86
0x60F5C8: mov     ebp, [ebp+58h]
0x60F5CB: mov     eax, [ebp+0]
0x60F5CE: mov     edx, [eax+448h]
0x60F5D4: push    1
0x60F5D6: mov     ecx, ebp
0x60F5D8: call    edx
0x60F5DA: mov     eax, [edi]
0x60F5DC: mov     edx, [eax+18Ch]
0x60F5E2: mov     ecx, edi
0x60F5E4: call    edx
0x60F5E6: cmp     eax, 9
0x60F5E9: jnz     short loc_60F5F7
0x60F5EB: mov     eax, [edi]
0x60F5ED: mov     edx, [eax+320h]
0x60F5F3: mov     ecx, edi
0x60F5F5: call    edx
0x60F5F7: mov     ecx, edi
0x60F5F9: xor     ebx, ebx
0x60F5FB: call    sub_5E03A0
0x60F600: mov     ebp, eax
0x60F602: test    ebp, ebp
0x60F604: jz      short loc_60F61B
0x60F606: mov     ecx, ebp
0x60F608: call    sub_567770
0x60F60D: test    al, al
0x60F60F: jz      short loc_60F61B
0x60F611: lea     ecx, [edi+44h]
0x60F614: call    ExtraDataList__GetExtraPackage
0x60F619: mov     ebp, eax
0x60F61B: mov     eax, [edi]
0x60F61D: mov     edx, [eax+334h]
0x60F623: push    0
0x60F625: mov     ecx, edi
0x60F627: call    edx
0x60F629: test    al, al
0x60F62B: jnz     short loc_60F682
0x60F62D: mov     eax, [edi]
0x60F62F: mov     edx, [eax+198h]
0x60F635: push    0
0x60F637: mov     ecx, edi
0x60F639: call    edx
0x60F63B: test    al, al
0x60F63D: jnz     short loc_60F682
0x60F63F: push    0
0x60F641: mov     ecx, edi
0x60F643: call    sub_5E6CD0
0x60F648: test    al, al
0x60F64A: jnz     short loc_60F682
0x60F64C: test    ebp, ebp
0x60F64E: jz      loc_60F777
0x60F654: mov     eax, [ebp+1Ch]
0x60F657: shr     eax, 16h
0x60F65A: test    al, 1
0x60F65C: jz      loc_60F777
0x60F662: test    esi, esi
0x60F664: jz      loc_60F777
0x60F66A: mov     ecx, [edi+58h]
0x60F66D: mov     edx, [ecx]
0x60F66F: mov     eax, [edx+0CCh]
0x60F675: mov     ebp, [esi+8]
0x60F678: call    eax
0x60F67A: cmp     ebp, eax
0x60F67C: jz      loc_60F777
0x60F682: cmp     [esp+18h+arg_10], bl
0x60F686: jz      loc_60F777
0x60F68C: test    esi, esi
0x60F68E: jz      loc_60F740
0x60F694: mov     ecx, [esi+0Ch]
0x60F697: call    sub_5E32D0
0x60F69C: test    al, al
0x60F69E: jz      loc_60F740
0x60F6A4: cmp     [esi+11h], bl
0x60F6A7: jnz     loc_60F740
0x60F6AD: mov     edx, [edi]
0x60F6AF: mov     eax, [edx+284h]
0x60F6B5: push    24h ; '$'
0x60F6B7: mov     ecx, edi
0x60F6B9: call    eax
0x60F6BB: cmp     eax, 64h ; 'd'
0x60F6BE: jge     short loc_60F6D2
0x60F6C0: mov     ecx, edi
0x60F6C2: call    Actor_GetBaseClass
0x60F6C7: mov     ecx, eax
0x60F6C9: call    TESClass__IsGuardClass
0x60F6CE: test    al, al
0x60F6D0: jz      short loc_60F740
0x60F6D2: push    1; a2
0x60F6D4: mov     ecx, edi; this
0x60F6D6: call    Actor_GetActorBaseForm
0x60F6DB: mov     ebx, eax
0x60F6DD: lea     ecx, [ebx+3Ch]
0x60F6E0: call    BSSimpleList_IsEmpty
0x60F6E5: test    al, al
0x60F6E7: jz      short loc_60F6F4
0x60F6E9: push    0; a2
0x60F6EB: mov     ecx, edi; this
0x60F6ED: call    Actor_GetActorBaseForm
0x60F6F2: mov     ebx, eax
0x60F6F4: push    0; int
0x60F6F6: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x60F6FB: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x60F700: push    0; int
0x60F702: push    ebx; void *
0x60F703: call    OblivionDynamicCast
0x60F708: add     esp, 14h
0x60F70B: mov     ecx, esi
0x60F70D: mov     ebx, eax
0x60F70F: call    sub_606140
0x60F714: fstp    [esp+1Ch+arg_C]
0x60F718: mov     ecx, ebx
0x60F71A: call    sub_5234A0
0x60F71F: fmul    [esp+1Ch+arg_C]
0x60F723: mov     ecx, [esi+0Ch]
0x60F726: mov     edx, [ecx]
0x60F728: mov     eax, [edx+254h]
0x60F72E: fstp    [esp+1Ch+arg_C]
0x60F732: fld     [esp+1Ch+arg_C]
0x60F736: push    ecx
0x60F737: fstp    [esp+20h+var_20]
0x60F73A: call    eax
0x60F73C: mov     byte ptr [esi+11h], 1
0x60F740: mov     edx, [edi]
0x60F742: mov     eax, [edx+198h]
0x60F748: push    0
0x60F74A: mov     ecx, edi
0x60F74C: call    eax
0x60F74E: test    al, al
0x60F750: jnz     loc_60FB86
0x60F756: cmp     [esi+10h], al
0x60F759: jnz     loc_60FB86
0x60F75F: mov     ecx, [edi+58h]
0x60F762: mov     eax, [esi+0Ch]
0x60F765: mov     edx, [ecx]
0x60F767: mov     edx, [edx+230h]
0x60F76D: push    esi
0x60F76E: push    eax
0x60F76F: push    edi
0x60F770: call    edx
0x60F772: jmp     loc_60FB86
0x60F777: mov     ecx, [edi+58h]
0x60F77A: mov     eax, [ecx]
0x60F77C: mov     edx, [eax+178h]
0x60F782: push    0; int
0x60F784: call    edx
0x60F786: mov     ecx, edi
0x60F788: call    sub_5E0380
0x60F78D: test    eax, eax
0x60F78F: jz      short loc_60F7C0
0x60F791: mov     ecx, edi
0x60F793: call    sub_5E0380
0x60F798: cmp     byte ptr [eax+20h], 0Fh
0x60F79C: mov     ecx, edi
0x60F79E: jnz     short loc_60F7A9
0x60F7A0: call    sub_5E0380
0x60F7A5: mov     ebx, eax
0x60F7A7: jmp     short loc_60F7C0
0x60F7A9: call    sub_5E0380
0x60F7AE: mov     ecx, eax
0x60F7B0: call    sub_567770
0x60F7B5: test    al, al
0x60F7B7: jz      short loc_60F7C0
0x60F7B9: mov     ecx, edi; int
0x60F7BB: call    sub_5EAE70
0x60F7C0: test    esi, esi
0x60F7C2: jz      loc_60F95F
0x60F7C8: mov     ecx, [esi+0Ch]
0x60F7CB: call    sub_5E32D0
0x60F7D0: test    al, al
0x60F7D2: jz      loc_60F875
0x60F7D8: cmp     byte ptr [esi+11h], 0
0x60F7DC: jnz     loc_60F875
0x60F7E2: mov     eax, [edi]
0x60F7E4: mov     edx, [eax+284h]
0x60F7EA: push    24h ; '$'
0x60F7EC: mov     ecx, edi
0x60F7EE: call    edx
0x60F7F0: cmp     eax, 64h ; 'd'
0x60F7F3: jge     short loc_60F807
0x60F7F5: mov     ecx, edi
0x60F7F7: call    Actor_GetBaseClass
0x60F7FC: mov     ecx, eax
0x60F7FE: call    TESClass__IsGuardClass
0x60F803: test    al, al
0x60F805: jz      short loc_60F875
0x60F807: push    1; a2
0x60F809: mov     ecx, edi; this
0x60F80B: call    Actor_GetActorBaseForm
0x60F810: mov     ebp, eax
0x60F812: lea     ecx, [ebp+3Ch]
0x60F815: call    BSSimpleList_IsEmpty
0x60F81A: test    al, al
0x60F81C: jz      short loc_60F829
0x60F81E: push    0; a2
0x60F820: mov     ecx, edi; this
0x60F822: call    Actor_GetActorBaseForm
0x60F827: mov     ebp, eax
0x60F829: push    0; int
0x60F82B: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x60F830: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x60F835: push    0; int
0x60F837: push    ebp; void *
0x60F838: call    OblivionDynamicCast
0x60F83D: add     esp, 14h
0x60F840: mov     ecx, esi
0x60F842: mov     ebp, eax
0x60F844: call    sub_606140
0x60F849: fstp    [esp+20h+arg_8]
0x60F84D: mov     ecx, ebp
0x60F84F: call    sub_5234A0
0x60F854: fmul    [esp+20h+arg_8]
0x60F858: mov     ecx, [esi+0Ch]
0x60F85B: mov     eax, [ecx]
0x60F85D: mov     edx, [eax+254h]
0x60F863: fstp    [esp+20h+arg_8]
0x60F867: fld     [esp+20h+arg_8]
0x60F86B: push    ecx
0x60F86C: fstp    [esp+24h+var_24]
0x60F86F: call    edx
0x60F871: mov     byte ptr [esi+11h], 1
0x60F875: mov     ecx, edi
0x60F877: call    Actor_GetBaseClass
0x60F87C: mov     ecx, eax
0x60F87E: call    TESClass__IsGuardClass
0x60F883: test    al, al
0x60F885: jz      loc_60F95F
0x60F88B: mov     eax, [esi+0Ch]
0x60F88E: mov     byte ptr [esi+2Ch], 1
0x60F892: mov     ecx, ds:0B333C4h; this
0x60F898: cmp     eax, ecx
0x60F89A: jnz     short loc_60F8DC
0x60F89C: call    PlayerCharacter__IsJailed; Check the meaning of JailedState
0x60F8A1: test    al, al
0x60F8A3: jz      short loc_60F8DC
0x60F8A5: mov     ecx, ds:0B333C4h
0x60F8AB: push    1
0x60F8AD: call    sub_65D670
0x60F8B2: mov     ecx, [edi+58h]
0x60F8B5: mov     edx, ds:0B333C4h
0x60F8BB: mov     eax, [ecx]
0x60F8BD: mov     eax, [eax+228h]
0x60F8C3: push    1
0x60F8C5: push    0
0x60F8C7: push    0
0x60F8C9: push    0
0x60F8CB: push    0
0x60F8CD: push    0
0x60F8CF: push    0
0x60F8D1: push    0
0x60F8D3: push    edx
0x60F8D4: push    edi
0x60F8D5: call    eax
0x60F8D7: jmp     loc_60FB86
0x60F8DC: mov     ecx, [esi+0Ch]
0x60F8DF: call    sub_5E32D0
0x60F8E4: test    al, al
0x60F8E6: jz      short loc_60F95F
0x60F8E8: mov     ecx, [esi+0Ch]
0x60F8EB: cmp     ecx, ds:0B333C4h
0x60F8F1: jz      short loc_60F95F
0x60F8F3: mov     edx, [ecx]
0x60F8F5: mov     eax, [edx+334h]
0x60F8FB: push    1
0x60F8FD: call    eax
0x60F8FF: test    al, al
0x60F901: jnz     short loc_60F95F
0x60F903: mov     ecx, [esi+0Ch]; this
0x60F906: call    TESObjectREFR_IsPersistent?
0x60F90B: test    al, al
0x60F90D: jz      short loc_60F95F
0x60F90F: mov     ebp, [esi+0Ch]
0x60F912: push    0
0x60F914: mov     ecx, ebp
0x60F916: call    sub_5E6CD0
0x60F91B: test    al, al
0x60F91D: jnz     short loc_60F935
0x60F91F: mov     edx, [ebp+0]
0x60F922: mov     eax, [edx+318h]
0x60F928: push    0
0x60F92A: push    0
0x60F92C: push    1
0x60F92E: push    0
0x60F930: push    edi
0x60F931: mov     ecx, ebp
0x60F933: call    eax
0x60F935: push    0; int
0x60F937: push    offset ??_R0?AVFleePackage@@@8; struct TypeDescriptor *
0x60F93C: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x60F941: push    0; int
0x60F943: mov     ecx, ebp
0x60F945: call    sub_5E0380
0x60F94A: push    eax; void *
0x60F94B: call    OblivionDynamicCast
0x60F950: add     esp, 14h
0x60F953: test    eax, eax
0x60F955: jz      short loc_60F95F
0x60F957: push    edi
0x60F958: mov     ecx, eax
0x60F95A: call    sub_626C90
0x60F95F: test    ebx, ebx
0x60F961: jnz     loc_60FB5F
0x60F967: mov     eax, [edi+58h]
0x60F96A: mov     ebx, [eax+8]
0x60F96D: push    40h ; '@'; Size
0x60F96F: call    FormHeapAlloc
0x60F974: add     esp, 4
0x60F977: mov     [esp+3Ch+var_10], eax
0x60F97B: test    eax, eax
0x60F97D: mov     [esp+3Ch+var_20], 0
0x60F985: jz      short loc_60F993
0x60F987: push    esi
0x60F988: mov     ecx, eax
0x60F98A: call    sub_6068D0
0x60F98F: mov     ebp, eax
0x60F991: jmp     short loc_60F995
0x60F993: xor     ebp, ebp
0x60F995: push    0Fh
0x60F997: mov     ecx, ebp
0x60F999: mov     [esp+40h+var_20], 0FFFFFFFFh
0x60F9A1: call    TESPackage_SetType?
0x60F9A6: test    ebx, ebx
0x60F9A8: jz      short loc_60F9FA
0x60F9AA: mov     ecx, [ebx+1Ch]
0x60F9AD: shr     ecx, 17h
0x60F9B0: and     cl, 1
0x60F9B3: jz      short loc_60F9BE
0x60F9B5: or      dword ptr [ebp+1Ch], offset loc_800000
0x60F9BC: jmp     short loc_60F9C5
0x60F9BE: and     dword ptr [ebp+1Ch], 0FF7FFFFFh
0x60F9C5: mov     edx, [ebx+1Ch]
0x60F9C8: shr     edx, 14h
0x60F9CB: and     dl, 1
0x60F9CE: jz      short loc_60F9D9
0x60F9D0: or      dword ptr [ebp+1Ch], 100000h
0x60F9D7: jmp     short loc_60F9E0
0x60F9D9: and     dword ptr [ebp+1Ch], 0FFEFFFFFh
0x60F9E0: mov     eax, [ebx+1Ch]
0x60F9E3: shr     eax, 15h
0x60F9E6: and     al, 1
0x60F9E8: jz      short loc_60F9F3
0x60F9EA: or      dword ptr [ebp+1Ch], 200000h
0x60F9F1: jmp     short loc_60F9FA
0x60F9F3: and     dword ptr [ebp+1Ch], 0FFDFFFFFh
0x60F9FA: or      dword ptr [ebp+1Ch], 6
0x60F9FE: push    0Ch; Size
0x60FA00: call    FormHeapAlloc
0x60FA05: add     esp, 4
0x60FA08: mov     [esp+3Ch+var_10], eax
0x60FA0C: test    eax, eax
0x60FA0E: mov     [esp+3Ch+var_20], 1
0x60FA16: jz      short loc_60FA23
0x60FA18: mov     ecx, eax
0x60FA1A: call    TESPackage_LocationData_constr
0x60FA1F: mov     ebx, eax
0x60FA21: jmp     short loc_60FA25
0x60FA23: xor     ebx, ebx
0x60FA25: push    0
0x60FA27: mov     ecx, ebx
0x60FA29: mov     [esp+40h+var_20], 0FFFFFFFFh
0x60FA31: call    TESPackage_LocationData_SetType
0x60FA36: test    esi, esi
0x60FA38: jz      short loc_60FA40
0x60FA3A: mov     eax, [esi+0Ch]
0x60FA3D: push    eax
0x60FA3E: jmp     short loc_60FA45
0x60FA40: mov     ecx, [esp+3Ch+var_C]
0x60FA44: push    ecx
0x60FA45: mov     ecx, ebx
0x60FA47: call    TESPackage_LocationData_SetReference
0x60FA4C: push    ebx
0x60FA4D: mov     ecx, ebp
0x60FA4F: call    TESPackage_SetLocation
0x60FA54: test    ebx, ebx
0x60FA56: jz      short loc_60FA68
0x60FA58: mov     ecx, ebx
0x60FA5A: call    TESPackage_LocationData_destr
0x60FA5F: push    ebx
0x60FA60: call    FormHeapFree
0x60FA65: add     esp, 4
0x60FA68: push    0Ch; Size
0x60FA6A: call    FormHeapAlloc
0x60FA6F: add     esp, 4
0x60FA72: mov     [esp+3Ch+var_10], eax
0x60FA76: test    eax, eax
0x60FA78: mov     [esp+3Ch+var_20], 2
0x60FA80: jz      short loc_60FA8D
0x60FA82: mov     ecx, eax
0x60FA84: call    TESPackage_TargetData_constr
0x60FA89: mov     ebx, eax
0x60FA8B: jmp     short loc_60FA8F
0x60FA8D: xor     ebx, ebx
0x60FA8F: push    ebx
0x60FA90: mov     ecx, ebp
0x60FA92: mov     [esp+40h+var_20], 0FFFFFFFFh
0x60FA9A: call    TESPackage_SetTarget
0x60FA9F: test    ebx, ebx
0x60FAA1: jz      short loc_60FAB3
0x60FAA3: mov     ecx, ebx; void *
0x60FAA5: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x60FAAA: push    ebx
0x60FAAB: call    FormHeapFree
0x60FAB0: add     esp, 4
0x60FAB3: mov     ecx, [ebp+28h]
0x60FAB6: push    0
0x60FAB8: mov     dword ptr [ebp+18h], 0Bh
0x60FABF: call    TESPackage_TargetData_SetType
0x60FAC4: test    esi, esi
0x60FAC6: mov     ecx, [ebp+28h]
0x60FAC9: jz      short loc_60FAD1
0x60FACB: mov     edx, [esi+0Ch]
0x60FACE: push    edx
0x60FACF: jmp     short loc_60FAD6
0x60FAD1: mov     eax, [esp+3Ch+var_C]
0x60FAD5: push    eax
0x60FAD6: call    TeSPackage_TargetData_SetTargetREFR
0x60FADB: mov     ecx, [edi+58h]
0x60FADE: mov     edx, [ecx]
0x60FAE0: mov     eax, [edx+20h]
0x60FAE3: call    eax
0x60FAE5: mov     ecx, [edi+58h]
0x60FAE8: cmp     dword ptr [ecx+8], 0
0x60FAEC: jz      short loc_60FB33
0x60FAEE: mov     edx, ecx
0x60FAF0: mov     eax, ecx
0x60FAF2: mov     [esp+3Ch+var_10], edx
0x60FAF6: mov     edx, [ecx]
0x60FAF8: mov     [esp+3Ch+var_C], eax
0x60FAFC: mov     eax, [edx+390h]
0x60FB02: mov     ebx, ecx
0x60FB04: call    eax
0x60FB06: mov     edx, [ebx]
0x60FB08: mov     ecx, ebx
0x60FB0A: push    eax
0x60FB0B: mov     eax, [edx+0C0h]
0x60FB11: call    eax
0x60FB13: mov     ecx, ebx
0x60FB15: mov     edx, [ecx]
0x60FB17: push    eax
0x60FB18: mov     eax, [edx+0CCh]
0x60FB1E: call    eax
0x60FB20: push    eax
0x60FB21: mov     eax, ebx
0x60FB23: mov     ecx, [eax+4]
0x60FB26: mov     edx, [eax+8]
0x60FB29: push    ecx
0x60FB2A: push    edx
0x60FB2B: lea     ecx, [edi+44h]
0x60FB2E: call    sub_4268B0
0x60FB33: push    1; a4
0x60FB35: push    0; a3
0x60FB37: push    ebp; a2
0x60FB38: mov     ecx, edi; this
0x60FB3A: call    Actor_AddPackage?
0x60FB3F: test    esi, esi
0x60FB41: jz      short loc_60FB4B
0x60FB43: push    edi
0x60FB44: mov     ecx, esi
0x60FB46: call    sub_605F00
0x60FB4B: mov     ecx, [edi+58h]
0x60FB4E: mov     eax, [ecx]
0x60FB50: mov     edx, [esp+3Ch+var_14]
0x60FB54: mov     eax, [eax+17Ch]
0x60FB5A: push    edx
0x60FB5B: call    eax
0x60FB5D: jmp     short loc_60FB86
0x60FB5F: test    esi, esi
0x60FB61: jz      short loc_60FB86
0x60FB63: mov     ecx, [ebx+28h]
0x60FB66: mov     edi, [esi+0Ch]
0x60FB69: call    sub_569E60
0x60FB6E: cmp     eax, edi
0x60FB70: jnz     short loc_60FB86
0x60FB72: push    esi
0x60FB73: mov     ecx, ebx
0x60FB75: call    sub_606AD0
0x60FB7A: test    al, al
0x60FB7C: jnz     short loc_60FB86
0x60FB7E: push    esi
0x60FB7F: mov     ecx, ebx
0x60FB81: call    sub_606B00
0x60FB86: mov     ecx, [esp+14h]
0x60FB8A: mov     large fs:0, ecx
0x60FB91: pop     ecx
0x60FB92: pop     edi
0x60FB93: pop     esi
0x60FB94: pop     ebp
0x60FB95: pop     ebx
0x60FB96: add     esp, 0Ch
0x60FB99: retn    10h
