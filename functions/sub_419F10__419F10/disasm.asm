0x419F10: push    0FFFFFFFFh
0x419F12: push    offset SEH_41A610
0x419F17: mov     eax, large fs:0
0x419F1D: push    eax
0x419F1E: sub     esp, 12Ch
0x419F24: mov     eax, ___security_cookie
0x419F29: xor     eax, esp
0x419F2B: mov     [esp+138h+var_10], eax
0x419F32: push    ebx
0x419F33: push    ebp
0x419F34: push    esi
0x419F35: push    edi
0x419F36: mov     eax, ___security_cookie
0x419F3B: xor     eax, esp
0x419F3D: push    eax
0x419F3E: lea     eax, [esp+14Ch+var_C]
0x419F45: mov     large fs:0, eax
0x419F4B: mov     edi, ecx
0x419F4D: call    sub_419D90
0x419F52: test    al, al
0x419F54: jz      loc_41A47F
0x419F5A: push    0
0x419F5C: mov     ecx, edi
0x419F5E: call    MagicItem_GetFXEffect
0x419F63: mov     ecx, edi
0x419F65: mov     esi, eax
0x419F67: mov     [esp+14Ch+var_135], 0
0x419F6C: call    sub_419E50
0x419F71: test    al, al
0x419F73: jz      short loc_419F7A
0x419F75: mov     [esp+14Ch+var_135], 1
0x419F7A: test    esi, esi
0x419F7C: jz      short loc_419FD3
0x419F7E: movzx   eax, word ptr [esi+20h]
0x419F82: cmp     ax, 0FFFFh
0x419F86: jnz     short loc_419F9D
0x419F88: mov     eax, [esi+1Ch]
0x419F8B: lea     edx, [eax+1]
0x419F8E: mov     edi, edi
0x419F90: mov     cl, [eax]
0x419F92: add     eax, 1
0x419F95: test    cl, cl
0x419F97: jnz     short loc_419F90
0x419F99: sub     eax, edx
0x419F9B: jmp     short loc_419FA0
0x419F9D: movzx   eax, ax
0x419FA0: test    eax, eax
0x419FA2: jz      short loc_419FD3
0x419FA4: cmp     [esp+14Ch+var_135], 0
0x419FA9: jnz     short loc_419FCC
0x419FAB: mov     eax, [esp+14Ch+arg_0]
0x419FB2: mov     edx, [esi+18h]
0x419FB5: lea     ecx, [esi+18h]
0x419FB8: push    1
0x419FBA: push    eax
0x419FBB: mov     eax, [edx+14h]
0x419FBE: call    eax
0x419FC0: mov     ecx, ModelLoaderPtr
0x419FC6: push    eax
0x419FC7: call    QueuedModelLoader_RemoveModel
0x419FCC: mov     ecx, esi
0x419FCE: call    EffectSetting_ReduceUnkA0
0x419FD3: test    edi, edi
0x419FD5: jz      short loc_419FDC
0x419FD7: add     edi, 0Ch
0x419FDA: jmp     short loc_419FDE
0x419FDC: xor     edi, edi
0x419FDE: cmp     dword ptr [edi+8], 0
0x419FE2: mov     [esp+14Ch+var_130], edi
0x419FE6: jnz     short loc_419FF2
0x419FE8: cmp     dword ptr [edi+4], 0
0x419FEC: jz      loc_41A47F
0x419FF2: test    edi, edi
0x419FF4: jz      loc_41A47F
0x419FFA: jmp     short loc_41A004
0x419FFC: align 10h
0x41A000: mov     edi, [esp+14Ch+var_130]
0x41A004: mov     eax, [edi+4]
0x41A007: mov     eax, [eax+1Ch]
0x41A00A: test    dword ptr [eax+58h], 70000h
0x41A011: mov     [esp+14Ch+var_12C], eax
0x41A015: jz      loc_41A467
0x41A01B: cmp     [esp+14Ch+var_135], 0
0x41A020: jnz     loc_41A435
0x41A026: mov     ecx, eax
0x41A028: mov     eax, [ecx+60h]
0x41A02B: push    eax; a1
0x41A02C: call    TESForm_LookupByFormID
0x41A031: mov     edi, eax
0x41A033: add     esp, 4
0x41A036: test    edi, edi
0x41A038: jz      loc_41A435
0x41A03E: mov     edx, [esp+14Ch+var_12C]
0x41A042: mov     eax, [edx+58h]
0x41A045: mov     ecx, eax
0x41A047: shr     ecx, 10h
0x41A04A: test    cl, 1
0x41A04D: jz      short loc_41A0A4
0x41A04F: push    0; int
0x41A051: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x41A056: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A05B: push    0; int
0x41A05D: push    edi; void *
0x41A05E: call    OblivionDynamicCast
0x41A063: add     esp, 14h
0x41A066: test    eax, eax
0x41A068: jz      loc_41A435
0x41A06E: lea     esi, [eax+30h]
0x41A071: mov     ecx, esi
0x41A073: call    sub_449190
0x41A078: test    eax, eax
0x41A07A: jbe     loc_41A435
0x41A080: mov     edx, [esp+14Ch+arg_0]
0x41A087: mov     eax, [esi]
0x41A089: push    1
0x41A08B: push    edx
0x41A08C: mov     edx, [eax+14h]
0x41A08F: mov     ecx, esi
0x41A091: call    edx
0x41A093: mov     ecx, ModelLoaderPtr
0x41A099: push    eax
0x41A09A: call    QueuedModelLoader_RemoveModel
0x41A09F: jmp     loc_41A435
0x41A0A4: mov     ecx, eax
0x41A0A6: shr     ecx, 11h
0x41A0A9: test    cl, 1
0x41A0AC: jz      short loc_41A10C
0x41A0AE: push    0; int
0x41A0B0: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x41A0B5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A0BA: push    0; int
0x41A0BC: push    edi; void *
0x41A0BD: call    OblivionDynamicCast
0x41A0C2: add     esp, 14h
0x41A0C5: test    eax, eax
0x41A0C7: jz      loc_41A435
0x41A0CD: mov     edi, [esp+14Ch+arg_0]
0x41A0D4: push    1
0x41A0D6: lea     esi, [eax+64h]
0x41A0D9: push    edi
0x41A0DA: push    0
0x41A0DC: mov     ecx, esi
0x41A0DE: call    TESBipedModelForm_GetModelPath
0x41A0E3: mov     ecx, ModelLoaderPtr
0x41A0E9: push    eax
0x41A0EA: call    QueuedModelLoader_RemoveModel
0x41A0EF: push    1
0x41A0F1: push    edi
0x41A0F2: push    1
0x41A0F4: mov     ecx, esi
0x41A0F6: call    TESBipedModelForm_GetModelPath
0x41A0FB: mov     ecx, ModelLoaderPtr
0x41A101: push    eax
0x41A102: call    QueuedModelLoader_RemoveModel
0x41A107: jmp     loc_41A435
0x41A10C: shr     eax, 12h
0x41A10F: test    al, 1
0x41A111: jz      loc_41A435
0x41A117: cmp     byte ptr [edi+4], 25h ; '%'
0x41A11B: jnz     short loc_41A16D
0x41A11D: lea     ecx, [esp+14Ch+var_124]
0x41A121: call    TESContainer_constr
0x41A126: mov     ecx, TESDataHandler_g_PlayerRef
0x41A12C: lea     edx, [esp+14Ch+var_124]
0x41A130: push    edx; int
0x41A131: push    1
0x41A133: mov     [esp+154h+var_4], 0
0x41A13E: call    Actor_GetLevel
0x41A143: lea     ecx, [edi+24h]; this
0x41A146: push    eax; int
0x41A147: call    TESLeveledList_CalcLeveledForm
0x41A14C: push    0
0x41A14E: lea     ecx, [esp+150h+var_124]
0x41A152: call    TESContainer_GetNthForm
0x41A157: lea     ecx, [esp+14Ch+var_124]
0x41A15B: mov     edi, eax
0x41A15D: mov     [esp+14Ch+var_4], 0FFFFFFFFh
0x41A168: call    TESContainer_destr
0x41A16D: push    0; int
0x41A16F: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x41A174: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A179: push    0; int
0x41A17B: push    edi; void *
0x41A17C: call    OblivionDynamicCast
0x41A181: add     esp, 14h
0x41A184: test    eax, eax
0x41A186: jz      short loc_41A1D5
0x41A188: push    1
0x41A18A: push    1
0x41A18C: mov     ecx, eax
0x41A18E: call    sub_5234F0
0x41A193: mov     ebp, eax
0x41A195: test    ebp, ebp
0x41A197: mov     esi, ebp
0x41A199: jz      short loc_41A1C5
0x41A19B: mov     ebx, [esp+14Ch+arg_0]
0x41A1A2: cmp     dword ptr [esi+4], 0
0x41A1A6: jnz     short loc_41A1AD
0x41A1A8: cmp     dword ptr [esi], 0
0x41A1AB: jz      short loc_41A1C5
0x41A1AD: mov     eax, [esi]
0x41A1AF: mov     ecx, ModelLoaderPtr
0x41A1B5: push    1
0x41A1B7: push    ebx
0x41A1B8: push    eax
0x41A1B9: call    QueuedModelLoader_RemoveModel
0x41A1BE: mov     esi, [esi+4]
0x41A1C1: test    esi, esi
0x41A1C3: jnz     short loc_41A1A2
0x41A1C5: mov     ecx, ebp
0x41A1C7: call    BSSimpleList_Clear
0x41A1CC: push    ebp
0x41A1CD: call    FormHeapFree
0x41A1D2: add     esp, 4
0x41A1D5: push    0; int
0x41A1D7: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x41A1DC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A1E1: push    0; int
0x41A1E3: push    edi; void *
0x41A1E4: call    OblivionDynamicCast
0x41A1E9: add     esp, 14h
0x41A1EC: test    eax, eax
0x41A1EE: mov     [esp+14Ch+var_128], eax
0x41A1F2: jz      loc_41A435
0x41A1F8: mov     ecx, [esp+14Ch+arg_0]
0x41A1FF: mov     edi, eax
0x41A201: mov     edx, [edi+0ACh]
0x41A207: mov     eax, [edx+14h]
0x41A20A: lea     esi, [edi+0ACh]
0x41A210: push    1
0x41A212: push    ecx
0x41A213: mov     ecx, esi
0x41A215: call    eax
0x41A217: mov     ecx, ModelLoaderPtr
0x41A21D: push    eax
0x41A21E: call    QueuedModelLoader_RemoveModel
0x41A223: mov     edx, [esi]
0x41A225: mov     eax, [edx+14h]
0x41A228: mov     ecx, esi
0x41A22A: call    eax
0x41A22C: lea     ecx, [edi+0ECh]
0x41A232: mov     ebx, eax
0x41A234: call    sub_6899C0
0x41A239: lea     edx, [esp+14Ch+Str]
0x41A23D: mov     esi, eax
0x41A23F: mov     eax, ebx
0x41A241: sub     edx, ebx
0x41A243: mov     cl, [eax]
0x41A245: mov     [edx+eax], cl
0x41A248: add     eax, 1
0x41A24B: test    cl, cl
0x41A24D: jnz     short loc_41A243
0x41A24F: lea     ecx, [esp+14Ch+Str]
0x41A253: push    5Ch ; '\'; Ch
0x41A255: push    ecx; Str
0x41A256: call    _strrchr
0x41A25B: mov     ecx, eax
0x41A25D: add     esp, 8
0x41A260: test    ecx, ecx
0x41A262: mov     [esp+14Ch+var_134], ecx
0x41A266: mov     ebp, esi
0x41A268: jz      short loc_41A2D0
0x41A26A: lea     ebx, [ebx+0]
0x41A270: test    ebp, ebp
0x41A272: jz      short loc_41A2D0
0x41A274: mov     byte ptr [ecx+1], 0
0x41A278: mov     eax, [ebp+0]
0x41A27B: test    eax, eax
0x41A27D: jz      short loc_41A2CB
0x41A27F: mov     edx, eax
0x41A281: mov     cl, [eax]
0x41A283: add     eax, 1
0x41A286: test    cl, cl
0x41A288: jnz     short loc_41A281
0x41A28A: lea     edi, [esp+14Ch+Str]
0x41A28E: sub     eax, edx
0x41A290: add     edi, 0FFFFFFFFh
0x41A293: mov     cl, [edi+1]
0x41A296: add     edi, 1
0x41A299: test    cl, cl
0x41A29B: jnz     short loc_41A293
0x41A29D: mov     ecx, eax
0x41A29F: shr     ecx, 2
0x41A2A2: mov     esi, edx
0x41A2A4: mov     edx, [esp+14Ch+arg_0]
0x41A2AB: rep movsd
0x41A2AD: mov     ecx, eax
0x41A2AF: push    1
0x41A2B1: and     ecx, 3
0x41A2B4: push    edx
0x41A2B5: lea     eax, [esp+154h+Str]
0x41A2B9: rep movsb
0x41A2BB: mov     ecx, ModelLoaderPtr
0x41A2C1: push    eax
0x41A2C2: call    QueuedModelLoader_RemoveModel
0x41A2C7: mov     ecx, [esp+14Ch+var_134]
0x41A2CB: mov     ebp, [ebp+4]
0x41A2CE: jmp     short loc_41A270
0x41A2D0: push    5Ch ; '\'; Ch
0x41A2D2: push    ebx; Str
0x41A2D3: call    _strrchr
0x41A2D8: add     esp, 8
0x41A2DB: test    eax, eax
0x41A2DD: jz      short loc_41A345
0x41A2DF: push    8; MaxCount
0x41A2E1: add     eax, 1
0x41A2E4: push    offset aSkeleton; "Skeleton"
0x41A2E9: push    eax; Str1
0x41A2EA: call    __strnicmp
0x41A2EF: add     esp, 0Ch
0x41A2F2: test    eax, eax
0x41A2F4: jnz     short loc_41A345
0x41A2F6: mov     ecx, ModelLoaderPtr
0x41A2FC: push    eax; int
0x41A2FD: push    ebx; char *
0x41A2FE: call    sub_435830
0x41A303: mov     ebp, eax
0x41A305: test    ebp, ebp
0x41A307: mov     esi, ebp
0x41A309: jz      short loc_41A335
0x41A30B: mov     ebx, [esp+14Ch+arg_0]
0x41A312: mov     edi, [esi]
0x41A314: test    edi, edi
0x41A316: jz      short loc_41A325
0x41A318: mov     ecx, ModelLoaderPtr
0x41A31E: push    ebx
0x41A31F: push    edi
0x41A320: call    sub_438540
0x41A325: push    edi
0x41A326: call    FormHeapFree
0x41A32B: mov     esi, [esi+4]
0x41A32E: add     esp, 4
0x41A331: test    esi, esi
0x41A333: jnz     short loc_41A312
0x41A335: mov     ecx, ebp
0x41A337: call    BSSimpleList_Clear
0x41A33C: push    ebp
0x41A33D: call    FormHeapFree
0x41A342: add     esp, 4
0x41A345: mov     esi, [esp+14Ch+var_128]
0x41A349: add     esi, 94h ; '”'
0x41A34F: mov     ecx, esi
0x41A351: call    TESAnimation_HasAnimations
0x41A356: test    al, al
0x41A358: jz      loc_41A435
0x41A35E: mov     ecx, [esp+14Ch+var_134]
0x41A362: lea     eax, [esp+14Ch+Str]
0x41A366: mov     byte ptr [ecx+1], 0
0x41A36A: add     eax, 0FFFFFFFFh
0x41A36D: lea     ecx, [ecx+0]
0x41A370: mov     cl, [eax+1]
0x41A373: add     eax, 1
0x41A376: test    cl, cl
0x41A378: jnz     short loc_41A370
0x41A37A: mov     edx, ds:dword_A3407C
0x41A380: mov     ecx, ds:dword_A34080
0x41A386: mov     [eax], edx
0x41A388: mov     edx, ds:dword_A34084
0x41A38E: mov     [eax+4], ecx
0x41A391: mov     cl, ds:byte_A34088
0x41A397: lea     edi, [esp+14Ch+Str]
0x41A39B: mov     [eax+8], edx
0x41A39E: mov     [eax+0Ch], cl
0x41A3A1: add     edi, 0FFFFFFFFh
0x41A3A4: mov     al, [edi+1]
0x41A3A7: add     edi, 1
0x41A3AA: test    al, al
0x41A3AC: jnz     short loc_41A3A4
0x41A3AE: mov     dx, ds:SubStr
0x41A3B5: lea     eax, [esp+14Ch+Str]
0x41A3B9: push    5Ch ; '\'; Ch
0x41A3BB: push    eax; Str
0x41A3BC: mov     [edi], dx
0x41A3BF: call    _strrchr
0x41A3C4: add     esp, 8
0x41A3C7: mov     ecx, esi
0x41A3C9: mov     [esp+14Ch+var_134], eax
0x41A3CD: call    sub_6899C0
0x41A3D2: mov     ebp, eax
0x41A3D4: test    ebp, ebp
0x41A3D6: jz      short loc_41A435
0x41A3D8: mov     ebx, [esp+14Ch+arg_0]
0x41A3DF: nop
0x41A3E0: mov     ecx, [esp+14Ch+var_134]
0x41A3E4: mov     byte ptr [ecx+1], 0
0x41A3E8: mov     eax, [ebp+0]
0x41A3EB: test    eax, eax
0x41A3ED: jz      short loc_41A42E
0x41A3EF: mov     edx, eax
0x41A3F1: mov     cl, [eax]
0x41A3F3: add     eax, 1
0x41A3F6: test    cl, cl
0x41A3F8: jnz     short loc_41A3F1
0x41A3FA: lea     edi, [esp+14Ch+Str]
0x41A3FE: sub     eax, edx
0x41A400: add     edi, 0FFFFFFFFh
0x41A403: mov     cl, [edi+1]
0x41A406: add     edi, 1
0x41A409: test    cl, cl
0x41A40B: jnz     short loc_41A403
0x41A40D: mov     ecx, eax
0x41A40F: shr     ecx, 2
0x41A412: mov     esi, edx
0x41A414: rep movsd
0x41A416: mov     ecx, eax
0x41A418: and     ecx, 3
0x41A41B: push    ebx
0x41A41C: lea     edx, [esp+150h+Str]
0x41A420: rep movsb
0x41A422: mov     ecx, ModelLoaderPtr
0x41A428: push    edx
0x41A429: call    sub_438540
0x41A42E: mov     ebp, [ebp+4]
0x41A431: test    ebp, ebp
0x41A433: jnz     short loc_41A3E0
0x41A435: mov     esi, [esp+14Ch+var_12C]
0x41A439: mov     ecx, esi
0x41A43B: call    EffectSetting_ReduceUnkA4
0x41A440: mov     ecx, esi
0x41A442: call    EffectSetting_IsUnkA4Positive
0x41A447: test    al, al
0x41A449: jnz     short loc_41A467
0x41A44B: mov     ecx, esi
0x41A44D: call    EffectSetting_IsUnkA4Negative
0x41A452: test    al, al
0x41A454: jnz     short loc_41A467
0x41A456: mov     eax, [esi+58h]
0x41A459: shr     eax, 12h
0x41A45C: test    al, 1
0x41A45E: jz      short loc_41A467
0x41A460: sub     dword_B33518, 1
0x41A467: mov     ecx, [esp+14Ch+var_130]
0x41A46B: mov     eax, [ecx+8]
0x41A46E: test    eax, eax
0x41A470: jz      short loc_41A47F
0x41A472: add     eax, 0FFFFFFFCh
0x41A475: mov     [esp+14Ch+var_130], eax
0x41A479: jnz     loc_41A000
0x41A47F: mov     ecx, dword ptr [esp+14Ch+var_C]
0x41A486: mov     large fs:0, ecx
0x41A48D: pop     ecx
0x41A48E: pop     edi
0x41A48F: pop     esi
0x41A490: pop     ebp
0x41A491: pop     ebx
0x41A492: mov     ecx, [esp+138h+var_10]
0x41A499: xor     ecx, esp
0x41A49B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x41A4A0: add     esp, 138h
0x41A4A6: retn    4
