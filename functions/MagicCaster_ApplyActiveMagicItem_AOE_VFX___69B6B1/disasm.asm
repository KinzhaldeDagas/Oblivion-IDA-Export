0x69B6B1: cmp     [esp+arg_7C], 0
0x69B6B9: mov     ecx, [eax+8]
0x69B6BC: mov     ebp, [eax]
0x69B6BE: mov     ebx, [eax+4]
0x69B6C1: mov     [esp+arg_60], ecx
0x69B6C5: jz      MagicCaster_ApplyActiveMagicItem___TargetVFX?
0x69B6CB: fld1
0x69B6CD: mov     eax, [esp+arg_7C]
0x69B6D4: sub     esp, 8
0x69B6D7: fst     [esp+8+var_4]; float
0x69B6DB: fstp    [esp+8+var_8]; float
0x69B6DE: lea     edx, [esp+8+arg_44]
0x69B6E2: push    edx; float
0x69B6E3: mov     edx, [esi]
0x69B6E5: push    eax; int
0x69B6E6: mov     eax, [edx+30h]
0x69B6E9: mov     ecx, esi
0x69B6EB: call    eax
0x69B6ED: push    eax; int
0x69B6EE: mov     ecx, edi; this
0x69B6F0: call    TESObjectREFR_GetParentCell
0x69B6F5: mov     ecx, [esp+14h+arg_60]
0x69B6F9: push    eax; int
0x69B6FA: sub     esp, 0Ch
0x69B6FD: mov     eax, esp
0x69B6FF: mov     [eax], ebp
0x69B701: mov     [eax+4], ebx
0x69B704: mov     [eax+8], ecx
0x69B707: mov     ecx, esi
0x69B709: call    MagicCaster_ExplosionCalcs????
0x69B70E: cmp     [esp+arg_74], 0
0x69B713: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B719: mov     ecx, [esp+arg_74]
0x69B71D: add     ecx, 18h
0x69B720: call    sub_449190
0x69B725: test    eax, eax
0x69B727: jz      MagicCaster_ApplyActiveMagicItem___AfterVFX
0x69B72D: fld     dword ptr [edi+20h]
0x69B730: fchs
0x69B732: fstp    [esp+arg_78]
0x69B736: fld     [esp+arg_78]
0x69B73A: fstp    dword ptr [esp+arg_3C]
0x69B73E: fld     dword ptr [esp+arg_3C]
0x69B742: call    __CIcos
0x69B747: fstp    dword ptr [esp+arg_3C]
0x69B74B: fld     dword ptr [esp+arg_3C]
0x69B74F: fstp    dword ptr [esp+arg_3C]
0x69B753: fld     [esp+arg_78]
0x69B757: fstp    [esp+arg_78]
0x69B75B: fld     [esp+arg_78]
0x69B75F: call    __CIsin
0x69B764: fstp    [esp+arg_78]
0x69B768: fld     [esp+arg_78]
0x69B76C: mov     ecx, edi; this
0x69B76E: fchs
0x69B770: fstp    [esp+arg_4C]
0x69B774: fld     dword ptr [esp+arg_3C]
0x69B778: fstp    [esp+arg_50]
0x69B77C: fldz
0x69B77E: fstp    [esp+arg_54]
0x69B782: call    TESObjectREFR_GetParentCell
0x69B787: mov     edx, [esp+arg_1C]
0x69B78B: push    edx; TESObjectREFR *
0x69B78C: call    sub_4C9BE0
0x69B791: add     esp, 4
0x69B794: push    3
0x69B796: push    eax
0x69B797: mov     ecx, edi; this
0x69B799: call    TESObjectREFR_GetParentCell
0x69B79E: mov     ecx, eax
0x69B7A0: call    sub_441800
0x69B7A5: push    20h ; ' '; Size
0x69B7A7: mov     [esp+4+arg_78], eax
0x69B7AE: call    FormHeapAlloc
0x69B7B3: add     esp, 4
0x69B7B6: mov     dword ptr [esp+arg_3C], eax
0x69B7BA: test    eax, eax
0x69B7BC: mov     [esp+arg_6C], 0
0x69B7C4: jz      short loc_69B82E
0x69B7C6: fld1
0x69B7C8: mov     ecx, [esp+arg_60]
0x69B7CC: mov     edx, [esp+arg_4C]
0x69B7D0: push    0; float
0x69B7D2: sub     esp, 10h
0x69B7D5: fstp    [esp+14h+var_8]; float
0x69B7D9: mov     eax, esp
0x69B7DB: mov     [eax], ebp
0x69B7DD: mov     [eax+4], ebx
0x69B7E0: mov     [eax+8], ecx
0x69B7E3: mov     ecx, [esp+14h+arg_50]
0x69B7E7: sub     esp, 0Ch
0x69B7EA: mov     eax, esp
0x69B7EC: mov     [eax], edx
0x69B7EE: mov     edx, [esp+20h+arg_54]
0x69B7F2: mov     [eax+4], ecx
0x69B7F5: mov     ecx, [esp+20h+arg_74]
0x69B7FC: mov     [eax+8], edx
0x69B7FF: mov     eax, [ecx+18h]
0x69B802: mov     edx, [eax+14h]
0x69B805: add     ecx, 18h
0x69B808: call    edx
0x69B80A: fld1
0x69B80C: push    eax; float
0x69B80D: mov     eax, [esp+24h+arg_78]
0x69B814: push    eax; int
0x69B815: push    ecx
0x69B816: mov     ecx, edi; this
0x69B818: fstp    [esp+2Ch+var_2C]; float
0x69B81B: call    TESObjectREFR_GetParentCell
0x69B820: mov     ecx, dword ptr [esp+2Ch+arg_3C]
0x69B824: push    eax; int
0x69B825: call    sub_5713F0
0x69B82A: mov     edi, eax
0x69B82C: jmp     short loc_69B830
0x69B82E: xor     edi, edi
0x69B830: push    offset aSpecialidle_ar; "SpecialIdle_AreaEffect"
0x69B835: mov     ecx, edi
0x69B837: mov     [esp+4+arg_6C], 0FFFFFFFFh
0x69B83F: call    sub_570C00
0x69B844: cmp     dword ptr [edi+18h], 0
0x69B848: jz      loc_69B8F2
0x69B84E: mov     ecx, [esp+arg_7C]
0x69B855: call    EffectItem_GetArea
0x69B85A: mov     [esp+arg_7C], eax
0x69B861: fild    [esp+arg_7C]
0x69B868: mov     ecx, offset flt_B37ED0
0x69B86D: fstp    [esp+arg_3C]
0x69B871: call    GameSetting_GetSafeFloatPointer
0x69B876: fld     dword ptr [eax]
0x69B878: mov     ecx, offset flt_B37ED8
0x69B87D: fmul    [esp+arg_3C]
0x69B881: fstp    [esp+arg_7C]
0x69B888: call    GameSetting_GetSafeFloatPointer
0x69B88D: fld     [esp+arg_7C]
0x69B894: fld     dword ptr [eax]
0x69B896: fcompp
0x69B898: fnstsw  ax
0x69B89A: test    ah, 5
0x69B89D: jp      short loc_69B8A6
0x69B89F: mov     ecx, offset flt_B37ED8
0x69B8A4: jmp     short loc_69B8C7
0x69B8A6: mov     ecx, offset flt_B37EE0
0x69B8AB: call    GameSetting_GetSafeFloatPointer
0x69B8B0: fld     [esp+arg_7C]
0x69B8B7: fld     dword ptr [eax]
0x69B8B9: fcompp
0x69B8BB: fnstsw  ax
0x69B8BD: test    ah, 41h
0x69B8C0: jnz     short loc_69B8D5
0x69B8C2: mov     ecx, offset flt_B37EE0
0x69B8C7: call    GameSetting_GetSafeFloatPointer
0x69B8CC: fld     dword ptr [eax]
0x69B8CE: fstp    [esp+arg_7C]
0x69B8D5: fld     [esp+arg_7C]
0x69B8DC: mov     ecx, [edi+18h]
0x69B8DF: fabs
0x69B8E1: fstp    [esp+arg_7C]
0x69B8E8: fld     [esp+arg_7C]
0x69B8EF: fstp    dword ptr [ecx+60h]
0x69B8F2: push    edi
0x69B8F3: mov     ecx, offset ActorProcessManager_ptr
0x69B8F8: call    sub_678D30
0x69B8FD: jmp     short MagicCaster_ApplyActiveMagicItem___AfterVFX
