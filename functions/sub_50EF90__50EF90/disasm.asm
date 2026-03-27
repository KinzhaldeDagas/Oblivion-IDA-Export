0x50EF90: push    0FFFFFFFFh
0x50EF92: push    offset SEH_50EF90
0x50EF97: mov     eax, large fs:0
0x50EF9D: push    eax
0x50EF9E: sub     esp, 11Ch
0x50EFA4: push    ebx
0x50EFA5: push    ebp
0x50EFA6: push    esi
0x50EFA7: push    edi
0x50EFA8: mov     eax, ds:0B30AACh
0x50EFAD: xor     eax, esp
0x50EFAF: push    eax
0x50EFB0: lea     eax, [esp+13Ch+var_C]
0x50EFB7: mov     large fs:0, eax
0x50EFBD: mov     ecx, [esp+13Ch+l]
0x50EFC4: mov     edx, [esp+13Ch+arg_10]
0x50EFCB: lea     eax, [esp+13Ch+var_128]
0x50EFCF: push    eax; UInt16
0x50EFD0: mov     eax, [esp+140h+arg_C]
0x50EFD7: push    ecx; l
0x50EFD8: mov     ecx, [esp+144h+a4]
0x50EFDF: push    edx; a6
0x50EFE0: mov     edx, [esp+148h+a3]
0x50EFE7: push    eax; a5
0x50EFE8: mov     eax, [esp+14Ch+arg_4]
0x50EFEF: push    ecx; a4
0x50EFF0: mov     ecx, [esp+150h+a1]
0x50EFF7: push    edx; a3
0x50EFF8: push    eax; a2
0x50EFF9: xor     ebp, ebp
0x50EFFB: push    ecx; a1
0x50EFFC: mov     dword ptr [esp+15Ch+var_128], ebp
0x50F000: call    Script_ExtractArgs
0x50F005: add     esp, 20h
0x50F008: test    al, al
0x50F00A: jz      loc_50FC84
0x50F010: push    0DCh ; 'Ü'; Size
0x50F015: call    FormHeapAlloc
0x50F01A: add     esp, 4
0x50F01D: mov     [esp+13Ch+var_124], eax
0x50F021: cmp     eax, ebp
0x50F023: mov     [esp+13Ch+var_4], ebp
0x50F02A: jz      short loc_50F03C
0x50F02C: push    ebp
0x50F02D: mov     ecx, eax; this
0x50F02F: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x50F034: mov     ebx, eax
0x50F036: mov     [esp+13Ch+var_104], eax
0x50F03A: jmp     short loc_50F042
0x50F03C: xor     ebx, ebx
0x50F03E: mov     [esp+13Ch+var_104], ebx
0x50F042: mov     ecx, ds:0B333C4h
0x50F048: mov     edx, [ecx]
0x50F04A: mov     eax, [edx+174h]
0x50F050: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x50F05B: call    eax
0x50F05D: mov     ecx, [eax]
0x50F05F: mov     edi, ds:0B06A2Ch
0x50F065: mov     [esp+13Ch+var_114], ecx
0x50F069: mov     edx, [eax+4]
0x50F06C: mov     esi, edi
0x50F06E: mov     [esp+13Ch+var_110], edx
0x50F072: imul    esi, edi
0x50F075: mov     eax, [eax+8]
0x50F078: mov     [esp+13Ch+var_10C], eax
0x50F07C: mov     ecx, edi
0x50F07E: fld     [esp+13Ch+var_10C]
0x50F082: shl     ecx, 6
0x50F085: fadd    qword ptr ds:0A3F3E8h
0x50F08B: mov     [esp+13Ch+var_44], edi
0x50F092: mov     [esp+13Ch+var_124], esi
0x50F096: mov     [esp+13Ch+var_120], ecx
0x50F09A: fstp    [esp+13Ch+var_10C]
0x50F09E: call    sub_411F00
0x50F0A3: xor     eax, eax
0x50F0A5: cmp     esi, ebp
0x50F0A7: fstp    [esp+13Ch+var_10]
0x50F0AE: fldz
0x50F0B0: mov     [esp+13Ch+var_108], eax
0x50F0B4: jle     loc_50F91B
0x50F0BA: fst     [esp+13Ch+var_A4]
0x50F0C1: fst     [esp+13Ch+var_C0]
0x50F0C5: fst     [esp+13Ch+var_BC]
0x50F0CC: fld1
0x50F0CE: fstp    [esp+13Ch+var_B8]
0x50F0D5: fild    [esp+13Ch+var_120]
0x50F0D9: fmul    qword ptr ds:0A2FAA0h
0x50F0DF: fstp    [esp+13Ch+var_A0]
0x50F0E6: fstp    [esp+13Ch+var_F8]
0x50F0EA: jmp     short loc_50F0F7
0x50F0EC: align 10h
0x50F0F0: mov     edi, [esp+13Ch+var_44]
0x50F0F7: xor     edx, edx
0x50F0F9: div     dword ptr ds:0B06A2Ch
0x50F0FF: mov     [esp+13Ch+var_C4], 0
0x50F107: mov     ebp, edx
0x50F109: mov     [esp+13Ch+var_E8], ebp
0x50F10D: mov     [esp+13Ch+var_C8], eax
0x50F111: mov     ecx, ds:0B3F9B0h
0x50F117: mov     edx, ds:0B3F9A8h
0x50F11D: mov     eax, ds:0B3F9ACh
0x50F122: mov     [esp+13Ch+var_EC], ecx
0x50F126: mov     ecx, ds:0B333C4h; this
0x50F12C: mov     [esp+13Ch+var_4], 1
0x50F137: mov     dword ptr [esp+13Ch+var_F4], edx
0x50F13B: mov     dword ptr [esp+13Ch+var_F4+4], eax
0x50F13F: call    sub_4D8B90
0x50F144: test    al, al
0x50F146: mov     ecx, ds:0B333C4h; this
0x50F14C: jz      loc_50F281
0x50F152: call    TESObjectREFR_GetParentCell
0x50F157: mov     ebx, eax
0x50F159: test    ebx, ebx
0x50F15B: jz      loc_50F37A
0x50F161: mov     edx, [esp+13Ch+var_114]
0x50F165: mov     eax, [esp+13Ch+var_110]
0x50F169: mov     ecx, [esp+13Ch+var_10C]
0x50F16D: mov     [esp+13Ch+var_E0], edx
0x50F171: push    1; float
0x50F173: lea     edx, [esp+140h+var_E0]
0x50F177: mov     [esp+140h+var_DC], eax
0x50F17B: push    edx; int
0x50F17C: lea     eax, [esp+144h+var_114]
0x50F180: mov     [esp+144h+var_D8], ecx
0x50F184: push    eax; int
0x50F185: mov     ecx, ebx
0x50F187: call    sub_4CCE20
0x50F18C: fld     [esp+13Ch+var_E0]
0x50F190: fistp   [esp+13Ch+var_84]
0x50F197: mov     eax, [esp+13Ch+var_84]
0x50F19E: add     eax, 0FFFFF800h
0x50F1A3: sar     eax, 0Ch
0x50F1A6: fld     [esp+13Ch+var_DC]
0x50F1AA: fistp   [esp+13Ch+var_7C]
0x50F1B1: mov     ecx, [esp+13Ch+var_7C]
0x50F1B8: add     ecx, 0FFFFF800h
0x50F1BE: sar     ecx, 0Ch
0x50F1C1: mov     edx, edi
0x50F1C3: sar     edx, 1
0x50F1C5: sub     ecx, edx
0x50F1C7: add     ecx, [esp+13Ch+var_C8]
0x50F1CB: sub     eax, edx
0x50F1CD: mov     edi, ecx
0x50F1CF: add     eax, ebp
0x50F1D1: mov     esi, eax
0x50F1D3: mov     ecx, esi
0x50F1D5: shl     ecx, 0Ch
0x50F1D8: add     ecx, 800h
0x50F1DE: mov     [esp+13Ch+var_120], ecx
0x50F1E2: fild    [esp+13Ch+var_120]
0x50F1E6: mov     edx, edi
0x50F1E8: shl     edx, 0Ch
0x50F1EB: add     edx, 800h
0x50F1F1: fstp    dword ptr [esp+13Ch+var_34]
0x50F1F8: mov     eax, dword ptr [esp+13Ch+var_34]
0x50F1FF: mov     [esp+13Ch+var_120], edx
0x50F203: fild    [esp+13Ch+var_120]
0x50F207: push    0
0x50F209: push    edi
0x50F20A: push    esi
0x50F20B: fstp    dword ptr [esp+148h+var_34+4]
0x50F212: mov     ecx, dword ptr [esp+148h+var_34+4]
0x50F219: fldz
0x50F21B: mov     dword ptr [esp+148h+var_F4+4], ecx
0x50F21F: fstp    [esp+148h+var_2C]
0x50F226: mov     ecx, ebx
0x50F228: mov     edx, [esp+148h+var_2C]
0x50F22F: mov     dword ptr [esp+148h+var_F4], eax
0x50F233: mov     [esp+148h+var_EC], edx
0x50F237: call    sub_4CCEE0
0x50F23C: push    edi
0x50F23D: push    esi
0x50F23E: lea     eax, [esp+144h+var_28]
0x50F245: push    eax
0x50F246: mov     ecx, ebx
0x50F248: call    sub_4D4250
0x50F24D: mov     eax, [eax]
0x50F24F: test    eax, eax
0x50F251: jz      short loc_50F261
0x50F253: mov     [esp+13Ch+var_C4], eax
0x50F257: add     eax, 4
0x50F25A: push    eax; lpAddend
0x50F25B: call    dword ptr ds:0A28078h
0x50F261: mov     esi, [esp+13Ch+var_28]
0x50F268: test    esi, esi
0x50F26A: mov     byte ptr [esp+13Ch+var_4], 1
0x50F272: jz      loc_50F37A
0x50F278: lea     ecx, [esi+4]
0x50F27B: push    ecx
0x50F27C: jmp     loc_50F362
0x50F281: call    TESObjectREFR_GetWorldSpace
0x50F286: fld     [esp+13Ch+var_114]
0x50F28A: fistp   [esp+13Ch+var_70]
0x50F291: mov     edx, [esp+13Ch+var_70]
0x50F298: sar     edx, 0Ch
0x50F29B: fld     [esp+13Ch+var_110]
0x50F29F: fistp   [esp+13Ch+var_78]
0x50F2A6: mov     esi, [esp+13Ch+var_78]
0x50F2AD: sar     edi, 1
0x50F2AF: sub     edx, edi
0x50F2B1: sar     esi, 0Ch
0x50F2B4: add     edx, ebp
0x50F2B6: sub     esi, edi
0x50F2B8: add     esi, [esp+13Ch+var_C8]
0x50F2BC: mov     ecx, edx
0x50F2BE: shl     ecx, 0Ch
0x50F2C1: mov     [esp+13Ch+var_120], ecx
0x50F2C5: fild    [esp+13Ch+var_120]
0x50F2C9: mov     ecx, esi
0x50F2CB: shl     ecx, 0Ch
0x50F2CE: test    eax, eax
0x50F2D0: fstp    [esp+13Ch+var_1C]
0x50F2D7: mov     [esp+13Ch+var_120], ecx
0x50F2DB: fild    [esp+13Ch+var_120]
0x50F2DF: mov     ecx, [esp+13Ch+var_1C]
0x50F2E6: mov     dword ptr [esp+13Ch+var_F4], ecx
0x50F2EA: fstp    [esp+13Ch+var_18]
0x50F2F1: mov     ecx, [esp+13Ch+var_18]
0x50F2F8: fldz
0x50F2FA: mov     dword ptr [esp+13Ch+var_F4+4], ecx
0x50F2FE: fstp    [esp+13Ch+var_14]
0x50F305: mov     ecx, [esp+13Ch+var_14]
0x50F30C: mov     [esp+13Ch+var_EC], ecx
0x50F310: jz      short loc_50F37A
0x50F312: push    esi; signed int
0x50F313: push    edx; signed int
0x50F314: mov     ecx, eax; this
0x50F316: call    TESWorldSpace__GetCellAtCellCoord
0x50F31B: mov     esi, eax
0x50F31D: test    esi, esi
0x50F31F: jz      short loc_50F37A
0x50F321: mov     ecx, esi
0x50F323: call    sub_4CCED0
0x50F328: lea     edx, [esp+13Ch+var_20]
0x50F32F: push    edx
0x50F330: mov     ecx, esi
0x50F332: call    sub_4D41A0
0x50F337: mov     eax, [eax]
0x50F339: test    eax, eax
0x50F33B: jz      short loc_50F34B
0x50F33D: mov     [esp+13Ch+var_C4], eax
0x50F341: add     eax, 4
0x50F344: push    eax; lpAddend
0x50F345: call    dword ptr ds:0A28078h
0x50F34B: mov     esi, [esp+13Ch+var_20]
0x50F352: test    esi, esi
0x50F354: mov     byte ptr [esp+13Ch+var_4], 1
0x50F35C: jz      short loc_50F37A
0x50F35E: lea     eax, [esi+4]
0x50F361: push    eax; lpAddend
0x50F362: call    dword ptr ds:0A2807Ch
0x50F368: test    eax, eax
0x50F36A: jnz     short loc_50F37A
0x50F36C: test    esi, esi
0x50F36E: jz      short loc_50F37A
0x50F370: mov     edx, [esi]
0x50F372: mov     eax, [edx]
0x50F374: push    1
0x50F376: mov     ecx, esi
0x50F378: call    eax
0x50F37A: xor     ecx, ecx
0x50F37C: mov     eax, 121h
0x50F381: mov     edx, 0Ch
0x50F386: mul     edx
0x50F388: seto    cl
0x50F38B: neg     ecx
0x50F38D: or      ecx, eax
0x50F38F: push    ecx; Size
0x50F390: call    FormHeapAlloc
0x50F395: mov     edi, eax
0x50F397: xor     ecx, ecx
0x50F399: mov     eax, 121h
0x50F39E: mov     edx, 0Ch
0x50F3A3: mul     edx
0x50F3A5: seto    cl
0x50F3A8: mov     [esp+140h+var_40], edi
0x50F3AF: neg     ecx
0x50F3B1: or      ecx, eax
0x50F3B3: push    ecx; Size
0x50F3B4: call    FormHeapAlloc
0x50F3B9: mov     [esp+144h+var_120], eax
0x50F3BD: xor     ecx, ecx
0x50F3BF: mov     eax, 121h
0x50F3C4: mov     edx, 8
0x50F3C9: mul     edx
0x50F3CB: seto    cl
0x50F3CE: neg     ecx
0x50F3D0: or      ecx, eax
0x50F3D2: push    ecx; Size
0x50F3D3: call    FormHeapAlloc
0x50F3D8: mov     [esp+148h+var_74], eax
0x50F3DF: xor     ecx, ecx
0x50F3E1: mov     eax, 121h
0x50F3E6: mov     edx, 10h
0x50F3EB: mul     edx
0x50F3ED: seto    cl
0x50F3F0: neg     ecx
0x50F3F2: or      ecx, eax
0x50F3F4: push    ecx; Size
0x50F3F5: call    FormHeapAlloc
0x50F3FA: add     esp, 10h
0x50F3FD: test    eax, eax
0x50F3FF: jz      short loc_50F42A
0x50F401: fldz
0x50F403: mov     edx, 120h
0x50F408: lea     ecx, [eax+8]
0x50F40B: fst     dword ptr [ecx-8]
0x50F40E: add     ecx, 10h
0x50F411: sub     edx, 1
0x50F414: fst     dword ptr [ecx-14h]
0x50F417: fst     dword ptr [ecx-10h]
0x50F41A: fst     dword ptr [ecx-0Ch]
0x50F41D: jns     short loc_50F40B
0x50F41F: fstp    st
0x50F421: mov     [esp+13Ch+var_B4], eax
0x50F428: jmp     short loc_50F435
0x50F42A: mov     [esp+13Ch+var_B4], 0
0x50F435: xor     ecx, ecx
0x50F437: mov     eax, 600h
0x50F43C: mov     edx, 2
0x50F441: mul     edx
0x50F443: seto    cl
0x50F446: neg     ecx
0x50F448: or      ecx, eax
0x50F44A: push    ecx; Size
0x50F44B: call    FormHeapAlloc
0x50F450: fld     qword ptr ds:0A46970h
0x50F456: add     esp, 4
0x50F459: xor     ebx, ebx
0x50F45B: mov     esi, eax
0x50F45D: mov     [esp+13Ch+var_118], ebx
0x50F461: fild    [esp+13Ch+var_118]
0x50F465: xor     ecx, ecx
0x50F467: mov     eax, edi
0x50F469: mov     [esp+13Ch+var_118], ecx
0x50F46D: fsub    st, st(1)
0x50F46F: add     edi, 0CCh ; 'Ì'
0x50F475: fstp    dword ptr [esp+13Ch+var_AC+4]
0x50F47C: mov     edx, dword ptr [esp+13Ch+var_AC+4]
0x50F483: fild    [esp+13Ch+var_118]
0x50F487: add     ecx, 4
0x50F48A: add     eax, 0Ch
0x50F48D: cmp     ecx, 44h ; 'D'
0x50F490: fsub    st, st(1)
0x50F492: mov     [esp+13Ch+var_118], ecx
0x50F496: fstp    dword ptr [esp+13Ch+var_AC]
0x50F49D: mov     ebp, dword ptr [esp+13Ch+var_AC]
0x50F4A4: mov     [eax-0Ch], ebp
0x50F4A7: mov     ebp, [esp+13Ch+var_A4]
0x50F4AE: mov     [eax-8], edx
0x50F4B1: mov     [eax-4], ebp
0x50F4B4: jl      short loc_50F483
0x50F4B6: add     ebx, 4
0x50F4B9: cmp     ebx, 44h ; 'D'
0x50F4BC: mov     [esp+13Ch+var_118], ebx
0x50F4C0: jl      short loc_50F461
0x50F4C2: mov     edx, [esp+13Ch+var_120]
0x50F4C6: fstp    st
0x50F4C8: mov     ecx, [esp+13Ch+var_74]
0x50F4CF: fld     qword ptr ds:0A492E0h
0x50F4D5: mov     eax, [esp+13Ch+var_B4]
0x50F4DC: mov     [esp+13Ch+var_E4], 0
0x50F4E4: jmp     short loc_50F4FB
0x50F4E6: mov     edx, [esp+13Ch+var_B0]
0x50F4ED: mov     ecx, [esp+13Ch+var_48]
0x50F4F4: mov     eax, [esp+13Ch+var_24]
0x50F4FB: fild    [esp+13Ch+var_E4]
0x50F4FF: mov     ebp, eax
0x50F501: mov     ebx, ecx
0x50F503: add     eax, 110h
0x50F508: fstp    [esp+13Ch+var_80]
0x50F50F: add     ecx, 88h ; 'ˆ'
0x50F515: fld     [esp+13Ch+var_80]
0x50F51C: mov     edi, edx
0x50F51E: fdiv    st, st(1)
0x50F520: add     edx, 0CCh ; 'Ì'
0x50F526: mov     [esp+13Ch+var_118], 0
0x50F52E: mov     [esp+13Ch+var_24], eax
0x50F535: mov     [esp+13Ch+var_48], ecx
0x50F53C: mov     [esp+13Ch+var_B0], edx
0x50F543: fld1
0x50F545: fsubrp  st(1), st
0x50F547: fstp    [esp+13Ch+var_38]
0x50F54E: fild    [esp+13Ch+var_118]
0x50F552: mov     eax, [esp+13Ch+var_C0]
0x50F556: mov     ecx, [esp+13Ch+var_BC]
0x50F55D: mov     edx, [esp+13Ch+var_B8]
0x50F564: fstp    [esp+13Ch+var_11C]
0x50F568: mov     [edi], eax
0x50F56A: fld     [esp+13Ch+var_11C]
0x50F56E: mov     [edi+4], ecx
0x50F571: fld     st
0x50F573: mov     ecx, [esp+13Ch+var_38]
0x50F57A: fdiv    st, st(2)
0x50F57C: mov     [edi+8], edx
0x50F57F: mov     [ebx+4], ecx
0x50F582: fstp    [esp+13Ch+var_3C]
0x50F589: mov     eax, [esp+13Ch+var_3C]
0x50F590: mov     [ebx], eax
0x50F592: cmp     dword ptr [esp+13Ch+var_128], 0
0x50F597: jz      loc_50F65A
0x50F59D: fstp    st(1)
0x50F59F: lea     edx, [esp+13Ch+var_D4]
0x50F5A3: fld     [esp+13Ch+var_10]
0x50F5AA: push    edx
0x50F5AB: fld     st
0x50F5AD: fmulp   st(2), st
0x50F5AF: fxch    st(1)
0x50F5B1: fstp    [esp+140h+var_D4]
0x50F5B5: fmul    [esp+140h+var_80]
0x50F5BC: fstp    [esp+140h+var_D0]
0x50F5C0: fld     [esp+140h+var_D4]
0x50F5C4: fadd    dword ptr [esp+140h+var_F4]
0x50F5C8: fstp    [esp+140h+var_D4]
0x50F5CC: fld     dword ptr [esp+140h+var_F4+4]
0x50F5D0: fadd    [esp+140h+var_D0]
0x50F5D4: fstp    [esp+140h+var_D0]
0x50F5D8: fld     [esp+140h+var_EC]
0x50F5DC: fadd    qword ptr ds:0A2FC68h
0x50F5E2: fstp    [esp+140h+var_CC]
0x50F5E6: call    sub_4D2D00
0x50F5EB: mov     [esp+140h+var_11C], eax
0x50F5EF: fild    [esp+140h+var_11C]
0x50F5F3: add     esp, 4
0x50F5F6: fstp    [esp+13Ch+var_11C]
0x50F5FA: fld     [esp+13Ch+var_11C]
0x50F5FE: fmul    qword ptr ds:0A3C770h
0x50F604: fstp    [esp+13Ch+var_11C]
0x50F608: fld     [esp+13Ch+var_11C]
0x50F60C: fst     [esp+13Ch+var_94]
0x50F613: mov     eax, [esp+13Ch+var_94]
0x50F61A: fst     [esp+13Ch+var_90]
0x50F621: mov     ecx, [esp+13Ch+var_90]
0x50F628: fstp    [esp+13Ch+var_8C]
0x50F62F: mov     edx, [esp+13Ch+var_8C]
0x50F636: fldz
0x50F638: mov     [ebp+0], eax
0x50F63B: fstp    [esp+13Ch+var_88]
0x50F642: mov     [ebp+4], ecx
0x50F645: mov     eax, [esp+13Ch+var_88]
0x50F64C: fld     qword ptr ds:0A492E0h
0x50F652: mov     [ebp+8], edx
0x50F655: mov     [ebp+0Ch], eax
0x50F658: jmp     short loc_50F67F
0x50F65A: mov     ecx, ds:0B25AE0h
0x50F660: fstp    st
0x50F662: mov     [ebp+0], ecx
0x50F665: mov     edx, ds:0B25AE4h
0x50F66B: mov     [ebp+4], edx
0x50F66E: mov     eax, ds:0B25AE8h
0x50F673: mov     [ebp+8], eax
0x50F676: mov     ecx, ds:0B25AECh
0x50F67C: mov     [ebp+0Ch], ecx
0x50F67F: mov     eax, [esp+13Ch+var_118]
0x50F683: add     eax, 1
0x50F686: add     edi, 0Ch
0x50F689: add     ebx, 8
0x50F68C: add     ebp, 10h
0x50F68F: cmp     eax, 11h
0x50F692: mov     [esp+13Ch+var_118], eax
0x50F696: jl      loc_50F54E
0x50F69C: mov     eax, [esp+13Ch+var_E4]
0x50F6A0: add     eax, 1
0x50F6A3: cmp     eax, 11h
0x50F6A6: mov     [esp+13Ch+var_E4], eax
0x50F6AA: jl      loc_50F4E6
0x50F6B0: xor     eax, eax
0x50F6B2: fstp    st
0x50F6B4: xor     ecx, ecx
0x50F6B6: mov     [esp+13Ch+var_E4], ecx
0x50F6BA: mov     ebx, ecx
0x50F6BC: xor     ebp, ebp
0x50F6BE: and     ebx, 80000001h
0x50F6C4: jns     short loc_50F6CB
0x50F6C6: dec     ebx
0x50F6C7: or      ebx, 0FFFFFFFEh
0x50F6CA: inc     ebx
0x50F6CB: movzx   ecx, cx
0x50F6CE: mov     edx, ecx
0x50F6D0: shl     edx, 4
0x50F6D3: add     edx, ecx
0x50F6D5: add     ecx, 1
0x50F6D8: mov     edi, ecx
0x50F6DA: shl     edi, 4
0x50F6DD: mov     [esp+13Ch+var_11C], ebx
0x50F6E1: add     edi, ecx
0x50F6E3: jmp     short loc_50F6F4
0x50F6E5: jmp     short loc_50F6F0
0x50F6E7: align 10h
0x50F6F0: mov     ebx, [esp+13Ch+var_11C]
0x50F6F4: mov     ecx, ebp
0x50F6F6: and     ecx, 80000001h
0x50F6FC: jns     short loc_50F703
0x50F6FE: dec     ecx
0x50F6FF: or      ecx, 0FFFFFFFEh
0x50F702: inc     ecx
0x50F703: xor     ecx, ebx
0x50F705: jz      short loc_50F737
0x50F707: movzx   ebx, bp
0x50F70A: lea     ecx, [edi+ebx]
0x50F70D: mov     [esi+eax*2], cx
0x50F711: add     eax, 1
0x50F714: add     ebx, edx
0x50F716: mov     [esi+eax*2], bx
0x50F71A: add     ebx, 1
0x50F71D: add     eax, 1
0x50F720: mov     [esi+eax*2], bx
0x50F724: add     eax, 1
0x50F727: mov     [esi+eax*2], bx
0x50F72B: add     eax, 1
0x50F72E: lea     ebx, [ecx+1]
0x50F731: mov     [esi+eax*2], bx
0x50F735: jmp     short loc_50F775
0x50F737: movzx   ecx, bp
0x50F73A: lea     ebx, [edi+ecx+1]
0x50F73E: mov     [esi+eax*2], bx
0x50F742: add     eax, 1
0x50F745: mov     [esp+13Ch+var_B0], ebx
0x50F74C: lea     ebx, [edi+ecx]
0x50F74F: mov     [esi+eax*2], bx
0x50F753: add     eax, 1
0x50F756: add     ecx, edx
0x50F758: mov     [esi+eax*2], cx
0x50F75C: add     eax, 1
0x50F75F: mov     [esi+eax*2], cx
0x50F763: add     eax, 1
0x50F766: add     ecx, 1
0x50F769: mov     [esi+eax*2], cx
0x50F76D: mov     cx, word ptr [esp+13Ch+var_B0]
0x50F775: add     eax, 1
0x50F778: mov     [esi+eax*2], cx
0x50F77C: add     ebp, 1
0x50F77F: add     eax, 1
0x50F782: cmp     ebp, 10h
0x50F785: jl      loc_50F6F0
0x50F78B: mov     ecx, [esp+13Ch+var_E4]
0x50F78F: add     ecx, 1
0x50F792: cmp     ecx, 10h
0x50F795: mov     [esp+13Ch+var_E4], ecx
0x50F799: jl      loc_50F6BA
0x50F79F: push    0C0h ; 'À'; Size
0x50F7A4: call    FormHeapAlloc
0x50F7A9: add     esp, 4
0x50F7AC: mov     [esp+13Ch+var_11C], eax
0x50F7B0: test    eax, eax
0x50F7B2: mov     byte ptr [esp+13Ch+var_4], 4
0x50F7BA: jz      short loc_50F7F3
0x50F7BC: mov     edx, [esp+13Ch+var_74]
0x50F7C3: mov     ecx, [esp+13Ch+var_B4]
0x50F7CA: push    esi
0x50F7CB: push    200h
0x50F7D0: push    0
0x50F7D2: push    1
0x50F7D4: push    edx
0x50F7D5: mov     edx, [esp+150h+var_120]
0x50F7D9: push    ecx
0x50F7DA: mov     ecx, [esp+154h+var_40]
0x50F7E1: push    edx
0x50F7E2: push    ecx
0x50F7E3: push    121h
0x50F7E8: mov     ecx, eax
0x50F7EA: call    sub_7174B0
0x50F7EF: mov     esi, eax
0x50F7F1: jmp     short loc_50F7F5
0x50F7F3: xor     esi, esi
0x50F7F5: mov     ebx, [esp+13Ch+var_104]
0x50F7F9: mov     edx, [ebx]
0x50F7FB: mov     eax, [edx+84h]
0x50F801: push    1
0x50F803: push    esi
0x50F804: mov     ecx, ebx
0x50F806: mov     byte ptr [esp+144h+var_4], 1
0x50F80E: call    eax
0x50F810: mov     eax, [esp+13Ch+var_E8]
0x50F814: shl     eax, 6
0x50F817: mov     [esp+13Ch+var_E8], eax
0x50F81B: fild    [esp+13Ch+var_E8]
0x50F81F: fld     qword ptr ds:0A46970h
0x50F825: mov     eax, [esp+13Ch+var_C8]
0x50F829: mov     ebp, [esp+13Ch+var_C4]
0x50F82D: fadd    st(1), st
0x50F82F: shl     eax, 6
0x50F832: test    ebp, ebp
0x50F834: fld     [esp+13Ch+var_A0]
0x50F83B: mov     [esp+13Ch+var_E8], eax
0x50F83F: mov     eax, [esp+13Ch+var_F8]
0x50F843: fsub    st(2), st
0x50F845: fxch    st(2)
0x50F847: fstp    [esp+13Ch+var_100]
0x50F84B: mov     ecx, [esp+13Ch+var_100]
0x50F84F: mov     [esi+54h], ecx
0x50F852: fiadd   [esp+13Ch+var_E8]
0x50F856: fsubrp  st(1), st
0x50F858: fstp    [esp+13Ch+var_FC]
0x50F85C: mov     edx, [esp+13Ch+var_FC]
0x50F860: mov     [esi+58h], edx
0x50F863: mov     [esi+5Ch], eax
0x50F866: jz      short loc_50F8DC
0x50F868: push    30h ; '0'; Size
0x50F86A: call    FormHeapAlloc
0x50F86F: add     esp, 4
0x50F872: mov     [esp+13Ch+var_E8], eax
0x50F876: test    eax, eax
0x50F878: mov     byte ptr [esp+13Ch+var_4], 5
0x50F880: jz      short loc_50F88D
0x50F882: mov     ecx, eax
0x50F884: call    NiTexturingProperty__NiTexturingProperty
0x50F889: mov     edi, eax
0x50F88B: jmp     short loc_50F88F
0x50F88D: xor     edi, edi
0x50F88F: push    ebp
0x50F890: mov     ecx, edi
0x50F892: mov     byte ptr [esp+140h+var_4], 1
0x50F89A: call    NiTexturingProperty__SetUnk08
0x50F89F: push    0
0x50F8A1: mov     ecx, edi
0x50F8A3: call    sub_405870
0x50F8A8: mov     cx, [edi+18h]
0x50F8AC: and     cx, 0FFF5h
0x50F8B1: or      cx, 4
0x50F8B5: mov     [edi+18h], cx
0x50F8B9: push    edi; a2
0x50F8BA: mov     ecx, esi; this
0x50F8BC: call    sub_405680
0x50F8C1: lea     edx, [ebp+4]
0x50F8C4: push    edx; lpAddend
0x50F8C5: call    dword ptr ds:0A2807Ch
0x50F8CB: test    eax, eax
0x50F8CD: jnz     short loc_50F8DA
0x50F8CF: mov     eax, [ebp+0]
0x50F8D2: mov     edx, [eax]
0x50F8D4: push    1
0x50F8D6: mov     ecx, ebp
0x50F8D8: call    edx
0x50F8DA: xor     ebp, ebp
0x50F8DC: test    ebp, ebp
0x50F8DE: mov     [esp+13Ch+var_4], 0FFFFFFFFh
0x50F8E9: jz      short loc_50F904
0x50F8EB: lea     eax, [ebp+4]
0x50F8EE: push    eax; lpAddend
0x50F8EF: call    dword ptr ds:0A2807Ch
0x50F8F5: test    eax, eax
0x50F8F7: jnz     short loc_50F904
0x50F8F9: mov     edx, [ebp+0]
0x50F8FC: mov     eax, [edx]
0x50F8FE: push    1
0x50F900: mov     ecx, ebp
0x50F902: call    eax
0x50F904: mov     eax, [esp+13Ch+var_108]
0x50F908: add     eax, 1
0x50F90B: cmp     eax, [esp+13Ch+var_124]
0x50F90F: mov     [esp+13Ch+var_108], eax
0x50F913: jl      loc_50F0F0
0x50F919: jmp     short loc_50F91D
0x50F91B: fstp    st
0x50F91D: mov     ecx, ds:0B333C4h
0x50F923: mov     edx, [ecx]
0x50F925: mov     eax, [edx+174h]
0x50F92B: call    eax
0x50F92D: mov     ecx, [eax]
0x50F92F: mov     edx, [eax+4]
0x50F932: mov     eax, [eax+8]
0x50F935: mov     [esp+13Ch+var_E0], ecx
0x50F939: mov     ecx, ds:0B333C4h; this
0x50F93F: mov     [esp+13Ch+var_DC], edx
0x50F943: mov     [esp+13Ch+var_D8], eax
0x50F947: call    sub_4D8B90
0x50F94C: test    al, al
0x50F94E: jz      loc_50FA10
0x50F954: push    1; float
0x50F956: lea     ecx, [esp+140h+var_D4]
0x50F95A: push    ecx; int
0x50F95B: mov     ecx, ds:0B333C4h
0x50F961: mov     edx, [ecx]
0x50F963: mov     eax, [edx+174h]
0x50F969: call    eax
0x50F96B: mov     ecx, ds:0B333C4h; this
0x50F971: push    eax; int
0x50F972: call    TESObjectREFR_GetParentCell
0x50F977: mov     ecx, eax
0x50F979: call    sub_4CCE20
0x50F97E: fld     [esp+13Ch+var_D4]
0x50F982: fistp   [esp+13Ch+var_108]
0x50F986: fld     [esp+13Ch+var_D0]
0x50F98A: fistp   [esp+13Ch+var_104]
0x50F98E: mov     ecx, [esp+13Ch+var_108]
0x50F992: mov     edx, [esp+13Ch+var_104]
0x50F996: add     ecx, 0FFFFF800h
0x50F99C: sar     ecx, 0Ch
0x50F99F: add     ecx, 1
0x50F9A2: add     edx, 0FFFFF800h
0x50F9A8: shl     ecx, 0Ch
0x50F9AB: sar     edx, 0Ch
0x50F9AE: mov     [esp+13Ch+var_124], ecx
0x50F9B2: fild    [esp+13Ch+var_124]
0x50F9B6: add     edx, 1
0x50F9B9: shl     edx, 0Ch
0x50F9BC: fstp    [esp+13Ch+var_100]
0x50F9C0: mov     eax, [esp+13Ch+var_100]
0x50F9C4: mov     [esp+13Ch+var_124], edx
0x50F9C8: fild    [esp+13Ch+var_124]
0x50F9CC: mov     dword ptr [esp+13Ch+var_A0], eax
0x50F9D3: mov     eax, [esp+13Ch+var_D4]
0x50F9D7: fstp    [esp+13Ch+var_FC]
0x50F9DB: mov     ecx, [esp+13Ch+var_FC]
0x50F9DF: fldz
0x50F9E1: mov     dword ptr [esp+13Ch+var_A0+4], ecx
0x50F9E8: mov     ecx, [esp+13Ch+var_D0]
0x50F9EC: fst     [esp+13Ch+var_F8]
0x50F9F0: mov     edx, [esp+13Ch+var_F8]
0x50F9F4: mov     [esp+13Ch+var_98], edx
0x50F9FB: mov     edx, [esp+13Ch+var_CC]
0x50F9FF: mov     [esp+13Ch+var_E0], eax
0x50FA03: mov     [esp+13Ch+var_DC], ecx
0x50FA07: mov     [esp+13Ch+var_D8], edx
0x50FA0B: jmp     loc_50FAAB
0x50FA10: mov     ecx, ds:0B333C4h
0x50FA16: mov     eax, [ecx]
0x50FA18: mov     edx, [eax+174h]
0x50FA1E: call    edx
0x50FA20: fld     dword ptr [eax]
0x50FA22: fstp    [esp+13Ch+var_124]
0x50FA26: fld     [esp+13Ch+var_124]
0x50FA2A: fistp   [esp+13Ch+var_108]
0x50FA2E: mov     ecx, ds:0B333C4h
0x50FA34: mov     eax, [ecx]
0x50FA36: mov     edx, [eax+174h]
0x50FA3C: call    edx
0x50FA3E: fld     dword ptr [eax+4]
0x50FA41: fstp    [esp+13Ch+var_124]
0x50FA45: fld     [esp+13Ch+var_124]
0x50FA49: fistp   [esp+13Ch+var_104]
0x50FA4D: mov     eax, [esp+13Ch+var_108]
0x50FA51: mov     ecx, [esp+13Ch+var_104]
0x50FA55: sar     eax, 0Ch
0x50FA58: shl     eax, 0Ch
0x50FA5B: add     eax, 800h
0x50FA60: sar     ecx, 0Ch
0x50FA63: mov     [esp+13Ch+var_124], eax
0x50FA67: fild    [esp+13Ch+var_124]
0x50FA6B: shl     ecx, 0Ch
0x50FA6E: add     ecx, 800h
0x50FA74: fstp    [esp+13Ch+var_100]
0x50FA78: mov     edx, [esp+13Ch+var_100]
0x50FA7C: mov     [esp+13Ch+var_124], ecx
0x50FA80: fild    [esp+13Ch+var_124]
0x50FA84: mov     dword ptr [esp+13Ch+var_A0], edx
0x50FA8B: fstp    [esp+13Ch+var_FC]
0x50FA8F: mov     eax, [esp+13Ch+var_FC]
0x50FA93: fldz
0x50FA95: mov     dword ptr [esp+13Ch+var_A0+4], eax
0x50FA9C: fst     [esp+13Ch+var_F8]
0x50FAA0: mov     ecx, [esp+13Ch+var_F8]
0x50FAA4: mov     [esp+13Ch+var_98], ecx
0x50FAAB: fld     [esp+13Ch+var_E0]
0x50FAAF: lea     edx, [esp+13Ch+var_94]
0x50FAB6: fsub    dword ptr [esp+13Ch+var_A0]
0x50FABD: push    edx
0x50FABE: sub     esp, 0Ch
0x50FAC1: mov     eax, esp
0x50FAC3: fstp    dword ptr [esp+14Ch+var_F4]
0x50FAC7: sub     esp, 0Ch
0x50FACA: fld     [esp+158h+var_DC]
0x50FACE: fsub    dword ptr [esp+158h+var_A0+4]
0x50FAD5: fstp    dword ptr [esp+158h+var_F4+4]
0x50FAD9: fld     dword ptr [esp+158h+var_F4]
0x50FADD: fld     qword ptr ds:0A40358h
0x50FAE3: fmul    st(1), st
0x50FAE5: fxch    st(1)
0x50FAE7: fstp    dword ptr [esp+158h+var_F4]
0x50FAEB: fmul    dword ptr [esp+158h+var_F4+4]
0x50FAEF: fstp    dword ptr [esp+158h+var_F4+4]
0x50FAF3: fst     [esp+158h+var_EC]
0x50FAF7: fst     dword ptr [esp+158h+var_AC]
0x50FAFE: fld     dword ptr ds:0A35AA4h
0x50FB04: fstp    dword ptr [esp+158h+var_AC+4]
0x50FB0B: fld1
0x50FB0D: fst     [esp+158h+var_A4]
0x50FB14: fld     dword ptr ds:0A3D65Ch
0x50FB1A: fstp    [esp+158h+var_C0]
0x50FB21: fld     dword ptr ds:0A45E4Ch
0x50FB27: fst     [esp+158h+var_BC]
0x50FB2E: fst     [esp+158h+var_100]
0x50FB32: mov     ecx, [esp+158h+var_100]
0x50FB36: fstp    [esp+158h+var_FC]
0x50FB3A: mov     edx, [esp+158h+var_FC]
0x50FB3E: mov     [eax], ecx
0x50FB40: mov     [eax+4], edx
0x50FB43: fst     [esp+158h+var_B8]
0x50FB4A: mov     edx, [esp+158h+var_C0]
0x50FB51: fst     [esp+158h+var_F8]
0x50FB55: mov     ecx, [esp+158h+var_F8]
0x50FB59: fstp    [esp+158h+var_94]
0x50FB60: mov     [eax+8], ecx
0x50FB63: mov     ecx, [esp+158h+var_BC]
0x50FB6A: fst     [esp+158h+var_90]
0x50FB71: mov     eax, esp
0x50FB73: fst     [esp+158h+var_8C]
0x50FB7A: mov     [eax], edx
0x50FB7C: fstp    [esp+158h+var_88]
0x50FB83: mov     edx, [esp+158h+var_B8]
0x50FB8A: mov     [eax+4], ecx
0x50FB8D: mov     ecx, dword ptr [esp+158h+var_AC]
0x50FB94: mov     [eax+8], edx
0x50FB97: mov     edx, dword ptr [esp+158h+var_AC+4]
0x50FB9E: sub     esp, 0Ch
0x50FBA1: mov     eax, esp
0x50FBA3: mov     [eax], ecx
0x50FBA5: mov     ecx, [esp+164h+var_A4]
0x50FBAC: mov     [eax+4], edx
0x50FBAF: mov     [eax+8], ecx
0x50FBB2: call    sub_47EEF0
0x50FBB7: mov     edx, dword ptr [esp+164h+var_F4]
0x50FBBB: mov     ecx, [esp+164h+var_EC]
0x50FBBF: mov     ebp, eax
0x50FBC1: mov     eax, dword ptr [esp+164h+var_F4+4]
0x50FBC5: mov     [ebp+54h], edx
0x50FBC8: mov     [ebp+58h], eax
0x50FBCB: mov     [ebp+5Ch], ecx
0x50FBCE: mov     ecx, 9
0x50FBD3: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x50FBD8: lea     edi, [esp+164h+var_6C]
0x50FBDF: rep movsd
0x50FBE1: mov     ecx, ds:0B333C4h; this
0x50FBE7: add     esp, 28h
0x50FBEA: lea     esi, [ecx+20h]
0x50FBED: call    TESObjectREFR_GetParentCell
0x50FBF2: mov     ecx, eax
0x50FBF4: call    sub_4CCE00
0x50FBF9: fadd    dword ptr [esi+8]
0x50FBFC: push    ecx
0x50FBFD: lea     ecx, [esp+140h+var_6C]
0x50FC04: fstp    [esp+140h+var_124]
0x50FC08: fld     [esp+140h+var_124]
0x50FC0C: fstp    [esp+140h+var_140]; float
0x50FC0F: call    NiMatrix33_InitRotationTransform
0x50FC14: lea     edi, [ebp+30h]
0x50FC17: mov     ecx, 9
0x50FC1C: lea     esi, [esp+13Ch+var_6C]
0x50FC23: rep movsd
0x50FC25: mov     edx, [ebx]
0x50FC27: mov     eax, [edx+84h]
0x50FC2D: push    1
0x50FC2F: push    ebp
0x50FC30: mov     ecx, ebx
0x50FC32: call    eax
0x50FC34: call    sub_4E70B0
0x50FC39: push    eax; a2
0x50FC3A: mov     ecx, ebx; this
0x50FC3C: call    sub_405680
0x50FC41: fldz
0x50FC43: mov     ecx, [esp+13Ch+var_114]
0x50FC47: mov     [ebx+54h], ecx
0x50FC4A: mov     edx, [esp+13Ch+var_110]
0x50FC4E: mov     [ebx+58h], edx
0x50FC51: mov     eax, [esp+13Ch+var_10C]
0x50FC55: push    1; a3
0x50FC57: push    ecx
0x50FC58: mov     ecx, ebx; this
0x50FC5A: fstp    [esp+144h+a2]; a2
0x50FC5D: mov     [ebx+5Ch], eax
0x50FC60: call    NiAVObject_UpdateNiAVObject
0x50FC65: mov     ecx, ebx; this
0x50FC67: call    NiAVObject_InitializePropertyState
0x50FC6C: fld     dword ptr ds:0A37CC8h
0x50FC72: push    ecx
0x50FC73: mov     ecx, ds:0B333A0h
0x50FC79: fstp    [esp+140h+var_140]; float
0x50FC7C: push    ebx; int
0x50FC7D: call    sub_440E60
0x50FC82: mov     al, 1
0x50FC84: mov     ecx, dword ptr [esp+13Ch+var_C]
0x50FC8B: mov     large fs:0, ecx
0x50FC92: pop     ecx
0x50FC93: pop     edi
0x50FC94: pop     esi
0x50FC95: pop     ebp
0x50FC96: pop     ebx
0x50FC97: add     esp, 128h
0x50FC9D: retn
