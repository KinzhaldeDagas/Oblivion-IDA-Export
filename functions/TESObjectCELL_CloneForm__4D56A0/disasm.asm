0x4D56A0: sub     esp, 0Ch
0x4D56A3: push    ebx
0x4D56A4: mov     ebx, ecx
0x4D56A6: xor     eax, eax
0x4D56A8: test    byte ptr [ebx+24h], 1
0x4D56AC: jnz     loc_4D589B
0x4D56B2: push    ebp
0x4D56B3: push    esi
0x4D56B4: push    edi
0x4D56B5: mov     edi, [esp+1Ch+cloneMap]
0x4D56B9: push    eax; int
0x4D56BA: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4D56BF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D56C4: push    eax; int
0x4D56C5: push    edi; cloneMap
0x4D56C6: push    eax; a2
0x4D56C7: call    TESForm_Clone
0x4D56CC: push    eax; void *
0x4D56CD: call    OblivionDynamicCast
0x4D56D2: mov     ecx, [ebx+40h]
0x4D56D5: add     esp, 14h
0x4D56D8: test    ecx, ecx
0x4D56DA: mov     ebp, eax
0x4D56DC: mov     [esp+1Ch+var_C], ebp
0x4D56E0: jz      short loc_4D5727
0x4D56E2: mov     eax, [ecx]
0x4D56E4: mov     edx, [eax+38h]
0x4D56E7: push    0; int
0x4D56E9: push    offset ??_R0?AVTESObjectLAND@@@8; struct TypeDescriptor *
0x4D56EE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D56F3: push    0; int
0x4D56F5: push    edi
0x4D56F6: push    0
0x4D56F8: call    edx
0x4D56FA: push    eax; void *
0x4D56FB: call    OblivionDynamicCast
0x4D5700: mov     esi, eax
0x4D5702: add     esp, 14h
0x4D5705: test    esi, esi
0x4D5707: jz      short loc_4D5727
0x4D5709: push    esi
0x4D570A: mov     ecx, ebp
0x4D570C: call    sub_4C9AE0
0x4D5711: push    ebp; a2
0x4D5712: mov     ecx, esi; this
0x4D5714: call    sub_4BFDC0
0x4D5719: mov     eax, [esi]
0x4D571B: mov     edx, [eax+90h]
0x4D5721: push    1
0x4D5723: mov     ecx, esi
0x4D5725: call    edx
0x4D5727: mov     ecx, [ebx+44h]
0x4D572A: test    ecx, ecx
0x4D572C: jz      short loc_4D5782
0x4D572E: mov     eax, [ecx]
0x4D5730: mov     edx, [eax+38h]
0x4D5733: push    0; int
0x4D5735: push    offset ??_R0?AVTESPathGrid@@@8; struct TypeDescriptor *
0x4D573A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D573F: push    0; int
0x4D5741: push    edi
0x4D5742: push    0
0x4D5744: call    edx
0x4D5746: push    eax; void *
0x4D5747: call    OblivionDynamicCast
0x4D574C: mov     esi, eax
0x4D574E: add     esp, 14h
0x4D5751: test    esi, esi
0x4D5753: jz      short loc_4D5782
0x4D5755: mov     ecx, [ebp+44h]
0x4D5758: cmp     ecx, esi
0x4D575A: jz      short loc_4D576C
0x4D575C: test    ecx, ecx
0x4D575E: jz      short loc_4D5769
0x4D5760: mov     eax, [ecx]
0x4D5762: mov     edx, [eax+10h]
0x4D5765: push    1
0x4D5767: call    edx
0x4D5769: mov     [ebp+44h], esi
0x4D576C: push    ebp
0x4D576D: mov     ecx, esi
0x4D576F: call    sub_4A6D70
0x4D5774: mov     eax, [esi]
0x4D5776: mov     edx, [eax+90h]
0x4D577C: push    1
0x4D577E: mov     ecx, esi
0x4D5780: call    edx
0x4D5782: push    ebx; a2
0x4D5783: mov     ecx, offset stru_B35C80; this
0x4D5788: call    sub_496EA0
0x4D578D: xor     edi, edi
0x4D578F: lea     esi, [ebx+48h]
0x4D5792: test    esi, esi
0x4D5794: mov     [esp+1Ch+var_8], edi
0x4D5798: mov     [esp+1Ch+var_4], edi
0x4D579C: jz      short loc_4D580C
0x4D579E: mov     edi, edi
0x4D57A0: cmp     dword ptr [esi+4], 0
0x4D57A4: jnz     short loc_4D57AB
0x4D57A6: cmp     dword ptr [esi], 0
0x4D57A9: jz      short loc_4D5808
0x4D57AB: mov     ebp, [esi]
0x4D57AD: mov     eax, [ebp+8]
0x4D57B0: shr     eax, 0Eh
0x4D57B3: test    al, 1
0x4D57B5: jnz     short loc_4D57FD
0x4D57B7: test    byte ptr [ebx+24h], 1
0x4D57BB: jnz     short loc_4D57D1
0x4D57BD: test    dword ptr [ebx+8], 400h
0x4D57C4: jnz     short loc_4D57D1
0x4D57C6: mov     ecx, ebp; this
0x4D57C8: call    TESObjectREFR_IsPersistent?
0x4D57CD: test    al, al
0x4D57CF: jnz     short loc_4D57FD
0x4D57D1: test    edi, edi
0x4D57D3: jz      short loc_4D57FB
0x4D57D5: push    8; Size
0x4D57D7: call    FormHeapAlloc
0x4D57DC: add     esp, 4
0x4D57DF: test    eax, eax
0x4D57E1: jz      short loc_4D57EE
0x4D57E3: mov     [eax], edi
0x4D57E5: mov     dword ptr [eax+4], 0
0x4D57EC: jmp     short loc_4D57F0
0x4D57EE: xor     eax, eax
0x4D57F0: mov     ecx, [esp+1Ch+var_4]
0x4D57F4: mov     [eax+4], ecx
0x4D57F7: mov     [esp+1Ch+var_4], eax
0x4D57FB: mov     edi, ebp
0x4D57FD: mov     esi, [esi+4]
0x4D5800: test    esi, esi
0x4D5802: mov     ebp, [esp+1Ch+var_C]
0x4D5806: jnz     short loc_4D57A0
0x4D5808: mov     [esp+1Ch+var_8], edi
0x4D580C: push    ebx; a2
0x4D580D: mov     ecx, offset stru_B35C80; this
0x4D5812: call    sub_496F50
0x4D5817: lea     edi, [esp+1Ch+var_8]
0x4D581B: jmp     short loc_4D5820
0x4D581D: align 10h
0x4D5820: cmp     dword ptr [edi+4], 0
0x4D5824: jnz     short loc_4D582B
0x4D5826: cmp     dword ptr [edi], 0
0x4D5829: jz      short loc_4D588D
0x4D582B: mov     ecx, [edi]
0x4D582D: mov     eax, [esp+1Ch+cloneMap]
0x4D5831: mov     edx, [ecx]
0x4D5833: mov     edx, [edx+38h]
0x4D5836: push    0; int
0x4D5838: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4D583D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D5842: push    0; int
0x4D5844: push    eax
0x4D5845: push    0
0x4D5847: call    edx
0x4D5849: push    eax; void *
0x4D584A: call    OblivionDynamicCast
0x4D584F: mov     esi, eax
0x4D5851: add     esp, 14h
0x4D5854: test    esi, esi
0x4D5856: jz      short loc_4D5886
0x4D5858: mov     eax, [ebp+8]
0x4D585B: shr     eax, 0Ah
0x4D585E: and     al, 1
0x4D5860: mov     byte ptr [esp+1Ch+var_C], al
0x4D5864: mov     ecx, [esp+1Ch+var_C]
0x4D5868: push    ecx
0x4D5869: mov     ecx, esi
0x4D586B: call    TESObjectREFR_SetPersistance
0x4D5870: push    esi; Concurrency::details::SchedulerBase *
0x4D5871: mov     ecx, ebp
0x4D5873: call    sub_4D35D0
0x4D5878: mov     edx, [esi]
0x4D587A: mov     eax, [edx+90h]
0x4D5880: push    1
0x4D5882: mov     ecx, esi
0x4D5884: call    eax
0x4D5886: mov     edi, [edi+4]
0x4D5889: test    edi, edi
0x4D588B: jnz     short loc_4D5820
0x4D588D: lea     ecx, [esp+1Ch+var_8]
0x4D5891: call    BSSimpleList_Clear
0x4D5896: pop     edi
0x4D5897: pop     esi
0x4D5898: mov     eax, ebp
0x4D589A: pop     ebp
0x4D589B: pop     ebx
0x4D589C: add     esp, 0Ch
0x4D589F: retn    8
