0x41AB90: push    0FFFFFFFFh
0x41AB92: push    offset MagicItem_LoadVFX??_SEH
0x41AB97: mov     eax, large fs:0
0x41AB9D: push    eax
0x41AB9E: sub     esp, 130h
0x41ABA4: mov     eax, ___security_cookie
0x41ABA9: xor     eax, esp
0x41ABAB: mov     [esp+13Ch+var_10], eax
0x41ABB2: push    ebx
0x41ABB3: push    ebp
0x41ABB4: push    esi
0x41ABB5: push    edi
0x41ABB6: mov     eax, ___security_cookie
0x41ABBB: xor     eax, esp
0x41ABBD: push    eax
0x41ABBE: lea     eax, [esp+150h+var_C]
0x41ABC5: mov     large fs:0, eax
0x41ABCB: push    0
0x41ABCD: mov     edi, ecx
0x41ABCF: call    MagicItem_GetFXEffect
0x41ABD4: mov     ecx, edi
0x41ABD6: mov     esi, eax
0x41ABD8: call    sub_419E50
0x41ABDD: test    al, al
0x41ABDF: jnz     short loc_41ABF8
0x41ABE1: push    1
0x41ABE3: mov     ecx, edi
0x41ABE5: call    sub_41A610
0x41ABEA: push    1
0x41ABEC: mov     ecx, edi
0x41ABEE: call    sub_419F10
0x41ABF3: jmp     MagicItem_LoadVFX??___Done
0x41ABF8: test    esi, esi
0x41ABFA: jz      loc_41ACA7
0x41AC00: mov     ecx, esi
0x41AC02: xor     ebx, ebx
0x41AC04: call    EffectSetting_IsUnkA0Negative
0x41AC09: test    al, al
0x41AC0B: jz      short loc_41AC16
0x41AC0D: mov     ecx, esi
0x41AC0F: call    EffectSetting_AbsUnkA0
0x41AC14: mov     ebx, eax
0x41AC16: movzx   eax, word ptr [esi+20h]
0x41AC1A: cmp     ax, 0FFFFh
0x41AC1E: jnz     short loc_41AC33
0x41AC20: mov     eax, [esi+1Ch]
0x41AC23: lea     edx, [eax+1]
0x41AC26: mov     cl, [eax]
0x41AC28: add     eax, 1
0x41AC2B: test    cl, cl
0x41AC2D: jnz     short loc_41AC26
0x41AC2F: sub     eax, edx
0x41AC31: jmp     short loc_41AC36
0x41AC33: movzx   eax, ax
0x41AC36: test    eax, eax
0x41AC38: jbe     short loc_41AC5F
0x41AC3A: mov     eax, [esi+18h]
0x41AC3D: mov     edx, [eax+14h]
0x41AC40: lea     ecx, [esi+18h]
0x41AC43: call    edx
0x41AC45: mov     ecx, ModelLoaderPtr
0x41AC4B: push    eax
0x41AC4C: call    ModelLoader_IsModelLoaded??
0x41AC51: test    eax, eax
0x41AC53: jz      short loc_41ACA7
0x41AC55: push    ebx
0x41AC56: mov     ecx, eax
0x41AC58: call    sub_434C00
0x41AC5D: jmp     short loc_41ACA7
0x41AC5F: cmp     dword ptr [esi+98h], 46464553h
0x41AC69: jz      short loc_41ACA7
0x41AC6B: lea     eax, [esp+150h+var_12C]
0x41AC6F: push    eax
0x41AC70: mov     ecx, esi
0x41AC72: call    EffectSetting_GetName
0x41AC77: mov     eax, [eax]
0x41AC79: push    eax; ArgList
0x41AC7A: push    offset aTheSEffectHasN; "The %s effect has no associated spell a"...
0x41AC7F: mov     [esp+158h+var_4], 0
0x41AC8A: call    PrintError
0x41AC8F: mov     ecx, [esp+158h+var_12C]
0x41AC93: push    ecx
0x41AC94: mov     [esp+15Ch+var_4], 0FFFFFFFFh
0x41AC9F: call    FormHeapFree
0x41ACA4: add     esp, 0Ch
0x41ACA7: test    edi, edi
0x41ACA9: jz      short loc_41ACB0
0x41ACAB: add     edi, 0Ch
0x41ACAE: jmp     short loc_41ACB2
0x41ACB0: xor     edi, edi
0x41ACB2: cmp     dword ptr [edi+8], 0
0x41ACB6: mov     dword ptr [esp+150h+var_138], edi
0x41ACBA: jnz     short loc_41ACC6
0x41ACBC: cmp     dword ptr [edi+4], 0
0x41ACC0: jz      MagicItem_LoadVFX??___Done
0x41ACC6: test    edi, edi
0x41ACC8: jz      MagicItem_LoadVFX??___Done
0x41ACCE: jmp     short loc_41ACD4
0x41ACD0: mov     edi, dword ptr [esp+150h+var_138]
0x41ACD4: mov     eax, [edi+4]
0x41ACD7: mov     esi, [eax+1Ch]
0x41ACDA: mov     eax, [esi+60h]
0x41ACDD: push    eax; a1
0x41ACDE: call    TESForm_LookupByFormID
0x41ACE3: add     esp, 4
0x41ACE6: mov     ecx, esi
0x41ACE8: mov     edi, eax
0x41ACEA: call    EffectSetting_IsUnkA4Negative
0x41ACEF: test    al, al
0x41ACF1: jz      loc_41B16F
0x41ACF7: mov     ecx, esi
0x41ACF9: call    EffectSetting_AbsUnkA4
0x41ACFE: test    eax, eax
0x41AD00: mov     [esp+150h+var_13C], eax
0x41AD04: jz      loc_41B16F
0x41AD0A: test    edi, edi
0x41AD0C: jz      loc_41B16F
0x41AD12: mov     esi, [esi+58h]
0x41AD15: mov     edx, esi
0x41AD17: shr     edx, 10h
0x41AD1A: test    dl, 1
0x41AD1D: jz      short loc_41AD7E
0x41AD1F: push    0; int
0x41AD21: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x41AD26: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41AD2B: push    0; int
0x41AD2D: push    edi; void *
0x41AD2E: call    OblivionDynamicCast
0x41AD33: add     esp, 14h
0x41AD36: test    eax, eax
0x41AD38: jz      loc_41B16F
0x41AD3E: lea     esi, [eax+30h]
0x41AD41: mov     ecx, esi
0x41AD43: call    sub_449190
0x41AD48: test    eax, eax
0x41AD4A: jbe     loc_41B16F
0x41AD50: mov     eax, [esi]
0x41AD52: mov     edx, [eax+14h]
0x41AD55: mov     ecx, esi
0x41AD57: call    edx
0x41AD59: mov     ecx, ModelLoaderPtr
0x41AD5F: push    eax
0x41AD60: call    ModelLoader_IsModelLoaded??
0x41AD65: test    eax, eax
0x41AD67: jz      loc_41B16F
0x41AD6D: mov     ecx, [esp+150h+var_13C]
0x41AD71: push    ecx
0x41AD72: mov     ecx, eax
0x41AD74: call    sub_434C00
0x41AD79: jmp     loc_41B16F
0x41AD7E: mov     edx, esi
0x41AD80: shr     edx, 11h
0x41AD83: test    dl, 1
0x41AD86: jz      short loc_41ADFD
0x41AD88: push    0; int
0x41AD8A: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x41AD8F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41AD94: push    0; int
0x41AD96: push    edi; void *
0x41AD97: call    OblivionDynamicCast
0x41AD9C: add     esp, 14h
0x41AD9F: test    eax, eax
0x41ADA1: jz      loc_41B16F
0x41ADA7: lea     esi, [eax+64h]
0x41ADAA: push    0
0x41ADAC: mov     ecx, esi
0x41ADAE: call    TESBipedModelForm_GetModelPath
0x41ADB3: mov     ecx, ModelLoaderPtr
0x41ADB9: push    eax
0x41ADBA: call    ModelLoader_IsModelLoaded??
0x41ADBF: test    eax, eax
0x41ADC1: jz      short loc_41ADCF
0x41ADC3: mov     ecx, [esp+150h+var_13C]
0x41ADC7: push    ecx
0x41ADC8: mov     ecx, eax
0x41ADCA: call    sub_434C00
0x41ADCF: push    1
0x41ADD1: mov     ecx, esi
0x41ADD3: call    TESBipedModelForm_GetModelPath
0x41ADD8: mov     ecx, ModelLoaderPtr
0x41ADDE: push    eax
0x41ADDF: call    ModelLoader_IsModelLoaded??
0x41ADE4: test    eax, eax
0x41ADE6: jz      loc_41B16F
0x41ADEC: mov     edx, [esp+150h+var_13C]
0x41ADF0: push    edx
0x41ADF1: mov     ecx, eax
0x41ADF3: call    sub_434C00
0x41ADF8: jmp     loc_41B16F
0x41ADFD: mov     eax, esi
0x41ADFF: shr     eax, 12h
0x41AE02: test    al, 1
0x41AE04: jz      loc_41B16F
0x41AE0A: cmp     byte ptr [edi+4], 25h ; '%'
0x41AE0E: jnz     short loc_41AE60
0x41AE10: lea     ecx, [esp+150h+var_124]
0x41AE14: call    TESContainer_constr
0x41AE19: lea     ecx, [esp+150h+var_124]
0x41AE1D: push    ecx; int
0x41AE1E: mov     ecx, TESDataHandler_g_PlayerRef
0x41AE24: push    1
0x41AE26: mov     [esp+158h+var_4], 1
0x41AE31: call    Actor_GetLevel
0x41AE36: lea     ecx, [edi+24h]; this
0x41AE39: push    eax; int
0x41AE3A: call    TESLeveledList_CalcLeveledForm
0x41AE3F: push    0
0x41AE41: lea     ecx, [esp+154h+var_124]
0x41AE45: call    TESContainer_GetNthForm
0x41AE4A: lea     ecx, [esp+150h+var_124]
0x41AE4E: mov     edi, eax
0x41AE50: mov     [esp+150h+var_4], 0FFFFFFFFh
0x41AE5B: call    TESContainer_destr
0x41AE60: push    0; int
0x41AE62: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x41AE67: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41AE6C: push    0; int
0x41AE6E: push    edi; void *
0x41AE6F: call    OblivionDynamicCast
0x41AE74: add     esp, 14h
0x41AE77: test    eax, eax
0x41AE79: jz      short loc_41AECE
0x41AE7B: push    1
0x41AE7D: push    1
0x41AE7F: mov     ecx, eax
0x41AE81: call    sub_5234F0
0x41AE86: mov     ebp, eax
0x41AE88: test    ebp, ebp
0x41AE8A: mov     esi, ebp
0x41AE8C: jz      short loc_41AEBE
0x41AE8E: mov     ebx, [esp+150h+var_13C]
0x41AE92: cmp     dword ptr [esi+4], 0
0x41AE96: jnz     short loc_41AE9D
0x41AE98: cmp     dword ptr [esi], 0
0x41AE9B: jz      short loc_41AEBE
0x41AE9D: mov     eax, [esi]
0x41AE9F: mov     ecx, ModelLoaderPtr
0x41AEA5: push    eax
0x41AEA6: call    ModelLoader_IsModelLoaded??
0x41AEAB: test    eax, eax
0x41AEAD: jz      short loc_41AEB7
0x41AEAF: push    ebx
0x41AEB0: mov     ecx, eax
0x41AEB2: call    sub_434C00
0x41AEB7: mov     esi, [esi+4]
0x41AEBA: test    esi, esi
0x41AEBC: jnz     short loc_41AE92
0x41AEBE: mov     ecx, ebp
0x41AEC0: call    BSSimpleList_Clear
0x41AEC5: push    ebp
0x41AEC6: call    FormHeapFree
0x41AECB: add     esp, 4
0x41AECE: push    0; int
0x41AED0: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x41AED5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41AEDA: push    0; int
0x41AEDC: push    edi; void *
0x41AEDD: call    OblivionDynamicCast
0x41AEE2: add     esp, 14h
0x41AEE5: test    eax, eax
0x41AEE7: mov     [esp+150h+var_130], eax
0x41AEEB: jz      loc_41B16F
0x41AEF1: mov     ecx, eax
0x41AEF3: mov     edx, [ecx+0ACh]
0x41AEF9: mov     eax, [edx+14h]
0x41AEFC: add     ecx, 0ACh ; '¬'
0x41AF02: call    eax
0x41AF04: mov     ecx, ModelLoaderPtr
0x41AF0A: push    eax
0x41AF0B: call    ModelLoader_IsModelLoaded??
0x41AF10: mov     esi, eax
0x41AF12: test    esi, esi
0x41AF14: jz      loc_41B16F
0x41AF1A: mov     edi, [esp+150h+var_13C]
0x41AF1E: test    edi, edi
0x41AF20: jle     short loc_41AF38
0x41AF22: mov     ebx, ds:InterlockedIncrement
0x41AF28: lea     ebp, [esi+4]
0x41AF2B: jmp     short loc_41AF30
0x41AF2D: align 10h
0x41AF30: push    ebp; lpAddend
0x41AF31: call    ebx ; InterlockedIncrement
0x41AF33: sub     edi, 1
0x41AF36: jnz     short loc_41AF30
0x41AF38: mov     edi, [esi]
0x41AF3A: mov     ecx, [esp+150h+var_130]
0x41AF3E: add     ecx, 0ECh ; 'ì'
0x41AF44: mov     [esp+150h+var_12C], edi
0x41AF48: call    sub_6899C0
0x41AF4D: lea     edx, [esp+150h+Str]
0x41AF51: mov     esi, eax
0x41AF53: mov     eax, edi
0x41AF55: sub     edx, edi
0x41AF57: mov     cl, [eax]
0x41AF59: mov     [edx+eax], cl
0x41AF5C: add     eax, 1
0x41AF5F: test    cl, cl
0x41AF61: jnz     short loc_41AF57
0x41AF63: lea     ecx, [esp+150h+Str]
0x41AF67: push    5Ch ; '\'; Ch
0x41AF69: push    ecx; Str
0x41AF6A: call    _strrchr
0x41AF6F: mov     ebx, eax
0x41AF71: add     esp, 8
0x41AF74: test    ebx, ebx
0x41AF76: mov     dword ptr [esp+150h+var_134], ebx
0x41AF7A: mov     ebp, esi
0x41AF7C: jz      short loc_41AFE2
0x41AF7E: mov     edi, edi
0x41AF80: test    ebp, ebp
0x41AF82: jz      short loc_41AFE2
0x41AF84: mov     byte ptr [ebx+1], 0
0x41AF88: mov     eax, [ebp+0]
0x41AF8B: test    eax, eax
0x41AF8D: jz      short loc_41AFDD
0x41AF8F: mov     edx, eax
0x41AF91: mov     cl, [eax]
0x41AF93: add     eax, 1
0x41AF96: test    cl, cl
0x41AF98: jnz     short loc_41AF91
0x41AF9A: lea     edi, [esp+150h+Str]
0x41AF9E: sub     eax, edx
0x41AFA0: add     edi, 0FFFFFFFFh
0x41AFA3: mov     cl, [edi+1]
0x41AFA6: add     edi, 1
0x41AFA9: test    cl, cl
0x41AFAB: jnz     short loc_41AFA3
0x41AFAD: mov     ecx, eax
0x41AFAF: shr     ecx, 2
0x41AFB2: mov     esi, edx
0x41AFB4: rep movsd
0x41AFB6: mov     ecx, eax
0x41AFB8: and     ecx, 3
0x41AFBB: lea     edx, [esp+150h+Str]
0x41AFBF: rep movsb
0x41AFC1: mov     ecx, ModelLoaderPtr
0x41AFC7: push    edx
0x41AFC8: call    ModelLoader_IsModelLoaded??
0x41AFCD: test    eax, eax
0x41AFCF: jz      short loc_41AFDD
0x41AFD1: mov     ecx, [esp+150h+var_13C]
0x41AFD5: push    ecx
0x41AFD6: mov     ecx, eax
0x41AFD8: call    sub_434C00
0x41AFDD: mov     ebp, [ebp+4]
0x41AFE0: jmp     short loc_41AF80
0x41AFE2: mov     edx, [esp+150h+var_12C]
0x41AFE6: push    5Ch ; '\'; Ch
0x41AFE8: push    edx; Str
0x41AFE9: call    _strrchr
0x41AFEE: add     esp, 8
0x41AFF1: test    eax, eax
0x41AFF3: jz      loc_41B076
0x41AFF9: push    8; MaxCount
0x41AFFB: add     eax, 1
0x41AFFE: push    offset aSkeleton; "Skeleton"
0x41B003: push    eax; Str1
0x41B004: call    __strnicmp
0x41B009: add     esp, 0Ch
0x41B00C: test    eax, eax
0x41B00E: jnz     short loc_41B076
0x41B010: mov     ecx, ModelLoaderPtr
0x41B016: push    eax; int
0x41B017: mov     eax, [esp+154h+var_12C]
0x41B01B: push    eax; char *
0x41B01C: call    sub_435830
0x41B021: mov     ebx, eax
0x41B023: test    ebx, ebx
0x41B025: mov     edi, ebx
0x41B027: jz      short loc_41B062
0x41B029: lea     esp, [esp+0]
0x41B030: mov     esi, [edi]
0x41B032: test    esi, esi
0x41B034: jz      short loc_41B052
0x41B036: cmp     [esp+150h+var_13C], 0
0x41B03B: jle     short loc_41B052
0x41B03D: mov     ebp, [esp+150h+var_13C]
0x41B041: mov     ecx, ModelLoaderPtr
0x41B047: push    esi
0x41B048: call    sub_439FF0
0x41B04D: sub     ebp, 1
0x41B050: jnz     short loc_41B041
0x41B052: push    esi
0x41B053: call    FormHeapFree
0x41B058: mov     edi, [edi+4]
0x41B05B: add     esp, 4
0x41B05E: test    edi, edi
0x41B060: jnz     short loc_41B030
0x41B062: mov     ecx, ebx
0x41B064: call    BSSimpleList_Clear
0x41B069: push    ebx
0x41B06A: call    FormHeapFree
0x41B06F: mov     ebx, dword ptr [esp+154h+var_134]
0x41B073: add     esp, 4
0x41B076: mov     esi, [esp+150h+var_130]
0x41B07A: add     esi, 94h ; '”'
0x41B080: mov     ecx, esi
0x41B082: call    TESAnimation_HasAnimations
0x41B087: test    al, al
0x41B089: jz      loc_41B16F
0x41B08F: lea     eax, [esp+150h+Str]
0x41B093: mov     byte ptr [ebx+1], 0
0x41B097: add     eax, 0FFFFFFFFh
0x41B09A: lea     ebx, [ebx+0]
0x41B0A0: mov     cl, [eax+1]
0x41B0A3: add     eax, 1
0x41B0A6: test    cl, cl
0x41B0A8: jnz     short loc_41B0A0
0x41B0AA: mov     ecx, ds:dword_A3407C
0x41B0B0: mov     edx, ds:dword_A34080
0x41B0B6: mov     [eax], ecx
0x41B0B8: mov     ecx, ds:dword_A34084
0x41B0BE: mov     [eax+4], edx
0x41B0C1: mov     dl, ds:byte_A34088
0x41B0C7: lea     edi, [esp+150h+Str]
0x41B0CB: mov     [eax+8], ecx
0x41B0CE: mov     [eax+0Ch], dl
0x41B0D1: add     edi, 0FFFFFFFFh
0x41B0D4: mov     al, [edi+1]
0x41B0D7: add     edi, 1
0x41B0DA: test    al, al
0x41B0DC: jnz     short loc_41B0D4
0x41B0DE: mov     ax, ds:SubStr
0x41B0E4: lea     ecx, [esp+150h+Str]
0x41B0E8: push    5Ch ; '\'; Ch
0x41B0EA: push    ecx; Str
0x41B0EB: mov     [edi], ax
0x41B0EE: call    _strrchr
0x41B0F3: add     esp, 8
0x41B0F6: mov     ecx, esi
0x41B0F8: mov     dword ptr [esp+150h+var_134], eax
0x41B0FC: call    sub_6899C0
0x41B101: mov     ebp, eax
0x41B103: test    ebp, ebp
0x41B105: jz      short loc_41B16F
0x41B107: mov     ebx, [esp+150h+var_13C]
0x41B10B: jmp     short loc_41B110
0x41B10D: align 10h
0x41B110: mov     edx, dword ptr [esp+150h+var_134]
0x41B114: mov     byte ptr [edx+1], 0
0x41B118: mov     eax, [ebp+0]
0x41B11B: test    eax, eax
0x41B11D: jz      short loc_41B168
0x41B11F: mov     edx, eax
0x41B121: mov     cl, [eax]
0x41B123: add     eax, 1
0x41B126: test    cl, cl
0x41B128: jnz     short loc_41B121
0x41B12A: lea     edi, [esp+150h+Str]
0x41B12E: sub     eax, edx
0x41B130: add     edi, 0FFFFFFFFh
0x41B133: mov     cl, [edi+1]
0x41B136: add     edi, 1
0x41B139: test    cl, cl
0x41B13B: jnz     short loc_41B133
0x41B13D: mov     ecx, eax
0x41B13F: shr     ecx, 2
0x41B142: mov     esi, edx
0x41B144: rep movsd
0x41B146: mov     ecx, eax
0x41B148: and     ecx, 3
0x41B14B: test    ebx, ebx
0x41B14D: rep movsb
0x41B14F: jle     short loc_41B168
0x41B151: mov     esi, ebx
0x41B153: mov     ecx, ModelLoaderPtr
0x41B159: lea     eax, [esp+150h+Str]
0x41B15D: push    eax
0x41B15E: call    sub_439FF0
0x41B163: sub     esi, 1
0x41B166: jnz     short loc_41B153
0x41B168: mov     ebp, [ebp+4]
0x41B16B: test    ebp, ebp
0x41B16D: jnz     short loc_41B110
0x41B16F: mov     ecx, dword ptr [esp+150h+var_138]
0x41B173: mov     eax, [ecx+8]
0x41B176: test    eax, eax
0x41B178: jz      short MagicItem_LoadVFX??___Done
0x41B17A: add     eax, 0FFFFFFFCh
0x41B17D: mov     dword ptr [esp+150h+var_138], eax
0x41B181: jnz     loc_41ACD0
