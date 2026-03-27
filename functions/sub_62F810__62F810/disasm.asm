0x62F810: push    0FFFFFFFFh
0x62F812: push    offset SEH_62F810
0x62F817: mov     eax, large fs:0
0x62F81D: push    eax
0x62F81E: sub     esp, 28h
0x62F821: push    ebx
0x62F822: push    ebp
0x62F823: push    esi
0x62F824: push    edi
0x62F825: mov     eax, ds:0B30AACh
0x62F82A: xor     eax, esp
0x62F82C: push    eax
0x62F82D: lea     eax, [esp+48h+var_C]
0x62F831: mov     large fs:0, eax
0x62F837: mov     edi, [esp+48h+arg_0]
0x62F83B: mov     eax, [edi]
0x62F83D: mov     edx, [eax+170h]
0x62F843: xor     ebx, ebx
0x62F845: mov     ecx, edi
0x62F847: mov     [esp+48h+var_30], ebx
0x62F84B: call    edx
0x62F84D: cmp     byte ptr [eax+4], 23h ; '#'
0x62F851: jnz     short loc_62F863
0x62F853: mov     eax, [edi]
0x62F855: mov     edx, [eax+170h]
0x62F85B: mov     ecx, edi
0x62F85D: call    edx
0x62F85F: mov     [esp+48h+var_30], eax
0x62F863: mov     ebp, [esp+48h+a7]
0x62F867: mov     esi, [ebp+8]
0x62F86A: cmp     esi, ebx
0x62F86C: mov     [esp+48h+var_2C], ebx
0x62F870: jz      short loc_62F886
0x62F872: mov     eax, [esi]
0x62F874: mov     edx, [eax+190h]
0x62F87A: mov     ecx, esi
0x62F87C: call    edx
0x62F87E: test    al, al
0x62F880: jz      short loc_62F886
0x62F882: mov     [esp+48h+var_2C], esi
0x62F886: mov     ecx, edi; this
0x62F888: call    sub_4D8B90
0x62F88D: fild    dword ptr ds:0B36A50h
0x62F893: push    ebp; a7
0x62F894: push    offset sub_62E890; a6
0x62F899: push    ecx
0x62F89A: test    al, al
0x62F89C: fstp    [esp+54h+a5]; a5
0x62F89F: mov     eax, [edi]
0x62F8A1: mov     edx, [eax+174h]
0x62F8A7: mov     ecx, edi
0x62F8A9: jz      short loc_62F8D7
0x62F8AB: call    edx
0x62F8AD: fild    dword ptr ds:0B36A50h
0x62F8B3: push    eax; int
0x62F8B4: mov     eax, [edi]
0x62F8B6: mov     edx, [eax+174h]
0x62F8BC: push    ecx
0x62F8BD: mov     ecx, edi
0x62F8BF: fstp    [esp+5Ch+a3]; float
0x62F8C2: call    edx
0x62F8C4: push    eax; int
0x62F8C5: mov     ecx, edi; this
0x62F8C7: call    TESObjectREFR_GetParentCell
0x62F8CC: push    eax; int
0x62F8CD: call    sub_4D5E30
0x62F8D2: add     esp, 1Ch
0x62F8D5: jmp     short loc_62F904
0x62F8D7: call    edx
0x62F8D9: fild    dword ptr ds:0B36A50h
0x62F8DF: push    eax; a4
0x62F8E0: mov     eax, [edi]
0x62F8E2: mov     edx, [eax+174h]
0x62F8E8: push    ecx
0x62F8E9: mov     ecx, edi
0x62F8EB: fstp    [esp+5Ch+a3]; a3
0x62F8EE: call    edx
0x62F8F0: push    eax; a2
0x62F8F1: mov     ecx, edi; this
0x62F8F3: call    TESObjectREFR_GetParentCell
0x62F8F8: mov     ecx, ds:0B33A98h
0x62F8FE: push    eax; a1
0x62F8FF: call    sub_446B90
0x62F904: push    offset dword_B3B944
0x62F909: push    ebp
0x62F90A: mov     ecx, offset ActorProcessManager_ptr
0x62F90F: call    sub_67A420
0x62F914: mov     ebx, eax
0x62F916: mov     eax, ds:0B3B948h
0x62F91B: test    eax, eax
0x62F91D: mov     [esp+48h+distanceToTarget], ebx
0x62F921: jz      short loc_62F93A
0x62F923: mov     esi, [eax+4]
0x62F926: push    eax
0x62F927: call    FormHeapFree
0x62F92C: add     esp, 4
0x62F92F: test    esi, esi
0x62F931: mov     eax, esi
0x62F933: mov     ds:0B3B948h, eax
0x62F938: jnz     short loc_62F923
0x62F93A: test    ebx, ebx
0x62F93C: mov     dword ptr ds:0B3B944h, 0
0x62F946: mov     edi, ebx
0x62F948: jz      loc_62FBAB
0x62F94E: jmp     short loc_62F954
0x62F950: mov     edi, [esp+48h+var_28]
0x62F954: mov     ecx, [edi]
0x62F956: test    ecx, ecx
0x62F958: jz      loc_62FBA4
0x62F95E: mov     eax, [ecx]
0x62F960: mov     edx, [eax+190h]
0x62F966: xor     esi, esi
0x62F968: call    edx
0x62F96A: test    al, al
0x62F96C: jz      short loc_62F970
0x62F96E: mov     esi, [edi]
0x62F970: test    esi, esi
0x62F972: mov     eax, [edi+4]
0x62F975: mov     [esp+48h+var_28], eax
0x62F979: jz      loc_62FB99
0x62F97F: mov     ecx, esi
0x62F981: call    sub_5E6BA0
0x62F986: test    al, al
0x62F988: jnz     loc_62FB99
0x62F98E: mov     ecx, esi
0x62F990: call    sub_5E0F30
0x62F995: test    al, al
0x62F997: jnz     loc_62FB99
0x62F99D: mov     edx, [esi]
0x62F99F: mov     eax, [edx+334h]
0x62F9A5: push    1
0x62F9A7: mov     ecx, esi
0x62F9A9: call    eax
0x62F9AB: test    al, al
0x62F9AD: jnz     loc_62FB99
0x62F9B3: mov     ecx, esi; this
0x62F9B5: call    sub_5E6C60
0x62F9BA: test    al, al
0x62F9BC: jz      short loc_62F9C8
0x62F9BE: cmp     byte ptr [ebp+2Ch], 0
0x62F9C2: jnz     loc_62FB99
0x62F9C8: mov     ecx, esi; this
0x62F9CA: call    sub_5E6C60
0x62F9CF: test    al, al
0x62F9D1: jz      short loc_62F9E3
0x62F9D3: mov     ecx, [esp+48h+var_30]
0x62F9D7: add     ecx, 24h ; '$'
0x62F9DA: call    TESActorBaseData_AllFactionsAreEvil
0x62F9DF: test    al, al
0x62F9E1: jz      short loc_62FA4B
0x62F9E3: mov     ecx, esi; this
0x62F9E5: call    sub_5E6C60
0x62F9EA: test    al, al
0x62F9EC: jnz     loc_62FB99
0x62F9F2: mov     edi, [esp+48h+friendlyFight_]
0x62F9F6: push    64h ; 'd'; responsibility
0x62F9F8: push    0; a7
0x62F9FA: push    0; a6
0x62F9FC: push    1
0x62F9FE: push    0
0x62FA00: push    edi
0x62FA01: mov     ecx, esi
0x62FA03: call    TesObjectREF_GetDistance
0x62FA08: mov     edx, [esi]
0x62FA0A: mov     eax, [edx+284h]
0x62FA10: push    ecx
0x62FA11: fstp    [esp+5Ch+a3]
0x62FA14: push    21h ; '!'
0x62FA16: mov     ecx, esi
0x62FA18: call    eax
0x62FA1A: mov     edx, [esi]
0x62FA1C: mov     edx, [edx+224h]
0x62FA22: push    eax; a5
0x62FA23: mov     eax, [esp+58h+distanceToTarget]
0x62FA27: push    eax; distanceToTarget
0x62FA28: mov     ecx, esi
0x62FA2A: call    edx
0x62FA2C: push    eax; aggressionStat
0x62FA2D: mov     eax, [esi]
0x62FA2F: mov     edx, [eax+224h]
0x62FA35: push    edi; friendlyFight?
0x62FA36: mov     ecx, esi
0x62FA38: call    edx
0x62FA3A: push    eax; disposition
0x62FA3B: call    shouldActorFight
0x62FA40: add     esp, 20h
0x62FA43: test    eax, eax
0x62FA45: jle     loc_62FB99
0x62FA4B: lea     ecx, [esp+48h+var_20]
0x62FA4F: call    sub_68A9F0
0x62FA54: mov     ecx, [esi+58h]
0x62FA57: mov     eax, [ecx]
0x62FA59: mov     edx, [eax+8]
0x62FA5C: mov     [esp+48h+var_4], 0
0x62FA64: xor     bl, bl
0x62FA66: call    edx
0x62FA68: test    eax, eax
0x62FA6A: jz      short loc_62FA81
0x62FA6C: mov     ecx, ds:0B333C4h
0x62FA72: push    esi
0x62FA73: lea     eax, [esp+4Ch+var_20]
0x62FA77: push    eax
0x62FA78: call    sub_65D880
0x62FA7D: test    al, al
0x62FA7F: jz      short loc_62FA83
0x62FA81: mov     bl, 1
0x62FA83: cmp     dword ptr [esi+58h], 0
0x62FA87: jz      loc_62FB10
0x62FA8D: test    bl, bl
0x62FA8F: jz      short loc_62FB10
0x62FA91: mov     edx, [esi]
0x62FA93: mov     eax, [edx+310h]
0x62FA99: push    0
0x62FA9B: push    1
0x62FA9D: push    0
0x62FA9F: push    ebp
0x62FAA0: mov     ecx, esi
0x62FAA2: call    eax
0x62FAA4: mov     ecx, esi; this
0x62FAA6: call    Actor__GetProcessLevel
0x62FAAB: test    eax, eax
0x62FAAD: jz      loc_62FB84
0x62FAB3: mov     ebp, [esi+58h]
0x62FAB6: mov     edi, [ebp+0]
0x62FAB9: mov     ecx, offset TimeGlobals
0x62FABE: add     edi, 1Ch
0x62FAC1: call    TimeGlobals_GetGameHour
0x62FAC6: fsub    qword ptr ds:0A563D0h
0x62FACC: mov     edx, [edi]
0x62FACE: push    ecx
0x62FACF: fstp    [esp+4Ch+var_34]
0x62FAD3: mov     ecx, ebp
0x62FAD5: fld     [esp+4Ch+var_34]
0x62FAD9: fstp    [esp+4Ch+var_4C]
0x62FADC: call    edx
0x62FADE: mov     ecx, esi; this
0x62FAE0: call    Actor__GetProcessLevel
0x62FAE5: push    eax
0x62FAE6: push    esi
0x62FAE7: mov     ecx, offset ActorProcessManager_ptr
0x62FAEC: call    sub_674550
0x62FAF1: push    0
0x62FAF3: push    0
0x62FAF5: push    0
0x62FAF7: mov     ecx, esi; this
0x62FAF9: call    Actor__GetProcessLevel
0x62FAFE: push    eax
0x62FAFF: push    esi
0x62FB00: mov     ecx, offset ActorProcessManager_ptr
0x62FB05: call    sub_673A90
0x62FB0A: mov     ebp, [esp+48h+a7]
0x62FB0E: jmp     short loc_62FB84
0x62FB10: mov     esi, [esp+48h+arg_0]
0x62FB14: push    1; a2
0x62FB16: mov     ecx, esi; this
0x62FB18: call    Actor_GetActorBaseForm
0x62FB1D: cmp     dword ptr [eax+40h], 0
0x62FB21: jnz     short loc_62FB32
0x62FB23: cmp     dword ptr [eax+3Ch], 0
0x62FB27: jnz     short loc_62FB32
0x62FB29: push    0; a2
0x62FB2B: mov     ecx, esi; this
0x62FB2D: call    Actor_GetActorBaseForm
0x62FB32: push    0; int
0x62FB34: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x62FB39: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x62FB3E: push    0; int
0x62FB40: push    eax; void *
0x62FB41: call    OblivionDynamicCast
0x62FB46: add     esp, 14h
0x62FB49: mov     ecx, ebp
0x62FB4B: mov     esi, eax
0x62FB4D: call    sub_606140
0x62FB52: fstp    [esp+48h+var_34]
0x62FB56: mov     ecx, esi
0x62FB58: call    sub_5234A0
0x62FB5D: fld     [esp+48h+var_34]
0x62FB61: mov     ecx, [ebp+0Ch]
0x62FB64: fld     st
0x62FB66: mov     eax, [ecx]
0x62FB68: fmulp   st(2), st
0x62FB6A: mov     edx, [eax+254h]
0x62FB70: push    ecx
0x62FB71: faddp   st(1), st
0x62FB73: fstp    [esp+4Ch+var_34]
0x62FB77: fld     [esp+4Ch+var_34]
0x62FB7B: fstp    [esp+4Ch+var_4C]
0x62FB7E: call    edx
0x62FB80: mov     byte ptr [ebp+11h], 1
0x62FB84: lea     ecx, [esp+48h+var_20]
0x62FB88: mov     [esp+48h+var_4], 0FFFFFFFFh
0x62FB90: call    sub_68AA10
0x62FB95: mov     ebx, [esp+48h+distanceToTarget]
0x62FB99: cmp     [esp+48h+var_28], 0
0x62FB9E: jnz     loc_62F950
0x62FBA4: mov     ecx, ebx
0x62FBA6: call    BSSimpleList_Clear
0x62FBAB: push    ebx
0x62FBAC: call    FormHeapFree
0x62FBB1: add     esp, 4
0x62FBB4: mov     ecx, [esp+48h+var_C]
0x62FBB8: mov     large fs:0, ecx
0x62FBBF: pop     ecx
0x62FBC0: pop     edi
0x62FBC1: pop     esi
0x62FBC2: pop     ebp
0x62FBC3: pop     ebx
0x62FBC4: add     esp, 34h
0x62FBC7: retn    0Ch
