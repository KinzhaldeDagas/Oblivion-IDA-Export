0x48E060: push    0FFFFFFFFh
0x48E062: push    offset ExtraContainerChanges_RunScripts_SEH
0x48E067: mov     eax, large fs:0
0x48E06D: push    eax
0x48E06E: sub     esp, 1Ch
0x48E071: push    ebx
0x48E072: push    ebp
0x48E073: push    esi
0x48E074: push    edi
0x48E075: mov     eax, ds:0B30AACh
0x48E07A: xor     eax, esp
0x48E07C: push    eax
0x48E07D: lea     eax, [esp+3Ch+var_C]
0x48E081: mov     large fs:0, eax
0x48E087: mov     [esp+3Ch+var_18], ecx
0x48E08B: mov     ecx, [ecx+4]; this
0x48E08E: test    ecx, ecx
0x48E090: jz      short loc_48E099
0x48E092: call    TESObjectREFR_GetContainer
0x48E097: jmp     short loc_48E09B
0x48E099: xor     eax, eax
0x48E09B: add     eax, 8
0x48E09E: mov     [esp+3Ch+var_1C], eax
0x48E0A2: jz      loc_48E3FE
0x48E0A8: jmp     short loc_48E0B4
0x48E0AA: align 10h
0x48E0B0: mov     eax, [esp+3Ch+var_1C]
0x48E0B4: cmp     dword ptr [eax+4], 0
0x48E0B8: jnz     short loc_48E0C3
0x48E0BA: cmp     dword ptr [eax], 0
0x48E0BD: jz      loc_48E3FE
0x48E0C3: mov     esi, [eax]
0x48E0C5: mov     eax, [esi+4]
0x48E0C8: push    0; int
0x48E0CA: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x48E0CF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x48E0D4: push    0; int
0x48E0D6: push    eax; void *
0x48E0D7: call    OblivionDynamicCast
0x48E0DC: add     esp, 14h
0x48E0DF: test    eax, eax
0x48E0E1: jz      short loc_48E0E8
0x48E0E3: mov     ecx, [eax+4]
0x48E0E6: jmp     short loc_48E0EA
0x48E0E8: xor     ecx, ecx
0x48E0EA: mov     eax, [esi]
0x48E0EC: cdq
0x48E0ED: mov     ebx, eax
0x48E0EF: xor     ebx, edx
0x48E0F1: sub     ebx, edx
0x48E0F3: test    ecx, ecx
0x48E0F5: mov     [esp+3Ch+var_24], ecx
0x48E0F9: jz      loc_48E3EB
0x48E0FF: test    ebx, ebx
0x48E101: jle     loc_48E3EB
0x48E107: mov     eax, [esi+4]
0x48E10A: mov     ecx, [esp+3Ch+var_18]
0x48E10E: xor     ebp, ebp
0x48E110: push    ebp
0x48E111: push    1
0x48E113: push    eax
0x48E114: call    ContainerExtraData_GetEntryForForm
0x48E119: mov     edi, eax
0x48E11B: cmp     edi, ebp
0x48E11D: mov     [esp+3Ch+var_20], edi
0x48E121: jz      loc_48E1B2
0x48E127: mov     ecx, edi
0x48E129: call    sub_484F20
0x48E12E: test    eax, eax
0x48E130: jz      loc_48E1B2
0x48E136: mov     ebp, [edi]
0x48E138: test    ebp, ebp
0x48E13A: jz      loc_48E3EB
0x48E140: mov     edi, [ebp+0]
0x48E143: test    edi, edi
0x48E145: jz      loc_48E3EB
0x48E14B: push    58h ; 'X'; Size
0x48E14D: call    FormHeapAlloc
0x48E152: add     esp, 4
0x48E155: mov     [esp+3Ch+var_14], eax
0x48E159: test    eax, eax
0x48E15B: mov     [esp+3Ch+var_4], 4
0x48E163: jz      short loc_48E170
0x48E165: mov     ecx, eax
0x48E167: call    TESObjectREFR_constr
0x48E16C: mov     esi, eax
0x48E16E: jmp     short loc_48E172
0x48E170: xor     esi, esi
0x48E172: mov     ecx, esi; this
0x48E174: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x48E17C: call    TESForm_MakeTemporary
0x48E181: push    0; ArgList
0x48E183: push    0; int
0x48E185: mov     ecx, edi; this
0x48E187: call    ExtraDataList_GetExtraScriptEventList
0x48E18C: mov     ecx, [esp+44h+var_24]; int
0x48E190: push    eax; int
0x48E191: push    esi; int
0x48E192: call    Script_Run
0x48E197: test    esi, esi
0x48E199: jz      short loc_48E1A6
0x48E19B: mov     edx, [esi]
0x48E19D: mov     eax, [edx+10h]
0x48E1A0: push    1
0x48E1A2: mov     ecx, esi
0x48E1A4: call    eax
0x48E1A6: mov     ebp, [ebp+4]
0x48E1A9: test    ebp, ebp
0x48E1AB: jnz     short loc_48E140
0x48E1AD: jmp     loc_48E3EB
0x48E1B2: cmp     edi, ebp
0x48E1B4: mov     byte ptr [esp+3Ch+var_28+3], 0
0x48E1B9: jnz     short loc_48E1F4
0x48E1BB: push    0Ch; Size
0x48E1BD: mov     byte ptr [esp+40h+var_28+3], 1
0x48E1C2: call    FormHeapAlloc
0x48E1C7: add     esp, 4
0x48E1CA: mov     [esp+3Ch+var_14], eax
0x48E1CE: cmp     eax, ebp
0x48E1D0: mov     [esp+3Ch+var_4], ebp
0x48E1D4: jz      short loc_48E1E4
0x48E1D6: mov     ecx, [esi+4]
0x48E1D9: push    ebp
0x48E1DA: push    ecx
0x48E1DB: mov     ecx, eax
0x48E1DD: call    ContainerEntryExtraData_constr
0x48E1E2: jmp     short loc_48E1E6
0x48E1E4: xor     eax, eax
0x48E1E6: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x48E1EE: mov     edi, eax
0x48E1F0: mov     [esp+3Ch+var_20], eax
0x48E1F4: mov     eax, [edi]
0x48E1F6: cmp     eax, ebp
0x48E1F8: jnz     short loc_48E21D
0x48E1FA: push    8; Size
0x48E1FC: call    FormHeapAlloc
0x48E201: add     esp, 4
0x48E204: cmp     eax, ebp
0x48E206: jz      short loc_48E214
0x48E208: mov     [eax], ebp
0x48E20A: mov     [eax+4], ebp
0x48E20D: mov     [edi], eax
0x48E20F: jmp     loc_48E2C5
0x48E214: xor     eax, eax
0x48E216: mov     [edi], eax
0x48E218: jmp     loc_48E2C5
0x48E21D: mov     ebp, eax
0x48E21F: nop
0x48E220: mov     esi, [ebp+0]
0x48E223: test    esi, esi
0x48E225: jz      loc_48E2C5
0x48E22B: mov     ecx, esi
0x48E22D: call    ExtraDataList_GetExtraScript
0x48E232: test    eax, eax
0x48E234: jnz     loc_48E2BA
0x48E23A: mov     edx, [esp+3Ch+var_24]
0x48E23E: push    edx
0x48E23F: mov     ecx, esi
0x48E241: call    ExtraDataList_AddScript
0x48E246: mov     ecx, esi
0x48E248: call    ExtraDataList_GetExtraScript
0x48E24D: mov     ecx, eax
0x48E24F: call    Script_CreateEventList
0x48E254: push    eax
0x48E255: mov     ecx, esi
0x48E257: call    ExtraDataList_SetScriptEventList
0x48E25C: push    58h ; 'X'; Size
0x48E25E: call    FormHeapAlloc
0x48E263: add     esp, 4
0x48E266: mov     [esp+3Ch+var_14], eax
0x48E26A: test    eax, eax
0x48E26C: mov     [esp+3Ch+var_4], 1
0x48E274: jz      short loc_48E281
0x48E276: mov     ecx, eax
0x48E278: call    TESObjectREFR_constr
0x48E27D: mov     edi, eax
0x48E27F: jmp     short loc_48E283
0x48E281: xor     edi, edi
0x48E283: mov     ecx, edi; this
0x48E285: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x48E28D: call    TESForm_MakeTemporary
0x48E292: push    0; ArgList
0x48E294: push    0; int
0x48E296: mov     ecx, esi; this
0x48E298: call    ExtraDataList_GetExtraScriptEventList
0x48E29D: mov     ecx, [esp+44h+var_24]; int
0x48E2A1: push    eax; int
0x48E2A2: push    edi; int
0x48E2A3: call    Script_Run
0x48E2A8: test    edi, edi
0x48E2AA: jz      short loc_48E2B7
0x48E2AC: mov     eax, [edi]
0x48E2AE: mov     edx, [eax+10h]
0x48E2B1: push    1
0x48E2B3: mov     ecx, edi
0x48E2B5: call    edx
0x48E2B7: sub     ebx, 1
0x48E2BA: mov     ebp, [ebp+4]
0x48E2BD: test    ebp, ebp
0x48E2BF: jnz     loc_48E220
0x48E2C5: test    ebx, ebx
0x48E2C7: jbe     loc_48E3D4
0x48E2CD: mov     [esp+3Ch+var_14], ebx
0x48E2D1: push    14h; Size
0x48E2D3: call    FormHeapAlloc
0x48E2D8: add     esp, 4
0x48E2DB: mov     [esp+3Ch+var_10], eax
0x48E2DF: test    eax, eax
0x48E2E1: mov     [esp+3Ch+var_4], 2
0x48E2E9: jz      short loc_48E2F6
0x48E2EB: mov     ecx, eax
0x48E2ED: call    ExtraDataList_constr
0x48E2F2: mov     esi, eax
0x48E2F4: jmp     short loc_48E2F8
0x48E2F6: xor     esi, esi
0x48E2F8: mov     eax, [esp+3Ch+var_20]
0x48E2FC: mov     edi, [eax]
0x48E2FE: or      ebx, 0FFFFFFFFh
0x48E301: test    esi, esi
0x48E303: mov     [esp+3Ch+var_4], ebx
0x48E307: jz      short loc_48E336
0x48E309: cmp     dword ptr [edi], 0
0x48E30C: jz      short loc_48E334
0x48E30E: push    8; Size
0x48E310: call    FormHeapAlloc
0x48E315: add     esp, 4
0x48E318: test    eax, eax
0x48E31A: jz      short loc_48E329
0x48E31C: mov     ecx, [edi]
0x48E31E: mov     [eax], ecx
0x48E320: mov     dword ptr [eax+4], 0
0x48E327: jmp     short loc_48E32B
0x48E329: xor     eax, eax
0x48E32B: mov     edx, [edi+4]
0x48E32E: mov     [eax+4], edx
0x48E331: mov     [edi+4], eax
0x48E334: mov     [edi], esi
0x48E336: push    1
0x48E338: mov     ecx, esi
0x48E33A: call    ExtraDataList_SetExtraCount
0x48E33F: test    esi, esi
0x48E341: jz      loc_48E3C9
0x48E347: mov     ecx, esi
0x48E349: call    ExtraDataList_GetExtraScript
0x48E34E: test    eax, eax
0x48E350: jnz     short loc_48E3C9
0x48E352: mov     ebp, [esp+3Ch+var_24]
0x48E356: push    ebp
0x48E357: mov     ecx, esi
0x48E359: call    ExtraDataList_AddScript
0x48E35E: mov     ecx, esi
0x48E360: call    ExtraDataList_GetExtraScript
0x48E365: mov     ecx, eax
0x48E367: call    Script_CreateEventList
0x48E36C: push    eax
0x48E36D: mov     ecx, esi
0x48E36F: call    ExtraDataList_SetScriptEventList
0x48E374: push    58h ; 'X'; Size
0x48E376: call    FormHeapAlloc
0x48E37B: add     esp, 4
0x48E37E: mov     [esp+3Ch+var_10], eax
0x48E382: test    eax, eax
0x48E384: mov     [esp+3Ch+var_4], 3
0x48E38C: jz      short loc_48E399
0x48E38E: mov     ecx, eax
0x48E390: call    TESObjectREFR_constr
0x48E395: mov     edi, eax
0x48E397: jmp     short loc_48E39B
0x48E399: xor     edi, edi
0x48E39B: mov     ecx, edi; this
0x48E39D: mov     [esp+3Ch+var_4], ebx
0x48E3A1: call    TESForm_MakeTemporary
0x48E3A6: push    0; ArgList
0x48E3A8: push    0; int
0x48E3AA: mov     ecx, esi; this
0x48E3AC: call    ExtraDataList_GetExtraScriptEventList
0x48E3B1: push    eax; int
0x48E3B2: push    edi; int
0x48E3B3: mov     ecx, ebp; int
0x48E3B5: call    Script_Run
0x48E3BA: test    edi, edi
0x48E3BC: jz      short loc_48E3C9
0x48E3BE: mov     eax, [edi]
0x48E3C0: mov     edx, [eax+10h]
0x48E3C3: push    1
0x48E3C5: mov     ecx, edi
0x48E3C7: call    edx
0x48E3C9: sub     [esp+3Ch+var_14], 1
0x48E3CE: jnz     loc_48E2D1
0x48E3D4: cmp     byte ptr [esp+3Ch+var_28+3], 0
0x48E3D9: jz      short loc_48E3EB
0x48E3DB: mov     eax, [esp+3Ch+var_20]
0x48E3DF: mov     ecx, [esp+3Ch+var_18]
0x48E3E3: push    1
0x48E3E5: push    eax
0x48E3E6: call    ContainerExtraData_AddEntry
0x48E3EB: mov     ecx, [esp+3Ch+var_1C]
0x48E3EF: mov     eax, [ecx+4]
0x48E3F2: test    eax, eax
0x48E3F4: mov     [esp+3Ch+var_1C], eax
0x48E3F8: jnz     loc_48E0B0
0x48E3FE: mov     edx, [esp+3Ch+var_18]
0x48E402: mov     eax, [edx]
0x48E404: test    eax, eax
0x48E406: mov     [esp+3Ch+var_18], eax
0x48E40A: jz      loc_48E72A
0x48E410: jmp     short loc_48E416
0x48E412: mov     eax, [esp+3Ch+var_18]
0x48E416: mov     eax, [eax]
0x48E418: test    eax, eax
0x48E41A: mov     [esp+3Ch+var_20], eax
0x48E41E: jz      loc_48E72A
0x48E424: mov     eax, [eax+8]
0x48E427: push    0; int
0x48E429: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x48E42E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x48E433: push    0; int
0x48E435: push    eax; void *
0x48E436: call    OblivionDynamicCast
0x48E43B: add     esp, 14h
0x48E43E: test    eax, eax
0x48E440: jz      short loc_48E44B
0x48E442: mov     eax, [eax+4]
0x48E445: mov     [esp+3Ch+var_24], eax
0x48E449: jmp     short loc_48E453
0x48E44B: mov     [esp+3Ch+var_24], 0
0x48E453: mov     ecx, [esp+3Ch+var_20]
0x48E457: mov     eax, [ecx+4]
0x48E45A: cdq
0x48E45B: mov     ebx, eax
0x48E45D: xor     ebx, edx
0x48E45F: sub     ebx, edx
0x48E461: cmp     [esp+3Ch+var_24], 0
0x48E466: jz      loc_48E717
0x48E46C: test    ebx, ebx
0x48E46E: jle     loc_48E717
0x48E474: mov     ebp, ecx
0x48E476: mov     esi, [ebp+0]
0x48E479: test    esi, esi
0x48E47B: jz      short loc_48E4A9
0x48E47D: lea     ecx, [ecx+0]
0x48E480: mov     edi, [esi]
0x48E482: test    edi, edi
0x48E484: jz      short loc_48E4A9
0x48E486: mov     ecx, edi
0x48E488: call    ExtraDataList_GetExtraScript
0x48E48D: test    eax, eax
0x48E48F: jnz     short loc_48E49A
0x48E491: mov     esi, [esi+4]
0x48E494: test    esi, esi
0x48E496: jnz     short loc_48E480
0x48E498: jmp     short loc_48E4A9
0x48E49A: mov     ecx, edi
0x48E49C: call    ExtraDataList_GetExtraScript
0x48E4A1: test    eax, eax
0x48E4A3: jnz     loc_48E69D
0x48E4A9: mov     eax, [ebp+0]
0x48E4AC: test    eax, eax
0x48E4AE: jnz     short loc_48E4DD
0x48E4B0: push    8; Size
0x48E4B2: call    FormHeapAlloc
0x48E4B7: add     esp, 4
0x48E4BA: test    eax, eax
0x48E4BC: jz      short loc_48E4D3
0x48E4BE: mov     dword ptr [eax], 0
0x48E4C4: mov     dword ptr [eax+4], 0
0x48E4CB: mov     [ebp+0], eax
0x48E4CE: jmp     loc_48E585
0x48E4D3: xor     eax, eax
0x48E4D5: mov     [ebp+0], eax
0x48E4D8: jmp     loc_48E585
0x48E4DD: mov     ebp, eax
0x48E4DF: nop
0x48E4E0: mov     esi, [ebp+0]
0x48E4E3: test    esi, esi
0x48E4E5: jz      loc_48E585
0x48E4EB: mov     ecx, esi
0x48E4ED: call    ExtraDataList_GetExtraScript
0x48E4F2: test    eax, eax
0x48E4F4: jnz     loc_48E57A
0x48E4FA: mov     edx, [esp+3Ch+var_24]
0x48E4FE: push    edx
0x48E4FF: mov     ecx, esi
0x48E501: call    ExtraDataList_AddScript
0x48E506: mov     ecx, esi
0x48E508: call    ExtraDataList_GetExtraScript
0x48E50D: mov     ecx, eax
0x48E50F: call    Script_CreateEventList
0x48E514: push    eax
0x48E515: mov     ecx, esi
0x48E517: call    ExtraDataList_SetScriptEventList
0x48E51C: push    58h ; 'X'; Size
0x48E51E: call    FormHeapAlloc
0x48E523: add     esp, 4
0x48E526: mov     [esp+3Ch+var_10], eax
0x48E52A: test    eax, eax
0x48E52C: mov     [esp+3Ch+var_4], 5
0x48E534: jz      short loc_48E541
0x48E536: mov     ecx, eax
0x48E538: call    TESObjectREFR_constr
0x48E53D: mov     edi, eax
0x48E53F: jmp     short loc_48E543
0x48E541: xor     edi, edi
0x48E543: mov     ecx, edi; this
0x48E545: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x48E54D: call    TESForm_MakeTemporary
0x48E552: push    0; ArgList
0x48E554: push    0; int
0x48E556: mov     ecx, esi; this
0x48E558: call    ExtraDataList_GetExtraScriptEventList
0x48E55D: mov     ecx, [esp+44h+var_24]; int
0x48E561: push    eax; int
0x48E562: push    edi; int
0x48E563: call    Script_Run
0x48E568: test    edi, edi
0x48E56A: jz      short loc_48E577
0x48E56C: mov     eax, [edi]
0x48E56E: mov     edx, [eax+10h]
0x48E571: push    1
0x48E573: mov     ecx, edi
0x48E575: call    edx
0x48E577: sub     ebx, 1
0x48E57A: mov     ebp, [ebp+4]
0x48E57D: test    ebp, ebp
0x48E57F: jnz     loc_48E4E0
0x48E585: test    ebx, ebx
0x48E587: jbe     loc_48E717
0x48E58D: mov     [esp+3Ch+var_14], ebx
0x48E591: push    14h; Size
0x48E593: call    FormHeapAlloc
0x48E598: add     esp, 4
0x48E59B: mov     [esp+3Ch+var_10], eax
0x48E59F: test    eax, eax
0x48E5A1: mov     [esp+3Ch+var_4], 6
0x48E5A9: jz      short loc_48E5B6
0x48E5AB: mov     ecx, eax
0x48E5AD: call    ExtraDataList_constr
0x48E5B2: mov     esi, eax
0x48E5B4: jmp     short loc_48E5B8
0x48E5B6: xor     esi, esi
0x48E5B8: mov     eax, [esp+3Ch+var_20]
0x48E5BC: mov     edi, [eax]
0x48E5BE: or      ebx, 0FFFFFFFFh
0x48E5C1: test    esi, esi
0x48E5C3: mov     [esp+3Ch+var_4], ebx
0x48E5C7: jz      short loc_48E5F6
0x48E5C9: cmp     dword ptr [edi], 0
0x48E5CC: jz      short loc_48E5F4
0x48E5CE: push    8; Size
0x48E5D0: call    FormHeapAlloc
0x48E5D5: add     esp, 4
0x48E5D8: test    eax, eax
0x48E5DA: jz      short loc_48E5E9
0x48E5DC: mov     ecx, [edi]
0x48E5DE: mov     [eax], ecx
0x48E5E0: mov     dword ptr [eax+4], 0
0x48E5E7: jmp     short loc_48E5EB
0x48E5E9: xor     eax, eax
0x48E5EB: mov     edx, [edi+4]
0x48E5EE: mov     [eax+4], edx
0x48E5F1: mov     [edi+4], eax
0x48E5F4: mov     [edi], esi
0x48E5F6: push    1
0x48E5F8: mov     ecx, esi
0x48E5FA: call    ExtraDataList_SetExtraCount
0x48E5FF: test    esi, esi
0x48E601: jz      loc_48E68D
0x48E607: mov     ecx, esi
0x48E609: call    ExtraDataList_GetExtraScript
0x48E60E: test    eax, eax
0x48E610: jnz     loc_48E68D
0x48E616: mov     ebp, [esp+3Ch+var_24]
0x48E61A: push    ebp
0x48E61B: mov     ecx, esi
0x48E61D: call    ExtraDataList_AddScript
0x48E622: mov     ecx, esi
0x48E624: call    ExtraDataList_GetExtraScript
0x48E629: mov     ecx, eax
0x48E62B: call    Script_CreateEventList
0x48E630: push    eax
0x48E631: mov     ecx, esi
0x48E633: call    ExtraDataList_SetScriptEventList
0x48E638: push    58h ; 'X'; Size
0x48E63A: call    FormHeapAlloc
0x48E63F: add     esp, 4
0x48E642: mov     [esp+3Ch+var_10], eax
0x48E646: test    eax, eax
0x48E648: mov     [esp+3Ch+var_4], 7
0x48E650: jz      short loc_48E65D
0x48E652: mov     ecx, eax
0x48E654: call    TESObjectREFR_constr
0x48E659: mov     edi, eax
0x48E65B: jmp     short loc_48E65F
0x48E65D: xor     edi, edi
0x48E65F: mov     ecx, edi; this
0x48E661: mov     [esp+3Ch+var_4], ebx
0x48E665: call    TESForm_MakeTemporary
0x48E66A: push    0; ArgList
0x48E66C: push    0; int
0x48E66E: mov     ecx, esi; this
0x48E670: call    ExtraDataList_GetExtraScriptEventList
0x48E675: push    eax; int
0x48E676: push    edi; int
0x48E677: mov     ecx, ebp; int
0x48E679: call    Script_Run
0x48E67E: test    edi, edi
0x48E680: jz      short loc_48E68D
0x48E682: mov     eax, [edi]
0x48E684: mov     edx, [eax+10h]
0x48E687: push    1
0x48E689: mov     ecx, edi
0x48E68B: call    edx
0x48E68D: sub     [esp+3Ch+var_14], 1
0x48E692: jnz     loc_48E591
0x48E698: jmp     loc_48E717
0x48E69D: mov     eax, [esp+3Ch+var_20]
0x48E6A1: mov     ebp, [eax]
0x48E6A3: test    ebp, ebp
0x48E6A5: jz      short loc_48E717
0x48E6A7: mov     ebx, [esp+3Ch+var_24]
0x48E6AB: jmp     short loc_48E6B0
0x48E6AD: align 10h
0x48E6B0: mov     edi, [ebp+0]
0x48E6B3: test    edi, edi
0x48E6B5: jz      short loc_48E717
0x48E6B7: push    58h ; 'X'; Size
0x48E6B9: call    FormHeapAlloc
0x48E6BE: add     esp, 4
0x48E6C1: mov     [esp+3Ch+var_10], eax
0x48E6C5: test    eax, eax
0x48E6C7: mov     [esp+3Ch+var_4], 8
0x48E6CF: jz      short loc_48E6DC
0x48E6D1: mov     ecx, eax
0x48E6D3: call    TESObjectREFR_constr
0x48E6D8: mov     esi, eax
0x48E6DA: jmp     short loc_48E6DE
0x48E6DC: xor     esi, esi
0x48E6DE: mov     ecx, esi; this
0x48E6E0: mov     [esp+3Ch+var_4], 0FFFFFFFFh
0x48E6E8: call    TESForm_MakeTemporary
0x48E6ED: push    0; ArgList
0x48E6EF: push    0; int
0x48E6F1: mov     ecx, edi; this
0x48E6F3: call    ExtraDataList_GetExtraScriptEventList
0x48E6F8: push    eax; int
0x48E6F9: push    esi; int
0x48E6FA: mov     ecx, ebx; int
0x48E6FC: call    Script_Run
0x48E701: test    esi, esi
0x48E703: jz      short loc_48E710
0x48E705: mov     edx, [esi]
0x48E707: mov     eax, [edx+10h]
0x48E70A: push    1
0x48E70C: mov     ecx, esi
0x48E70E: call    eax
0x48E710: mov     ebp, [ebp+4]
0x48E713: test    ebp, ebp
0x48E715: jnz     short loc_48E6B0
0x48E717: mov     ecx, [esp+3Ch+var_18]
0x48E71B: mov     eax, [ecx+4]
0x48E71E: test    eax, eax
0x48E720: mov     [esp+3Ch+var_18], eax
0x48E724: jnz     loc_48E412
0x48E72A: mov     ecx, dword ptr [esp+3Ch+var_C]
0x48E72E: mov     large fs:0, ecx
0x48E735: pop     ecx
0x48E736: pop     edi
0x48E737: pop     esi
0x48E738: pop     ebp
0x48E739: pop     ebx
0x48E73A: add     esp, 28h
0x48E73D: retn
