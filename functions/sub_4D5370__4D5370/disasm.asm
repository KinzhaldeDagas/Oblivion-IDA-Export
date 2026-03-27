0x4D5370: sub     esp, 34h
0x4D5373: test    byte ptr ds:0B35E20h, 1
0x4D537A: jnz     short loc_4D539B
0x4D537C: fld     dword ptr ds:0A32048h
0x4D5382: or      dword ptr ds:0B35E20h, 1
0x4D5389: fst     dword ptr ds:0B35E14h
0x4D538F: fst     dword ptr ds:0B35E18h
0x4D5395: fstp    dword ptr ds:0B35E1Ch
0x4D539B: mov     eax, ds:0B333C4h
0x4D53A0: push    ebp
0x4D53A1: xor     ebp, ebp
0x4D53A3: cmp     eax, ebp
0x4D53A5: jz      loc_4D55BB
0x4D53AB: mov     ecx, [eax+2Ch]
0x4D53AE: mov     [esp+38h+var_1C], ecx
0x4D53B2: mov     edx, [eax+30h]
0x4D53B5: mov     [esp+38h+var_18], edx
0x4D53B9: mov     eax, [eax+34h]
0x4D53BC: lea     ecx, [esp+38h+var_1C]
0x4D53C0: push    ecx
0x4D53C1: mov     [esp+3Ch+var_14], eax
0x4D53C5: call    sub_4122F0
0x4D53CA: add     esp, 4
0x4D53CD: push    offset flt_B35E14
0x4D53D2: lea     ecx, [esp+3Ch+var_1C]
0x4D53D6: call    sub_8AA390
0x4D53DB: test    al, al
0x4D53DD: jz      loc_4D55BB
0x4D53E3: mov     ecx, [esp+38h+var_14]
0x4D53E7: mov     edx, [esp+38h+var_1C]
0x4D53EB: mov     eax, [esp+38h+var_18]
0x4D53EF: mov     ds:0B35E1Ch, ecx
0x4D53F5: mov     ecx, ds:0B333C4h; this
0x4D53FB: mov     ds:0B35E14h, edx
0x4D5401: mov     ds:0B35E18h, eax
0x4D5406: call    TESObjectREFR_GetParentCell
0x4D540B: cmp     eax, ebp
0x4D540D: jz      loc_4D55BB
0x4D5413: test    byte ptr [eax+24h], 1
0x4D5417: jnz     loc_4D55C0
0x4D541D: xor     edx, edx
0x4D541F: mov     [esp+38h+var_10], edx
0x4D5423: mov     [esp+38h+var_10], eax
0x4D5427: mov     eax, [eax+50h]
0x4D542A: cmp     eax, ebp
0x4D542C: push    esi
0x4D542D: mov     [esp+3Ch+var_C], edx
0x4D5431: mov     [esp+3Ch+var_8], edx
0x4D5435: mov     [esp+3Ch+var_4], edx
0x4D5439: mov     [esp+3Ch+var_30], eax
0x4D543D: jz      loc_4D559A
0x4D5443: push    edi
0x4D5444: fld     [esp+40h+var_1C]
0x4D5448: fistp   [esp+40h+var_34]
0x4D544C: mov     esi, [esp+40h+var_34]
0x4D5450: sar     esi, 0Ch
0x4D5453: fld     [esp+40h+var_18]
0x4D5457: fistp   [esp+40h+var_34]
0x4D545B: mov     edi, [esp+40h+var_34]
0x4D545F: mov     edx, esi
0x4D5461: shl     edx, 0Ch
0x4D5464: mov     [esp+40h+var_34], edx
0x4D5468: fild    [esp+40h+var_34]
0x4D546C: sar     edi, 0Ch
0x4D546F: mov     eax, edi
0x4D5471: fstp    [esp+40h+var_34]
0x4D5475: shl     eax, 0Ch
0x4D5478: fld     [esp+40h+var_34]
0x4D547C: mov     [esp+40h+var_34], eax
0x4D5480: fst     [esp+40h+var_2C]
0x4D5484: mov     ecx, offset fSeenDataUpdateRadius
0x4D5489: fild    [esp+40h+var_34]
0x4D548D: fstp    [esp+40h+var_34]
0x4D5491: fld     [esp+40h+var_34]
0x4D5495: mov     [esp+40h+var_34], ebp
0x4D5499: fst     [esp+40h+var_28]
0x4D549D: fld     qword ptr ds:0A37650h
0x4D54A3: fadd    st(2), st
0x4D54A5: fxch    st(2)
0x4D54A7: fstp    [esp+40h+var_24]
0x4D54AB: faddp   st(1), st
0x4D54AD: fstp    [esp+40h+var_20]
0x4D54B1: call    GameSetting_GetSafeFloatPointer
0x4D54B6: fld     [esp+40h+var_1C]
0x4D54BA: fsub    dword ptr [eax]
0x4D54BC: fld     [esp+40h+var_2C]
0x4D54C0: fcompp
0x4D54C2: fnstsw  ax
0x4D54C4: test    ah, 1
0x4D54C7: jnz     short loc_4D54CE
0x4D54C9: or      ebp, 0FFFFFFFFh
0x4D54CC: jmp     short loc_4D54F0
0x4D54CE: mov     ecx, offset fSeenDataUpdateRadius
0x4D54D3: call    GameSetting_GetSafeFloatPointer
0x4D54D8: fld     dword ptr [eax]
0x4D54DA: fadd    [esp+40h+var_1C]
0x4D54DE: fld     [esp+40h+var_24]
0x4D54E2: fcompp
0x4D54E4: fnstsw  ax
0x4D54E6: test    ah, 41h
0x4D54E9: jp      short loc_4D54F0
0x4D54EB: mov     ebp, 1
0x4D54F0: mov     ecx, offset fSeenDataUpdateRadius
0x4D54F5: call    GameSetting_GetSafeFloatPointer
0x4D54FA: fld     [esp+40h+var_18]
0x4D54FE: fsub    dword ptr [eax]
0x4D5500: fld     [esp+40h+var_28]
0x4D5504: fcompp
0x4D5506: fnstsw  ax
0x4D5508: test    ah, 1
0x4D550B: jnz     short loc_4D5517
0x4D550D: mov     [esp+40h+var_34], 0FFFFFFFFh
0x4D5515: jmp     short loc_4D553C
0x4D5517: mov     ecx, offset fSeenDataUpdateRadius
0x4D551C: call    GameSetting_GetSafeFloatPointer
0x4D5521: fld     dword ptr [eax]
0x4D5523: fadd    [esp+40h+var_18]
0x4D5527: fld     [esp+40h+var_20]
0x4D552B: fcompp
0x4D552D: fnstsw  ax
0x4D552F: test    ah, 41h
0x4D5532: jp      short loc_4D553C
0x4D5534: mov     [esp+40h+var_34], 1
0x4D553C: test    ebp, ebp
0x4D553E: push    ebx
0x4D553F: mov     ebx, 1
0x4D5544: jz      short loc_4D555D
0x4D5546: push    edi; signed int
0x4D5547: lea     ecx, [esi+ebp]
0x4D554A: push    ecx; signed int
0x4D554B: mov     ecx, [esp+4Ch+var_30]; this
0x4D554F: call    TESWorldSpace__GetCellAtCellCoord
0x4D5554: mov     [esp+44h+var_C], eax
0x4D5558: mov     ebx, 2
0x4D555D: mov     eax, [esp+44h+var_34]
0x4D5561: test    eax, eax
0x4D5563: jz      short loc_4D557D
0x4D5565: mov     ecx, [esp+44h+var_30]; this
0x4D5569: add     eax, edi
0x4D556B: push    eax; signed int
0x4D556C: push    esi; signed int
0x4D556D: call    TESWorldSpace__GetCellAtCellCoord
0x4D5572: mov     [esp+ebx*4+44h+var_10], eax
0x4D5576: mov     eax, [esp+44h+var_34]
0x4D557A: add     ebx, 1
0x4D557D: test    ebp, ebp
0x4D557F: jz      short loc_4D5598
0x4D5581: test    eax, eax
0x4D5583: jz      short loc_4D5598
0x4D5585: mov     ecx, [esp+44h+var_30]; this
0x4D5589: add     eax, edi
0x4D558B: push    eax; signed int
0x4D558C: add     ebp, esi
0x4D558E: push    ebp; signed int
0x4D558F: call    TESWorldSpace__GetCellAtCellCoord
0x4D5594: mov     [esp+ebx*4+44h+var_10], eax
0x4D5598: pop     ebx
0x4D5599: pop     edi
0x4D559A: xor     esi, esi
0x4D559C: lea     esp, [esp+0]
0x4D55A0: mov     ecx, [esp+esi*4+3Ch+var_10]
0x4D55A4: test    ecx, ecx
0x4D55A6: jz      short loc_4D55BA
0x4D55A8: lea     edx, [esp+3Ch+var_1C]
0x4D55AC: push    edx
0x4D55AD: call    sub_4D2720
0x4D55B2: add     esi, 1
0x4D55B5: cmp     esi, 4
0x4D55B8: jl      short loc_4D55A0
0x4D55BA: pop     esi
0x4D55BB: pop     ebp
0x4D55BC: add     esp, 34h
0x4D55BF: retn
0x4D55C0: lea     ecx, [esp+38h+var_1C]
0x4D55C4: push    ecx
0x4D55C5: mov     ecx, eax
0x4D55C7: call    sub_4D2720
0x4D55CC: pop     ebp
0x4D55CD: add     esp, 34h
0x4D55D0: retn
