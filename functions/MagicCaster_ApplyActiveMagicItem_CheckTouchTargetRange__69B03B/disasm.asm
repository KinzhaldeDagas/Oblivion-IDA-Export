0x69B03B: mov     edx, [esi]
0x69B03D: mov     eax, [edx+38h]
0x69B040: mov     ecx, esi
0x69B042: call    eax
0x69B044: mov     ebx, eax
0x69B046: test    ebx, ebx
0x69B048: mov     [esp+arg_18], ebx
0x69B04C: jz      MagicCaster_ApplyActiveMagicItem___CheckCasterNiNode??
0x69B052: cmp     [esp+arg_78], 0
0x69B057: jnz     MagicCaster_ApplyActiveMagicItem___CheckCasterNiNode??
0x69B05D: mov     edx, [ebx]
0x69B05F: mov     eax, [edx+4]
0x69B062: mov     ecx, ebx
0x69B064: call    eax
0x69B066: test    eax, eax
0x69B068: jz      MagicCaster_ApplyActiveMagicItem___CheckCasterNiNode??
0x69B06E: mov     ecx, offset fMagicDefaultTouchDistance
0x69B073: call    GameSetting_GetSafeFloatPointer
0x69B078: fld     dword ptr [eax]
0x69B07A: mov     edx, [edi]
0x69B07C: fstp    [esp+arg_24]
0x69B080: mov     eax, [edx+190h]
0x69B086: mov     ecx, edi
0x69B088: call    eax
0x69B08A: test    al, al
0x69B08C: jz      short loc_69B0D9
0x69B08E: cmp     edi, ds:0B333C4h
0x69B094: jz      short loc_69B0C9
0x69B096: mov     edx, [ebx]
0x69B098: mov     eax, [edx+4]
0x69B09B: mov     ecx, ebx
0x69B09D: call    eax
0x69B09F: mov     edx, [eax]
0x69B0A1: mov     ecx, eax
0x69B0A3: mov     eax, [edx+190h]
0x69B0A9: call    eax
0x69B0AB: test    al, al
0x69B0AD: jz      short loc_69B0C9
0x69B0AF: mov     edx, [ebx]
0x69B0B1: mov     eax, [edx+4]
0x69B0B4: mov     ecx, ebx
0x69B0B6: call    eax
0x69B0B8: mov     edx, [eax]
0x69B0BA: mov     ecx, eax
0x69B0BC: mov     eax, [edx+18Ch]
0x69B0C2: call    eax
0x69B0C4: cmp     eax, 9
0x69B0C7: jz      short loc_69B0D9
0x69B0C9: mov     edx, [edi]
0x69B0CB: mov     eax, [edx+26Ch]
0x69B0D1: mov     ecx, edi
0x69B0D3: call    eax
0x69B0D5: fstp    [esp+arg_24]
0x69B0D9: mov     edx, [edi]
0x69B0DB: mov     eax, [edx+0ECh]
0x69B0E1: mov     ecx, edi
0x69B0E3: call    eax
0x69B0E5: sub     esp, 8
0x69B0E8: fstp    [esp+8+var_4]; float
0x69B0EC: fld1
0x69B0EE: fstp    [esp+8+var_8]; float
0x69B0F1: call    Min_Float
0x69B0F6: fmul    [esp+8+arg_24]
0x69B0FA: mov     edx, [ebx]
0x69B0FC: mov     eax, [edx+4]
0x69B0FF: add     esp, 8
0x69B102: push    0; a4
0x69B104: fstp    [esp+4+arg_24]
0x69B108: mov     ecx, ebx
0x69B10A: call    eax
0x69B10C: push    eax; a3
0x69B10D: push    edi; a2
0x69B10E: call    TESObjectREFR_GetDistanceBetween?
0x69B113: fld     [esp+0Ch+arg_24]
0x69B117: fcompp
0x69B119: add     esp, 0Ch
0x69B11C: fnstsw  ax
0x69B11E: test    ah, 5
0x69B121: jp      short MagicCaster_ApplyActiveMagicItem___CheckCasterNiNode??
0x69B123: xor     ebx, ebx
0x69B125: mov     [esp+arg_18], ebx
