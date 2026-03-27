0x6753F0: sub     esp, 24h
0x6753F3: push    ebx
0x6753F4: push    ebp
0x6753F5: push    esi
0x6753F6: push    edi
0x6753F7: mov     edi, ecx
0x6753F9: push    8; Size
0x6753FB: mov     [esp+38h+var_8], edi
0x6753FF: call    FormHeapAlloc
0x675404: xor     ebp, ebp
0x675406: add     esp, 4
0x675409: cmp     eax, ebp
0x67540B: jz      short loc_67541A
0x67540D: mov     ebx, eax
0x67540F: mov     [eax], ebp
0x675411: mov     [eax+4], ebp
0x675414: mov     [esp+34h+var_20], ebx
0x675418: jmp     short loc_675420
0x67541A: mov     [esp+34h+var_20], ebp
0x67541E: mov     ebx, ebp
0x675420: mov     esi, [esp+34h+arg_0]
0x675424: mov     ecx, esi; this
0x675426: call    TESObjectREFR_GetParentCell
0x67542B: mov     ecx, esi; this
0x67542D: mov     [esp+34h+var_14], eax
0x675431: call    TESObjectREFR_GetWorldSpace
0x675436: cmp     esi, ebp
0x675438: mov     [esp+34h+var_4], eax
0x67543C: jz      loc_67572B
0x675442: mov     eax, ds:0B333C4h
0x675447: mov     ecx, [eax+58h]
0x67544A: mov     edx, [ecx]
0x67544C: mov     eax, [edx+444h]
0x675452: call    eax
0x675454: mov     ecx, ds:0B333C4h
0x67545A: mov     ecx, [ecx+58h]
0x67545D: mov     edx, [ecx]
0x67545F: mov     esi, 1
0x675464: sub     esi, eax
0x675466: mov     eax, [edx+448h]
0x67546C: push    esi
0x67546D: call    eax
0x67546F: xor     esi, esi
0x675471: mov     [esp+34h+var_18], esi
0x675475: jmp     short loc_67547B
0x675477: mov     edi, [esp+34h+var_8]
0x67547B: cmp     esi, ebp
0x67547D: jnz     short loc_675492
0x67547F: push    ebp; a2
0x675480: mov     ecx, edi; this
0x675482: call    sub_673A50
0x675487: mov     ecx, eax; this
0x675489: call    sub_7616D0
0x67548E: mov     edi, eax
0x675490: jmp     short loc_6754B8
0x675492: cmp     esi, 1
0x675495: jnz     short loc_67549A
0x675497: push    esi
0x675498: jmp     short loc_6754A4
0x67549A: cmp     esi, 2
0x67549D: jnz     short loc_6754A2
0x67549F: push    esi
0x6754A0: jmp     short loc_6754A4
0x6754A2: push    3; a2
0x6754A4: mov     ecx, edi; this
0x6754A6: call    sub_673A50
0x6754AB: mov     ecx, eax; this
0x6754AD: call    sub_7616D0
0x6754B2: mov     [esp+34h+var_24], eax
0x6754B6: mov     edi, eax
0x6754B8: cmp     edi, ebp
0x6754BA: jz      loc_67571B
0x6754C0: jmp     short loc_6754C6
0x6754C2: mov     edi, [esp+34h+var_24]
0x6754C6: mov     ecx, [edi]
0x6754C8: cmp     ecx, ebp
0x6754CA: jz      loc_67571B
0x6754D0: mov     edx, [ecx]
0x6754D2: mov     eax, [edx+190h]
0x6754D8: xor     esi, esi
0x6754DA: call    eax
0x6754DC: test    al, al
0x6754DE: jz      short loc_6754E2
0x6754E0: mov     esi, [edi]
0x6754E2: cmp     esi, ebp
0x6754E4: mov     ecx, [edi+4]
0x6754E7: mov     [esp+34h+var_24], ecx
0x6754EB: mov     [esp+34h+var_C], ebp
0x6754EF: jz      loc_67570D
0x6754F5: mov     ecx, esi; this
0x6754F7: call    TESObjectREFR_GetParentCell
0x6754FC: mov     ebp, eax
0x6754FE: mov     ecx, esi; this
0x675500: mov     [esp+34h+var_10], ebp
0x675504: call    TESObjectREFR_GetWorldSpace
0x675509: mov     edx, [esi]
0x67550B: mov     edi, eax
0x67550D: mov     eax, [edx+334h]
0x675513: push    1
0x675515: mov     ecx, esi
0x675517: call    eax
0x675519: test    al, al
0x67551B: jnz     loc_6756DC
0x675521: mov     ecx, esi; this
0x675523: call    sub_5E6C60
0x675528: test    al, al
0x67552A: jz      loc_6756DC
0x675530: test    ebp, ebp
0x675532: jz      short loc_675545
0x675534: mov     ecx, ebp; this
0x675536: call    TESObjectCELL_IsInterior
0x67553B: test    al, al
0x67553D: jz      short loc_675545
0x67553F: cmp     ebp, [esp+34h+var_14]
0x675543: jz      short loc_675577
0x675545: cmp     [esp+34h+var_4], edi
0x675549: jnz     loc_6755FF
0x67554F: test    ebp, ebp
0x675551: jz      short loc_67555E
0x675553: mov     ecx, ebp; this
0x675555: call    TESObjectCELL_IsInterior
0x67555A: test    al, al
0x67555C: jz      short loc_675577
0x67555E: mov     ecx, [esp+34h+var_14]; this
0x675562: test    ecx, ecx
0x675564: jz      loc_6755FF
0x67556A: call    TESObjectCELL_IsInterior
0x67556F: test    al, al
0x675571: jnz     loc_6755FF
0x675577: mov     edi, [esp+34h+arg_0]
0x67557B: push    0
0x67557D: push    edi
0x67557E: mov     ecx, esi
0x675580: call    TesObjectREF_GetDistance
0x675585: fstp    [esp+34h+var_1C]
0x675589: fld     [esp+34h+var_1C]
0x67558D: fild    dword ptr ds:0B36A50h
0x675593: fcompp
0x675595: fnstsw  ax
0x675597: test    ah, 1
0x67559A: jnz     loc_6756DC
0x6755A0: mov     ecx, [esi+58h]
0x6755A3: mov     edx, [ecx]
0x6755A5: mov     eax, [edx+228h]
0x6755AB: push    1
0x6755AD: push    0
0x6755AF: push    0
0x6755B1: push    0
0x6755B3: push    0
0x6755B5: push    0
0x6755B7: push    0
0x6755B9: push    0
0x6755BB: push    edi
0x6755BC: push    esi
0x6755BD: call    eax
0x6755BF: cmp     dword ptr [ebx], 0
0x6755C2: jz      short loc_6755F8
0x6755C4: push    8; Size
0x6755C6: call    FormHeapAlloc
0x6755CB: add     esp, 4
0x6755CE: test    eax, eax
0x6755D0: jz      short loc_6755ED
0x6755D2: mov     ecx, [ebx]
0x6755D4: mov     [eax], ecx
0x6755D6: mov     dword ptr [eax+4], 0
0x6755DD: mov     edx, [ebx+4]
0x6755E0: mov     [eax+4], edx
0x6755E3: mov     [ebx+4], eax
0x6755E6: mov     [ebx], esi
0x6755E8: jmp     loc_6756DC
0x6755ED: mov     edx, [ebx+4]
0x6755F0: xor     eax, eax
0x6755F2: mov     [eax+4], edx
0x6755F5: mov     [ebx+4], eax
0x6755F8: mov     [ebx], esi
0x6755FA: jmp     loc_6756DC
0x6755FF: mov     ebx, [esp+34h+arg_4]
0x675603: test    ebx, ebx
0x675605: jz      loc_6756D8
0x67560B: jmp     short loc_675610
0x67560D: align 10h
0x675610: mov     ecx, [ebx]; this
0x675612: test    ecx, ecx
0x675614: jz      loc_6756D8
0x67561A: call    GetTeleportExtraData
0x67561F: test    eax, eax
0x675621: jz      short loc_67567B
0x675623: mov     ecx, eax
0x675625: call    sub_42B410
0x67562A: mov     edi, eax
0x67562C: mov     ecx, edi; this
0x67562E: call    TESObjectREFR_GetParentCell
0x675633: cmp     eax, ebp
0x675635: jz      short loc_67565A
0x675637: mov     ecx, edi; this
0x675639: call    TESObjectREFR_GetParentCell
0x67563E: test    eax, eax
0x675640: jnz     short loc_67567B
0x675642: mov     ecx, edi; this
0x675644: call    TESObjectREFR_GetWorldSpace
0x675649: mov     ecx, esi; this
0x67564B: mov     ebp, eax
0x67564D: call    TESObjectREFR_GetWorldSpace
0x675652: cmp     ebp, eax
0x675654: mov     ebp, [esp+34h+var_10]
0x675658: jnz     short loc_67567B
0x67565A: push    0
0x67565C: push    edi
0x67565D: mov     ecx, esi
0x67565F: call    TesObjectREF_GetDistance
0x675664: fstp    [esp+34h+var_1C]
0x675668: fld     [esp+34h+var_1C]
0x67566C: fild    dword ptr ds:0B36A50h
0x675672: fcompp
0x675674: fnstsw  ax
0x675676: test    ah, 1
0x675679: jz      short loc_675684
0x67567B: mov     ebx, [ebx+4]
0x67567E: test    ebx, ebx
0x675680: jnz     short loc_675610
0x675682: jmp     short loc_6756D8
0x675684: mov     ecx, [esi+58h]
0x675687: mov     edx, [esp+34h+arg_0]
0x67568B: mov     eax, [ecx]
0x67568D: mov     eax, [eax+228h]
0x675693: push    1
0x675695: push    0
0x675697: push    0
0x675699: push    0
0x67569B: push    0
0x67569D: push    0
0x67569F: push    0
0x6756A1: push    0
0x6756A3: push    edx
0x6756A4: push    esi
0x6756A5: call    eax
0x6756A7: mov     edi, [esp+34h+var_20]
0x6756AB: cmp     dword ptr [edi], 0
0x6756AE: jz      short loc_6756D6
0x6756B0: push    8; Size
0x6756B2: call    FormHeapAlloc
0x6756B7: add     esp, 4
0x6756BA: test    eax, eax
0x6756BC: jz      short loc_6756CB
0x6756BE: mov     ecx, [edi]
0x6756C0: mov     [eax], ecx
0x6756C2: mov     dword ptr [eax+4], 0
0x6756C9: jmp     short loc_6756CD
0x6756CB: xor     eax, eax
0x6756CD: mov     edx, [edi+4]
0x6756D0: mov     [eax+4], edx
0x6756D3: mov     [edi+4], eax
0x6756D6: mov     [edi], esi
0x6756D8: mov     ebx, [esp+34h+var_20]
0x6756DC: mov     edi, [esp+34h+var_C]
0x6756E0: test    edi, edi
0x6756E2: jz      short loc_67570B
0x6756E4: mov     ecx, [edi]
0x6756E6: test    ecx, ecx
0x6756E8: jz      short loc_67570B
0x6756EA: mov     eax, [ecx]
0x6756EC: mov     edx, [eax+190h]
0x6756F2: xor     esi, esi
0x6756F4: call    edx
0x6756F6: test    al, al
0x6756F8: jz      short loc_6756FC
0x6756FA: mov     esi, [edi]
0x6756FC: test    esi, esi
0x6756FE: mov     eax, [edi+4]
0x675701: mov     [esp+34h+var_C], eax
0x675705: jnz     loc_6754F5
0x67570B: xor     ebp, ebp
0x67570D: cmp     [esp+34h+var_24], ebp
0x675711: mov     esi, [esp+34h+var_18]
0x675715: jnz     loc_6754C2
0x67571B: add     esi, 1
0x67571E: cmp     esi, 4
0x675721: mov     [esp+34h+var_18], esi
0x675725: jl      loc_675477
0x67572B: pop     edi
0x67572C: pop     esi
0x67572D: pop     ebp
0x67572E: mov     eax, ebx
0x675730: pop     ebx
0x675731: add     esp, 24h
0x675734: retn    8
