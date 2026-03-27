0x48D110: sub     esp, 14h
0x48D113: fld     dword ptr ds:0A3B888h
0x48D119: push    ebx
0x48D11A: push    ebp
0x48D11B: fstp    [esp+1Ch+var_10]
0x48D11F: xor     ebx, ebx
0x48D121: cmp     byte ptr [esp+1Ch+a2], bl
0x48D125: mov     ebp, ecx
0x48D127: push    esi
0x48D128: mov     [esp+20h+var_4], ebp
0x48D12C: mov     [esp+20h+var_14], ebx
0x48D130: jz      short loc_48D179
0x48D132: mov     eax, [esp+20h+arg_4]
0x48D136: push    ebx
0x48D137: push    eax
0x48D138: call    ContainerExtraData_GetEquippedInstance
0x48D13D: mov     esi, eax
0x48D13F: cmp     esi, ebx
0x48D141: jz      short loc_48D179
0x48D143: mov     ecx, [esi]
0x48D145: mov     ecx, [ecx]
0x48D147: call    sub_41DF40
0x48D14C: test    al, al
0x48D14E: jz      short loc_48D15B
0x48D150: mov     eax, esi
0x48D152: pop     esi
0x48D153: pop     ebp
0x48D154: pop     ebx
0x48D155: add     esp, 14h
0x48D158: retn    0Ch
0x48D15B: mov     ecx, [esi]
0x48D15D: cmp     ecx, ebx
0x48D15F: jz      short loc_48D166
0x48D161: call    BSSimpleList_Clear
0x48D166: mov     edx, [esi]
0x48D168: push    edx
0x48D169: call    FormHeapFree
0x48D16E: push    esi
0x48D16F: mov     [esi], ebx
0x48D171: call    FormHeapFree
0x48D176: add     esp, 8
0x48D179: mov     ecx, [ebp+4]; this
0x48D17C: cmp     ecx, ebx
0x48D17E: jz      short loc_48D187
0x48D180: call    TESObjectREFR_GetContainer
0x48D185: jmp     short loc_48D189
0x48D187: xor     eax, eax
0x48D189: add     eax, 8
0x48D18C: cmp     eax, ebx
0x48D18E: push    edi
0x48D18F: mov     [esp+24h+a2], eax
0x48D193: jz      loc_48D44C
0x48D199: jmp     short loc_48D1A4
0x48D19B: jmp     short loc_48D1A0
0x48D19D: align 10h
0x48D1A0: mov     eax, [esp+24h+a2]
0x48D1A4: cmp     [eax+4], ebx
0x48D1A7: jnz     short loc_48D1B1
0x48D1A9: cmp     [eax], ebx
0x48D1AB: jz      loc_48D44C
0x48D1B1: mov     eax, [eax]
0x48D1B3: mov     eax, [eax+4]
0x48D1B6: push    ebx; int
0x48D1B7: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x48D1BC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48D1C1: push    ebx; int
0x48D1C2: push    eax; void *
0x48D1C3: call    OblivionDynamicCast
0x48D1C8: mov     esi, eax
0x48D1CA: mov     eax, [ebp+0]
0x48D1CD: add     esp, 14h
0x48D1D0: cmp     eax, ebx
0x48D1D2: mov     [esp+24h+var_C], esi
0x48D1D6: mov     dl, 1
0x48D1D8: jz      short loc_48D1FA
0x48D1DA: lea     ebx, [ebx+0]
0x48D1E0: cmp     dl, bl
0x48D1E2: jz      short loc_48D226
0x48D1E4: mov     ecx, [eax]
0x48D1E6: cmp     ecx, ebx
0x48D1E8: jz      short loc_48D1F3
0x48D1EA: cmp     [ecx+8], esi
0x48D1ED: jnz     short loc_48D1F3
0x48D1EF: xor     dl, dl
0x48D1F1: jmp     short loc_48D1F6
0x48D1F3: mov     eax, [eax+4]
0x48D1F6: cmp     eax, ebx
0x48D1F8: jnz     short loc_48D1E0
0x48D1FA: xor     edi, edi
0x48D1FC: xor     ebp, ebp
0x48D1FE: cmp     edi, ebx
0x48D200: jz      loc_48D2A8
0x48D206: mov     eax, [edi]
0x48D208: cmp     eax, ebx
0x48D20A: jz      short loc_48D22E
0x48D20C: mov     esi, [eax]
0x48D20E: cmp     esi, ebx
0x48D210: jz      short loc_48D22E
0x48D212: mov     ecx, esi
0x48D214: call    ExtraDataList_GetOwner
0x48D219: test    eax, eax
0x48D21B: jz      short loc_48D22E
0x48D21D: mov     ecx, esi
0x48D21F: call    ExtraDataList_GetOwner
0x48D224: jmp     short loc_48D230
0x48D226: cmp     eax, ebx
0x48D228: jz      short loc_48D1FA
0x48D22A: mov     edi, [eax]
0x48D22C: jmp     short loc_48D1FC
0x48D22E: xor     eax, eax
0x48D230: cmp     eax, [esp+24h+arg_0]
0x48D234: jz      short loc_48D25A
0x48D236: cmp     [edi+4], ebx
0x48D239: jle     short loc_48D25A
0x48D23B: mov     esi, [edi]
0x48D23D: cmp     esi, ebx
0x48D23F: jz      short loc_48D25A
0x48D241: mov     ecx, [esi]
0x48D243: cmp     ecx, ebx
0x48D245: jz      short loc_48D25A
0x48D247: call    ExtraDataList_GetOwner
0x48D24C: test    eax, eax
0x48D24E: jz      short loc_48D253
0x48D250: add     ebp, 1
0x48D253: mov     esi, [esi+4]
0x48D256: cmp     esi, ebx
0x48D258: jnz     short loc_48D241
0x48D25A: mov     eax, [edi]
0x48D25C: cmp     eax, ebx
0x48D25E: jz      short loc_48D28F
0x48D260: mov     esi, [eax]
0x48D262: cmp     esi, ebx
0x48D264: jz      short loc_48D28F
0x48D266: mov     ecx, esi
0x48D268: call    ExtraDataList_GetOwner
0x48D26D: test    eax, eax
0x48D26F: jz      short loc_48D28F
0x48D271: mov     ecx, esi
0x48D273: call    ExtraDataList_GetOwner
0x48D278: cmp     eax, ebx
0x48D27A: jz      short loc_48D28F
0x48D27C: mov     ecx, [esp+24h+a2]
0x48D280: mov     edx, [ecx]
0x48D282: mov     eax, [edi+4]
0x48D285: add     eax, [edx]
0x48D287: cmp     ebp, eax
0x48D289: jge     loc_48D435
0x48D28F: mov     ecx, [esp+24h+a2]
0x48D293: mov     edx, [ecx]
0x48D295: mov     eax, [edx]
0x48D297: mov     ecx, [edi+4]
0x48D29A: add     ecx, eax
0x48D29C: test    ecx, ecx
0x48D29E: jg      short loc_48D2A8
0x48D2A0: cmp     eax, ebx
0x48D2A2: jge     loc_48D435
0x48D2A8: cmp     [esp+24h+var_C], ebx
0x48D2AC: jz      loc_48D435
0x48D2B2: cmp     [esp+24h+arg_4], 0FFFFFFFFh
0x48D2B7: jz      loc_48D435
0x48D2BD: mov     edx, [esp+24h+arg_4]
0x48D2C1: mov     esi, [esp+24h+var_C]
0x48D2C5: push    ebx
0x48D2C6: push    edx
0x48D2C7: lea     ecx, [esi+5Ch]
0x48D2CA: call    TESBipedModelForm_CoversSlot
0x48D2CF: test    al, al
0x48D2D1: jz      loc_48D435
0x48D2D7: cmp     edi, ebx
0x48D2D9: jz      loc_48D3BB
0x48D2DF: mov     eax, [edi]
0x48D2E1: cmp     eax, ebx
0x48D2E3: jz      loc_48D3BB
0x48D2E9: cmp     [eax], ebx
0x48D2EB: jz      loc_48D3BB
0x48D2F1: mov     ebp, eax
0x48D2F3: mov     edi, [ebp+0]
0x48D2F6: cmp     edi, ebx
0x48D2F8: jz      loc_48D435
0x48D2FE: push    esi
0x48D2FF: call    sub_470520
0x48D304: push    eax
0x48D305: call    Calc_ClothingRatingFromValue?
0x48D30A: fstp    [esp+2Ch+var_8]
0x48D30E: fld     [esp+2Ch+var_8]
0x48D312: add     esp, 8
0x48D315: fld     [esp+24h+var_10]
0x48D319: fcomp   st(1)
0x48D31B: fnstsw  ax
0x48D31D: test    ah, 5
0x48D320: jp      loc_48D3AC
0x48D326: mov     esi, [esp+24h+var_14]
0x48D32A: fstp    [esp+24h+var_10]
0x48D32E: cmp     esi, ebx
0x48D330: jz      short loc_48D350
0x48D332: mov     ecx, [esi]
0x48D334: cmp     ecx, ebx
0x48D336: jz      short loc_48D33D
0x48D338: call    BSSimpleList_Clear
0x48D33D: mov     eax, [esi]
0x48D33F: push    eax
0x48D340: call    FormHeapFree
0x48D345: push    esi
0x48D346: mov     [esi], ebx
0x48D348: call    FormHeapFree
0x48D34D: add     esp, 8
0x48D350: push    0Ch; Size
0x48D352: call    FormHeapAlloc
0x48D357: add     esp, 4
0x48D35A: cmp     eax, ebx
0x48D35C: jz      short loc_48D36A
0x48D35E: mov     [eax+8], ebx
0x48D361: mov     [eax], ebx
0x48D363: mov     [eax+4], ebx
0x48D366: mov     esi, eax
0x48D368: jmp     short loc_48D36C
0x48D36A: xor     esi, esi
0x48D36C: mov     ecx, [esp+24h+var_C]
0x48D370: push    8; Size
0x48D372: mov     [esp+28h+var_14], esi
0x48D376: mov     [esi+8], ecx
0x48D379: call    FormHeapAlloc
0x48D37E: add     esp, 4
0x48D381: cmp     eax, ebx
0x48D383: jz      short loc_48D39A
0x48D385: mov     [eax], ebx
0x48D387: mov     [eax+4], ebx
0x48D38A: push    edi
0x48D38B: mov     ecx, eax
0x48D38D: mov     [esi], eax
0x48D38F: call    BSSimpleList_PushFront
0x48D394: mov     esi, [esp+24h+var_C]
0x48D398: jmp     short loc_48D3AE
0x48D39A: xor     eax, eax
0x48D39C: push    edi
0x48D39D: mov     ecx, eax
0x48D39F: mov     [esi], eax
0x48D3A1: call    BSSimpleList_PushFront
0x48D3A6: mov     esi, [esp+24h+var_C]
0x48D3AA: jmp     short loc_48D3AE
0x48D3AC: fstp    st
0x48D3AE: mov     ebp, [ebp+4]
0x48D3B1: cmp     ebp, ebx
0x48D3B3: jnz     loc_48D2F3
0x48D3B9: jmp     short loc_48D435
0x48D3BB: push    esi
0x48D3BC: call    sub_470520
0x48D3C1: push    eax
0x48D3C2: call    Calc_ClothingRatingFromValue?
0x48D3C7: fstp    [esp+2Ch+var_8]
0x48D3CB: fld     [esp+2Ch+var_8]
0x48D3CF: add     esp, 8
0x48D3D2: fld     [esp+24h+var_10]
0x48D3D6: fcomp   st(1)
0x48D3D8: fnstsw  ax
0x48D3DA: test    ah, 5
0x48D3DD: jp      short loc_48D433
0x48D3DF: mov     edi, [esp+24h+var_14]
0x48D3E3: fstp    [esp+24h+var_10]
0x48D3E7: cmp     edi, ebx
0x48D3E9: jz      short loc_48D409
0x48D3EB: mov     ecx, [edi]
0x48D3ED: cmp     ecx, ebx
0x48D3EF: jz      short loc_48D3F6
0x48D3F1: call    BSSimpleList_Clear
0x48D3F6: mov     edx, [edi]
0x48D3F8: push    edx
0x48D3F9: call    FormHeapFree
0x48D3FE: push    edi
0x48D3FF: mov     [edi], ebx
0x48D401: call    FormHeapFree
0x48D406: add     esp, 8
0x48D409: push    0Ch; Size
0x48D40B: call    FormHeapAlloc
0x48D410: add     esp, 4
0x48D413: cmp     eax, ebx
0x48D415: jz      short loc_48D428
0x48D417: mov     [eax+8], ebx
0x48D41A: mov     [eax], ebx
0x48D41C: mov     [eax+4], ebx
0x48D41F: mov     [esp+24h+var_14], eax
0x48D423: mov     [eax+8], esi
0x48D426: jmp     short loc_48D435
0x48D428: xor     eax, eax
0x48D42A: mov     [esp+24h+var_14], eax
0x48D42E: mov     [eax+8], esi
0x48D431: jmp     short loc_48D435
0x48D433: fstp    st
0x48D435: mov     eax, [esp+24h+a2]
0x48D439: mov     eax, [eax+4]
0x48D43C: cmp     eax, ebx
0x48D43E: mov     ebp, [esp+24h+var_4]
0x48D442: mov     [esp+24h+a2], eax
0x48D446: jnz     loc_48D1A0
0x48D44C: mov     esi, [ebp+0]
0x48D44F: cmp     esi, ebx
0x48D451: mov     [esp+24h+var_C], esi
0x48D455: jz      loc_48D6AD
0x48D45B: jmp     short loc_48D464
0x48D45D: align 10h
0x48D460: mov     ebp, [esp+24h+var_4]
0x48D464: cmp     [esi+4], ebx
0x48D467: jnz     short loc_48D471
0x48D469: cmp     [esi], ebx
0x48D46B: jz      loc_48D6AD
0x48D471: mov     eax, [esi]
0x48D473: mov     ecx, [eax+8]
0x48D476: push    ebx; int
0x48D477: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x48D47C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48D481: push    ebx; int
0x48D482: push    ecx; void *
0x48D483: call    OblivionDynamicCast
0x48D488: mov     edi, [esi]
0x48D48A: add     esp, 14h
0x48D48D: cmp     eax, ebx
0x48D48F: mov     [esp+24h+a2], eax
0x48D493: jz      loc_48D69A
0x48D499: mov     eax, [edi]
0x48D49B: cmp     eax, ebx
0x48D49D: jz      short loc_48D4E7
0x48D49F: mov     esi, [eax]
0x48D4A1: cmp     esi, ebx
0x48D4A3: jz      short loc_48D4E7
0x48D4A5: mov     ecx, esi
0x48D4A7: call    ExtraDataList_GetOwner
0x48D4AC: test    eax, eax
0x48D4AE: jz      short loc_48D4E7
0x48D4B0: mov     ecx, esi
0x48D4B2: call    ExtraDataList_GetOwner
0x48D4B7: cmp     eax, ebx
0x48D4B9: jz      short loc_48D4E7
0x48D4BB: mov     eax, [edi]
0x48D4BD: cmp     eax, ebx
0x48D4BF: jz      short loc_48D4DB
0x48D4C1: mov     esi, [eax]
0x48D4C3: cmp     esi, ebx
0x48D4C5: jz      short loc_48D4DB
0x48D4C7: mov     ecx, esi
0x48D4C9: call    ExtraDataList_GetOwner
0x48D4CE: test    eax, eax
0x48D4D0: jz      short loc_48D4DB
0x48D4D2: mov     ecx, esi
0x48D4D4: call    ExtraDataList_GetOwner
0x48D4D9: jmp     short loc_48D4DD
0x48D4DB: xor     eax, eax
0x48D4DD: cmp     eax, [esp+24h+arg_0]
0x48D4E1: jnz     loc_48D69A
0x48D4E7: cmp     [edi+4], ebx
0x48D4EA: jz      loc_48D69A
0x48D4F0: mov     ecx, [ebp+4]; this
0x48D4F3: cmp     ecx, ebx
0x48D4F5: jz      short loc_48D4FE
0x48D4F7: call    TESObjectREFR_GetContainer
0x48D4FC: jmp     short loc_48D500
0x48D4FE: xor     eax, eax
0x48D500: mov     ebp, [esp+24h+a2]
0x48D504: push    ebp; a2
0x48D505: mov     ecx, eax; this
0x48D507: call    TESContainer_HasForm
0x48D50C: test    al, al
0x48D50E: jnz     loc_48D69A
0x48D514: mov     eax, [esp+24h+arg_4]
0x48D518: cmp     eax, 0FFFFFFFFh
0x48D51B: jz      loc_48D69A
0x48D521: push    ebx
0x48D522: push    eax
0x48D523: lea     ecx, [ebp+5Ch]
0x48D526: call    TESBipedModelForm_CoversSlot
0x48D52B: test    al, al
0x48D52D: jz      loc_48D69A
0x48D533: mov     ecx, edi
0x48D535: call    sub_4846D0
0x48D53A: test    al, al
0x48D53C: jz      short loc_48D547
0x48D53E: cmp     [edi+4], ebx
0x48D541: jl      loc_48D69A
0x48D547: mov     eax, [edi]
0x48D549: cmp     eax, ebx
0x48D54B: jz      loc_48D620
0x48D551: cmp     [eax], ebx
0x48D553: jz      loc_48D620
0x48D559: mov     ebp, eax
0x48D55B: jmp     short loc_48D560
0x48D55D: align 10h
0x48D560: mov     edi, [ebp+0]
0x48D563: cmp     edi, ebx
0x48D565: jz      loc_48D69A
0x48D56B: mov     edx, [esp+24h+a2]
0x48D56F: push    edx
0x48D570: call    sub_470520
0x48D575: push    eax
0x48D576: call    Calc_ClothingRatingFromValue?
0x48D57B: fstp    [esp+2Ch+var_8]
0x48D57F: fld     [esp+2Ch+var_8]
0x48D583: add     esp, 8
0x48D586: fld     [esp+24h+var_10]
0x48D58A: fcomp   st(1)
0x48D58C: fnstsw  ax
0x48D58E: test    ah, 5
0x48D591: jp      short loc_48D611
0x48D593: mov     esi, [esp+24h+var_14]
0x48D597: fstp    [esp+24h+var_10]
0x48D59B: cmp     esi, ebx
0x48D59D: jz      short loc_48D5BD
0x48D59F: mov     ecx, [esi]
0x48D5A1: cmp     ecx, ebx
0x48D5A3: jz      short loc_48D5AA
0x48D5A5: call    BSSimpleList_Clear
0x48D5AA: mov     eax, [esi]
0x48D5AC: push    eax
0x48D5AD: call    FormHeapFree
0x48D5B2: push    esi
0x48D5B3: mov     [esi], ebx
0x48D5B5: call    FormHeapFree
0x48D5BA: add     esp, 8
0x48D5BD: push    0Ch; Size
0x48D5BF: call    FormHeapAlloc
0x48D5C4: add     esp, 4
0x48D5C7: cmp     eax, ebx
0x48D5C9: jz      short loc_48D5D7
0x48D5CB: mov     [eax+8], ebx
0x48D5CE: mov     [eax], ebx
0x48D5D0: mov     [eax+4], ebx
0x48D5D3: mov     esi, eax
0x48D5D5: jmp     short loc_48D5D9
0x48D5D7: xor     esi, esi
0x48D5D9: mov     ecx, [esp+24h+a2]
0x48D5DD: push    8; Size
0x48D5DF: mov     [esp+28h+var_14], esi
0x48D5E3: mov     [esi+8], ecx
0x48D5E6: call    FormHeapAlloc
0x48D5EB: add     esp, 4
0x48D5EE: cmp     eax, ebx
0x48D5F0: jz      short loc_48D603
0x48D5F2: mov     [eax], ebx
0x48D5F4: mov     [eax+4], ebx
0x48D5F7: push    edi
0x48D5F8: mov     ecx, eax
0x48D5FA: mov     [esi], eax
0x48D5FC: call    BSSimpleList_PushFront
0x48D601: jmp     short loc_48D613
0x48D603: xor     eax, eax
0x48D605: push    edi
0x48D606: mov     ecx, eax
0x48D608: mov     [esi], eax
0x48D60A: call    BSSimpleList_PushFront
0x48D60F: jmp     short loc_48D613
0x48D611: fstp    st
0x48D613: mov     ebp, [ebp+4]
0x48D616: cmp     ebp, ebx
0x48D618: jnz     loc_48D560
0x48D61E: jmp     short loc_48D69A
0x48D620: push    ebp
0x48D621: call    sub_470520
0x48D626: push    eax
0x48D627: call    Calc_ClothingRatingFromValue?
0x48D62C: fstp    [esp+2Ch+var_8]
0x48D630: fld     [esp+2Ch+var_8]
0x48D634: add     esp, 8
0x48D637: fld     [esp+24h+var_10]
0x48D63B: fcomp   st(1)
0x48D63D: fnstsw  ax
0x48D63F: test    ah, 5
0x48D642: jp      short loc_48D698
0x48D644: mov     esi, [esp+24h+var_14]
0x48D648: fstp    [esp+24h+var_10]
0x48D64C: cmp     esi, ebx
0x48D64E: jz      short loc_48D66E
0x48D650: mov     ecx, [esi]
0x48D652: cmp     ecx, ebx
0x48D654: jz      short loc_48D65B
0x48D656: call    BSSimpleList_Clear
0x48D65B: mov     edx, [esi]
0x48D65D: push    edx
0x48D65E: call    FormHeapFree
0x48D663: push    esi
0x48D664: mov     [esi], ebx
0x48D666: call    FormHeapFree
0x48D66B: add     esp, 8
0x48D66E: push    0Ch; Size
0x48D670: call    FormHeapAlloc
0x48D675: add     esp, 4
0x48D678: cmp     eax, ebx
0x48D67A: jz      short loc_48D68D
0x48D67C: mov     [eax+8], ebx
0x48D67F: mov     [eax], ebx
0x48D681: mov     [eax+4], ebx
0x48D684: mov     [esp+24h+var_14], eax
0x48D688: mov     [eax+8], ebp
0x48D68B: jmp     short loc_48D69A
0x48D68D: xor     eax, eax
0x48D68F: mov     [esp+24h+var_14], eax
0x48D693: mov     [eax+8], ebp
0x48D696: jmp     short loc_48D69A
0x48D698: fstp    st
0x48D69A: mov     eax, [esp+24h+var_C]
0x48D69E: mov     esi, [eax+4]
0x48D6A1: cmp     esi, ebx
0x48D6A3: mov     [esp+24h+var_C], esi
0x48D6A7: jnz     loc_48D460
0x48D6AD: mov     eax, [esp+24h+var_14]
0x48D6B1: pop     edi
0x48D6B2: pop     esi
0x48D6B3: pop     ebp
0x48D6B4: pop     ebx
0x48D6B5: add     esp, 14h
0x48D6B8: retn    0Ch
