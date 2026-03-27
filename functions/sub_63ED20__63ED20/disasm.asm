0x63ED20: sub     esp, 28h
0x63ED23: mov     eax, [esp+28h+arg_8]
0x63ED27: mov     edx, [esp+28h+arg_0]
0x63ED2B: push    ebx
0x63ED2C: push    esi
0x63ED2D: push    edi
0x63ED2E: mov     esi, ecx
0x63ED30: mov     ecx, [esp+34h+arg_4]
0x63ED34: push    eax
0x63ED35: push    ecx
0x63ED36: push    edx
0x63ED37: mov     ecx, esi
0x63ED39: call    sub_6564C0
0x63ED3E: mov     ecx, ds:0B33B00h
0x63ED44: xor     ebx, ebx
0x63ED46: mov     [esp+34h+var_28], ebx
0x63ED4A: mov     [esp+34h+var_20], ebx
0x63ED4E: call    sub_45A170
0x63ED53: test    al, al
0x63ED55: jz      loc_63EDF8
0x63ED5B: mov     ecx, ds:0B33B00h
0x63ED61: push    4; Size
0x63ED63: lea     eax, [esp+38h+Dst]
0x63ED67: push    eax; Dst
0x63ED68: call    SaveLoad_LoadData
0x63ED6D: cmp     [esp+34h+Dst], 4B4F4C42h
0x63ED75: jz      short loc_63EDDF
0x63ED77: mov     eax, ds:0B33B00h
0x63ED7C: mov     edi, [eax+80h]
0x63ED82: cmp     edi, ebx
0x63ED84: jz      short loc_63EDC3
0x63ED86: mov     ecx, [edi]
0x63ED88: push    ecx; a1
0x63ED89: call    TESForm_LookupByFormID
0x63ED8E: mov     edx, [edi+5]
0x63ED91: movzx   ecx, byte ptr [edi+9]
0x63ED95: add     esp, 4
0x63ED98: push    edx
0x63ED99: mov     edx, [eax]
0x63ED9B: push    ecx
0x63ED9C: mov     ecx, eax
0x63ED9E: mov     eax, [edx+0D4h]
0x63EDA4: call    eax
0x63EDA6: mov     ecx, [edi]
0x63EDA8: push    eax
0x63EDA9: push    ecx
0x63EDAA: push    2BA8h
0x63EDAF: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x63EDB4: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x63EDB9: call    PrintError
0x63EDBE: add     esp, 1Ch
0x63EDC1: jmp     short loc_63EDDF
0x63EDC3: movzx   edx, byte ptr [eax+7Ch]
0x63EDC7: push    edx
0x63EDC8: push    2BA8h
0x63EDCD: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x63EDD2: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x63EDD7: call    PrintError
0x63EDDC: add     esp, 10h
0x63EDDF: mov     ecx, ds:0B33B00h
0x63EDE5: mov     eax, [ecx+14h]
0x63EDE8: push    2; Size
0x63EDEA: lea     edx, [esp+38h+var_28]
0x63EDEE: push    edx; Dst
0x63EDEF: mov     [esp+3Ch+var_20], eax
0x63EDF3: call    SaveLoad_LoadData
0x63EDF8: mov     ecx, ds:0B33B00h
0x63EDFE: cmp     byte ptr [ecx+7Ch], 3Eh ; '>'
0x63EE02: jnb     short loc_63EE16
0x63EE04: push    1; Size
0x63EE06: lea     eax, [esp+38h+arg_4]
0x63EE0A: push    eax; Dst
0x63EE0B: call    SaveLoad_LoadData
0x63EE10: mov     ecx, ds:0B33B00h
0x63EE16: push    1; Size
0x63EE18: lea     edx, [esi+228h]
0x63EE1E: push    edx; Dst
0x63EE1F: call    SaveLoad_LoadData
0x63EE24: mov     ecx, ds:0B33B00h
0x63EE2A: push    1; Size
0x63EE2C: lea     eax, [esi+23Ch]
0x63EE32: push    eax; Dst
0x63EE33: call    SaveLoad_LoadData
0x63EE38: mov     ecx, ds:0B33B00h
0x63EE3E: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x63EE42: jnb     short loc_63EE55
0x63EE44: push    1; Size
0x63EE46: lea     edx, [esi+1Fh]
0x63EE49: push    edx; Dst
0x63EE4A: call    SaveLoad_LoadData
0x63EE4F: mov     ecx, ds:0B33B00h
0x63EE55: cmp     byte ptr [ecx+7Ch], 19h
0x63EE59: jnb     short loc_63EE6D
0x63EE5B: push    1; Size
0x63EE5D: lea     eax, [esp+38h+arg_4]
0x63EE61: push    eax; Dst
0x63EE62: call    SaveLoad_LoadData
0x63EE67: mov     ecx, ds:0B33B00h
0x63EE6D: push    1; Size
0x63EE6F: lea     edx, [esi+25Ch]
0x63EE75: push    edx; Dst
0x63EE76: call    SaveLoad_LoadData
0x63EE7B: mov     ecx, ds:0B33B00h
0x63EE81: cmp     byte ptr [ecx+7Ch], 1Bh
0x63EE85: jb      short loc_63EE9B
0x63EE87: push    1; Size
0x63EE89: lea     eax, [esi+25Dh]
0x63EE8F: push    eax; Dst
0x63EE90: call    SaveLoad_LoadData
0x63EE95: mov     ecx, ds:0B33B00h
0x63EE9B: push    2; Size
0x63EE9D: lea     edx, [esi+1FCh]
0x63EEA3: push    edx; Dst
0x63EEA4: call    SaveLoad_LoadData
0x63EEA9: mov     ecx, ds:0B33B00h
0x63EEAF: push    2; Size
0x63EEB1: lea     eax, [esi+1F4h]
0x63EEB7: push    eax; Dst
0x63EEB8: call    SaveLoad_LoadData
0x63EEBD: push    2; Size
0x63EEBF: lea     ecx, [esi+208h]
0x63EEC5: push    ecx; Dst
0x63EEC6: mov     ecx, ds:0B33B00h
0x63EECC: call    SaveLoad_LoadData
0x63EED1: mov     ecx, ds:0B33B00h
0x63EED7: push    4; Size
0x63EED9: lea     edx, [esi+1F0h]
0x63EEDF: push    edx; Dst
0x63EEE0: call    SaveLoad_LoadData
0x63EEE5: mov     ecx, ds:0B33B00h
0x63EEEB: push    4; Size
0x63EEED: lea     eax, [esi+1ACh]
0x63EEF3: push    eax; Dst
0x63EEF4: call    SaveLoad_LoadData
0x63EEF9: push    4; Size
0x63EEFB: lea     ecx, [esi+204h]
0x63EF01: push    ecx; Dst
0x63EF02: mov     ecx, ds:0B33B00h
0x63EF08: call    SaveLoad_LoadData
0x63EF0D: mov     ecx, ds:0B33B00h
0x63EF13: push    4; Size
0x63EF15: lea     edx, [esi+21Ch]
0x63EF1B: push    edx; Dst
0x63EF1C: call    SaveLoad_LoadData
0x63EF21: mov     ecx, ds:0B33B00h
0x63EF27: push    4; Size
0x63EF29: lea     eax, [esi+22Ch]
0x63EF2F: push    eax; Dst
0x63EF30: call    SaveLoad_LoadData
0x63EF35: push    4; Size
0x63EF37: lea     ecx, [esi+230h]
0x63EF3D: push    ecx; Dst
0x63EF3E: mov     ecx, ds:0B33B00h
0x63EF44: call    SaveLoad_LoadData
0x63EF49: mov     ecx, ds:0B33B00h
0x63EF4F: push    4; Size
0x63EF51: lea     edx, [esi+234h]
0x63EF57: push    edx; Dst
0x63EF58: call    SaveLoad_LoadData
0x63EF5D: mov     ecx, ds:0B33B00h
0x63EF63: push    4; Size
0x63EF65: lea     eax, [esi+248h]
0x63EF6B: push    eax; Dst
0x63EF6C: call    SaveLoad_LoadData
0x63EF71: push    4; Size
0x63EF73: lea     ecx, [esi+198h]
0x63EF79: push    ecx; Dst
0x63EF7A: mov     ecx, ds:0B33B00h
0x63EF80: call    SaveLoad_LoadData
0x63EF85: mov     ecx, ds:0B33B00h
0x63EF8B: push    4; Size
0x63EF8D: lea     edx, [esi+1B0h]
0x63EF93: push    edx; Dst
0x63EF94: call    SaveLoad_LoadData
0x63EF99: mov     ecx, ds:0B33B00h
0x63EF9F: push    4; Size
0x63EFA1: lea     eax, [esi+1B4h]
0x63EFA7: push    eax; Dst
0x63EFA8: call    SaveLoad_LoadData
0x63EFAD: mov     ecx, ds:0B33B00h
0x63EFB3: cmp     byte ptr [ecx+7Ch], 32h ; '2'
0x63EFB7: jb      short loc_63EFCD
0x63EFB9: push    4; Size
0x63EFBB: lea     edx, [esi+19Ch]
0x63EFC1: push    edx; Dst
0x63EFC2: call    SaveLoad_LoadData
0x63EFC7: mov     ecx, ds:0B33B00h
0x63EFCD: push    4; Size
0x63EFCF: lea     eax, [esi+1CCh]
0x63EFD5: push    eax; Dst
0x63EFD6: call    SaveLoad_LoadData
0x63EFDB: push    1; Size
0x63EFDD: lea     ecx, [esi+244h]
0x63EFE3: push    ecx; Dst
0x63EFE4: mov     ecx, ds:0B33B00h
0x63EFEA: call    SaveLoad_LoadData
0x63EFEF: mov     ecx, ds:0B33B00h
0x63EFF5: push    0Ch; Size
0x63EFF7: lea     edx, [esi+20Ch]
0x63EFFD: push    edx; Dst
0x63EFFE: call    SaveLoad_LoadData
0x63F003: mov     ecx, ds:0B33B00h
0x63F009: push    4; Size
0x63F00B: lea     eax, [esi+254h]
0x63F011: push    eax; Dst
0x63F012: call    SaveLoad_LoadData
0x63F017: mov     ecx, ds:0B33B00h
0x63F01D: lea     eax, [esi+2BCh]
0x63F023: push    4; Size
0x63F025: push    eax; Dst
0x63F026: mov     [esp+3Ch+var_8], eax
0x63F02A: call    SaveLoad_LoadData
0x63F02F: mov     ecx, ds:0B33B00h
0x63F035: lea     eax, [esi+2C0h]
0x63F03B: push    4; Size
0x63F03D: push    eax; Dst
0x63F03E: mov     [esp+3Ch+var_4], eax
0x63F042: call    SaveLoad_LoadData
0x63F047: push    4; Size
0x63F049: lea     ecx, [esi+238h]
0x63F04F: push    ecx; Dst
0x63F050: mov     ecx, ds:0B33B00h
0x63F056: call    SaveLoad_LoadData
0x63F05B: mov     ecx, ds:0B33B00h
0x63F061: push    4; Size
0x63F063: lea     edx, [esi+1A8h]
0x63F069: push    edx; Dst
0x63F06A: call    SaveLoad_LoadData
0x63F06F: mov     ecx, ds:0B33B00h
0x63F075: push    4; Size
0x63F077: lea     eax, [esi+1B8h]
0x63F07D: push    eax; Dst
0x63F07E: call    SaveLoad_LoadData
0x63F083: mov     ecx, ds:0B33B00h
0x63F089: cmp     byte ptr [ecx+7Ch], 14h
0x63F08D: jb      short loc_63F0A3
0x63F08F: push    4; Size
0x63F091: lea     edx, [esi+260h]
0x63F097: push    edx; Dst
0x63F098: call    SaveLoad_LoadData
0x63F09D: mov     ecx, ds:0B33B00h
0x63F0A3: cmp     byte ptr [ecx+7Ch], 3Fh ; '?'
0x63F0A7: jb      short loc_63F0D1
0x63F0A9: push    1; Size
0x63F0AB: lea     eax, [esi+278h]
0x63F0B1: push    eax; Dst
0x63F0B2: call    SaveLoad_LoadData
0x63F0B7: push    4; Size
0x63F0B9: lea     ecx, [esi+274h]
0x63F0BF: push    ecx; Dst
0x63F0C0: mov     ecx, ds:0B33B00h
0x63F0C6: call    SaveLoad_LoadData
0x63F0CB: mov     ecx, ds:0B33B00h
0x63F0D1: cmp     byte ptr [ecx+7Ch], 42h ; 'B'
0x63F0D5: jb      short loc_63F0FF
0x63F0D7: push    1; Size
0x63F0D9: lea     edx, [esi+290h]
0x63F0DF: push    edx; Dst
0x63F0E0: call    SaveLoad_LoadData
0x63F0E5: mov     ecx, ds:0B33B00h
0x63F0EB: push    4; Size
0x63F0ED: lea     eax, [esi+28Ch]
0x63F0F3: push    eax; Dst
0x63F0F4: call    SaveLoad_LoadData
0x63F0F9: mov     ecx, ds:0B33B00h
0x63F0FF: push    4; Size
0x63F101: lea     edx, [esp+38h+a1]
0x63F105: push    edx; Dst
0x63F106: call    SaveLoad_LoadFormID
0x63F10B: mov     eax, [esp+3Ch+var_20]
0x63F10F: mov     [esi+218h], eax
0x63F115: mov     ecx, ds:0B33B00h
0x63F11B: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x63F11F: jnb     short loc_63F133
0x63F121: push    4; Size
0x63F123: lea     edx, [esp+40h]
0x63F127: push    edx; Dst
0x63F128: call    SaveLoad_LoadFormID
0x63F12D: mov     ecx, ds:0B33B00h
0x63F133: push    4; Size
0x63F135: lea     eax, [esp+48h+var_24]
0x63F139: push    eax; Dst
0x63F13A: call    SaveLoad_LoadFormID
0x63F13F: mov     ecx, [esp+4Ch+var_2C]
0x63F143: mov     [esi+1A4h], ecx
0x63F149: mov     ecx, ds:0B33B00h
0x63F14F: cmp     byte ptr [ecx+7Ch], 4Fh ; 'O'
0x63F153: jnb     short loc_63F18C
0x63F155: push    4; Size
0x63F157: lea     edx, [esp+50h+var_10]
0x63F15B: push    edx; Dst
0x63F15C: call    SaveLoad_LoadFormID
0x63F161: mov     eax, [esp+54h+a1]
0x63F165: push    ebx; int
0x63F166: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x63F16B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x63F170: push    ebx; int
0x63F171: push    eax; a1
0x63F172: call    TESForm_LookupByFormID
0x63F177: add     esp, 4
0x63F17A: push    eax; void *
0x63F17B: call    OblivionDynamicCast
0x63F180: mov     [esi+24h], eax
0x63F183: mov     ecx, ds:0B33B00h
0x63F189: add     esp, 14h
0x63F18C: push    4; Size
0x63F18E: lea     edx, [esp+58h+var_30]
0x63F192: push    edx; Dst
0x63F193: call    SaveLoad_LoadFormID
0x63F198: mov     edi, [esi+18Ch]
0x63F19E: cmp     edi, ebx
0x63F1A0: mov     eax, [esp+5Ch+var_38]
0x63F1A4: mov     [esi+2C4h], eax
0x63F1AA: jz      short loc_63F1C6
0x63F1AC: lea     esp, [esp+0]
0x63F1B0: mov     eax, [edi]
0x63F1B2: cmp     eax, ebx
0x63F1B4: jz      short loc_63F1C6
0x63F1B6: push    eax
0x63F1B7: call    FormHeapFree
0x63F1BC: mov     edi, [edi+4]
0x63F1BF: add     esp, 4
0x63F1C2: cmp     edi, ebx
0x63F1C4: jnz     short loc_63F1B0
0x63F1C6: mov     edi, [esi+18Ch]
0x63F1CC: cmp     [edi+4], ebx
0x63F1CF: push    ebp
0x63F1D0: jz      short loc_63F1E8
0x63F1D2: mov     eax, [edi+4]
0x63F1D5: mov     ebp, [eax+4]
0x63F1D8: push    eax
0x63F1D9: call    FormHeapFree
0x63F1DE: add     esp, 4
0x63F1E1: cmp     ebp, ebx
0x63F1E3: mov     [edi+4], ebp
0x63F1E6: jnz     short loc_63F1D2
0x63F1E8: mov     [edi], ebx
0x63F1EA: mov     ecx, ds:0B33B00h
0x63F1F0: mov     [esp+60h+var_4C], ebx
0x63F1F4: mov     bl, 4Eh ; 'N'
0x63F1F6: cmp     [ecx+7Ch], bl
0x63F1F9: jb      short loc_63F212
0x63F1FB: push    2; Size
0x63F1FD: lea     edx, [esp+64h+var_4C]
0x63F201: push    edx; Dst
0x63F202: call    SaveLoad_LoadData
0x63F207: mov     ecx, ds:0B33B00h
0x63F20D: cmp     [ecx+7Ch], bl
0x63F210: jnb     short loc_63F22B
0x63F212: push    1; Size
0x63F214: lea     eax, [esp+64h+var_20]
0x63F218: push    eax; Dst
0x63F219: call    SaveLoad_LoadData
0x63F21E: movzx   cx, byte ptr [esp+60h+var_20]
0x63F224: movzx   edx, cx
0x63F227: mov     [esp+60h+var_4C], edx
0x63F22B: xor     ebx, ebx
0x63F22D: cmp     word ptr [esp+60h+var_4C], bx
0x63F232: jbe     loc_63F2E7
0x63F238: push    10h; Size
0x63F23A: call    FormHeapAlloc
0x63F23F: xor     edi, edi
0x63F241: add     esp, 4
0x63F244: cmp     eax, edi
0x63F246: jz      short loc_63F256
0x63F248: mov     [eax], edi
0x63F24A: mov     [eax+4], edi
0x63F24D: mov     [eax+0Ch], edi
0x63F250: mov     byte ptr [eax+8], 0
0x63F254: mov     edi, eax
0x63F256: mov     ecx, ds:0B33B00h
0x63F25C: push    4; Size
0x63F25E: lea     eax, [esp+64h+var_20]
0x63F262: push    eax; Dst
0x63F263: call    SaveLoad_LoadFormID
0x63F268: push    4; Size
0x63F26A: lea     ecx, [edi+4]
0x63F26D: push    ecx; Dst
0x63F26E: mov     ecx, ds:0B33B00h
0x63F274: call    SaveLoad_LoadData
0x63F279: mov     ecx, ds:0B33B00h
0x63F27F: push    1; Size
0x63F281: lea     edx, [edi+8]
0x63F284: push    edx; Dst
0x63F285: call    SaveLoad_LoadData
0x63F28A: mov     ecx, ds:0B33B00h
0x63F290: push    4; Size
0x63F292: lea     eax, [edi+0Ch]
0x63F295: push    eax; Dst
0x63F296: call    SaveLoad_LoadData
0x63F29B: mov     ecx, [esp+68h+var_28]
0x63F29F: mov     [edi], ecx
0x63F2A1: mov     ebp, [esi+18Ch]
0x63F2A7: cmp     dword ptr [ebp+0], 0
0x63F2AB: jz      short loc_63F2D4
0x63F2AD: push    8; Size
0x63F2AF: call    FormHeapAlloc
0x63F2B4: add     esp, 4
0x63F2B7: test    eax, eax
0x63F2B9: jz      short loc_63F2C9
0x63F2BB: mov     edx, [ebp+0]
0x63F2BE: mov     [eax], edx
0x63F2C0: mov     dword ptr [eax+4], 0
0x63F2C7: jmp     short loc_63F2CB
0x63F2C9: xor     eax, eax
0x63F2CB: mov     ecx, [ebp+4]
0x63F2CE: mov     [eax+4], ecx
0x63F2D1: mov     [ebp+4], eax
0x63F2D4: mov     [ebp+0], edi
0x63F2D7: movzx   edx, word ptr [esp+68h+var_54]
0x63F2DC: add     ebx, 1
0x63F2DF: cmp     ebx, edx
0x63F2E1: jb      loc_63F238
0x63F2E7: mov     ebx, [esp+68h+var_24]
0x63F2EB: cmp     ebx, ds:0B333C4h
0x63F2F1: jnz     short loc_63F33E
0x63F2F3: mov     edi, [esi+18Ch]
0x63F2F9: test    edi, edi
0x63F2FB: jz      short loc_63F316
0x63F2FD: lea     ecx, [ecx+0]
0x63F300: mov     eax, [edi]
0x63F302: test    eax, eax
0x63F304: jz      short loc_63F316
0x63F306: push    eax
0x63F307: call    FormHeapFree
0x63F30C: mov     edi, [edi+4]
0x63F30F: add     esp, 4
0x63F312: test    edi, edi
0x63F314: jnz     short loc_63F300
0x63F316: mov     edi, [esi+18Ch]
0x63F31C: cmp     dword ptr [edi+4], 0
0x63F320: jz      short loc_63F338
0x63F322: mov     eax, [edi+4]
0x63F325: mov     ebp, [eax+4]
0x63F328: push    eax
0x63F329: call    FormHeapFree
0x63F32E: add     esp, 4
0x63F331: test    ebp, ebp
0x63F333: mov     [edi+4], ebp
0x63F336: jnz     short loc_63F322
0x63F338: mov     dword ptr [edi], 0
0x63F33E: xor     edi, edi
0x63F340: test    [esp+68h+var_2C], 2000000h
0x63F348: mov     [esi+1F8h], edi
0x63F34E: jz      short loc_63F380
0x63F350: mov     ecx, ds:0B33B00h
0x63F356: push    1; Size
0x63F358: lea     eax, [esp+6Ch+var_2C]
0x63F35C: push    eax; Dst
0x63F35D: call    SaveLoad_LoadData
0x63F362: mov     al, byte ptr [esp+68h+var_2C]
0x63F366: cmp     al, 0FFh
0x63F368: jnz     short loc_63F372
0x63F36A: mov     [esi+1F8h], edi
0x63F370: jmp     short loc_63F3A9
0x63F372: movsx   ecx, al
0x63F375: add     ecx, 5
0x63F378: mov     [esi+1F8h], ecx
0x63F37E: jmp     short loc_63F3A9
0x63F380: mov     edx, ds:0B33B00h
0x63F386: cmp     byte ptr [edx+7Ch], 1Ch
0x63F38A: jnb     short loc_63F3A9
0x63F38C: mov     eax, [ebx]
0x63F38E: mov     edx, [eax+190h]
0x63F394: mov     ecx, ebx
0x63F396: call    edx
0x63F398: test    al, al
0x63F39A: jz      short loc_63F3A9
0x63F39C: mov     ecx, ds:0B33B00h
0x63F3A2: push    1
0x63F3A4: call    SaveLoad_AdvanceBufferOffset
0x63F3A9: mov     ecx, ds:0B33B00h
0x63F3AF: push    2; Size
0x63F3B1: lea     eax, [esp+6Ch+var_3C]
0x63F3B5: push    eax; Dst
0x63F3B6: call    SaveLoad_LoadData
0x63F3BB: mov     eax, [esp+68h+var_3C]
0x63F3BF: cmp     ax, di
0x63F3C2: jz      short loc_63F3D1
0x63F3C4: mov     ecx, ds:0B33B00h
0x63F3CA: push    eax
0x63F3CB: push    ebx
0x63F3CC: call    sub_4590E0
0x63F3D1: mov     ecx, ds:0B33B00h
0x63F3D7: cmp     byte ptr [ecx+7Ch], 5Ah ; 'Z'
0x63F3DB: jb      short loc_63F44C
0x63F3DD: lea     ebp, [esi+2C8h]
0x63F3E3: push    4; Size
0x63F3E5: lea     edx, [esp+6Ch+var_2C]
0x63F3E9: push    edx; Dst
0x63F3EA: call    SaveLoad_LoadFormID
0x63F3EF: mov     ecx, ds:0B33B00h
0x63F3F5: push    1; Size
0x63F3F7: lea     eax, [esi+edi+2DCh]
0x63F3FE: push    eax; Dst
0x63F3FF: call    SaveLoad_LoadData
0x63F404: mov     ecx, [esp+70h+var_34]
0x63F408: mov     [ebp+0], ecx
0x63F40B: mov     ecx, ds:0B33B00h
0x63F411: add     edi, 1
0x63F414: add     ebp, 4
0x63F417: cmp     edi, 5
0x63F41A: jb      short loc_63F3E3
0x63F41C: push    4; Size
0x63F41E: lea     edx, [esp+74h+var_30]
0x63F422: push    edx; Dst
0x63F423: call    SaveLoad_LoadFormID
0x63F428: mov     eax, [esp+78h+var_38]
0x63F42C: push    1; Size
0x63F42E: lea     ecx, [esi+2E8h]
0x63F434: mov     [esi+2E4h], eax
0x63F43A: push    ecx; Dst
0x63F43B: mov     ecx, ds:0B33B00h
0x63F441: call    SaveLoad_LoadData
0x63F446: mov     ecx, ds:0B33B00h
0x63F44C: cmp     byte ptr [ecx+7Ch], 5Dh ; ']'
0x63F450: pop     ebp
0x63F451: jb      short loc_63F47B
0x63F453: push    4; Size
0x63F455: lea     edx, [esi+2ACh]
0x63F45B: push    edx; Dst
0x63F45C: call    SaveLoad_LoadData
0x63F461: mov     ecx, ds:0B33B00h
0x63F467: push    4; Size
0x63F469: lea     eax, [esi+2B0h]
0x63F46F: push    eax; Dst
0x63F470: call    SaveLoad_LoadData
0x63F475: mov     ecx, ds:0B33B00h
0x63F47B: cmp     byte ptr [ecx+7Ch], 6Ah ; 'j'
0x63F47F: jb      short loc_63F49D
0x63F481: push    4; Size
0x63F483: lea     edx, [esp+78h+var_3C]
0x63F487: push    edx; Dst
0x63F488: call    SaveLoad_LoadFormID
0x63F48D: mov     eax, [esp+7Ch+var_44]
0x63F491: mov     [esi+258h], eax
0x63F497: mov     ecx, ds:0B33B00h
0x63F49D: cmp     byte ptr [ecx+7Ch], 71h ; 'q'
0x63F4A1: jb      loc_63F577
0x63F4A7: push    1; Size
0x63F4A9: lea     edx, [esi+1D0h]
0x63F4AF: push    edx; Dst
0x63F4B0: call    SaveLoad_LoadData
0x63F4B5: mov     ecx, ds:0B33B00h
0x63F4BB: push    4; Size
0x63F4BD: lea     eax, [esi+1D8h]
0x63F4C3: push    eax; Dst
0x63F4C4: call    SaveLoad_LoadData
0x63F4C9: push    4; Size
0x63F4CB: lea     ecx, [esi+1DCh]
0x63F4D1: push    ecx; Dst
0x63F4D2: mov     ecx, ds:0B33B00h
0x63F4D8: call    SaveLoad_LoadData
0x63F4DD: mov     ecx, ds:0B33B00h
0x63F4E3: push    4; Size
0x63F4E5: lea     edx, [esi+1E0h]
0x63F4EB: push    edx; Dst
0x63F4EC: call    SaveLoad_LoadData
0x63F4F1: mov     ecx, ds:0B33B00h
0x63F4F7: push    1; Size
0x63F4F9: lea     edi, [esi+2A8h]
0x63F4FF: push    edi; Dst
0x63F500: call    SaveLoad_LoadData
0x63F505: mov     ecx, ds:0B33B00h
0x63F50B: push    1; Size
0x63F50D: lea     eax, [esi+1E4h]
0x63F513: push    eax; Dst
0x63F514: call    SaveLoad_LoadData
0x63F519: push    4; Size
0x63F51B: lea     ecx, [esi+1E8h]
0x63F521: push    ecx; Dst
0x63F522: mov     ecx, ds:0B33B00h
0x63F528: call    SaveLoad_LoadData
0x63F52D: mov     ecx, ds:0B33B00h
0x63F533: push    4; Size
0x63F535: lea     edx, [esi+240h]
0x63F53B: push    edx; Dst
0x63F53C: call    SaveLoad_LoadData
0x63F541: mov     ecx, ds:0B33B00h
0x63F547: push    1; Size
0x63F549: push    edi; Dst
0x63F54A: call    SaveLoad_LoadData
0x63F54F: mov     ecx, ds:0B33B00h
0x63F555: cmp     byte ptr [ecx+7Ch], 7Dh ; '}'
0x63F559: jnb     short loc_63F577
0x63F55B: mov     edi, 5
0x63F560: push    4; Size
0x63F562: lea     eax, [esp+80h+var_44]
0x63F566: push    eax; Dst
0x63F567: call    SaveLoad_LoadFormID
0x63F56C: sub     edi, 1
0x63F56F: mov     ecx, ds:0B33B00h
0x63F575: jnz     short loc_63F560
0x63F577: mov     eax, ebx
0x63F579: test    eax, eax
0x63F57B: jz      short loc_63F5CA
0x63F57D: mov     edx, [eax]
0x63F57F: mov     ecx, eax
0x63F581: mov     eax, [edx+190h]
0x63F587: call    eax
0x63F589: test    al, al
0x63F58B: jz      short loc_63F5C4
0x63F58D: fldz
0x63F58F: fcom    dword ptr [esi+28h]
0x63F592: fnstsw  ax
0x63F594: test    ah, 5
0x63F597: jp      short loc_63F5C2
0x63F599: mov     ecx, [esp+84h+var_58]
0x63F59D: mov     eax, [ecx]
0x63F59F: cmp     eax, 6
0x63F5A2: jz      short loc_63F5C2
0x63F5A4: cmp     eax, 5
0x63F5A7: jz      short loc_63F5C2
0x63F5A9: mov     dword ptr [ecx], 2
0x63F5AF: mov     ecx, [esp+84h+var_54]
0x63F5B3: fcomp   dword ptr [ecx]
0x63F5B5: fnstsw  ax
0x63F5B7: test    ah, 1
0x63F5BA: jnz     short loc_63F5C4
0x63F5BC: fld1
0x63F5BE: fstp    dword ptr [ecx]
0x63F5C0: jmp     short loc_63F5C4
0x63F5C2: fstp    st
0x63F5C4: mov     ecx, ds:0B33B00h
0x63F5CA: call    sub_45A170
0x63F5CF: test    al, al
0x63F5D1: jz      loc_63F6F0
0x63F5D7: mov     ecx, ds:0B33B00h
0x63F5DD: mov     edi, [ecx+80h]
0x63F5E3: test    edi, edi
0x63F5E5: mov     esi, [ecx+14h]
0x63F5E8: jz      loc_63F693
0x63F5EE: mov     ecx, [edi]
0x63F5F0: push    ecx; a1
0x63F5F1: call    TESForm_LookupByFormID
0x63F5F6: movzx   edx, [esp+88h+var_78]
0x63F5FB: mov     ebx, [esp+88h+var_70]
0x63F5FF: mov     ecx, eax
0x63F601: lea     eax, [edx+ebx]
0x63F604: add     esp, 4
0x63F607: cmp     esi, eax
0x63F609: jbe     short loc_63F64C
0x63F60B: mov     eax, [edi+5]
0x63F60E: movzx   edx, byte ptr [edi+9]
0x63F612: push    eax
0x63F613: mov     eax, [ecx]
0x63F615: push    edx
0x63F616: mov     edx, [eax+0D4h]
0x63F61C: call    edx
0x63F61E: movzx   ecx, [esp+8Ch+var_78]
0x63F623: push    eax
0x63F624: mov     eax, [edi]
0x63F626: push    eax
0x63F627: push    2C9Ch
0x63F62C: sub     esi, ecx
0x63F62E: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x63F633: sub     esi, ebx
0x63F635: push    esi; ArgList
0x63F636: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x63F63B: call    PrintError
0x63F640: add     esp, 20h
0x63F643: pop     edi
0x63F644: pop     esi
0x63F645: pop     ebx
0x63F646: add     esp, 28h
0x63F649: retn    0Ch
0x63F64C: jnb     loc_63F6F0
0x63F652: mov     edx, [edi+5]
0x63F655: movzx   eax, byte ptr [edi+9]
0x63F659: push    edx
0x63F65A: mov     edx, [ecx]
0x63F65C: push    eax
0x63F65D: mov     eax, [edx+0D4h]
0x63F663: call    eax
0x63F665: mov     ecx, [edi]
0x63F667: movzx   edx, [esp+8Ch+var_78]
0x63F66C: push    eax
0x63F66D: push    ecx
0x63F66E: push    2C9Ch
0x63F673: sub     edx, esi
0x63F675: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x63F67A: add     edx, ebx
0x63F67C: push    edx; ArgList
0x63F67D: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x63F682: call    PrintError
0x63F687: add     esp, 20h
0x63F68A: pop     edi
0x63F68B: pop     esi
0x63F68C: pop     ebx
0x63F68D: add     esp, 28h
0x63F690: retn    0Ch
0x63F693: movzx   eax, [esp+84h+var_78]
0x63F698: mov     edi, [esp+84h+var_70]
0x63F69C: lea     edx, [edi+eax]
0x63F69F: cmp     esi, edx
0x63F6A1: jbe     short loc_63F6CD
0x63F6A3: movzx   ecx, byte ptr [ecx+7Ch]
0x63F6A7: push    ecx
0x63F6A8: push    2C9Ch
0x63F6AD: sub     esi, edi
0x63F6AF: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x63F6B4: sub     esi, eax
0x63F6B6: push    esi; ArgList
0x63F6B7: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x63F6BC: call    PrintError
0x63F6C1: add     esp, 14h
0x63F6C4: pop     edi
0x63F6C5: pop     esi
0x63F6C6: pop     ebx
0x63F6C7: add     esp, 28h
0x63F6CA: retn    0Ch
0x63F6CD: jnb     short loc_63F6F0
0x63F6CF: movzx   edx, byte ptr [ecx+7Ch]
0x63F6D3: push    edx
0x63F6D4: push    2C9Ch
0x63F6D9: sub     edi, esi
0x63F6DB: push    offset a_AiHighprocess; ".\\AI\\HighProcess.cpp"
0x63F6E0: add     edi, eax
0x63F6E2: push    edi; ArgList
0x63F6E3: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x63F6E8: call    PrintError
0x63F6ED: add     esp, 14h
0x63F6F0: pop     edi
0x63F6F1: pop     esi
0x63F6F2: pop     ebx
0x63F6F3: add     esp, 28h
0x63F6F6: retn    0Ch
