0x6A0610: sub     esp, 8
0x6A0613: push    ebx
0x6A0614: push    esi
0x6A0615: push    edi
0x6A0616: push    4; Size
0x6A0618: lea     eax, [esp+18h+Dst]
0x6A061C: mov     esi, ecx
0x6A061E: mov     ecx, ds:0B33B00h
0x6A0624: push    eax; Dst
0x6A0625: mov     bl, 1
0x6A0627: call    SaveLoad_LoadFormID
0x6A062C: mov     ecx, [esp+1Ch+a1]
0x6A0630: push    0; int
0x6A0632: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6A0637: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A063C: push    0; int
0x6A063E: push    ecx; a1
0x6A063F: call    TESForm_LookupByFormID
0x6A0644: add     esp, 4
0x6A0647: push    eax; void *
0x6A0648: call    OblivionDynamicCast
0x6A064D: add     esp, 14h
0x6A0650: test    eax, eax
0x6A0652: mov     [esi+1Ch], eax
0x6A0655: jz      short loc_6A0670
0x6A0657: mov     ecx, eax; this
0x6A0659: call    TESObjectREFR_GetParentCell
0x6A065E: test    eax, eax
0x6A0660: jz      short loc_6A0670
0x6A0662: mov     ecx, [esi+1Ch]; this
0x6A0665: call    TESObjectREFR_GetParentCell
0x6A066A: cmp     byte ptr [eax+26h], 6
0x6A066E: jz      short loc_6A0672
0x6A0670: xor     bl, bl
0x6A0672: mov     ecx, ds:0B33B00h
0x6A0678: push    4; Size
0x6A067A: lea     edx, [esp+20h+var_C]
0x6A067E: push    edx; Dst
0x6A067F: call    SaveLoad_LoadFormID
0x6A0684: mov     eax, [esp+24h+var_14]
0x6A0688: push    0; int
0x6A068A: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x6A068F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A0694: push    0; int
0x6A0696: push    eax; a1
0x6A0697: call    TESForm_LookupByFormID
0x6A069C: add     esp, 4
0x6A069F: push    eax; void *
0x6A06A0: call    OblivionDynamicCast
0x6A06A5: mov     edi, eax
0x6A06A7: add     esp, 14h
0x6A06AA: test    edi, edi
0x6A06AC: jnz     short loc_6A06B0
0x6A06AE: xor     bl, bl
0x6A06B0: mov     eax, [esi+1Ch]
0x6A06B3: mov     edx, [esi]
0x6A06B5: mov     edx, [edx+7Ch]
0x6A06B8: push    eax
0x6A06B9: push    0
0x6A06BB: mov     ecx, esi
0x6A06BD: call    edx
0x6A06BF: test    bl, bl
0x6A06C1: jz      short loc_6A06E8
0x6A06C3: mov     ecx, [esi+1Ch]
0x6A06C6: mov     eax, [esi]
0x6A06C8: mov     edx, [eax+80h]
0x6A06CE: push    ecx
0x6A06CF: push    0
0x6A06D1: mov     ecx, esi
0x6A06D3: call    edx
0x6A06D5: mov     ecx, [esi+1Ch]
0x6A06D8: mov     eax, [esi]
0x6A06DA: mov     edx, [eax+84h]
0x6A06E0: push    edi
0x6A06E1: push    ecx
0x6A06E2: push    0
0x6A06E4: mov     ecx, esi
0x6A06E6: call    edx
0x6A06E8: pop     edi
0x6A06E9: pop     esi
0x6A06EA: mov     al, bl
0x6A06EC: pop     ebx
0x6A06ED: add     esp, 8
0x6A06F0: retn
