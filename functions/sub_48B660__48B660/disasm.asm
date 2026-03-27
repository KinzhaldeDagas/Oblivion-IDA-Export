0x48B660: sub     esp, 14h
0x48B663: cmp     byte ptr [esp+14h+arg_4], 0
0x48B668: fld     dword ptr ds:0A3B888h
0x48B66E: push    esi
0x48B66F: fstp    [esp+18h+var_C]
0x48B673: push    edi
0x48B674: mov     edi, ecx
0x48B676: mov     [esp+1Ch+var_14], edi
0x48B67A: mov     [esp+1Ch+var_10], 0
0x48B682: mov     dword ptr [esp+1Ch+var_8], 0
0x48B68A: jz      short loc_48B6CE
0x48B68C: push    0
0x48B68E: push    0Eh
0x48B690: call    ContainerExtraData_GetEquippedInstance
0x48B695: mov     esi, eax
0x48B697: test    esi, esi
0x48B699: jz      short loc_48B6CE
0x48B69B: mov     eax, [esi]
0x48B69D: mov     ecx, [eax]
0x48B69F: call    sub_41DF40
0x48B6A4: test    al, al
0x48B6A6: jnz     loc_48B9B2
0x48B6AC: mov     ecx, [esi]
0x48B6AE: test    ecx, ecx
0x48B6B0: jz      short loc_48B6B7
0x48B6B2: call    BSSimpleList_Clear
0x48B6B7: mov     ecx, [esi]
0x48B6B9: push    ecx
0x48B6BA: call    FormHeapFree
0x48B6BF: push    esi
0x48B6C0: mov     dword ptr [esi], 0
0x48B6C6: call    FormHeapFree
0x48B6CB: add     esp, 8
0x48B6CE: mov     ecx, [edi+4]; this
0x48B6D1: test    ecx, ecx
0x48B6D3: jz      short loc_48B6DC
0x48B6D5: call    TESObjectREFR_GetContainer
0x48B6DA: jmp     short loc_48B6DE
0x48B6DC: xor     eax, eax
0x48B6DE: push    ebx
0x48B6DF: push    ebp
0x48B6E0: lea     ebp, [eax+8]
0x48B6E3: test    ebp, ebp
0x48B6E5: jz      loc_48B7EC
0x48B6EB: jmp     short loc_48B6F0
0x48B6ED: align 10h
0x48B6F0: mov     eax, [ebp+0]
0x48B6F3: test    eax, eax
0x48B6F5: jz      loc_48B7DD
0x48B6FB: mov     edx, [eax+4]
0x48B6FE: push    0; int
0x48B700: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x48B705: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48B70A: push    0; int
0x48B70C: push    edx; void *
0x48B70D: call    OblivionDynamicCast
0x48B712: mov     ebx, eax
0x48B714: add     esp, 14h
0x48B717: test    ebx, ebx
0x48B719: jz      loc_48B7DD
0x48B71F: mov     eax, [edi]
0x48B721: test    eax, eax
0x48B723: mov     dl, 1
0x48B725: jz      loc_48B7B2
0x48B72B: jmp     short loc_48B730
0x48B72D: align 10h
0x48B730: test    dl, dl
0x48B732: jz      short loc_48B74C
0x48B734: mov     ecx, [eax]
0x48B736: test    ecx, ecx
0x48B738: jz      short loc_48B743
0x48B73A: cmp     [ecx+8], ebx
0x48B73D: jnz     short loc_48B743
0x48B73F: xor     dl, dl
0x48B741: jmp     short loc_48B746
0x48B743: mov     eax, [eax+4]
0x48B746: test    eax, eax
0x48B748: jnz     short loc_48B730
0x48B74A: jmp     short loc_48B7B2
0x48B74C: test    eax, eax
0x48B74E: jz      short loc_48B7B2
0x48B750: mov     edi, [eax]
0x48B752: test    edi, edi
0x48B754: jz      short loc_48B7B2
0x48B756: mov     eax, [edi]
0x48B758: test    eax, eax
0x48B75A: jz      short loc_48B7A0
0x48B75C: mov     esi, [eax]
0x48B75E: test    esi, esi
0x48B760: jz      short loc_48B7A0
0x48B762: mov     ecx, esi
0x48B764: call    ExtraDataList_GetOwner
0x48B769: test    eax, eax
0x48B76B: jz      short loc_48B7A0
0x48B76D: mov     ecx, esi
0x48B76F: call    ExtraDataList_GetOwner
0x48B774: test    eax, eax
0x48B776: jz      short loc_48B7A0
0x48B778: mov     eax, [edi]
0x48B77A: test    eax, eax
0x48B77C: jz      short loc_48B798
0x48B77E: mov     esi, [eax]
0x48B780: test    esi, esi
0x48B782: jz      short loc_48B798
0x48B784: mov     ecx, esi
0x48B786: call    ExtraDataList_GetOwner
0x48B78B: test    eax, eax
0x48B78D: jz      short loc_48B798
0x48B78F: mov     ecx, esi
0x48B791: call    ExtraDataList_GetOwner
0x48B796: jmp     short loc_48B79A
0x48B798: xor     eax, eax
0x48B79A: cmp     eax, [esp+24h+arg_0]
0x48B79E: jnz     short loc_48B7DD
0x48B7A0: mov     eax, [ebp+0]
0x48B7A3: mov     eax, [eax]
0x48B7A5: mov     ecx, [edi+4]
0x48B7A8: add     ecx, eax
0x48B7AA: test    ecx, ecx
0x48B7AC: jg      short loc_48B7B2
0x48B7AE: test    eax, eax
0x48B7B0: jge     short loc_48B7DD
0x48B7B2: mov     ecx, [esp+24h+arg_0]
0x48B7B6: push    ebx
0x48B7B7: call    TESActorBase_GetEquippableItemRating
0x48B7BC: fstp    [esp+24h+arg_4]
0x48B7C0: fld     [esp+24h+arg_4]
0x48B7C4: fld     [esp+24h+var_C]
0x48B7C8: fcomp   st(1)
0x48B7CA: fnstsw  ax
0x48B7CC: test    ah, 5
0x48B7CF: jp      short loc_48B7DB
0x48B7D1: fstp    [esp+24h+var_C]
0x48B7D5: mov     [esp+24h+var_10], ebx
0x48B7D9: jmp     short loc_48B7DD
0x48B7DB: fstp    st
0x48B7DD: mov     ebp, [ebp+4]
0x48B7E0: test    ebp, ebp
0x48B7E2: mov     edi, [esp+24h+var_14]
0x48B7E6: jnz     loc_48B6F0
0x48B7EC: mov     ebx, [edi]
0x48B7EE: test    ebx, ebx
0x48B7F0: jz      loc_48B905
0x48B7F6: mov     esi, [ebx]
0x48B7F8: test    esi, esi
0x48B7FA: jz      loc_48B8BF
0x48B800: mov     edx, [esi+8]
0x48B803: push    0; int
0x48B805: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x48B80A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48B80F: push    0; int
0x48B811: push    edx; void *
0x48B812: call    OblivionDynamicCast
0x48B817: mov     ebp, eax
0x48B819: add     esp, 14h
0x48B81C: test    ebp, ebp
0x48B81E: jz      loc_48B8BF
0x48B824: mov     eax, [esi]
0x48B826: test    eax, eax
0x48B828: jz      short loc_48B86E
0x48B82A: mov     edi, [eax]
0x48B82C: test    edi, edi
0x48B82E: jz      short loc_48B86E
0x48B830: mov     ecx, edi
0x48B832: call    ExtraDataList_GetOwner
0x48B837: test    eax, eax
0x48B839: jz      short loc_48B86E
0x48B83B: mov     ecx, edi
0x48B83D: call    ExtraDataList_GetOwner
0x48B842: test    eax, eax
0x48B844: jz      short loc_48B86E
0x48B846: mov     eax, [esi]
0x48B848: test    eax, eax
0x48B84A: jz      short loc_48B866
0x48B84C: mov     edi, [eax]
0x48B84E: test    edi, edi
0x48B850: jz      short loc_48B866
0x48B852: mov     ecx, edi
0x48B854: call    ExtraDataList_GetOwner
0x48B859: test    eax, eax
0x48B85B: jz      short loc_48B866
0x48B85D: mov     ecx, edi
0x48B85F: call    ExtraDataList_GetOwner
0x48B864: jmp     short loc_48B868
0x48B866: xor     eax, eax
0x48B868: cmp     eax, [esp+24h+arg_0]
0x48B86C: jnz     short loc_48B8BF
0x48B86E: cmp     dword ptr [esi+4], 0
0x48B872: jz      short loc_48B8BF
0x48B874: mov     eax, [esp+24h+var_14]
0x48B878: mov     ecx, [eax+4]; this
0x48B87B: test    ecx, ecx
0x48B87D: jz      short loc_48B886
0x48B87F: call    TESObjectREFR_GetContainer
0x48B884: jmp     short loc_48B888
0x48B886: xor     eax, eax
0x48B888: push    ebp; a2
0x48B889: mov     ecx, eax; this
0x48B88B: call    TESContainer_HasForm
0x48B890: test    al, al
0x48B892: jnz     short loc_48B8BF
0x48B894: mov     ecx, [esp+24h+arg_0]
0x48B898: push    ebp
0x48B899: call    TESActorBase_GetEquippableItemRating
0x48B89E: fstp    [esp+24h+arg_4]
0x48B8A2: fld     [esp+24h+arg_4]
0x48B8A6: fld     [esp+24h+var_C]
0x48B8AA: fcomp   st(1)
0x48B8AC: fnstsw  ax
0x48B8AE: test    ah, 5
0x48B8B1: jp      short loc_48B8BD
0x48B8B3: fstp    [esp+24h+var_C]
0x48B8B7: mov     dword ptr [esp+24h+var_8], ebp
0x48B8BB: jmp     short loc_48B8BF
0x48B8BD: fstp    st
0x48B8BF: mov     ebx, [ebx+4]
0x48B8C2: test    ebx, ebx
0x48B8C4: jnz     loc_48B7F6
0x48B8CA: mov     edi, dword ptr [esp+24h+var_8]
0x48B8CE: test    edi, edi
0x48B8D0: jz      short loc_48B901
0x48B8D2: mov     ebx, [esp+24h+var_10]
0x48B8D6: cmp     edi, ebx
0x48B8D8: jz      short loc_48B901
0x48B8DA: mov     esi, [esp+24h+arg_0]
0x48B8DE: push    edi
0x48B8DF: mov     ecx, esi
0x48B8E1: call    TESActorBase_GetEquippableItemRating
0x48B8E6: fstp    [esp+24h+var_8]
0x48B8EA: push    ebx
0x48B8EB: mov     ecx, esi
0x48B8ED: call    TESActorBase_GetEquippableItemRating
0x48B8F2: fcomp   [esp+24h+var_8]
0x48B8F6: fnstsw  ax
0x48B8F8: test    ah, 5
0x48B8FB: jp      short loc_48B901
0x48B8FD: mov     [esp+24h+var_10], edi
0x48B901: mov     edi, [esp+24h+var_14]
0x48B905: mov     ecx, [esp+24h+var_10]
0x48B909: push    0
0x48B90B: push    1
0x48B90D: push    ecx
0x48B90E: mov     ecx, edi
0x48B910: call    ContainerExtraData_GetEntryForForm
0x48B915: mov     ebx, [esp+24h+var_10]
0x48B919: xor     ebp, ebp
0x48B91B: xor     esi, esi
0x48B91D: cmp     ebx, ebp
0x48B91F: mov     edi, eax
0x48B921: jz      short loc_48B93F
0x48B923: push    0Ch; Size
0x48B925: call    FormHeapAlloc
0x48B92A: add     esp, 4
0x48B92D: cmp     eax, ebp
0x48B92F: jz      short loc_48B93B
0x48B931: mov     [eax+8], ebp
0x48B934: mov     [eax], ebp
0x48B936: mov     [eax+4], ebp
0x48B939: jmp     short loc_48B93D
0x48B93B: xor     eax, eax
0x48B93D: mov     esi, eax
0x48B93F: cmp     edi, ebp
0x48B941: jz      short loc_48B98A
0x48B943: mov     edx, [edi+8]
0x48B946: mov     [esi+8], edx
0x48B949: mov     eax, [edi]
0x48B94B: cmp     eax, ebp
0x48B94D: jz      short loc_48B9B0
0x48B94F: cmp     [eax], ebp
0x48B951: jz      short loc_48B9B0
0x48B953: push    8; Size
0x48B955: call    FormHeapAlloc
0x48B95A: add     esp, 4
0x48B95D: cmp     eax, ebp
0x48B95F: jz      short loc_48B968
0x48B961: mov     [eax], ebp
0x48B963: mov     [eax+4], ebp
0x48B966: jmp     short loc_48B96A
0x48B968: xor     eax, eax
0x48B96A: mov     [esi], eax
0x48B96C: mov     ecx, [edi]
0x48B96E: mov     edx, [ecx]
0x48B970: push    edx
0x48B971: mov     ecx, eax
0x48B973: call    BSSimpleList_PushFront
0x48B978: mov     eax, [edi+4]
0x48B97B: pop     ebp
0x48B97C: pop     ebx
0x48B97D: mov     [esi+4], eax
0x48B980: pop     edi
0x48B981: mov     eax, esi
0x48B983: pop     esi
0x48B984: add     esp, 14h
0x48B987: retn    8
0x48B98A: cmp     ebx, ebp
0x48B98C: jz      short loc_48B9B0
0x48B98E: mov     ecx, [esp+24h+var_14]
0x48B992: mov     [esi+8], ebx
0x48B995: mov     ecx, [ecx+4]; this
0x48B998: cmp     ecx, ebp
0x48B99A: jz      short loc_48B9A3
0x48B99C: call    TESObjectREFR_GetContainer
0x48B9A1: jmp     short loc_48B9A5
0x48B9A3: xor     eax, eax
0x48B9A5: push    ebx
0x48B9A6: mov     ecx, eax
0x48B9A8: call    TESContainer_GetFormCount
0x48B9AD: mov     [esi+4], eax
0x48B9B0: pop     ebp
0x48B9B1: pop     ebx
0x48B9B2: pop     edi
0x48B9B3: mov     eax, esi
0x48B9B5: pop     esi
0x48B9B6: add     esp, 14h
0x48B9B9: retn    8
