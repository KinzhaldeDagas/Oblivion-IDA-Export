0x44AC20: push    0FFFFFFFFh
0x44AC22: push    offset TESDataHandler_CreateBuiltinObjects_SEH
0x44AC27: mov     eax, large fs:0
0x44AC2D: push    eax
0x44AC2E: sub     esp, 0A8h
0x44AC34: push    ebx
0x44AC35: push    ebp
0x44AC36: push    esi
0x44AC37: push    edi
0x44AC38: mov     eax, ds:0B30AACh
0x44AC3D: xor     eax, esp
0x44AC3F: push    eax
0x44AC40: lea     eax, [esp+0C8h+var_C]
0x44AC47: mov     large fs:0, eax
0x44AC4D: mov     edi, ecx
0x44AC4F: xor     ebx, ebx
0x44AC51: lea     eax, [esp+0C8h+var_B4]
0x44AC55: push    eax
0x44AC56: push    1Ah
0x44AC58: mov     ecx, offset TESForm_FormIDMap
0x44AC5D: mov     ds:0B35EA4h, ebx
0x44AC63: mov     ds:0B35EACh, ebx
0x44AC69: mov     ds:0B35EB0h, ebx
0x44AC6F: mov     ds:0B35EA8h, ebx
0x44AC75: mov     ds:0B35EB8h, ebx
0x44AC7B: mov     ds:0B35EBCh, ebx
0x44AC81: mov     ds:0B35EC0h, ebx
0x44AC87: mov     ds:0B35EC4h, ebx
0x44AC8D: mov     ds:0B35EB4h, ebx
0x44AC93: mov     ds:0B36298h, ebx
0x44AC99: mov     ds:0B35EC8h, ebx
0x44AC9F: mov     ds:0B35ECCh, ebx
0x44ACA5: mov     ds:0B35ED0h, ebx
0x44ACAB: mov     ds:0B35ED4h, ebx
0x44ACB1: mov     ds:0B35ED8h, ebx
0x44ACB7: mov     ds:0B35EE0h, ebx
0x44ACBD: mov     ds:0B35EE4h, ebx
0x44ACC3: mov     ds:0B360ACh, ebx
0x44ACC9: mov     ds:0B36308h, ebx
0x44ACCF: mov     ds:0B35EDCh, ebx
0x44ACD5: mov     ds:0B362BCh, ebx
0x44ACDB: mov     [esp+0D0h+var_B4], ebx
0x44ACDF: call    NiTMap_GetAt
0x44ACE4: neg     al
0x44ACE6: push    ebx; int
0x44ACE7: push    offset ??_R0?AVTESEyes@@@8; struct TypeDescriptor *
0x44ACEC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44ACF1: push    ebx; int
0x44ACF2: sbb     eax, eax
0x44ACF4: and     eax, [esp+0D8h+var_B4]
0x44ACF8: push    eax; void *
0x44ACF9: call    OblivionDynamicCast
0x44ACFE: add     esp, 14h
0x44AD01: or      ebp, 0FFFFFFFFh
0x44AD04: cmp     eax, ebx
0x44AD06: mov     ds:0B362BCh, eax
0x44AD0B: jnz     loc_44AD95
0x44AD11: push    34h ; '4'; Size
0x44AD13: call    FormHeapAlloc
0x44AD18: add     esp, 4
0x44AD1B: mov     [esp+0C8h+var_B4], eax
0x44AD1F: cmp     eax, ebx
0x44AD21: mov     [esp+0C8h+var_4], ebx
0x44AD28: jz      short loc_44AD33
0x44AD2A: mov     ecx, eax; this
0x44AD2C: call    ??0TESEyes@@QAE@XZ; TESEyes::TESEyes(void)
0x44AD31: jmp     short loc_44AD35
0x44AD33: xor     eax, eax
0x44AD35: push    1; a3
0x44AD37: push    1Ah; a2
0x44AD39: mov     ecx, eax; this
0x44AD3B: mov     [esp+0D0h+var_4], ebp
0x44AD42: mov     ds:0B362BCh, eax
0x44AD47: call    TESForm_SetFormID
0x44AD4C: mov     ecx, ds:0B362BCh
0x44AD52: mov     edx, [ecx]
0x44AD54: mov     eax, [edx+0D8h]
0x44AD5A: push    offset aEyereanimate; "eyeReanimate"
0x44AD5F: call    eax
0x44AD61: mov     ecx, ds:0B362BCh
0x44AD67: push    ebx; a3
0x44AD68: push    offset aReanimateEyes; "Reanimate Eyes"
0x44AD6D: add     ecx, 1Ch; this
0x44AD70: call    BSStringT_Set
0x44AD75: mov     ecx, ds:0B362BCh
0x44AD7B: push    ecx
0x44AD7C: lea     ecx, [edi+3Ch]
0x44AD7F: call    BSSimpleList_PushFront
0x44AD84: mov     ecx, ds:0B362BCh
0x44AD8A: mov     edx, [ecx]
0x44AD8C: mov     eax, [edx+90h]
0x44AD92: push    ebx
0x44AD93: call    eax
0x44AD95: lea     ecx, [esp+0C8h+var_B4]
0x44AD99: push    ecx
0x44AD9A: push    19h
0x44AD9C: mov     ecx, offset TESForm_FormIDMap
0x44ADA1: mov     [esp+0D0h+var_B4], ebx
0x44ADA5: call    NiTMap_GetAt
0x44ADAA: neg     al
0x44ADAC: push    ebx; int
0x44ADAD: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x44ADB2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44ADB7: push    ebx; int
0x44ADB8: sbb     eax, eax
0x44ADBA: and     eax, [esp+0D8h+var_B4]
0x44ADBE: push    eax; void *
0x44ADBF: call    OblivionDynamicCast
0x44ADC4: add     esp, 14h
0x44ADC7: cmp     eax, ebx
0x44ADC9: mov     ds:0B36308h, eax
0x44ADCE: jnz     short loc_44AE47
0x44ADD0: push    318h; Size
0x44ADD5: call    FormHeapAlloc
0x44ADDA: add     esp, 4
0x44ADDD: mov     [esp+0C8h+var_B4], eax
0x44ADE1: cmp     eax, ebx
0x44ADE3: mov     [esp+0C8h+var_4], 1
0x44ADEE: jz      short loc_44ADF9
0x44ADF0: mov     ecx, eax; this
0x44ADF2: call    ??0TESRace@@QAE@XZ; TESRace::TESRace(void)
0x44ADF7: jmp     short loc_44ADFB
0x44ADF9: xor     eax, eax
0x44ADFB: push    1; a3
0x44ADFD: push    19h; a2
0x44ADFF: mov     ecx, eax; this
0x44AE01: mov     [esp+0D0h+var_4], ebp
0x44AE08: mov     ds:0B36308h, eax
0x44AE0D: call    TESForm_SetFormID
0x44AE12: mov     ecx, ds:0B36308h
0x44AE18: mov     edx, [ecx]
0x44AE1A: mov     eax, [edx+0D8h]
0x44AE20: push    offset aVampirerace; "VampireRace"
0x44AE25: call    eax
0x44AE27: mov     ecx, ds:0B36308h
0x44AE2D: push    ecx
0x44AE2E: lea     ecx, [edi+44h]
0x44AE31: call    BSSimpleList_PushFront
0x44AE36: mov     ecx, ds:0B36308h
0x44AE3C: mov     edx, [ecx]
0x44AE3E: mov     eax, [edx+90h]
0x44AE44: push    ebx
0x44AE45: call    eax
0x44AE47: lea     ecx, [esp+0C8h+var_B4]
0x44AE4B: push    ecx
0x44AE4C: push    18h
0x44AE4E: mov     ecx, offset TESForm_FormIDMap
0x44AE53: mov     [esp+0D0h+var_B4], ebx
0x44AE57: call    NiTMap_GetAt
0x44AE5C: neg     al
0x44AE5E: push    ebx; int
0x44AE5F: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x44AE64: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44AE69: push    ebx; int
0x44AE6A: sbb     eax, eax
0x44AE6C: and     eax, [esp+0D8h+var_B4]
0x44AE70: push    eax; void *
0x44AE71: call    OblivionDynamicCast
0x44AE76: add     esp, 14h
0x44AE79: cmp     eax, ebx
0x44AE7B: mov     ds:0B360ACh, eax
0x44AE80: jnz     loc_44AF10
0x44AE86: push    0ACh ; '¬'; Size
0x44AE8B: call    FormHeapAlloc
0x44AE90: add     esp, 4
0x44AE93: mov     [esp+0C8h+var_B4], eax
0x44AE97: cmp     eax, ebx
0x44AE99: mov     [esp+0C8h+var_4], 2
0x44AEA4: jz      short loc_44AEAF
0x44AEA6: mov     ecx, eax; this
0x44AEA8: call    ??0TESWaterForm@@QAE@XZ; TESWaterForm::TESWaterForm(void)
0x44AEAD: jmp     short loc_44AEB1
0x44AEAF: xor     eax, eax
0x44AEB1: push    1; a3
0x44AEB3: push    18h; a2
0x44AEB5: mov     ecx, eax; this
0x44AEB7: mov     [esp+0D0h+var_4], ebp
0x44AEBE: mov     ds:0B360ACh, eax
0x44AEC3: call    TESForm_SetFormID
0x44AEC8: mov     ecx, ds:0B360ACh
0x44AECE: mov     edx, [ecx]
0x44AED0: mov     eax, [edx+0D8h]
0x44AED6: push    offset aDefaultwater; "DefaultWater"
0x44AEDB: call    eax
0x44AEDD: mov     ecx, ds:0B360ACh
0x44AEE3: push    offset aWaterWater00_d; "Water\\water00.dds"
0x44AEE8: call    TESWaterForm__SetTexturePath
0x44AEED: mov     ecx, ds:0B360ACh
0x44AEF3: push    ecx
0x44AEF4: lea     ecx, [edi+0A4h]
0x44AEFA: call    BSSimpleList_PushFront
0x44AEFF: mov     ecx, ds:0B360ACh
0x44AF05: mov     edx, [ecx]
0x44AF07: mov     eax, [edx+90h]
0x44AF0D: push    ebx
0x44AF0E: call    eax
0x44AF10: lea     ecx, [esp+0C8h+var_B4]
0x44AF14: push    ecx
0x44AF15: push    12h
0x44AF17: mov     ecx, offset TESForm_FormIDMap
0x44AF1C: mov     [esp+0D0h+var_B4], ebx
0x44AF20: call    NiTMap_GetAt
0x44AF25: neg     al
0x44AF27: push    ebx; int
0x44AF28: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44AF2D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44AF32: push    ebx; int
0x44AF33: sbb     eax, eax
0x44AF35: and     eax, [esp+0D8h+var_B4]
0x44AF39: push    eax; void *
0x44AF3A: call    OblivionDynamicCast
0x44AF3F: add     esp, 14h
0x44AF42: cmp     eax, ebx
0x44AF44: mov     ds:0B35ED4h, eax
0x44AF49: jnz     loc_44AFD8
0x44AF4F: push    3Ch ; '<'; Size
0x44AF51: call    FormHeapAlloc
0x44AF56: add     esp, 4
0x44AF59: mov     [esp+0C8h+var_B4], eax
0x44AF5D: cmp     eax, ebx
0x44AF5F: mov     [esp+0C8h+var_4], 3
0x44AF6A: jz      short loc_44AF75
0x44AF6C: mov     ecx, eax; this
0x44AF6E: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44AF73: jmp     short loc_44AF77
0x44AF75: xor     eax, eax
0x44AF77: push    1; a3
0x44AF79: push    12h; a2
0x44AF7B: mov     ecx, eax; this
0x44AF7D: mov     [esp+0D0h+var_4], ebp
0x44AF84: mov     ds:0B35ED4h, eax
0x44AF89: call    TESForm_SetFormID
0x44AF8E: mov     ecx, ds:0B35ED4h
0x44AF94: mov     edx, [ecx]
0x44AF96: mov     eax, [edx+0D8h]
0x44AF9C: push    offset aHorsemarker; "HorseMarker"
0x44AFA1: call    eax
0x44AFA3: mov     ecx, ds:0B35ED4h
0x44AFA9: mov     edx, [ecx+24h]
0x44AFAC: mov     eax, [edx+18h]
0x44AFAF: add     ecx, 24h ; '$'
0x44AFB2: push    offset aMarker_horse_n; "Marker_Horse.nif"
0x44AFB7: call    eax
0x44AFB9: mov     ecx, ds:0B35ED4h
0x44AFBF: push    ecx
0x44AFC0: mov     ecx, [edi]
0x44AFC2: call    TESObjectListHead_AddObject
0x44AFC7: mov     ecx, ds:0B35ED4h
0x44AFCD: mov     edx, [ecx]
0x44AFCF: mov     eax, [edx+90h]
0x44AFD5: push    ebx
0x44AFD6: call    eax
0x44AFD8: lea     ecx, [esp+0C8h+var_B4]
0x44AFDC: push    ecx
0x44AFDD: push    194h
0x44AFE2: mov     ecx, offset TESForm_FormIDMap
0x44AFE7: mov     [esp+0D0h+var_B4], ebx
0x44AFEB: call    NiTMap_GetAt
0x44AFF0: neg     al
0x44AFF2: push    ebx; int
0x44AFF3: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x44AFF8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44AFFD: push    ebx; int
0x44AFFE: sbb     eax, eax
0x44B000: and     eax, [esp+0D8h+var_B4]
0x44B004: push    eax; void *
0x44B005: call    OblivionDynamicCast
0x44B00A: add     esp, 14h
0x44B00D: cmp     eax, ebx
0x44B00F: mov     ds:0B35EDCh, eax
0x44B014: jnz     short loc_44B08C
0x44B016: push    70h ; 'p'; Size
0x44B018: call    FormHeapAlloc
0x44B01D: add     esp, 4
0x44B020: mov     [esp+0C8h+var_B4], eax
0x44B024: cmp     eax, ebx
0x44B026: mov     [esp+0C8h+var_4], 4
0x44B031: jz      short loc_44B03C
0x44B033: mov     ecx, eax; this
0x44B035: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44B03A: jmp     short loc_44B03E
0x44B03C: xor     eax, eax
0x44B03E: push    1; a3
0x44B040: push    194h; a2
0x44B045: mov     ecx, eax; this
0x44B047: mov     [esp+0D0h+var_4], ebp
0x44B04E: mov     ds:0B35EDCh, eax
0x44B053: call    TESForm_SetFormID
0x44B058: mov     ecx, ds:0B35EDCh
0x44B05E: mov     edx, [ecx]
0x44B060: mov     eax, [edx+0D8h]
0x44B066: push    offset aVarlastone; "VarlaStone"
0x44B06B: call    eax
0x44B06D: mov     ecx, ds:0B35EDCh
0x44B073: push    ecx
0x44B074: mov     ecx, [edi]
0x44B076: call    TESObjectListHead_AddObject
0x44B07B: mov     ecx, ds:0B35EDCh
0x44B081: mov     edx, [ecx]
0x44B083: mov     eax, [edx+90h]
0x44B089: push    ebx
0x44B08A: call    eax
0x44B08C: lea     ecx, [esp+0C8h+var_B4]
0x44B090: push    ecx
0x44B091: push    191h
0x44B096: mov     ecx, offset TESForm_FormIDMap
0x44B09B: mov     [esp+0D0h+var_B4], ebx
0x44B09F: call    NiTMap_GetAt
0x44B0A4: neg     al
0x44B0A6: push    ebx; int
0x44B0A7: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x44B0AC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B0B1: push    ebx; int
0x44B0B2: sbb     eax, eax
0x44B0B4: and     eax, [esp+0D8h+var_B4]
0x44B0B8: push    eax; void *
0x44B0B9: call    OblivionDynamicCast
0x44B0BE: add     esp, 14h
0x44B0C1: cmp     eax, ebx
0x44B0C3: mov     ds:0B35ED8h, eax
0x44B0C8: jnz     short loc_44B140
0x44B0CA: push    70h ; 'p'; Size
0x44B0CC: call    FormHeapAlloc
0x44B0D1: add     esp, 4
0x44B0D4: mov     [esp+0C8h+var_B4], eax
0x44B0D8: cmp     eax, ebx
0x44B0DA: mov     [esp+0C8h+var_4], 5
0x44B0E5: jz      short loc_44B0F0
0x44B0E7: mov     ecx, eax; this
0x44B0E9: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44B0EE: jmp     short loc_44B0F2
0x44B0F0: xor     eax, eax
0x44B0F2: push    1; a3
0x44B0F4: push    191h; a2
0x44B0F9: mov     ecx, eax; this
0x44B0FB: mov     [esp+0D0h+var_4], ebp
0x44B102: mov     ds:0B35ED8h, eax
0x44B107: call    TESForm_SetFormID
0x44B10C: mov     ecx, ds:0B35ED8h
0x44B112: mov     edx, [ecx]
0x44B114: mov     eax, [edx+0D8h]
0x44B11A: push    offset aWelkyndstone; "WelkyndStone"
0x44B11F: call    eax
0x44B121: mov     ecx, ds:0B35ED8h
0x44B127: push    ecx
0x44B128: mov     ecx, [edi]
0x44B12A: call    TESObjectListHead_AddObject
0x44B12F: mov     ecx, ds:0B35ED8h
0x44B135: mov     edx, [ecx]
0x44B137: mov     eax, [edx+90h]
0x44B13D: push    ebx
0x44B13E: call    eax
0x44B140: lea     ecx, [esp+0C8h+var_B4]
0x44B144: push    ecx
0x44B145: push    192h
0x44B14A: mov     ecx, offset TESForm_FormIDMap
0x44B14F: mov     [esp+0D0h+var_B4], ebx
0x44B153: call    NiTMap_GetAt
0x44B158: neg     al
0x44B15A: push    ebx; int
0x44B15B: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x44B160: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B165: push    ebx; int
0x44B166: sbb     eax, eax
0x44B168: and     eax, [esp+0D8h+var_B4]
0x44B16C: push    eax; void *
0x44B16D: call    OblivionDynamicCast
0x44B172: add     esp, 14h
0x44B175: cmp     eax, ebx
0x44B177: mov     ds:0B35EE0h, eax
0x44B17C: jnz     short loc_44B1F4
0x44B17E: push    74h ; 't'; Size
0x44B180: call    FormHeapAlloc
0x44B185: add     esp, 4
0x44B188: mov     [esp+0C8h+var_B4], eax
0x44B18C: cmp     eax, ebx
0x44B18E: mov     [esp+0C8h+var_4], 6
0x44B199: jz      short loc_44B1A4
0x44B19B: mov     ecx, eax; this
0x44B19D: call    ??0TESSoulGem@@QAE@XZ; TESSoulGem::TESSoulGem(void)
0x44B1A2: jmp     short loc_44B1A6
0x44B1A4: xor     eax, eax
0x44B1A6: push    1; a3
0x44B1A8: push    192h; a2
0x44B1AD: mov     ecx, eax; this
0x44B1AF: mov     [esp+0D0h+var_4], ebp
0x44B1B6: mov     ds:0B35EE0h, eax
0x44B1BB: call    TESForm_SetFormID
0x44B1C0: mov     ecx, ds:0B35EE0h
0x44B1C6: mov     edx, [ecx]
0x44B1C8: mov     eax, [edx+0D8h]
0x44B1CE: push    offset aBlacksoulgem; "BlackSoulGem"
0x44B1D3: call    eax
0x44B1D5: mov     ecx, ds:0B35EE0h
0x44B1DB: push    ecx
0x44B1DC: mov     ecx, [edi]
0x44B1DE: call    TESObjectListHead_AddObject
0x44B1E3: mov     ecx, ds:0B35EE0h
0x44B1E9: mov     edx, [ecx]
0x44B1EB: mov     eax, [edx+90h]
0x44B1F1: push    ebx
0x44B1F2: call    eax
0x44B1F4: lea     ecx, [esp+0C8h+var_B4]
0x44B1F8: push    ecx
0x44B1F9: push    193h
0x44B1FE: mov     ecx, offset TESForm_FormIDMap
0x44B203: mov     [esp+0D0h+var_B4], ebx
0x44B207: call    NiTMap_GetAt
0x44B20C: neg     al
0x44B20E: push    ebx; int
0x44B20F: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x44B214: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B219: push    ebx; int
0x44B21A: sbb     eax, eax
0x44B21C: and     eax, [esp+0D8h+var_B4]
0x44B220: push    eax; void *
0x44B221: call    OblivionDynamicCast
0x44B226: add     esp, 14h
0x44B229: cmp     eax, ebx
0x44B22B: mov     ds:0B35EE4h, eax
0x44B230: jnz     short loc_44B2A8
0x44B232: push    74h ; 't'; Size
0x44B234: call    FormHeapAlloc
0x44B239: add     esp, 4
0x44B23C: mov     [esp+0C8h+var_B4], eax
0x44B240: cmp     eax, ebx
0x44B242: mov     [esp+0C8h+var_4], 7
0x44B24D: jz      short loc_44B258
0x44B24F: mov     ecx, eax; this
0x44B251: call    ??0TESSoulGem@@QAE@XZ; TESSoulGem::TESSoulGem(void)
0x44B256: jmp     short loc_44B25A
0x44B258: xor     eax, eax
0x44B25A: push    1; a3
0x44B25C: push    193h; a2
0x44B261: mov     ecx, eax; this
0x44B263: mov     [esp+0D0h+var_4], ebp
0x44B26A: mov     ds:0B35EE4h, eax
0x44B26F: call    TESForm_SetFormID
0x44B274: mov     ecx, ds:0B35EE4h
0x44B27A: mov     edx, [ecx]
0x44B27C: mov     eax, [edx+0D8h]
0x44B282: push    offset aAzurastone; "AzuraStone"
0x44B287: call    eax
0x44B289: mov     ecx, ds:0B35EE4h
0x44B28F: push    ecx
0x44B290: mov     ecx, [edi]
0x44B292: call    TESObjectListHead_AddObject
0x44B297: mov     ecx, ds:0B35EE4h
0x44B29D: mov     edx, [ecx]
0x44B29F: mov     eax, [edx+90h]
0x44B2A5: push    ebx
0x44B2A6: call    eax
0x44B2A8: lea     ecx, [esp+0C8h+var_B4]
0x44B2AC: push    ecx
0x44B2AD: push    0Ah
0x44B2AF: mov     ecx, offset TESForm_FormIDMap
0x44B2B4: mov     [esp+0D0h+var_B4], ebx
0x44B2B8: call    NiTMap_GetAt
0x44B2BD: neg     al
0x44B2BF: push    ebx; int
0x44B2C0: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x44B2C5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B2CA: push    ebx; int
0x44B2CB: sbb     eax, eax
0x44B2CD: and     eax, [esp+0D8h+var_B4]
0x44B2D1: push    eax; void *
0x44B2D2: call    OblivionDynamicCast
0x44B2D7: add     esp, 14h
0x44B2DA: cmp     eax, ebx
0x44B2DC: mov     ds:0B35EC8h, eax
0x44B2E1: jnz     short loc_44B356
0x44B2E3: push    70h ; 'p'; Size
0x44B2E5: call    FormHeapAlloc
0x44B2EA: add     esp, 4
0x44B2ED: mov     [esp+0C8h+var_B4], eax
0x44B2F1: cmp     eax, ebx
0x44B2F3: mov     [esp+0C8h+var_4], 8
0x44B2FE: jz      short loc_44B309
0x44B300: mov     ecx, eax; this
0x44B302: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44B307: jmp     short loc_44B30B
0x44B309: xor     eax, eax
0x44B30B: push    1; a3
0x44B30D: push    0Ah; a2
0x44B30F: mov     ecx, eax; this
0x44B311: mov     [esp+0D0h+var_4], ebp
0x44B318: mov     ds:0B35EC8h, eax
0x44B31D: call    TESForm_SetFormID
0x44B322: mov     ecx, ds:0B35EC8h
0x44B328: mov     edx, [ecx]
0x44B32A: mov     eax, [edx+0D8h]
0x44B330: push    offset aLockpick; "Lockpick"
0x44B335: call    eax
0x44B337: mov     ecx, ds:0B35EC8h
0x44B33D: push    ecx
0x44B33E: mov     ecx, [edi]
0x44B340: call    TESObjectListHead_AddObject
0x44B345: mov     ecx, ds:0B35EC8h
0x44B34B: mov     edx, [ecx]
0x44B34D: mov     eax, [edx+90h]
0x44B353: push    ebx
0x44B354: call    eax
0x44B356: lea     ecx, [esp+0C8h+var_B4]
0x44B35A: push    ecx
0x44B35B: push    0Bh
0x44B35D: mov     ecx, offset TESForm_FormIDMap
0x44B362: mov     [esp+0D0h+var_B4], ebx
0x44B366: call    NiTMap_GetAt
0x44B36B: neg     al
0x44B36D: push    ebx; int
0x44B36E: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x44B373: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B378: push    ebx; int
0x44B379: sbb     eax, eax
0x44B37B: and     eax, [esp+0D8h+var_B4]
0x44B37F: push    eax; void *
0x44B380: call    OblivionDynamicCast
0x44B385: add     esp, 14h
0x44B388: cmp     eax, ebx
0x44B38A: mov     ds:0B35ECCh, eax
0x44B38F: jnz     short loc_44B404
0x44B391: push    70h ; 'p'; Size
0x44B393: call    FormHeapAlloc
0x44B398: add     esp, 4
0x44B39B: mov     [esp+0C8h+var_B4], eax
0x44B39F: cmp     eax, ebx
0x44B3A1: mov     [esp+0C8h+var_4], 9
0x44B3AC: jz      short loc_44B3B7
0x44B3AE: mov     ecx, eax; this
0x44B3B0: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44B3B5: jmp     short loc_44B3B9
0x44B3B7: xor     eax, eax
0x44B3B9: push    1; a3
0x44B3BB: push    0Bh; a2
0x44B3BD: mov     ecx, eax; this
0x44B3BF: mov     [esp+0D0h+var_4], ebp
0x44B3C6: mov     ds:0B35ECCh, eax
0x44B3CB: call    TESForm_SetFormID
0x44B3D0: mov     ecx, ds:0B35ECCh
0x44B3D6: mov     edx, [ecx]
0x44B3D8: mov     eax, [edx+0D8h]
0x44B3DE: push    offset aSkeletonkey; "SkeletonKey"
0x44B3E3: call    eax
0x44B3E5: mov     ecx, ds:0B35ECCh
0x44B3EB: push    ecx
0x44B3EC: mov     ecx, [edi]
0x44B3EE: call    TESObjectListHead_AddObject
0x44B3F3: mov     ecx, ds:0B35ECCh
0x44B3F9: mov     edx, [ecx]
0x44B3FB: mov     eax, [edx+90h]
0x44B401: push    ebx
0x44B402: call    eax
0x44B404: lea     ecx, [esp+0C8h+var_B4]
0x44B408: push    ecx
0x44B409: push    0Ch
0x44B40B: mov     ecx, offset TESForm_FormIDMap
0x44B410: mov     [esp+0D0h+var_B4], ebx
0x44B414: call    NiTMap_GetAt
0x44B419: neg     al
0x44B41B: push    ebx; int
0x44B41C: push    offset ??_R0?AVTESObjectMISC@@@8; struct TypeDescriptor *
0x44B421: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B426: push    ebx; int
0x44B427: sbb     eax, eax
0x44B429: and     eax, [esp+0D8h+var_B4]
0x44B42D: push    eax; void *
0x44B42E: call    OblivionDynamicCast
0x44B433: add     esp, 14h
0x44B436: cmp     eax, ebx
0x44B438: mov     ds:0B35ED0h, eax
0x44B43D: jnz     short loc_44B4B2
0x44B43F: push    70h ; 'p'; Size
0x44B441: call    FormHeapAlloc
0x44B446: add     esp, 4
0x44B449: mov     [esp+0C8h+var_B4], eax
0x44B44D: cmp     eax, ebx
0x44B44F: mov     [esp+0C8h+var_4], 0Ah
0x44B45A: jz      short loc_44B465
0x44B45C: mov     ecx, eax; this
0x44B45E: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44B463: jmp     short loc_44B467
0x44B465: xor     eax, eax
0x44B467: push    1; a3
0x44B469: push    0Ch; a2
0x44B46B: mov     ecx, eax; this
0x44B46D: mov     [esp+0D0h+var_4], ebp
0x44B474: mov     ds:0B35ED0h, eax
0x44B479: call    TESForm_SetFormID
0x44B47E: mov     ecx, ds:0B35ED0h
0x44B484: mov     edx, [ecx]
0x44B486: mov     eax, [edx+0D8h]
0x44B48C: push    offset aRepairhammer; "RepairHammer"
0x44B491: call    eax
0x44B493: mov     ecx, ds:0B35ED0h
0x44B499: push    ecx
0x44B49A: mov     ecx, [edi]
0x44B49C: call    TESObjectListHead_AddObject
0x44B4A1: mov     ecx, ds:0B35ED0h
0x44B4A7: mov     edx, [ecx]
0x44B4A9: mov     eax, [edx+90h]
0x44B4AF: push    ebx
0x44B4B0: call    eax
0x44B4B2: lea     ecx, [esp+0C8h+var_B4]
0x44B4B6: push    ecx
0x44B4B7: push    1
0x44B4B9: mov     ecx, offset TESForm_FormIDMap
0x44B4BE: mov     [esp+0D0h+var_B4], ebx
0x44B4C2: call    NiTMap_GetAt
0x44B4C7: neg     al
0x44B4C9: push    ebx; int
0x44B4CA: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44B4CF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B4D4: push    ebx; int
0x44B4D5: sbb     eax, eax
0x44B4D7: and     eax, [esp+0D8h+var_B4]
0x44B4DB: push    eax; void *
0x44B4DC: call    OblivionDynamicCast
0x44B4E1: add     esp, 14h
0x44B4E4: cmp     eax, ebx
0x44B4E6: mov     ds:0B35EA4h, eax
0x44B4EB: jnz     loc_44B57A
0x44B4F1: push    3Ch ; '<'; Size
0x44B4F3: call    FormHeapAlloc
0x44B4F8: add     esp, 4
0x44B4FB: mov     [esp+0C8h+var_B4], eax
0x44B4FF: cmp     eax, ebx
0x44B501: mov     [esp+0C8h+var_4], 0Bh
0x44B50C: jz      short loc_44B517
0x44B50E: mov     ecx, eax; this
0x44B510: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44B515: jmp     short loc_44B519
0x44B517: xor     eax, eax
0x44B519: push    1; a3
0x44B51B: push    1; a2
0x44B51D: mov     ecx, eax; this
0x44B51F: mov     [esp+0D0h+var_4], ebp
0x44B526: mov     ds:0B35EA4h, eax
0x44B52B: call    TESForm_SetFormID
0x44B530: mov     ecx, ds:0B35EA4h
0x44B536: mov     edx, [ecx]
0x44B538: mov     eax, [edx+0D8h]
0x44B53E: push    offset aDoormarker; "DoorMarker"
0x44B543: call    eax
0x44B545: mov     ecx, ds:0B35EA4h
0x44B54B: mov     edx, [ecx+24h]
0x44B54E: mov     eax, [edx+18h]
0x44B551: add     ecx, 24h ; '$'
0x44B554: push    offset aMarkerteleport; "MarkerTeleport.nif"
0x44B559: call    eax
0x44B55B: mov     ecx, ds:0B35EA4h
0x44B561: push    ecx
0x44B562: mov     ecx, [edi]
0x44B564: call    TESObjectListHead_AddObject
0x44B569: mov     ecx, ds:0B35EA4h
0x44B56F: mov     edx, [ecx]
0x44B571: mov     eax, [edx+90h]
0x44B577: push    ebx
0x44B578: call    eax
0x44B57A: lea     ecx, [esp+0C8h+var_B4]
0x44B57E: push    ecx
0x44B57F: push    3Ch ; '<'
0x44B581: mov     ecx, offset TESForm_FormIDMap
0x44B586: mov     [esp+0D0h+var_B4], ebx
0x44B58A: call    NiTMap_GetAt
0x44B58F: neg     al
0x44B591: push    ebx; int
0x44B592: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x44B597: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B59C: push    ebx; int
0x44B59D: sbb     eax, eax
0x44B59F: and     eax, [esp+0D8h+var_B4]
0x44B5A3: push    eax; void *
0x44B5A4: call    OblivionDynamicCast
0x44B5A9: mov     esi, eax
0x44B5AB: add     esp, 14h
0x44B5AE: cmp     esi, ebx
0x44B5B0: jnz     short loc_44B62A
0x44B5B2: push    0E0h ; 'à'; Size
0x44B5B7: call    FormHeapAlloc
0x44B5BC: add     esp, 4
0x44B5BF: mov     [esp+0C8h+var_B4], eax
0x44B5C3: cmp     eax, ebx
0x44B5C5: mov     [esp+0C8h+var_4], 0Ch
0x44B5D0: jz      short loc_44B5DD
0x44B5D2: mov     ecx, eax; this
0x44B5D4: call    ??0TESWorldSpace@@QAE@XZ; TESWorldSpace::TESWorldSpace(void)
0x44B5D9: mov     esi, eax
0x44B5DB: jmp     short loc_44B5DF
0x44B5DD: xor     esi, esi
0x44B5DF: push    1; a3
0x44B5E1: push    3Ch ; '<'; a2
0x44B5E3: mov     ecx, esi; this
0x44B5E5: mov     [esp+0D0h+var_4], ebp
0x44B5EC: call    TESForm_SetFormID
0x44B5F1: mov     edx, [esi]
0x44B5F3: mov     eax, [edx+0D8h]
0x44B5F9: push    offset aTamriel; "Tamriel"
0x44B5FE: mov     ecx, esi
0x44B600: call    eax
0x44B602: mov     edx, [esi]
0x44B604: mov     eax, [edx+90h]
0x44B60A: push    ebx
0x44B60B: mov     ecx, esi
0x44B60D: call    eax
0x44B60F: push    esi
0x44B610: lea     ecx, [edi+0Ch]
0x44B613: call    BSSimpleList_PushFront
0x44B618: push    esi
0x44B619: push    offset aTamriel; "Tamriel"
0x44B61E: mov     ecx, offset off_B06164
0x44B623: call    sub_412D30
0x44B628: jmp     short loc_44B645
0x44B62A: cmp     [edi+0Ch], esi
0x44B62D: lea     ebp, [edi+0Ch]
0x44B630: jz      short loc_44B642
0x44B632: push    esi
0x44B633: mov     ecx, ebp
0x44B635: call    BSSimpleList_Remove
0x44B63A: push    esi
0x44B63B: mov     ecx, ebp
0x44B63D: call    BSSimpleList_PushFront
0x44B642: or      ebp, 0FFFFFFFFh
0x44B645: lea     ecx, [esp+0C8h+var_B4]
0x44B649: push    ecx
0x44B64A: push    3Bh ; ';'
0x44B64C: mov     ecx, offset TESForm_FormIDMap
0x44B651: mov     [esp+0D0h+var_B4], ebx
0x44B655: call    NiTMap_GetAt
0x44B65A: neg     al
0x44B65C: push    ebx; int
0x44B65D: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44B662: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B667: push    ebx; int
0x44B668: sbb     eax, eax
0x44B66A: and     eax, [esp+0D8h+var_B4]
0x44B66E: push    eax; void *
0x44B66F: call    OblivionDynamicCast
0x44B674: add     esp, 14h
0x44B677: cmp     eax, ebx
0x44B679: mov     ds:0B35EACh, eax
0x44B67E: jnz     loc_44B70D
0x44B684: push    3Ch ; '<'; Size
0x44B686: call    FormHeapAlloc
0x44B68B: add     esp, 4
0x44B68E: mov     [esp+0C8h+var_B4], eax
0x44B692: cmp     eax, ebx
0x44B694: mov     [esp+0C8h+var_4], 0Dh
0x44B69F: jz      short loc_44B6AA
0x44B6A1: mov     ecx, eax; this
0x44B6A3: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44B6A8: jmp     short loc_44B6AC
0x44B6AA: xor     eax, eax
0x44B6AC: push    1; a3
0x44B6AE: push    3Bh ; ';'; a2
0x44B6B0: mov     ecx, eax; this
0x44B6B2: mov     [esp+0D0h+var_4], ebp
0x44B6B9: mov     ds:0B35EACh, eax
0x44B6BE: call    TESForm_SetFormID
0x44B6C3: mov     ecx, ds:0B35EACh
0x44B6C9: mov     edx, [ecx]
0x44B6CB: mov     eax, [edx+0D8h]
0x44B6D1: push    offset aXmarker; "XMarker"
0x44B6D6: call    eax
0x44B6D8: mov     ecx, ds:0B35EACh
0x44B6DE: mov     edx, [ecx+24h]
0x44B6E1: mov     eax, [edx+18h]
0x44B6E4: add     ecx, 24h ; '$'
0x44B6E7: push    offset aMarkerx_nif; "MarkerX.nif"
0x44B6EC: call    eax
0x44B6EE: mov     ecx, ds:0B35EACh
0x44B6F4: push    ecx
0x44B6F5: mov     ecx, [edi]
0x44B6F7: call    TESObjectListHead_AddObject
0x44B6FC: mov     ecx, ds:0B35EACh
0x44B702: mov     edx, [ecx]
0x44B704: mov     eax, [edx+90h]
0x44B70A: push    ebx
0x44B70B: call    eax
0x44B70D: lea     ecx, [esp+0C8h+var_B4]
0x44B711: push    ecx
0x44B712: push    34h ; '4'
0x44B714: mov     ecx, offset TESForm_FormIDMap
0x44B719: mov     [esp+0D0h+var_B4], ebx
0x44B71D: call    NiTMap_GetAt
0x44B722: neg     al
0x44B724: push    ebx; int
0x44B725: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44B72A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B72F: push    ebx; int
0x44B730: sbb     eax, eax
0x44B732: and     eax, [esp+0D8h+var_B4]
0x44B736: push    eax; void *
0x44B737: call    OblivionDynamicCast
0x44B73C: add     esp, 14h
0x44B73F: cmp     eax, ebx
0x44B741: mov     ds:0B35EB0h, eax
0x44B746: jnz     loc_44B7D5
0x44B74C: push    3Ch ; '<'; Size
0x44B74E: call    FormHeapAlloc
0x44B753: add     esp, 4
0x44B756: mov     [esp+0C8h+var_B4], eax
0x44B75A: cmp     eax, ebx
0x44B75C: mov     [esp+0C8h+var_4], 0Eh
0x44B767: jz      short loc_44B772
0x44B769: mov     ecx, eax; this
0x44B76B: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44B770: jmp     short loc_44B774
0x44B772: xor     eax, eax
0x44B774: push    1; a3
0x44B776: push    34h ; '4'; a2
0x44B778: mov     ecx, eax; this
0x44B77A: mov     [esp+0D0h+var_4], ebp
0x44B781: mov     ds:0B35EB0h, eax
0x44B786: call    TESForm_SetFormID
0x44B78B: mov     ecx, ds:0B35EB0h
0x44B791: mov     edx, [ecx]
0x44B793: mov     eax, [edx+0D8h]
0x44B799: push    offset aXmarkerheading; "XMarkerHeading"
0x44B79E: call    eax
0x44B7A0: mov     ecx, ds:0B35EB0h
0x44B7A6: mov     edx, [ecx+24h]
0x44B7A9: mov     eax, [edx+18h]
0x44B7AC: add     ecx, 24h ; '$'
0x44B7AF: push    offset aMarkerxheading; "MarkerXHeading.nif"
0x44B7B4: call    eax
0x44B7B6: mov     ecx, ds:0B35EB0h
0x44B7BC: push    ecx
0x44B7BD: mov     ecx, [edi]
0x44B7BF: call    TESObjectListHead_AddObject
0x44B7C4: mov     ecx, ds:0B35EB0h
0x44B7CA: mov     edx, [ecx]
0x44B7CC: mov     eax, [edx+90h]
0x44B7D2: push    ebx
0x44B7D3: call    eax
0x44B7D5: lea     ecx, [esp+0C8h+var_B4]
0x44B7D9: push    ecx
0x44B7DA: push    10h
0x44B7DC: mov     ecx, offset TESForm_FormIDMap
0x44B7E1: mov     [esp+0D0h+var_B4], ebx
0x44B7E5: call    NiTMap_GetAt
0x44B7EA: neg     al
0x44B7EC: push    ebx; int
0x44B7ED: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44B7F2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B7F7: push    ebx; int
0x44B7F8: sbb     eax, eax
0x44B7FA: and     eax, [esp+0D8h+var_B4]
0x44B7FE: push    eax; void *
0x44B7FF: call    OblivionDynamicCast
0x44B804: add     esp, 14h
0x44B807: cmp     eax, ebx
0x44B809: mov     ds:0B35EA8h, eax
0x44B80E: jnz     loc_44B89D
0x44B814: push    3Ch ; '<'; Size
0x44B816: call    FormHeapAlloc
0x44B81B: add     esp, 4
0x44B81E: mov     [esp+0C8h+var_B4], eax
0x44B822: cmp     eax, ebx
0x44B824: mov     [esp+0C8h+var_4], 0Fh
0x44B82F: jz      short loc_44B83A
0x44B831: mov     ecx, eax; this
0x44B833: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44B838: jmp     short loc_44B83C
0x44B83A: xor     eax, eax
0x44B83C: push    1; a3
0x44B83E: push    10h; a2
0x44B840: mov     ecx, eax; this
0x44B842: mov     [esp+0D0h+var_4], ebp
0x44B849: mov     ds:0B35EA8h, eax
0x44B84E: call    TESForm_SetFormID
0x44B853: mov     ecx, ds:0B35EA8h
0x44B859: mov     edx, [ecx]
0x44B85B: mov     eax, [edx+0D8h]
0x44B861: push    offset aMapmarker; "MapMarker"
0x44B866: call    eax
0x44B868: mov     ecx, ds:0B35EA8h
0x44B86E: mov     edx, [ecx+24h]
0x44B871: mov     eax, [edx+18h]
0x44B874: add     ecx, 24h ; '$'
0x44B877: push    offset aMarker_map_nif; "Marker_Map.NIF"
0x44B87C: call    eax
0x44B87E: mov     ecx, ds:0B35EA8h
0x44B884: push    ecx
0x44B885: mov     ecx, [edi]
0x44B887: call    TESObjectListHead_AddObject
0x44B88C: mov     ecx, ds:0B35EA8h
0x44B892: mov     edx, [ecx]
0x44B894: mov     eax, [edx+90h]
0x44B89A: push    ebx
0x44B89B: call    eax
0x44B89D: lea     ecx, [esp+0C8h+var_B4]
0x44B8A1: push    ecx
0x44B8A2: push    2
0x44B8A4: mov     ecx, offset TESForm_FormIDMap
0x44B8A9: mov     [esp+0D0h+var_B4], ebx
0x44B8AD: call    NiTMap_GetAt
0x44B8B2: neg     al
0x44B8B4: push    ebx; int
0x44B8B5: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44B8BA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B8BF: push    ebx; int
0x44B8C0: sbb     eax, eax
0x44B8C2: and     eax, [esp+0D8h+var_B4]
0x44B8C6: push    eax; void *
0x44B8C7: call    OblivionDynamicCast
0x44B8CC: add     esp, 14h
0x44B8CF: cmp     eax, ebx
0x44B8D1: mov     ds:0B35EB4h, eax
0x44B8D6: jnz     loc_44B965
0x44B8DC: push    3Ch ; '<'; Size
0x44B8DE: call    FormHeapAlloc
0x44B8E3: add     esp, 4
0x44B8E6: mov     [esp+0C8h+var_B4], eax
0x44B8EA: cmp     eax, ebx
0x44B8EC: mov     [esp+0C8h+var_4], 10h
0x44B8F7: jz      short loc_44B902
0x44B8F9: mov     ecx, eax; this
0x44B8FB: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44B900: jmp     short loc_44B904
0x44B902: xor     eax, eax
0x44B904: push    1; a3
0x44B906: push    2; a2
0x44B908: mov     ecx, eax; this
0x44B90A: mov     [esp+0D0h+var_4], ebp
0x44B911: mov     ds:0B35EB4h, eax
0x44B916: call    TESForm_SetFormID
0x44B91B: mov     ecx, ds:0B35EB4h
0x44B921: mov     edx, [ecx]
0x44B923: mov     eax, [edx+0D8h]
0x44B929: push    offset aTravelmarker; "TravelMarker"
0x44B92E: call    eax
0x44B930: mov     ecx, ds:0B35EB4h
0x44B936: mov     edx, [ecx+24h]
0x44B939: mov     eax, [edx+18h]
0x44B93C: add     ecx, 24h ; '$'
0x44B93F: push    offset aMarker_travel_; "Marker_Travel.nif"
0x44B944: call    eax
0x44B946: mov     ecx, ds:0B35EB4h
0x44B94C: push    ecx
0x44B94D: mov     ecx, [edi]
0x44B94F: call    TESObjectListHead_AddObject
0x44B954: mov     ecx, ds:0B35EB4h
0x44B95A: mov     edx, [ecx]
0x44B95C: mov     eax, [edx+90h]
0x44B962: push    ebx
0x44B963: call    eax
0x44B965: lea     ecx, [esp+0C8h+var_B4]
0x44B969: push    ecx
0x44B96A: push    3
0x44B96C: mov     ecx, offset TESForm_FormIDMap
0x44B971: mov     [esp+0D0h+var_B4], ebx
0x44B975: call    NiTMap_GetAt
0x44B97A: neg     al
0x44B97C: push    ebx; int
0x44B97D: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44B982: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44B987: push    ebx; int
0x44B988: sbb     eax, eax
0x44B98A: and     eax, [esp+0D8h+var_B4]
0x44B98E: push    eax; void *
0x44B98F: call    OblivionDynamicCast
0x44B994: add     esp, 14h
0x44B997: cmp     eax, ebx
0x44B999: mov     ds:0B35EB8h, eax
0x44B99E: jnz     loc_44BA2D
0x44B9A4: push    3Ch ; '<'; Size
0x44B9A6: call    FormHeapAlloc
0x44B9AB: add     esp, 4
0x44B9AE: mov     [esp+0C8h+var_B4], eax
0x44B9B2: cmp     eax, ebx
0x44B9B4: mov     [esp+0C8h+var_4], 11h
0x44B9BF: jz      short loc_44B9CA
0x44B9C1: mov     ecx, eax; this
0x44B9C3: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44B9C8: jmp     short loc_44B9CC
0x44B9CA: xor     eax, eax
0x44B9CC: push    1; a3
0x44B9CE: push    3; a2
0x44B9D0: mov     ecx, eax; this
0x44B9D2: mov     [esp+0D0h+var_4], ebp
0x44B9D9: mov     ds:0B35EB8h, eax
0x44B9DE: call    TESForm_SetFormID
0x44B9E3: mov     ecx, ds:0B35EB8h
0x44B9E9: mov     edx, [ecx]
0x44B9EB: mov     eax, [edx+0D8h]
0x44B9F1: push    offset aNorthmarker; "NorthMarker"
0x44B9F6: call    eax
0x44B9F8: mov     ecx, ds:0B35EB8h
0x44B9FE: mov     edx, [ecx+24h]
0x44BA01: mov     eax, [edx+18h]
0x44BA04: add     ecx, 24h ; '$'
0x44BA07: push    offset aMarker_north_n; "Marker_North.nif"
0x44BA0C: call    eax
0x44BA0E: mov     ecx, ds:0B35EB8h
0x44BA14: push    ecx
0x44BA15: mov     ecx, [edi]
0x44BA17: call    TESObjectListHead_AddObject
0x44BA1C: mov     ecx, ds:0B35EB8h
0x44BA22: mov     edx, [ecx]
0x44BA24: mov     eax, [edx+90h]
0x44BA2A: push    ebx
0x44BA2B: call    eax
0x44BA2D: lea     ecx, [esp+0C8h+var_B4]
0x44BA31: push    ecx
0x44BA32: push    4
0x44BA34: mov     ecx, offset TESForm_FormIDMap
0x44BA39: mov     [esp+0D0h+var_B4], ebx
0x44BA3D: call    NiTMap_GetAt
0x44BA42: neg     al
0x44BA44: push    ebx; int
0x44BA45: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x44BA4A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44BA4F: push    ebx; int
0x44BA50: sbb     eax, eax
0x44BA52: and     eax, [esp+0D8h+var_B4]
0x44BA56: push    eax; void *
0x44BA57: call    OblivionDynamicCast
0x44BA5C: add     esp, 14h
0x44BA5F: cmp     eax, ebx
0x44BA61: mov     ds:0B35EBCh, eax
0x44BA66: jnz     loc_44BAF5
0x44BA6C: push    70h ; 'p'; Size
0x44BA6E: call    FormHeapAlloc
0x44BA73: add     esp, 4
0x44BA76: mov     [esp+0C8h+var_B4], eax
0x44BA7A: cmp     eax, ebx
0x44BA7C: mov     [esp+0C8h+var_4], 12h
0x44BA87: jz      short loc_44BA92
0x44BA89: mov     ecx, eax; this
0x44BA8B: call    ??0TESObjectDOOR@@QAE@XZ; TESObjectDOOR::TESObjectDOOR(void)
0x44BA90: jmp     short loc_44BA94
0x44BA92: xor     eax, eax
0x44BA94: push    1; a3
0x44BA96: push    4; a2
0x44BA98: mov     ecx, eax; this
0x44BA9A: mov     [esp+0D0h+var_4], ebp
0x44BAA1: mov     ds:0B35EBCh, eax
0x44BAA6: call    TESForm_SetFormID
0x44BAAB: mov     ecx, ds:0B35EBCh
0x44BAB1: mov     edx, [ecx]
0x44BAB3: mov     eax, [edx+0D8h]
0x44BAB9: push    offset aPrisonmarker; "PrisonMarker"
0x44BABE: call    eax
0x44BAC0: mov     ecx, ds:0B35EBCh
0x44BAC6: mov     edx, [ecx+30h]
0x44BAC9: mov     eax, [edx+18h]
0x44BACC: add     ecx, 30h ; '0'
0x44BACF: push    offset aMarker_prison_; "Marker_Prison.nif"
0x44BAD4: call    eax
0x44BAD6: mov     ecx, ds:0B35EBCh
0x44BADC: push    ecx
0x44BADD: mov     ecx, [edi]
0x44BADF: call    TESObjectListHead_AddObject
0x44BAE4: mov     ecx, ds:0B35EBCh
0x44BAEA: mov     edx, [ecx]
0x44BAEC: mov     eax, [edx+90h]
0x44BAF2: push    ebx
0x44BAF3: call    eax
0x44BAF5: lea     ecx, [esp+0C8h+var_B4]
0x44BAF9: push    ecx
0x44BAFA: push    6
0x44BAFC: mov     ecx, offset TESForm_FormIDMap
0x44BB01: mov     [esp+0D0h+var_B4], ebx
0x44BB05: call    NiTMap_GetAt
0x44BB0A: neg     al
0x44BB0C: push    ebx; int
0x44BB0D: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44BB12: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44BB17: push    ebx; int
0x44BB18: sbb     eax, eax
0x44BB1A: and     eax, [esp+0D8h+var_B4]
0x44BB1E: push    eax; void *
0x44BB1F: call    OblivionDynamicCast
0x44BB24: add     esp, 14h
0x44BB27: cmp     eax, ebx
0x44BB29: mov     ds:0B35EC0h, eax
0x44BB2E: jnz     loc_44BBBD
0x44BB34: push    3Ch ; '<'; Size
0x44BB36: call    FormHeapAlloc
0x44BB3B: add     esp, 4
0x44BB3E: mov     [esp+0C8h+var_B4], eax
0x44BB42: cmp     eax, ebx
0x44BB44: mov     [esp+0C8h+var_4], 13h
0x44BB4F: jz      short loc_44BB5A
0x44BB51: mov     ecx, eax; this
0x44BB53: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44BB58: jmp     short loc_44BB5C
0x44BB5A: xor     eax, eax
0x44BB5C: push    1; a3
0x44BB5E: push    6; a2
0x44BB60: mov     ecx, eax; this
0x44BB62: mov     [esp+0D0h+var_4], ebp
0x44BB69: mov     ds:0B35EC0h, eax
0x44BB6E: call    TESForm_SetFormID
0x44BB73: mov     ecx, ds:0B35EC0h
0x44BB79: mov     edx, [ecx]
0x44BB7B: mov     eax, [edx+0D8h]
0x44BB81: push    offset aTemplemarker; "TempleMarker"
0x44BB86: call    eax
0x44BB88: mov     ecx, ds:0B35EC0h
0x44BB8E: mov     edx, [ecx+24h]
0x44BB91: mov     eax, [edx+18h]
0x44BB94: add     ecx, 24h ; '$'
0x44BB97: push    offset aMarker_temple_; "Marker_Temple.nif"
0x44BB9C: call    eax
0x44BB9E: mov     ecx, ds:0B35EC0h
0x44BBA4: push    ecx
0x44BBA5: mov     ecx, [edi]
0x44BBA7: call    TESObjectListHead_AddObject
0x44BBAC: mov     ecx, ds:0B35EC0h
0x44BBB2: mov     edx, [ecx]
0x44BBB4: mov     eax, [edx+90h]
0x44BBBA: push    ebx
0x44BBBB: call    eax
0x44BBBD: lea     ecx, [esp+0C8h+var_B4]
0x44BBC1: push    ecx
0x44BBC2: push    5
0x44BBC4: mov     ecx, offset TESForm_FormIDMap
0x44BBC9: mov     [esp+0D0h+var_B4], ebx
0x44BBCD: call    NiTMap_GetAt
0x44BBD2: neg     al
0x44BBD4: push    ebx; int
0x44BBD5: push    offset ??_R0?AVTESObjectSTAT@@@8; struct TypeDescriptor *
0x44BBDA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44BBDF: push    ebx; int
0x44BBE0: sbb     eax, eax
0x44BBE2: and     eax, [esp+0D8h+var_B4]
0x44BBE6: push    eax; void *
0x44BBE7: call    OblivionDynamicCast
0x44BBEC: add     esp, 14h
0x44BBEF: cmp     eax, ebx
0x44BBF1: mov     ds:0B35EC4h, eax
0x44BBF6: jnz     loc_44BC85
0x44BBFC: push    3Ch ; '<'; Size
0x44BBFE: call    FormHeapAlloc
0x44BC03: add     esp, 4
0x44BC06: mov     [esp+0C8h+var_B4], eax
0x44BC0A: cmp     eax, ebx
0x44BC0C: mov     [esp+0C8h+var_4], 14h
0x44BC17: jz      short loc_44BC22
0x44BC19: mov     ecx, eax; this
0x44BC1B: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44BC20: jmp     short loc_44BC24
0x44BC22: xor     eax, eax
0x44BC24: push    1; a3
0x44BC26: push    5; a2
0x44BC28: mov     ecx, eax; this
0x44BC2A: mov     [esp+0D0h+var_4], ebp
0x44BC31: mov     ds:0B35EC4h, eax
0x44BC36: call    TESForm_SetFormID
0x44BC3B: mov     ecx, ds:0B35EC4h
0x44BC41: mov     edx, [ecx]
0x44BC43: mov     eax, [edx+0D8h]
0x44BC49: push    offset aDivinemarker; "DivineMarker"
0x44BC4E: call    eax
0x44BC50: mov     ecx, ds:0B35EC4h
0x44BC56: mov     edx, [ecx+24h]
0x44BC59: mov     eax, [edx+18h]
0x44BC5C: add     ecx, 24h ; '$'
0x44BC5F: push    offset aMarker_divine_; "Marker_Divine.nif"
0x44BC64: call    eax
0x44BC66: mov     ecx, ds:0B35EC4h
0x44BC6C: push    ecx
0x44BC6D: mov     ecx, [edi]
0x44BC6F: call    TESObjectListHead_AddObject
0x44BC74: mov     ecx, ds:0B35EC4h
0x44BC7A: mov     edx, [ecx]
0x44BC7C: mov     eax, [edx+90h]
0x44BC82: push    ebx
0x44BC83: call    eax
0x44BC85: lea     ecx, [esp+0C8h+var_B4]
0x44BC89: push    ecx
0x44BC8A: push    13h
0x44BC8C: mov     ecx, offset TESForm_FormIDMap
0x44BC91: mov     [esp+0D0h+var_B4], ebx
0x44BC95: call    NiTMap_GetAt
0x44BC9A: neg     al
0x44BC9C: push    ebx; int
0x44BC9D: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x44BCA2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44BCA7: push    ebx; int
0x44BCA8: sbb     eax, eax
0x44BCAA: and     eax, [esp+0D8h+var_B4]
0x44BCAE: push    eax; void *
0x44BCAF: call    OblivionDynamicCast
0x44BCB4: add     esp, 14h
0x44BCB7: cmp     eax, ebx
0x44BCB9: mov     ds:0B36298h, eax
0x44BCBE: jnz     loc_44BD60
0x44BCC4: push    44h ; 'D'; Size
0x44BCC6: call    FormHeapAlloc
0x44BCCB: add     esp, 4
0x44BCCE: mov     [esp+0C8h+var_B4], eax
0x44BCD2: cmp     eax, ebx
0x44BCD4: mov     [esp+0C8h+var_4], 15h
0x44BCDF: jz      short loc_44BCEA
0x44BCE1: mov     ecx, eax
0x44BCE3: call    sub_51F820
0x44BCE8: jmp     short loc_44BCEC
0x44BCEA: xor     eax, eax
0x44BCEC: push    1; a3
0x44BCEE: push    13h; a2
0x44BCF0: mov     ecx, eax; this
0x44BCF2: mov     [esp+0D0h+var_4], ebp
0x44BCF9: mov     ds:0B36298h, eax
0x44BCFE: call    TESForm_SetFormID
0x44BD03: mov     ecx, ds:0B36298h
0x44BD09: mov     edx, [ecx]
0x44BD0B: mov     eax, [edx+0D8h]
0x44BD11: push    offset aCreaturefactio; "CreatureFaction"
0x44BD16: call    eax
0x44BD18: mov     ecx, ds:0B36298h
0x44BD1E: push    ecx
0x44BD1F: lea     ecx, [edi+5Ch]
0x44BD22: call    BSSimpleList_PushFront
0x44BD27: mov     eax, ds:0B36298h
0x44BD2C: push    64h ; 'd'
0x44BD2E: push    eax
0x44BD2F: lea     ecx, [eax+24h]
0x44BD32: call    sub_46E900
0x44BD37: mov     ecx, ds:0B36298h
0x44BD3D: call    sub_51F760
0x44BD42: mov     ecx, ds:0B36298h; this
0x44BD48: push    1; a2
0x44BD4A: call    TESForm_SetIsLinked
0x44BD4F: mov     ecx, ds:0B36298h
0x44BD55: mov     edx, [ecx]
0x44BD57: mov     eax, [edx+90h]
0x44BD5D: push    ebx
0x44BD5E: call    eax
0x44BD60: lea     ecx, [esp+0C8h+var_B4]
0x44BD64: push    ecx
0x44BD65: push    0Fh
0x44BD67: mov     ecx, offset TESForm_FormIDMap
0x44BD6C: mov     [esp+0D0h+var_B4], ebx
0x44BD70: call    NiTMap_GetAt
0x44BD75: test    al, al
0x44BD77: jz      short loc_44BD7F
0x44BD79: cmp     [esp+0C8h+var_B4], ebx
0x44BD7D: jnz     short loc_44BDE1
0x44BD7F: push    70h ; 'p'; Size
0x44BD81: call    FormHeapAlloc
0x44BD86: add     esp, 4
0x44BD89: mov     [esp+0C8h+var_B4], eax
0x44BD8D: cmp     eax, ebx
0x44BD8F: mov     [esp+0C8h+var_4], 16h
0x44BD9A: jz      short loc_44BDA7
0x44BD9C: mov     ecx, eax; this
0x44BD9E: call    ??0TESObjectMISC@@QAE@XZ; TESObjectMISC::TESObjectMISC(void)
0x44BDA3: mov     esi, eax
0x44BDA5: jmp     short loc_44BDA9
0x44BDA7: xor     esi, esi
0x44BDA9: push    1; a3
0x44BDAB: push    0Fh; a2
0x44BDAD: mov     ecx, esi; this
0x44BDAF: mov     [esp+0D0h+var_4], ebp
0x44BDB6: call    TESForm_SetFormID
0x44BDBB: mov     edx, [esi]
0x44BDBD: mov     eax, [edx+0D8h]
0x44BDC3: push    offset aGold001; "Gold001"
0x44BDC8: mov     ecx, esi
0x44BDCA: call    eax
0x44BDCC: mov     ecx, [edi]
0x44BDCE: push    esi
0x44BDCF: call    TESObjectListHead_AddObject
0x44BDD4: mov     edx, [esi]
0x44BDD6: mov     eax, [edx+90h]
0x44BDDC: push    ebx
0x44BDDD: mov     ecx, esi
0x44BDDF: call    eax
0x44BDE1: lea     ecx, [esp+0C8h+var_B4]
0x44BDE5: push    ecx
0x44BDE6: push    0Eh
0x44BDE8: mov     ecx, offset TESForm_FormIDMap
0x44BDED: mov     [esp+0D0h+var_B4], ebx
0x44BDF1: call    NiTMap_GetAt
0x44BDF6: neg     al
0x44BDF8: sbb     eax, eax
0x44BDFA: and     eax, [esp+0C8h+var_B4]
0x44BDFE: cmp     eax, ebx
0x44BE00: mov     ds:0B33AA8h, eax
0x44BE05: jnz     loc_44BECA
0x44BE0B: push    7Ch ; '|'; Size
0x44BE0D: call    FormHeapAlloc
0x44BE12: add     esp, 4
0x44BE15: mov     [esp+0C8h+var_B4], eax
0x44BE19: cmp     eax, ebx
0x44BE1B: mov     [esp+0C8h+var_4], 17h
0x44BE26: jz      short loc_44BE31
0x44BE28: mov     ecx, eax; this
0x44BE2A: call    ??0TESObjectCONT@@QAE@XZ; TESObjectCONT::TESObjectCONT(void)
0x44BE2F: jmp     short loc_44BE33
0x44BE31: xor     eax, eax
0x44BE33: push    1; a3
0x44BE35: push    0Eh; a2
0x44BE37: mov     ecx, eax; this
0x44BE39: mov     [esp+0D0h+var_4], ebp
0x44BE40: mov     ds:0B33AA8h, eax
0x44BE45: call    TESForm_SetFormID
0x44BE4A: mov     ecx, ds:0B33AA8h
0x44BE50: mov     edx, [ecx]
0x44BE52: mov     eax, [edx+0D8h]
0x44BE58: push    offset aLootbag; "LootBag"
0x44BE5D: call    eax
0x44BE5F: mov     ecx, ds:0B33AA8h
0x44BE65: mov     edx, [ecx+40h]
0x44BE68: mov     eax, [edx+14h]
0x44BE6B: add     ecx, 40h ; '@'
0x44BE6E: call    eax
0x44BE70: test    eax, eax
0x44BE72: jz      short loc_44BE95
0x44BE74: mov     ecx, ds:0B33AA8h
0x44BE7A: mov     edx, [ecx+40h]
0x44BE7D: mov     eax, [edx+14h]
0x44BE80: add     ecx, 40h ; '@'
0x44BE83: call    eax
0x44BE85: lea     edx, [eax+1]
0x44BE88: mov     cl, [eax]
0x44BE8A: add     eax, 1
0x44BE8D: cmp     cl, bl
0x44BE8F: jnz     short loc_44BE88
0x44BE91: sub     eax, edx
0x44BE93: jnz     short loc_44BEAB
0x44BE95: mov     ecx, ds:0B33AA8h
0x44BE9B: mov     edx, [ecx+40h]
0x44BE9E: mov     eax, [edx+18h]
0x44BEA1: add     ecx, 40h ; '@'
0x44BEA4: push    offset aClutterSack01_; "Clutter\\Sack01.NIF"
0x44BEA9: call    eax
0x44BEAB: mov     ecx, ds:0B33AA8h
0x44BEB1: push    ecx
0x44BEB2: mov     ecx, [edi]
0x44BEB4: call    TESObjectListHead_AddObject
0x44BEB9: mov     ecx, ds:0B33AA8h
0x44BEBF: mov     edx, [ecx]
0x44BEC1: mov     eax, [edx+90h]
0x44BEC7: push    ebx
0x44BEC8: call    eax
0x44BECA: lea     ecx, [esp+0C8h+var_B4]
0x44BECE: push    ecx
0x44BECF: push    11h
0x44BED1: mov     ecx, offset TESForm_FormIDMap
0x44BED6: mov     [esp+0D0h+var_B4], ebx
0x44BEDA: call    NiTMap_GetAt
0x44BEDF: neg     al
0x44BEE1: sbb     eax, eax
0x44BEE3: and     eax, [esp+0C8h+var_B4]
0x44BEE7: cmp     eax, ebx
0x44BEE9: mov     ds:0B33AACh, eax
0x44BEEE: jnz     short loc_44BF63
0x44BEF0: push    7Ch ; '|'; Size
0x44BEF2: call    FormHeapAlloc
0x44BEF7: add     esp, 4
0x44BEFA: mov     [esp+0C8h+var_B4], eax
0x44BEFE: cmp     eax, ebx
0x44BF00: mov     [esp+0C8h+var_4], 18h
0x44BF0B: jz      short loc_44BF16
0x44BF0D: mov     ecx, eax; this
0x44BF0F: call    ??0TESObjectCONT@@QAE@XZ; TESObjectCONT::TESObjectCONT(void)
0x44BF14: jmp     short loc_44BF18
0x44BF16: xor     eax, eax
0x44BF18: push    1; a3
0x44BF1A: push    11h; a2
0x44BF1C: mov     ecx, eax; this
0x44BF1E: mov     [esp+0D0h+var_4], ebp
0x44BF25: mov     ds:0B33AACh, eax
0x44BF2A: call    TESForm_SetFormID
0x44BF2F: mov     ecx, ds:0B33AACh
0x44BF35: mov     edx, [ecx]
0x44BF37: mov     eax, [edx+0D8h]
0x44BF3D: push    offset aStolengoods; "StolenGoods"
0x44BF42: call    eax
0x44BF44: mov     ecx, ds:0B33AACh
0x44BF4A: push    ecx
0x44BF4B: mov     ecx, [edi]
0x44BF4D: call    TESObjectListHead_AddObject
0x44BF52: mov     ecx, ds:0B33AACh
0x44BF58: mov     edx, [ecx]
0x44BF5A: mov     eax, [edx+90h]
0x44BF60: push    ebx
0x44BF61: call    eax
0x44BF63: lea     ecx, [esp+0C8h+var_B4]
0x44BF67: push    ecx
0x44BF68: push    17h
0x44BF6A: mov     ecx, offset TESForm_FormIDMap
0x44BF6F: mov     [esp+0D0h+var_B4], ebx
0x44BF73: call    NiTMap_GetAt
0x44BF78: neg     al
0x44BF7A: sbb     eax, eax
0x44BF7C: and     eax, [esp+0C8h+var_B4]
0x44BF80: cmp     eax, ebx
0x44BF82: mov     ds:0B33AB0h, eax
0x44BF87: jnz     loc_44C078
0x44BF8D: push    0DCh ; 'Ü'; Size
0x44BF92: call    FormHeapAlloc
0x44BF97: add     esp, 4
0x44BF9A: mov     [esp+0C8h+var_B4], eax
0x44BF9E: cmp     eax, ebx
0x44BFA0: mov     [esp+0C8h+var_4], 19h
0x44BFAB: jz      short loc_44BFB6
0x44BFAD: mov     ecx, eax; this
0x44BFAF: call    ??0TESObjectCLOT@@QAE@XZ; TESObjectCLOT::TESObjectCLOT(void)
0x44BFB4: jmp     short loc_44BFB8
0x44BFB6: xor     eax, eax
0x44BFB8: push    1; a3
0x44BFBA: push    17h; a2
0x44BFBC: mov     ecx, eax; this
0x44BFBE: mov     [esp+0D0h+var_4], ebp
0x44BFC5: mov     ds:0B33AB0h, eax
0x44BFCA: call    TESForm_SetFormID
0x44BFCF: mov     ecx, ds:0B33AB0h
0x44BFD5: mov     edx, [ecx]
0x44BFD7: mov     eax, [edx+0D8h]
0x44BFDD: push    offset aJailshirt; "JailShirt"
0x44BFE2: call    eax
0x44BFE4: mov     ecx, ds:0B33AB0h
0x44BFEA: push    offset aClothesLowercl; "Clothes\\LowerClass\\05\\M\\Shirt_gnd.N"...
0x44BFEF: push    ebx
0x44BFF0: add     ecx, 5Ch ; '\'
0x44BFF3: call    TESBipedModelForm_SetWorldModelPath
0x44BFF8: mov     ecx, ds:0B33AB0h
0x44BFFE: push    offset aClothesLower_0; "Clothes\\LowerClass\\05\\F\\Shirt_gnd.N"...
0x44C003: push    1
0x44C005: add     ecx, 5Ch ; '\'
0x44C008: call    TESBipedModelForm_SetWorldModelPath
0x44C00D: mov     ecx, ds:0B33AB0h
0x44C013: push    offset aClothesLower_1; "Clothes\\LowerClass\\05\\M\\Shirt.NIF"
0x44C018: push    ebx
0x44C019: add     ecx, 5Ch ; '\'
0x44C01C: call    TESBipedModelForm_SetModelPath
0x44C021: mov     ecx, ds:0B33AB0h
0x44C027: push    offset aClothesLower_2; "Clothes\\LowerClass\\05\\F\\Shirt.NIF"
0x44C02C: push    1
0x44C02E: add     ecx, 5Ch ; '\'
0x44C031: call    TESBipedModelForm_SetModelPath
0x44C036: mov     ecx, ds:0B33AB0h
0x44C03C: push    1
0x44C03E: push    2
0x44C040: add     ecx, 5Ch ; '\'
0x44C043: call    TESBipedModelForm_SetCoversBipedSlot
0x44C048: mov     ecx, ds:0B33AB0h
0x44C04E: push    ebx
0x44C04F: push    3
0x44C051: add     ecx, 5Ch ; '\'
0x44C054: call    TESBipedModelForm_SetCoversBipedSlot
0x44C059: mov     ecx, ds:0B33AB0h
0x44C05F: push    ecx
0x44C060: mov     ecx, [edi]
0x44C062: call    TESObjectListHead_AddObject
0x44C067: mov     ecx, ds:0B33AB0h
0x44C06D: mov     edx, [ecx]
0x44C06F: mov     eax, [edx+90h]
0x44C075: push    ebx
0x44C076: call    eax
0x44C078: lea     ecx, [esp+0C8h+var_B4]
0x44C07C: push    ecx
0x44C07D: push    15h
0x44C07F: mov     ecx, offset TESForm_FormIDMap
0x44C084: mov     [esp+0D0h+var_B4], ebx
0x44C088: call    NiTMap_GetAt
0x44C08D: neg     al
0x44C08F: sbb     eax, eax
0x44C091: and     eax, [esp+0C8h+var_B4]
0x44C095: cmp     eax, ebx
0x44C097: mov     ds:0B33AB4h, eax
0x44C09C: jnz     loc_44C18D
0x44C0A2: push    0DCh ; 'Ü'; Size
0x44C0A7: call    FormHeapAlloc
0x44C0AC: add     esp, 4
0x44C0AF: mov     [esp+0C8h+var_B4], eax
0x44C0B3: cmp     eax, ebx
0x44C0B5: mov     [esp+0C8h+var_4], 1Ah
0x44C0C0: jz      short loc_44C0CB
0x44C0C2: mov     ecx, eax; this
0x44C0C4: call    ??0TESObjectCLOT@@QAE@XZ; TESObjectCLOT::TESObjectCLOT(void)
0x44C0C9: jmp     short loc_44C0CD
0x44C0CB: xor     eax, eax
0x44C0CD: push    1; a3
0x44C0CF: push    15h; a2
0x44C0D1: mov     ecx, eax; this
0x44C0D3: mov     [esp+0D0h+var_4], ebp
0x44C0DA: mov     ds:0B33AB4h, eax
0x44C0DF: call    TESForm_SetFormID
0x44C0E4: mov     ecx, ds:0B33AB4h
0x44C0EA: mov     edx, [ecx]
0x44C0EC: mov     eax, [edx+0D8h]
0x44C0F2: push    offset aJailpants; "JailPants"
0x44C0F7: call    eax
0x44C0F9: mov     ecx, ds:0B33AB4h
0x44C0FF: push    offset aClothesLower_3; "Clothes\\LowerClass\\05\\M\\Pants_gnd.N"...
0x44C104: push    ebx
0x44C105: add     ecx, 5Ch ; '\'
0x44C108: call    TESBipedModelForm_SetWorldModelPath
0x44C10D: mov     ecx, ds:0B33AB4h
0x44C113: push    offset aClothesLower_4; "Clothes\\LowerClass\\05\\F\\Pants_gnd.N"...
0x44C118: push    1
0x44C11A: add     ecx, 5Ch ; '\'
0x44C11D: call    TESBipedModelForm_SetWorldModelPath
0x44C122: mov     ecx, ds:0B33AB4h
0x44C128: push    offset aClothesLower_5; "Clothes\\LowerClass\\05\\M\\Pants.NIF"
0x44C12D: push    ebx
0x44C12E: add     ecx, 5Ch ; '\'
0x44C131: call    TESBipedModelForm_SetModelPath
0x44C136: mov     ecx, ds:0B33AB4h
0x44C13C: push    offset aClothesLower_6; "Clothes\\LowerClass\\05\\F\\Pants.NIF"
0x44C141: push    1
0x44C143: add     ecx, 5Ch ; '\'
0x44C146: call    TESBipedModelForm_SetModelPath
0x44C14B: mov     ecx, ds:0B33AB4h
0x44C151: push    ebx
0x44C152: push    2
0x44C154: add     ecx, 5Ch ; '\'
0x44C157: call    TESBipedModelForm_SetCoversBipedSlot
0x44C15C: mov     ecx, ds:0B33AB4h
0x44C162: push    1
0x44C164: push    3
0x44C166: add     ecx, 5Ch ; '\'
0x44C169: call    TESBipedModelForm_SetCoversBipedSlot
0x44C16E: mov     ecx, ds:0B33AB4h
0x44C174: push    ecx
0x44C175: mov     ecx, [edi]
0x44C177: call    TESObjectListHead_AddObject
0x44C17C: mov     ecx, ds:0B33AB4h
0x44C182: mov     edx, [ecx]
0x44C184: mov     eax, [edx+90h]
0x44C18A: push    ebx
0x44C18B: call    eax
0x44C18D: lea     ecx, [esp+0C8h+var_B4]
0x44C191: push    ecx
0x44C192: push    16h
0x44C194: mov     ecx, offset TESForm_FormIDMap
0x44C199: mov     [esp+0D0h+var_B4], ebx
0x44C19D: call    NiTMap_GetAt
0x44C1A2: neg     al
0x44C1A4: sbb     eax, eax
0x44C1A6: and     eax, [esp+0C8h+var_B4]
0x44C1AA: cmp     eax, ebx
0x44C1AC: mov     ds:0B33AB8h, eax
0x44C1B1: jnz     loc_44C2B3
0x44C1B7: push    0DCh ; 'Ü'; Size
0x44C1BC: call    FormHeapAlloc
0x44C1C1: add     esp, 4
0x44C1C4: mov     [esp+0C8h+var_B4], eax
0x44C1C8: cmp     eax, ebx
0x44C1CA: mov     [esp+0C8h+var_4], 1Bh
0x44C1D5: jz      short loc_44C1E0
0x44C1D7: mov     ecx, eax; this
0x44C1D9: call    ??0TESObjectCLOT@@QAE@XZ; TESObjectCLOT::TESObjectCLOT(void)
0x44C1DE: jmp     short loc_44C1E2
0x44C1E0: xor     eax, eax
0x44C1E2: push    1; a3
0x44C1E4: push    16h; a2
0x44C1E6: mov     ecx, eax; this
0x44C1E8: mov     [esp+0D0h+var_4], ebp
0x44C1EF: mov     ds:0B33AB8h, eax
0x44C1F4: call    TESForm_SetFormID
0x44C1F9: mov     ecx, ds:0B33AB8h
0x44C1FF: mov     edx, [ecx]
0x44C201: mov     eax, [edx+0D8h]
0x44C207: push    offset aJailshoes; "JailShoes"
0x44C20C: call    eax
0x44C20E: mov     ecx, ds:0B33AB8h
0x44C214: push    offset aClothesLower_7; "Clothes\\LowerClass\\05\\M\\Shoes_gnd.N"...
0x44C219: push    ebx
0x44C21A: add     ecx, 5Ch ; '\'
0x44C21D: call    TESBipedModelForm_SetWorldModelPath
0x44C222: mov     ecx, ds:0B33AB8h
0x44C228: push    offset aClothesLower_8; "Clothes\\LowerClass\\05\\F\\Shoes_gnd.N"...
0x44C22D: push    1
0x44C22F: add     ecx, 5Ch ; '\'
0x44C232: call    TESBipedModelForm_SetWorldModelPath
0x44C237: mov     ecx, ds:0B33AB8h
0x44C23D: push    offset aClothesLower_9; "Clothes\\LowerClass\\05\\M\\Shoes.NIF"
0x44C242: push    ebx
0x44C243: add     ecx, 5Ch ; '\'
0x44C246: call    TESBipedModelForm_SetModelPath
0x44C24B: mov     ecx, ds:0B33AB8h
0x44C251: push    offset aClothesLowe_10; "Clothes\\LowerClass\\05\\F\\Shoes.NIF"
0x44C256: push    1
0x44C258: add     ecx, 5Ch ; '\'
0x44C25B: call    TESBipedModelForm_SetModelPath
0x44C260: mov     ecx, ds:0B33AB8h
0x44C266: push    ebx
0x44C267: push    2
0x44C269: add     ecx, 5Ch ; '\'
0x44C26C: call    TESBipedModelForm_SetCoversBipedSlot
0x44C271: mov     ecx, ds:0B33AB8h
0x44C277: push    ebx
0x44C278: push    3
0x44C27A: add     ecx, 5Ch ; '\'
0x44C27D: call    TESBipedModelForm_SetCoversBipedSlot
0x44C282: mov     ecx, ds:0B33AB8h
0x44C288: push    1
0x44C28A: push    5
0x44C28C: add     ecx, 5Ch ; '\'
0x44C28F: call    TESBipedModelForm_SetCoversBipedSlot
0x44C294: mov     ecx, ds:0B33AB8h
0x44C29A: push    ecx
0x44C29B: mov     ecx, [edi]
0x44C29D: call    TESObjectListHead_AddObject
0x44C2A2: mov     ecx, ds:0B33AB8h
0x44C2A8: mov     edx, [ecx]
0x44C2AA: mov     eax, [edx+90h]
0x44C2B0: push    ebx
0x44C2B1: call    eax
0x44C2B3: xor     ebp, ebp
0x44C2B5: mov     eax, ss:dword_B067C0[ebp]
0x44C2BB: cmp     eax, ebx
0x44C2BD: jz      short loc_44C2DD
0x44C2BF: lea     ecx, [esp+0C8h+var_B4]
0x44C2C3: push    ecx
0x44C2C4: push    eax
0x44C2C5: mov     ecx, offset TESForm_FormIDMap
0x44C2CA: mov     [esp+0D0h+var_B4], ebx
0x44C2CE: call    NiTMap_GetAt
0x44C2D3: test    al, al
0x44C2D5: jz      short loc_44C2DD
0x44C2D7: cmp     [esp+0C8h+var_B4], ebx
0x44C2DB: jnz     short loc_44C34A
0x44C2DD: push    3Ch ; '<'; Size
0x44C2DF: call    FormHeapAlloc
0x44C2E4: add     esp, 4
0x44C2E7: mov     [esp+0C8h+var_B4], eax
0x44C2EB: cmp     eax, ebx
0x44C2ED: mov     [esp+0C8h+var_4], 1Ch
0x44C2F8: jz      short loc_44C305
0x44C2FA: mov     ecx, eax; this
0x44C2FC: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44C301: mov     esi, eax
0x44C303: jmp     short loc_44C307
0x44C305: xor     esi, esi
0x44C307: mov     edx, ss:dword_B067C0[ebp]
0x44C30D: push    1; a3
0x44C30F: push    edx; a2
0x44C310: mov     ecx, esi; this
0x44C312: mov     [esp+0D0h+var_4], 0FFFFFFFFh
0x44C31D: call    TESForm_SetFormID
0x44C322: mov     ecx, ss:off_B06818[ebp]; "FlameNode1"
0x44C328: mov     eax, [esi]
0x44C32A: mov     edx, [eax+0D8h]
0x44C330: push    ecx
0x44C331: mov     ecx, esi
0x44C333: call    edx
0x44C335: mov     ecx, [edi]
0x44C337: push    esi
0x44C338: call    TESObjectListHead_AddObject
0x44C33D: mov     eax, [esi]
0x44C33F: mov     edx, [eax+90h]
0x44C345: push    ebx
0x44C346: mov     ecx, esi
0x44C348: call    edx
0x44C34A: add     ebp, 4
0x44C34D: cmp     ebp, 54h ; 'T'
0x44C350: jl      loc_44C2B5
0x44C356: mov     [esp+0C8h+a2], 64h ; 'd'
0x44C35E: mov     [esp+0C8h+var_A8], 65h ; 'e'
0x44C366: mov     [esp+0C8h+var_A4], 66h ; 'f'
0x44C36E: mov     [esp+0C8h+var_A0], 67h ; 'g'
0x44C376: mov     [esp+0C8h+var_9C], 68h ; 'h'
0x44C37E: mov     [esp+0C8h+var_98], 69h ; 'i'
0x44C386: mov     [esp+0C8h+var_94], 6Ah ; 'j'
0x44C38E: mov     [esp+0C8h+var_90], 6Bh ; 'k'
0x44C396: mov     [esp+0C8h+var_8C], 6Ch ; 'l'
0x44C39E: mov     [esp+0C8h+var_88], 6Dh ; 'm'
0x44C3A6: mov     [esp+0C8h+var_84], 6Eh ; 'n'
0x44C3AE: mov     [esp+0C8h+var_80], 6Fh ; 'o'
0x44C3B6: mov     [esp+0C8h+var_7C], 70h ; 'p'
0x44C3BE: mov     [esp+0C8h+var_78], 71h ; 'q'
0x44C3C6: mov     [esp+0C8h+var_74], 72h ; 'r'
0x44C3CE: mov     [esp+0C8h+var_70], 73h ; 's'
0x44C3D6: mov     [esp+0C8h+var_6C], 74h ; 't'
0x44C3DE: mov     [esp+0C8h+var_68], 75h ; 'u'
0x44C3E6: mov     [esp+0C8h+var_64], 76h ; 'v'
0x44C3EE: mov     [esp+0C8h+var_60], 77h ; 'w'
0x44C3F6: mov     [esp+0C8h+var_5C], offset aFurnituremarke; "FurnitureMarker01"
0x44C3FE: mov     [esp+0C8h+var_58], offset aFurnituremar_0; "FurnitureMarker02"
0x44C406: mov     [esp+0C8h+var_54], offset aFurnituremar_1; "FurnitureMarker03"
0x44C40E: mov     [esp+0C8h+var_50], offset aFurnituremar_2; "FurnitureMarker04"
0x44C416: mov     [esp+0C8h+var_4C], offset aFurnituremar_3; "FurnitureMarker05"
0x44C41E: mov     [esp+0C8h+var_48], offset aFurnituremar_4; "FurnitureMarker06"
0x44C429: mov     [esp+0C8h+var_44], offset aFurnituremar_5; "FurnitureMarker07"
0x44C434: mov     [esp+0C8h+var_40], offset aFurnituremar_6; "FurnitureMarker08"
0x44C43F: mov     [esp+0C8h+var_3C], offset aFurnituremar_7; "FurnitureMarker09"
0x44C44A: mov     [esp+0C8h+var_38], offset aFurnituremar_8; "FurnitureMarker10"
0x44C455: mov     [esp+0C8h+var_34], offset aFurnituremar_9; "FurnitureMarker11"
0x44C460: mov     [esp+0C8h+var_30], offset aFurniturema_10; "FurnitureMarker12"
0x44C46B: mov     [esp+0C8h+var_2C], offset aFurniturema_11; "FurnitureMarker13"
0x44C476: mov     [esp+0C8h+var_28], offset aFurniturema_12; "FurnitureMarker14"
0x44C481: mov     [esp+0C8h+var_24], offset aFurniturema_13; "FurnitureMarker15"
0x44C48C: mov     [esp+0C8h+var_20], offset aFurniturema_14; "FurnitureMarker16"
0x44C497: mov     [esp+0C8h+var_1C], offset aFurniturema_15; "FurnitureMarker17"
0x44C4A2: mov     [esp+0C8h+var_18], offset aFurniturema_16; "FurnitureMarker18"
0x44C4AD: mov     [esp+0C8h+var_14], offset aFurniturema_17; "FurnitureMarker19"
0x44C4B8: mov     [esp+0C8h+var_10], offset aFurniturema_18; "FurnitureMarker20"
0x44C4C3: mov     [esp+0C8h+var_B4], ebx
0x44C4C7: jmp     short loc_44C4D0
0x44C4C9: align 10h
0x44C4D0: mov     eax, [esp+0C8h+var_B4]
0x44C4D4: mov     ebp, [esp+eax+0C8h+a2]
0x44C4D8: cmp     ebp, ebx
0x44C4DA: jz      short loc_44C525
0x44C4DC: mov     edx, ds:0B0613Ch
0x44C4E2: mov     eax, [edx+4]
0x44C4E5: push    ebp
0x44C4E6: mov     ecx, offset TESForm_FormIDMap
0x44C4EB: call    eax
0x44C4ED: mov     ecx, ds:0B06144h
0x44C4F3: mov     esi, [ecx+eax*4]
0x44C4F6: cmp     esi, ebx
0x44C4F8: jz      short loc_44C525
0x44C4FA: lea     ebx, [ebx+0]
0x44C500: mov     edx, [esi+4]
0x44C503: mov     eax, ds:0B0613Ch
0x44C508: push    edx
0x44C509: mov     edx, [eax+8]
0x44C50C: push    ebp
0x44C50D: mov     ecx, offset TESForm_FormIDMap
0x44C512: call    edx
0x44C514: test    al, al
0x44C516: jnz     short loc_44C520
0x44C518: mov     esi, [esi]
0x44C51A: cmp     esi, ebx
0x44C51C: jnz     short loc_44C500
0x44C51E: jmp     short loc_44C525
0x44C520: cmp     [esi+8], ebx
0x44C523: jnz     short loc_44C58E
0x44C525: push    3Ch ; '<'; Size
0x44C527: call    FormHeapAlloc
0x44C52C: add     esp, 4
0x44C52F: mov     [esp+0C8h+var_B0], eax
0x44C533: cmp     eax, ebx
0x44C535: mov     [esp+0C8h+var_4], 1Dh
0x44C540: jz      short loc_44C54D
0x44C542: mov     ecx, eax; this
0x44C544: call    ??0TESObjectSTAT@@QAE@XZ; TESObjectSTAT::TESObjectSTAT(void)
0x44C549: mov     esi, eax
0x44C54B: jmp     short loc_44C54F
0x44C54D: xor     esi, esi
0x44C54F: push    1; a3
0x44C551: push    ebp; a2
0x44C552: mov     ecx, esi; this
0x44C554: mov     [esp+0D0h+var_4], 0FFFFFFFFh
0x44C55F: call    TESForm_SetFormID
0x44C564: mov     ecx, [esp+0C8h+var_B4]
0x44C568: mov     edx, [esp+ecx+0C8h+var_5C]
0x44C56C: mov     eax, [esi]
0x44C56E: mov     eax, [eax+0D8h]
0x44C574: push    edx
0x44C575: mov     ecx, esi
0x44C577: call    eax
0x44C579: mov     ecx, [edi]
0x44C57B: push    esi
0x44C57C: call    TESObjectListHead_AddObject
0x44C581: mov     edx, [esi]
0x44C583: mov     eax, [edx+90h]
0x44C589: push    ebx
0x44C58A: mov     ecx, esi
0x44C58C: call    eax
0x44C58E: mov     eax, [esp+0C8h+var_B4]
0x44C592: add     eax, 4
0x44C595: cmp     eax, 50h ; 'P'
0x44C598: mov     [esp+0C8h+var_B4], eax
0x44C59C: jl      loc_44C4D0
0x44C5A2: call    sub_52FE90
0x44C5A7: mov     edx, ds:0B0613Ch
0x44C5AD: mov     eax, [edx+4]
0x44C5B0: push    35h ; '5'
0x44C5B2: mov     ecx, offset TESForm_FormIDMap
0x44C5B7: call    eax
0x44C5B9: mov     ecx, ds:0B06144h
0x44C5BF: mov     esi, [ecx+eax*4]
0x44C5C2: cmp     esi, ebx
0x44C5C4: jz      short loc_44C5F0
0x44C5C6: mov     edx, [esi+4]
0x44C5C9: mov     eax, ds:0B0613Ch
0x44C5CE: push    edx
0x44C5CF: mov     edx, [eax+8]
0x44C5D2: push    35h ; '5'
0x44C5D4: mov     ecx, offset TESForm_FormIDMap
0x44C5D9: call    edx
0x44C5DB: test    al, al
0x44C5DD: jnz     short loc_44C5E7
0x44C5DF: mov     esi, [esi]
0x44C5E1: cmp     esi, ebx
0x44C5E3: jnz     short loc_44C5C6
0x44C5E5: jmp     short loc_44C5F0
0x44C5E7: cmp     [esi+8], ebx
0x44C5EA: jnz     loc_44C686
0x44C5F0: push    28h ; '('; Size
0x44C5F2: call    FormHeapAlloc
0x44C5F7: add     esp, 4
0x44C5FA: mov     [esp+0C8h+var_B0], eax
0x44C5FE: cmp     eax, ebx
0x44C600: mov     [esp+0C8h+var_4], 1Eh
0x44C60B: jz      short loc_44C618
0x44C60D: mov     ecx, eax; this
0x44C60F: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x44C614: mov     esi, eax
0x44C616: jmp     short loc_44C61A
0x44C618: xor     esi, esi
0x44C61A: push    1; a3
0x44C61C: or      ebp, 0FFFFFFFFh
0x44C61F: push    35h ; '5'; a2
0x44C621: mov     ecx, esi; this
0x44C623: mov     [esp+0D0h+var_4], ebp
0x44C62A: call    TESForm_SetFormID
0x44C62F: mov     eax, [esi]
0x44C631: mov     edx, [eax+0D8h]
0x44C637: push    offset aGameyear; "GameYear"
0x44C63C: mov     ecx, esi
0x44C63E: call    edx
0x44C640: fld     dword ptr ds:0A2F940h
0x44C646: fstp    dword ptr [esi+24h]
0x44C649: cmp     [edi+74h], ebx
0x44C64C: jz      short loc_44C671
0x44C64E: push    8; Size
0x44C650: call    FormHeapAlloc
0x44C655: add     esp, 4
0x44C658: cmp     eax, ebx
0x44C65A: jz      short loc_44C666
0x44C65C: mov     ecx, [edi+74h]
0x44C65F: mov     [eax], ecx
0x44C661: mov     [eax+4], ebx
0x44C664: jmp     short loc_44C668
0x44C666: xor     eax, eax
0x44C668: mov     edx, [edi+78h]
0x44C66B: mov     [eax+4], edx
0x44C66E: mov     [edi+78h], eax
0x44C671: push    esi
0x44C672: push    offset aGameyear; "GameYear"
0x44C677: mov     ecx, offset off_B06164
0x44C67C: mov     [edi+74h], esi
0x44C67F: call    sub_412D30
0x44C684: jmp     short loc_44C689
0x44C686: or      ebp, 0FFFFFFFFh
0x44C689: mov     eax, ds:0B0613Ch
0x44C68E: mov     edx, [eax+4]
0x44C691: push    36h ; '6'
0x44C693: mov     ecx, offset TESForm_FormIDMap
0x44C698: call    edx
0x44C69A: mov     ecx, ds:0B06144h
0x44C6A0: mov     esi, [ecx+eax*4]
0x44C6A3: cmp     esi, ebx
0x44C6A5: jz      short loc_44C6D1
0x44C6A7: mov     edx, [esi+4]
0x44C6AA: mov     eax, ds:0B0613Ch
0x44C6AF: push    edx
0x44C6B0: mov     edx, [eax+8]
0x44C6B3: push    36h ; '6'
0x44C6B5: mov     ecx, offset TESForm_FormIDMap
0x44C6BA: call    edx
0x44C6BC: test    al, al
0x44C6BE: jnz     short loc_44C6C8
0x44C6C0: mov     esi, [esi]
0x44C6C2: cmp     esi, ebx
0x44C6C4: jnz     short loc_44C6A7
0x44C6C6: jmp     short loc_44C6D1
0x44C6C8: cmp     [esi+8], ebx
0x44C6CB: jnz     loc_44C762
0x44C6D1: push    28h ; '('; Size
0x44C6D3: call    FormHeapAlloc
0x44C6D8: add     esp, 4
0x44C6DB: mov     [esp+0C8h+var_B0], eax
0x44C6DF: cmp     eax, ebx
0x44C6E1: mov     [esp+0C8h+var_4], 1Fh
0x44C6EC: jz      short loc_44C6F9
0x44C6EE: mov     ecx, eax; this
0x44C6F0: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x44C6F5: mov     esi, eax
0x44C6F7: jmp     short loc_44C6FB
0x44C6F9: xor     esi, esi
0x44C6FB: push    1; a3
0x44C6FD: push    36h ; '6'; a2
0x44C6FF: mov     ecx, esi; this
0x44C701: mov     [esp+0D0h+var_4], ebp
0x44C708: call    TESForm_SetFormID
0x44C70D: mov     eax, [esi]
0x44C70F: mov     edx, [eax+0D8h]
0x44C715: push    offset aGamemonth; "GameMonth"
0x44C71A: mov     ecx, esi
0x44C71C: call    edx
0x44C71E: fld     dword ptr ds:0A37CFCh
0x44C724: fstp    dword ptr [esi+24h]
0x44C727: cmp     [edi+74h], ebx
0x44C72A: jz      short loc_44C74F
0x44C72C: push    8; Size
0x44C72E: call    FormHeapAlloc
0x44C733: add     esp, 4
0x44C736: cmp     eax, ebx
0x44C738: jz      short loc_44C744
0x44C73A: mov     ecx, [edi+74h]
0x44C73D: mov     [eax], ecx
0x44C73F: mov     [eax+4], ebx
0x44C742: jmp     short loc_44C746
0x44C744: xor     eax, eax
0x44C746: mov     edx, [edi+78h]
0x44C749: mov     [eax+4], edx
0x44C74C: mov     [edi+78h], eax
0x44C74F: push    esi
0x44C750: push    offset aGamemonth; "GameMonth"
0x44C755: mov     ecx, offset off_B06164
0x44C75A: mov     [edi+74h], esi
0x44C75D: call    sub_412D30
0x44C762: mov     eax, ds:0B0613Ch
0x44C767: mov     edx, [eax+4]
0x44C76A: push    37h ; '7'
0x44C76C: mov     ecx, offset TESForm_FormIDMap
0x44C771: call    edx
0x44C773: mov     ecx, ds:0B06144h
0x44C779: mov     esi, [ecx+eax*4]
0x44C77C: cmp     esi, ebx
0x44C77E: jz      short loc_44C7AA
0x44C780: mov     edx, [esi+4]
0x44C783: mov     eax, ds:0B0613Ch
0x44C788: push    edx
0x44C789: mov     edx, [eax+8]
0x44C78C: push    37h ; '7'
0x44C78E: mov     ecx, offset TESForm_FormIDMap
0x44C793: call    edx
0x44C795: test    al, al
0x44C797: jnz     short loc_44C7A1
0x44C799: mov     esi, [esi]
0x44C79B: cmp     esi, ebx
0x44C79D: jnz     short loc_44C780
0x44C79F: jmp     short loc_44C7AA
0x44C7A1: cmp     [esi+8], ebx
0x44C7A4: jnz     loc_44C83B
0x44C7AA: push    28h ; '('; Size
0x44C7AC: call    FormHeapAlloc
0x44C7B1: add     esp, 4
0x44C7B4: mov     [esp+0C8h+var_B0], eax
0x44C7B8: cmp     eax, ebx
0x44C7BA: mov     [esp+0C8h+var_4], 20h ; ' '
0x44C7C5: jz      short loc_44C7D2
0x44C7C7: mov     ecx, eax; this
0x44C7C9: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x44C7CE: mov     esi, eax
0x44C7D0: jmp     short loc_44C7D4
0x44C7D2: xor     esi, esi
0x44C7D4: push    1; a3
0x44C7D6: push    37h ; '7'; a2
0x44C7D8: mov     ecx, esi; this
0x44C7DA: mov     [esp+0D0h+var_4], ebp
0x44C7E1: call    TESForm_SetFormID
0x44C7E6: mov     eax, [esi]
0x44C7E8: mov     edx, [eax+0D8h]
0x44C7EE: push    offset aGameday; "GameDay"
0x44C7F3: mov     ecx, esi
0x44C7F5: call    edx
0x44C7F7: fld     dword ptr ds:0A2F944h
0x44C7FD: fstp    dword ptr [esi+24h]
0x44C800: cmp     [edi+74h], ebx
0x44C803: jz      short loc_44C828
0x44C805: push    8; Size
0x44C807: call    FormHeapAlloc
0x44C80C: add     esp, 4
0x44C80F: cmp     eax, ebx
0x44C811: jz      short loc_44C81D
0x44C813: mov     ecx, [edi+74h]
0x44C816: mov     [eax], ecx
0x44C818: mov     [eax+4], ebx
0x44C81B: jmp     short loc_44C81F
0x44C81D: xor     eax, eax
0x44C81F: mov     edx, [edi+78h]
0x44C822: mov     [eax+4], edx
0x44C825: mov     [edi+78h], eax
0x44C828: push    esi
0x44C829: push    offset aGameday; "GameDay"
0x44C82E: mov     ecx, offset off_B06164
0x44C833: mov     [edi+74h], esi
0x44C836: call    sub_412D30
0x44C83B: mov     eax, ds:0B0613Ch
0x44C840: mov     edx, [eax+4]
0x44C843: push    38h ; '8'
0x44C845: mov     ecx, offset TESForm_FormIDMap
0x44C84A: call    edx
0x44C84C: mov     ecx, ds:0B06144h
0x44C852: mov     esi, [ecx+eax*4]
0x44C855: cmp     esi, ebx
0x44C857: jz      short loc_44C88A
0x44C859: lea     esp, [esp+0]
0x44C860: mov     edx, [esi+4]
0x44C863: mov     eax, ds:0B0613Ch
0x44C868: push    edx
0x44C869: mov     edx, [eax+8]
0x44C86C: push    38h ; '8'
0x44C86E: mov     ecx, offset TESForm_FormIDMap
0x44C873: call    edx
0x44C875: test    al, al
0x44C877: jnz     short loc_44C881
0x44C879: mov     esi, [esi]
0x44C87B: cmp     esi, ebx
0x44C87D: jnz     short loc_44C860
0x44C87F: jmp     short loc_44C88A
0x44C881: cmp     [esi+8], ebx
0x44C884: jnz     loc_44C91B
0x44C88A: push    28h ; '('; Size
0x44C88C: call    FormHeapAlloc
0x44C891: add     esp, 4
0x44C894: mov     [esp+0C8h+var_B0], eax
0x44C898: cmp     eax, ebx
0x44C89A: mov     [esp+0C8h+var_4], 21h ; '!'
0x44C8A5: jz      short loc_44C8B2
0x44C8A7: mov     ecx, eax; this
0x44C8A9: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x44C8AE: mov     esi, eax
0x44C8B0: jmp     short loc_44C8B4
0x44C8B2: xor     esi, esi
0x44C8B4: push    1; a3
0x44C8B6: push    38h ; '8'; a2
0x44C8B8: mov     ecx, esi; this
0x44C8BA: mov     [esp+0D0h+var_4], ebp
0x44C8C1: call    TESForm_SetFormID
0x44C8C6: mov     eax, [esi]
0x44C8C8: mov     edx, [eax+0D8h]
0x44C8CE: push    offset aGamehour; "GameHour"
0x44C8D3: mov     ecx, esi
0x44C8D5: call    edx
0x44C8D7: fld     dword ptr ds:0A2F918h
0x44C8DD: fstp    dword ptr [esi+24h]
0x44C8E0: cmp     [edi+74h], ebx
0x44C8E3: jz      short loc_44C908
0x44C8E5: push    8; Size
0x44C8E7: call    FormHeapAlloc
0x44C8EC: add     esp, 4
0x44C8EF: cmp     eax, ebx
0x44C8F1: jz      short loc_44C8FD
0x44C8F3: mov     ecx, [edi+74h]
0x44C8F6: mov     [eax], ecx
0x44C8F8: mov     [eax+4], ebx
0x44C8FB: jmp     short loc_44C8FF
0x44C8FD: xor     eax, eax
0x44C8FF: mov     edx, [edi+78h]
0x44C902: mov     [eax+4], edx
0x44C905: mov     [edi+78h], eax
0x44C908: push    esi
0x44C909: push    offset aGamehour; "GameHour"
0x44C90E: mov     ecx, offset off_B06164
0x44C913: mov     [edi+74h], esi
0x44C916: call    sub_412D30
0x44C91B: mov     eax, ds:0B0613Ch
0x44C920: mov     edx, [eax+4]
0x44C923: push    39h ; '9'
0x44C925: mov     ecx, offset TESForm_FormIDMap
0x44C92A: call    edx
0x44C92C: mov     ecx, ds:0B06144h
0x44C932: mov     esi, [ecx+eax*4]
0x44C935: cmp     esi, ebx
0x44C937: jz      short loc_44C96A
0x44C939: lea     esp, [esp+0]
0x44C940: mov     edx, [esi+4]
0x44C943: mov     eax, ds:0B0613Ch
0x44C948: push    edx
0x44C949: mov     edx, [eax+8]
0x44C94C: push    39h ; '9'
0x44C94E: mov     ecx, offset TESForm_FormIDMap
0x44C953: call    edx
0x44C955: test    al, al
0x44C957: jnz     short loc_44C961
0x44C959: mov     esi, [esi]
0x44C95B: cmp     esi, ebx
0x44C95D: jnz     short loc_44C940
0x44C95F: jmp     short loc_44C96A
0x44C961: cmp     [esi+8], ebx
0x44C964: jnz     loc_44C9F7
0x44C96A: push    28h ; '('; Size
0x44C96C: call    FormHeapAlloc
0x44C971: add     esp, 4
0x44C974: mov     [esp+0C8h+var_B0], eax
0x44C978: cmp     eax, ebx
0x44C97A: mov     [esp+0C8h+var_4], 22h ; '"'
0x44C985: jz      short loc_44C992
0x44C987: mov     ecx, eax; this
0x44C989: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x44C98E: mov     esi, eax
0x44C990: jmp     short loc_44C994
0x44C992: xor     esi, esi
0x44C994: push    1; a3
0x44C996: push    39h ; '9'; a2
0x44C998: mov     ecx, esi; this
0x44C99A: mov     [esp+0D0h+var_4], ebp
0x44C9A1: call    TESForm_SetFormID
0x44C9A6: mov     eax, [esi]
0x44C9A8: mov     edx, [eax+0D8h]
0x44C9AE: push    offset aGamedayspassed; "GameDaysPassed"
0x44C9B3: mov     ecx, esi
0x44C9B5: call    edx
0x44C9B7: fld1
0x44C9B9: fstp    dword ptr [esi+24h]
0x44C9BC: cmp     [edi+74h], ebx
0x44C9BF: jz      short loc_44C9E4
0x44C9C1: push    8; Size
0x44C9C3: call    FormHeapAlloc
0x44C9C8: add     esp, 4
0x44C9CB: cmp     eax, ebx
0x44C9CD: jz      short loc_44C9D9
0x44C9CF: mov     ecx, [edi+74h]
0x44C9D2: mov     [eax], ecx
0x44C9D4: mov     [eax+4], ebx
0x44C9D7: jmp     short loc_44C9DB
0x44C9D9: xor     eax, eax
0x44C9DB: mov     edx, [edi+78h]
0x44C9DE: mov     [eax+4], edx
0x44C9E1: mov     [edi+78h], eax
0x44C9E4: push    esi
0x44C9E5: push    offset aGamedayspassed; "GameDaysPassed"
0x44C9EA: mov     ecx, offset off_B06164
0x44C9EF: mov     [edi+74h], esi
0x44C9F2: call    sub_412D30
0x44C9F7: mov     eax, ds:0B0613Ch
0x44C9FC: mov     edx, [eax+4]
0x44C9FF: push    3Ah ; ':'
0x44CA01: mov     ecx, offset TESForm_FormIDMap
0x44CA06: call    edx
0x44CA08: mov     ecx, ds:0B06144h
0x44CA0E: mov     esi, [ecx+eax*4]
0x44CA11: cmp     esi, ebx
0x44CA13: jz      short loc_44CA3F
0x44CA15: mov     edx, [esi+4]
0x44CA18: mov     eax, ds:0B0613Ch
0x44CA1D: push    edx
0x44CA1E: mov     edx, [eax+8]
0x44CA21: push    3Ah ; ':'
0x44CA23: mov     ecx, offset TESForm_FormIDMap
0x44CA28: call    edx
0x44CA2A: test    al, al
0x44CA2C: jnz     short loc_44CA36
0x44CA2E: mov     esi, [esi]
0x44CA30: cmp     esi, ebx
0x44CA32: jnz     short loc_44CA15
0x44CA34: jmp     short loc_44CA3F
0x44CA36: cmp     [esi+8], ebx
0x44CA39: jnz     loc_44CAD0
0x44CA3F: push    28h ; '('; Size
0x44CA41: call    FormHeapAlloc
0x44CA46: add     esp, 4
0x44CA49: mov     [esp+0C8h+var_B0], eax
0x44CA4D: cmp     eax, ebx
0x44CA4F: mov     [esp+0C8h+var_4], 23h ; '#'
0x44CA5A: jz      short loc_44CA67
0x44CA5C: mov     ecx, eax; this
0x44CA5E: call    ??0TESGlobal@@QAE@XZ; TESGlobal::TESGlobal(void)
0x44CA63: mov     esi, eax
0x44CA65: jmp     short loc_44CA69
0x44CA67: xor     esi, esi
0x44CA69: push    1; a3
0x44CA6B: push    3Ah ; ':'; a2
0x44CA6D: mov     ecx, esi; this
0x44CA6F: mov     [esp+0D0h+var_4], ebp
0x44CA76: call    TESForm_SetFormID
0x44CA7B: mov     eax, [esi]
0x44CA7D: mov     edx, [eax+0D8h]
0x44CA83: push    offset aTimescale; "TimeScale"
0x44CA88: mov     ecx, esi
0x44CA8A: call    edx
0x44CA8C: fld     dword ptr ds:0A37CC8h
0x44CA92: fstp    dword ptr [esi+24h]
0x44CA95: cmp     [edi+74h], ebx
0x44CA98: jz      short loc_44CABD
0x44CA9A: push    8; Size
0x44CA9C: call    FormHeapAlloc
0x44CAA1: add     esp, 4
0x44CAA4: cmp     eax, ebx
0x44CAA6: jz      short loc_44CAB2
0x44CAA8: mov     ecx, [edi+74h]
0x44CAAB: mov     [eax], ecx
0x44CAAD: mov     [eax+4], ebx
0x44CAB0: jmp     short loc_44CAB4
0x44CAB2: xor     eax, eax
0x44CAB4: mov     edx, [edi+78h]
0x44CAB7: mov     [eax+4], edx
0x44CABA: mov     [edi+78h], eax
0x44CABD: push    esi
0x44CABE: push    offset aTimescale; "TimeScale"
0x44CAC3: mov     ecx, offset off_B06164
0x44CAC8: mov     [edi+74h], esi
0x44CACB: call    sub_412D30
0x44CAD0: mov     eax, ds:0B0613Ch
0x44CAD5: mov     edx, [eax+4]
0x44CAD8: push    7
0x44CADA: mov     ecx, offset TESForm_FormIDMap
0x44CADF: call    edx
0x44CAE1: mov     ecx, ds:0B06144h
0x44CAE7: mov     esi, [ecx+eax*4]
0x44CAEA: cmp     esi, ebx
0x44CAEC: jz      short loc_44CB0F
0x44CAEE: mov     edi, edi
0x44CAF0: mov     edx, [esi+4]
0x44CAF3: mov     eax, ds:0B0613Ch
0x44CAF8: push    edx
0x44CAF9: mov     edx, [eax+8]
0x44CAFC: push    7
0x44CAFE: mov     ecx, offset TESForm_FormIDMap
0x44CB03: call    edx
0x44CB05: test    al, al
0x44CB07: jnz     short loc_44CB55
0x44CB09: mov     esi, [esi]
0x44CB0B: cmp     esi, ebx
0x44CB0D: jnz     short loc_44CAF0
0x44CB0F: xor     esi, esi
0x44CB11: push    ebx; int
0x44CB12: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x44CB17: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x44CB1C: push    ebx; int
0x44CB1D: push    esi; void *
0x44CB1E: call    OblivionDynamicCast
0x44CB23: add     esp, 14h
0x44CB26: cmp     eax, ebx
0x44CB28: jnz     short loc_44CB94
0x44CB2A: push    200h; Size
0x44CB2F: call    FormHeapAlloc
0x44CB34: add     esp, 4
0x44CB37: mov     [esp+0C8h+var_B0], eax
0x44CB3B: cmp     eax, ebx
0x44CB3D: mov     [esp+0C8h+var_4], 24h ; '$'
0x44CB48: jz      short loc_44CB5A
0x44CB4A: mov     ecx, eax
0x44CB4C: call    TESNPC_constr
0x44CB51: mov     esi, eax
0x44CB53: jmp     short loc_44CB5C
0x44CB55: mov     esi, [esi+8]
0x44CB58: jmp     short loc_44CB11
0x44CB5A: xor     esi, esi
0x44CB5C: push    1; a3
0x44CB5E: push    7; a2
0x44CB60: mov     ecx, esi; this
0x44CB62: mov     [esp+0D0h+var_4], ebp
0x44CB69: call    TESForm_SetFormID
0x44CB6E: mov     eax, [esi]
0x44CB70: mov     edx, [eax+0D8h]
0x44CB76: push    offset aPlayer; "Player"
0x44CB7B: mov     ecx, esi
0x44CB7D: call    edx
0x44CB7F: mov     ecx, [edi]
0x44CB81: push    esi
0x44CB82: call    TESObjectListHead_AddObject
0x44CB87: mov     eax, [esi]
0x44CB89: mov     edx, [eax+90h]
0x44CB8F: push    ebx
0x44CB90: mov     ecx, esi
0x44CB92: call    edx
0x44CB94: mov     eax, ds:0B0613Ch
0x44CB99: mov     edx, [eax+4]
0x44CB9C: push    15Eh
0x44CBA1: mov     ecx, offset TESForm_FormIDMap
0x44CBA6: call    edx
0x44CBA8: mov     ecx, ds:0B06144h
0x44CBAE: mov     esi, [ecx+eax*4]
0x44CBB1: cmp     esi, ebx
0x44CBB3: jz      short loc_44CBE2
0x44CBB5: mov     edx, [esi+4]
0x44CBB8: mov     eax, ds:0B0613Ch
0x44CBBD: push    edx
0x44CBBE: mov     edx, [eax+8]
0x44CBC1: push    15Eh
0x44CBC6: mov     ecx, offset TESForm_FormIDMap
0x44CBCB: call    edx
0x44CBCD: test    al, al
0x44CBCF: jnz     short loc_44CBD9
0x44CBD1: mov     esi, [esi]
0x44CBD3: cmp     esi, ebx
0x44CBD5: jnz     short loc_44CBB5
0x44CBD7: jmp     short loc_44CBE2
0x44CBD9: cmp     [esi+8], ebx
0x44CBDC: jnz     loc_44CC67
0x44CBE2: push    148h; Size
0x44CBE7: call    FormHeapAlloc
0x44CBEC: add     esp, 4
0x44CBEF: mov     [esp+0C8h+var_B0], eax
0x44CBF3: cmp     eax, ebx
0x44CBF5: mov     [esp+0C8h+var_4], 25h ; '%'
0x44CC00: jz      short loc_44CC0D
0x44CC02: mov     ecx, eax; this
0x44CC04: call    ??0TESWeather@@QAE@XZ; TESWeather::TESWeather(void)
0x44CC09: mov     esi, eax
0x44CC0B: jmp     short loc_44CC0F
0x44CC0D: xor     esi, esi
0x44CC0F: push    1; a3
0x44CC11: push    15Eh; a2
0x44CC16: mov     ecx, esi; this
0x44CC18: mov     [esp+0D0h+var_4], ebp
0x44CC1F: call    TESForm_SetFormID
0x44CC24: mov     eax, [esi]
0x44CC26: mov     edx, [eax+0D8h]
0x44CC2C: push    offset aDefaultweather; "DefaultWeather"
0x44CC31: mov     ecx, esi
0x44CC33: call    edx
0x44CC35: mov     ecx, esi
0x44CC37: call    sub_4EE8C0
0x44CC3C: cmp     [edi+1Ch], ebx
0x44CC3F: jz      short loc_44CC64
0x44CC41: push    8; Size
0x44CC43: call    FormHeapAlloc
0x44CC48: add     esp, 4
0x44CC4B: cmp     eax, ebx
0x44CC4D: jz      short loc_44CC59
0x44CC4F: mov     ecx, [edi+1Ch]
0x44CC52: mov     [eax], ecx
0x44CC54: mov     [eax+4], ebx
0x44CC57: jmp     short loc_44CC5B
0x44CC59: xor     eax, eax
0x44CC5B: mov     edx, [edi+20h]
0x44CC5E: mov     [eax+4], edx
0x44CC61: mov     [edi+20h], eax
0x44CC64: mov     [edi+1Ch], esi
0x44CC67: mov     eax, ds:0B0613Ch
0x44CC6C: mov     edx, [eax+4]
0x44CC6F: push    15Fh
0x44CC74: mov     ecx, offset TESForm_FormIDMap
0x44CC79: call    edx
0x44CC7B: mov     ecx, ds:0B06144h
0x44CC81: mov     esi, [ecx+eax*4]
0x44CC84: cmp     esi, ebx
0x44CC86: jz      short loc_44CCBD
0x44CC88: jmp     short loc_44CC90
0x44CC8A: align 10h
0x44CC90: mov     edx, [esi+4]
0x44CC93: mov     eax, ds:0B0613Ch
0x44CC98: push    edx
0x44CC99: mov     edx, [eax+8]
0x44CC9C: push    15Fh
0x44CCA1: mov     ecx, offset TESForm_FormIDMap
0x44CCA6: call    edx
0x44CCA8: test    al, al
0x44CCAA: jnz     short loc_44CCB4
0x44CCAC: mov     esi, [esi]
0x44CCAE: cmp     esi, ebx
0x44CCB0: jnz     short loc_44CC90
0x44CCB2: jmp     short loc_44CCBD
0x44CCB4: cmp     [esi+8], ebx
0x44CCB7: jnz     loc_44CD3F
0x44CCBD: push    58h ; 'X'; Size
0x44CCBF: call    FormHeapAlloc
0x44CCC4: add     esp, 4
0x44CCC7: mov     [esp+0C8h+var_B0], eax
0x44CCCB: cmp     eax, ebx
0x44CCCD: mov     [esp+0C8h+var_4], 26h ; '&'
0x44CCD8: jz      short loc_44CCE5
0x44CCDA: mov     ecx, eax; this
0x44CCDC: call    ??0TESClimate@@QAE@XZ; TESClimate::TESClimate(void)
0x44CCE1: mov     esi, eax
0x44CCE3: jmp     short loc_44CCE7
0x44CCE5: xor     esi, esi
0x44CCE7: push    1; a3
0x44CCE9: push    15Fh; a2
0x44CCEE: mov     ecx, esi; this
0x44CCF0: mov     [esp+0D0h+var_4], ebp
0x44CCF7: call    TESForm_SetFormID
0x44CCFC: mov     eax, [esi]
0x44CCFE: mov     edx, [eax+0D8h]
0x44CD04: push    offset aDefaultclimate; "DefaultClimate"
0x44CD09: mov     ecx, esi
0x44CD0B: call    edx
0x44CD0D: mov     ecx, esi
0x44CD0F: call    sub_4BEE70
0x44CD14: cmp     [edi+14h], ebx
0x44CD17: jz      short loc_44CD3C
0x44CD19: push    8; Size
0x44CD1B: call    FormHeapAlloc
0x44CD20: add     esp, 4
0x44CD23: cmp     eax, ebx
0x44CD25: jz      short loc_44CD31
0x44CD27: mov     ecx, [edi+14h]
0x44CD2A: mov     [eax], ecx
0x44CD2C: mov     [eax+4], ebx
0x44CD2F: jmp     short loc_44CD33
0x44CD31: xor     eax, eax
0x44CD33: mov     edx, [edi+18h]
0x44CD36: mov     [eax+4], edx
0x44CD39: mov     [edi+18h], eax
0x44CD3C: mov     [edi+14h], esi
0x44CD3F: push    1
0x44CD41: push    ebx
0x44CD42: call    Sky_CreateOrGetGlobalObject
0x44CD47: mov     ecx, eax
0x44CD49: call    Sky_CreateChildGlobalObjects
0x44CD4E: call    Magic_ConstructGlobalData
0x44CD53: call    TESSound_CreateGlobalSounds
0x44CD58: mov     ecx, dword ptr [esp+0C8h+var_C]
0x44CD5F: mov     large fs:0, ecx
0x44CD66: pop     ecx
0x44CD67: pop     edi
0x44CD68: pop     esi
0x44CD69: pop     ebp
0x44CD6A: pop     ebx
0x44CD6B: add     esp, 0B4h
0x44CD71: retn
