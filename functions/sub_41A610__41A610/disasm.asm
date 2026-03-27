0x41A610: push    0FFFFFFFFh
0x41A612: push    offset SEH_41A610
0x41A617: mov     eax, large fs:0
0x41A61D: push    eax
0x41A61E: sub     esp, 12Ch
0x41A624: mov     eax, ___security_cookie
0x41A629: xor     eax, esp
0x41A62B: mov     [esp+138h+var_10], eax
0x41A632: push    ebx
0x41A633: push    ebp
0x41A634: push    esi
0x41A635: push    edi
0x41A636: mov     eax, ___security_cookie
0x41A63B: xor     eax, esp
0x41A63D: push    eax; int
0x41A63E: lea     eax, [esp+14Ch+var_C]
0x41A645: mov     large fs:0, eax
0x41A64B: push    0
0x41A64D: mov     edi, ecx
0x41A64F: call    MagicItem_GetFXEffect
0x41A654: cmp     [esp+14Ch+arg_0], 0
0x41A65C: mov     esi, eax
0x41A65E: jnz     short loc_41A6A3
0x41A660: mov     ecx, edi
0x41A662: call    sub_419CF0
0x41A667: test    al, al
0x41A669: jnz     short loc_41A6A3
0x41A66B: mov     ecx, edi
0x41A66D: call    sub_419E50
0x41A672: test    al, al
0x41A674: jz      short loc_41A6AA
0x41A676: mov     byte ptr [esp+14Ch+var_138+3], 0
0x41A67B: test    esi, esi
0x41A67D: jz      short loc_41A6E9
0x41A67F: cmp     byte ptr [esp+14Ch+var_138+3], 0
0x41A684: jz      short loc_41A6E2
0x41A686: movzx   eax, word ptr [esi+20h]
0x41A68A: cmp     ax, 0FFFFh
0x41A68E: jnz     short loc_41A6BE
0x41A690: mov     eax, [esi+1Ch]
0x41A693: lea     edx, [eax+1]
0x41A696: mov     cl, [eax]
0x41A698: add     eax, 1
0x41A69B: test    cl, cl
0x41A69D: jnz     short loc_41A696
0x41A69F: sub     eax, edx
0x41A6A1: jmp     short loc_41A6C1
0x41A6A3: mov     byte ptr [esp+14Ch+var_138+3], 1
0x41A6A8: jmp     short loc_41A67B
0x41A6AA: mov     ecx, ModelLoaderPtr
0x41A6B0: push    0
0x41A6B2: push    esi
0x41A6B3: push    edi
0x41A6B4: call    sub_438300
0x41A6B9: jmp     loc_41AB61
0x41A6BE: movzx   eax, ax
0x41A6C1: test    eax, eax
0x41A6C3: jbe     short loc_41A6E2
0x41A6C5: mov     eax, [esi+18h]
0x41A6C8: mov     edx, [eax+14h]
0x41A6CB: push    1
0x41A6CD: lea     ecx, [esi+18h]
0x41A6D0: push    0
0x41A6D2: push    0
0x41A6D4: call    edx
0x41A6D6: mov     ecx, ModelLoaderPtr
0x41A6DC: push    eax
0x41A6DD: call    sub_439EB0
0x41A6E2: mov     ecx, esi
0x41A6E4: call    EffectSetting_ExtendUnkA0
0x41A6E9: test    edi, edi
0x41A6EB: jz      short loc_41A6F2
0x41A6ED: add     edi, 0Ch
0x41A6F0: jmp     short loc_41A6F4
0x41A6F2: xor     edi, edi
0x41A6F4: cmp     dword ptr [edi+8], 0
0x41A6F8: mov     [esp+14Ch+var_130], edi
0x41A6FC: jnz     short loc_41A708
0x41A6FE: cmp     dword ptr [edi+4], 0
0x41A702: jz      loc_41AB61
0x41A708: test    edi, edi
0x41A70A: jz      loc_41AB61
0x41A710: mov     eax, [edi+4]
0x41A713: mov     eax, [eax+1Ch]
0x41A716: test    dword ptr [eax+58h], 70000h
0x41A71D: mov     [esp+14Ch+var_134], eax
0x41A721: jz      loc_41AB4B
0x41A727: cmp     byte ptr [esp+14Ch+var_138+3], 0
0x41A72C: jz      loc_41AB15
0x41A732: mov     eax, [eax+60h]
0x41A735: push    eax; a1
0x41A736: call    TESForm_LookupByFormID
0x41A73B: mov     edi, eax
0x41A73D: add     esp, 4
0x41A740: test    edi, edi
0x41A742: jz      loc_41AB15
0x41A748: mov     ecx, [esp+14Ch+var_134]
0x41A74C: mov     eax, [ecx+58h]
0x41A74F: mov     edx, eax
0x41A751: shr     edx, 10h
0x41A754: test    dl, 1
0x41A757: jz      short loc_41A7AA
0x41A759: push    0; int
0x41A75B: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x41A760: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A765: push    0; int
0x41A767: push    edi; void *
0x41A768: call    OblivionDynamicCast
0x41A76D: add     esp, 14h
0x41A770: test    eax, eax
0x41A772: jz      loc_41AB15
0x41A778: lea     esi, [eax+30h]
0x41A77B: mov     ecx, esi
0x41A77D: call    sub_449190
0x41A782: test    eax, eax
0x41A784: jbe     loc_41AB15
0x41A78A: mov     eax, [esi]
0x41A78C: mov     edx, [eax+14h]
0x41A78F: push    1
0x41A791: push    0
0x41A793: push    0
0x41A795: mov     ecx, esi
0x41A797: call    edx
0x41A799: mov     ecx, ModelLoaderPtr
0x41A79F: push    eax
0x41A7A0: call    sub_439EB0
0x41A7A5: jmp     loc_41AB15
0x41A7AA: mov     ecx, eax
0x41A7AC: shr     ecx, 11h
0x41A7AF: test    cl, 1
0x41A7B2: jz      short loc_41A811
0x41A7B4: push    0; int
0x41A7B6: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x41A7BB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A7C0: push    0; int
0x41A7C2: push    edi; void *
0x41A7C3: call    OblivionDynamicCast
0x41A7C8: add     esp, 14h
0x41A7CB: test    eax, eax
0x41A7CD: jz      loc_41AB15
0x41A7D3: push    1
0x41A7D5: push    0
0x41A7D7: lea     esi, [eax+64h]
0x41A7DA: push    0
0x41A7DC: push    0
0x41A7DE: mov     ecx, esi
0x41A7E0: call    TESBipedModelForm_GetModelPath
0x41A7E5: mov     ecx, ModelLoaderPtr
0x41A7EB: push    eax
0x41A7EC: call    sub_439EB0
0x41A7F1: push    1
0x41A7F3: push    0
0x41A7F5: push    0
0x41A7F7: push    1
0x41A7F9: mov     ecx, esi
0x41A7FB: call    TESBipedModelForm_GetModelPath
0x41A800: mov     ecx, ModelLoaderPtr
0x41A806: push    eax
0x41A807: call    sub_439EB0
0x41A80C: jmp     loc_41AB15
0x41A811: shr     eax, 12h
0x41A814: test    al, 1
0x41A816: jz      loc_41AB15
0x41A81C: cmp     byte ptr [edi+4], 25h ; '%'
0x41A820: jnz     short loc_41A872
0x41A822: lea     ecx, [esp+14Ch+var_124]
0x41A826: call    TESContainer_constr
0x41A82B: mov     ecx, TESDataHandler_g_PlayerRef
0x41A831: lea     edx, [esp+14Ch+var_124]
0x41A835: push    edx
0x41A836: push    1
0x41A838: mov     [esp+154h+var_4], 0
0x41A843: call    Actor_GetLevel
0x41A848: lea     ecx, [edi+24h]; this
0x41A84B: push    eax; int
0x41A84C: call    TESLeveledList_CalcLeveledForm
0x41A851: push    0
0x41A853: lea     ecx, [esp+14Ch+anonymous_0]
0x41A857: call    TESContainer_GetNthForm
0x41A85C: lea     ecx, [esp+148h+anonymous_0]
0x41A860: mov     edi, eax
0x41A862: mov     dword ptr [esp+148h], 0FFFFFFFFh
0x41A86D: call    TESContainer_destr
0x41A872: push    0; int
0x41A874: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x41A879: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A87E: push    0; int
0x41A880: push    edi; void *
0x41A881: call    OblivionDynamicCast
0x41A886: add     esp, 14h
0x41A889: test    eax, eax
0x41A88B: jz      short loc_41A8D6
0x41A88D: push    1
0x41A88F: push    1
0x41A891: mov     ecx, eax
0x41A893: call    sub_5234F0
0x41A898: mov     ebp, eax
0x41A89A: test    ebp, ebp
0x41A89C: mov     esi, ebp
0x41A89E: jz      short loc_41A8C6
0x41A8A0: cmp     dword ptr [esi+4], 0
0x41A8A4: jnz     short loc_41A8AB
0x41A8A6: cmp     dword ptr [esi], 0
0x41A8A9: jz      short loc_41A8C6
0x41A8AB: mov     eax, [esi]
0x41A8AD: mov     ecx, ModelLoaderPtr
0x41A8B3: push    1
0x41A8B5: push    0
0x41A8B7: push    0
0x41A8B9: push    eax
0x41A8BA: call    sub_439EB0
0x41A8BF: mov     esi, [esi+4]
0x41A8C2: test    esi, esi
0x41A8C4: jnz     short loc_41A8A0
0x41A8C6: mov     ecx, ebp
0x41A8C8: call    BSSimpleList_Clear
0x41A8CD: push    ebp
0x41A8CE: call    FormHeapFree
0x41A8D3: add     esp, 4
0x41A8D6: push    0; int
0x41A8D8: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x41A8DD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x41A8E2: push    0; int
0x41A8E4: push    edi; void *
0x41A8E5: call    OblivionDynamicCast
0x41A8EA: add     esp, 14h
0x41A8ED: test    eax, eax
0x41A8EF: mov     [esp+148h+var_128], eax
0x41A8F3: jz      loc_41AB15
0x41A8F9: mov     edi, eax
0x41A8FB: mov     edx, [edi+0ACh]
0x41A901: mov     eax, [edx+14h]
0x41A904: push    1
0x41A906: lea     esi, [edi+0ACh]
0x41A90C: push    0
0x41A90E: push    0
0x41A910: mov     ecx, esi
0x41A912: call    eax
0x41A914: mov     ecx, ModelLoaderPtr
0x41A91A: push    eax
0x41A91B: call    sub_439EB0
0x41A920: mov     edx, [esi]
0x41A922: mov     eax, [edx+14h]
0x41A925: mov     ecx, esi
0x41A927: call    eax
0x41A929: lea     ecx, [edi+0ECh]
0x41A92F: mov     ebx, eax
0x41A931: call    sub_6899C0
0x41A936: lea     edx, [esp+148h+var_110]
0x41A93A: mov     esi, eax
0x41A93C: mov     eax, ebx
0x41A93E: sub     edx, ebx
0x41A940: mov     cl, [eax]
0x41A942: mov     [edx+eax], cl
0x41A945: add     eax, 1
0x41A948: test    cl, cl
0x41A94A: jnz     short loc_41A940
0x41A94C: lea     ecx, [esp+148h+var_110]
0x41A950: push    5Ch ; '\'; Ch
0x41A952: push    ecx; Str
0x41A953: call    _strrchr
0x41A958: mov     ecx, eax
0x41A95A: add     esp, 8
0x41A95D: test    ecx, ecx
0x41A95F: mov     [esp+148h+var_124], ecx
0x41A963: mov     ebp, esi
0x41A965: jz      short loc_41A9C9
0x41A967: test    ebp, ebp
0x41A969: jz      short loc_41A9C9
0x41A96B: mov     byte ptr [ecx+1], 0
0x41A96F: mov     eax, [ebp+0]
0x41A972: test    eax, eax
0x41A974: jz      short loc_41A9C4
0x41A976: mov     edx, eax
0x41A978: mov     cl, [eax]
0x41A97A: add     eax, 1
0x41A97D: test    cl, cl
0x41A97F: jnz     short loc_41A978
0x41A981: lea     edi, [esp+148h+var_110]
0x41A985: sub     eax, edx
0x41A987: add     edi, 0FFFFFFFFh
0x41A98A: lea     ebx, [ebx+0]
0x41A990: mov     cl, [edi+1]
0x41A993: add     edi, 1
0x41A996: test    cl, cl
0x41A998: jnz     short loc_41A990
0x41A99A: mov     ecx, eax
0x41A99C: shr     ecx, 2
0x41A99F: mov     esi, edx
0x41A9A1: rep movsd
0x41A9A3: push    1
0x41A9A5: mov     ecx, eax
0x41A9A7: push    0
0x41A9A9: and     ecx, 3
0x41A9AC: push    0
0x41A9AE: lea     edx, [esp+154h+var_110]
0x41A9B2: rep movsb
0x41A9B4: mov     ecx, ModelLoaderPtr
0x41A9BA: push    edx
0x41A9BB: call    sub_439EB0
0x41A9C0: mov     ecx, [esp+148h+var_124]
0x41A9C4: mov     ebp, [ebp+4]
0x41A9C7: jmp     short loc_41A967
0x41A9C9: push    5Ch ; '\'; Ch
0x41A9CB: push    ebx; Str
0x41A9CC: call    _strrchr
0x41A9D1: add     esp, 8
0x41A9D4: test    eax, eax
0x41A9D6: jz      short loc_41AA36
0x41A9D8: push    8; MaxCount
0x41A9DA: add     eax, 1
0x41A9DD: push    offset aSkeleton; "Skeleton"
0x41A9E2: push    eax; Str1
0x41A9E3: call    __strnicmp
0x41A9E8: add     esp, 0Ch
0x41A9EB: test    eax, eax
0x41A9ED: jnz     short loc_41AA36
0x41A9EF: mov     ecx, ModelLoaderPtr
0x41A9F5: push    eax; int
0x41A9F6: push    ebx; char *
0x41A9F7: call    sub_435830
0x41A9FC: mov     ebp, eax
0x41A9FE: test    ebp, ebp
0x41AA00: mov     esi, ebp
0x41AA02: jz      short loc_41AA26
0x41AA04: mov     edi, [esi]
0x41AA06: test    edi, edi
0x41AA08: jz      short loc_41AA16
0x41AA0A: mov     ecx, ModelLoaderPtr
0x41AA10: push    edi
0x41AA11: call    sub_439FF0
0x41AA16: push    edi
0x41AA17: call    FormHeapFree
0x41AA1C: mov     esi, [esi+4]
0x41AA1F: add     esp, 4
0x41AA22: test    esi, esi
0x41AA24: jnz     short loc_41AA04
0x41AA26: mov     ecx, ebp
0x41AA28: call    BSSimpleList_Clear
0x41AA2D: push    ebp
0x41AA2E: call    FormHeapFree
0x41AA33: add     esp, 4
0x41AA36: mov     esi, [esp+148h+var_128]
0x41AA3A: add     esi, 94h ; '”'
0x41AA40: mov     ecx, esi
0x41AA42: call    TESAnimation_HasAnimations
0x41AA47: test    al, al
0x41AA49: jz      loc_41AB15
0x41AA4F: mov     eax, [esp+148h+var_124]
0x41AA53: mov     byte ptr [eax+1], 0
0x41AA57: lea     eax, [esp+148h+var_110]
0x41AA5B: add     eax, 0FFFFFFFFh
0x41AA5E: mov     edi, edi
0x41AA60: mov     cl, [eax+1]
0x41AA63: add     eax, 1
0x41AA66: test    cl, cl
0x41AA68: jnz     short loc_41AA60
0x41AA6A: mov     ecx, ds:dword_A3407C
0x41AA70: mov     edx, ds:dword_A34080
0x41AA76: mov     [eax], ecx
0x41AA78: mov     ecx, ds:dword_A34084
0x41AA7E: mov     [eax+4], edx
0x41AA81: mov     dl, ds:byte_A34088
0x41AA87: lea     edi, [esp+148h+var_110]
0x41AA8B: mov     [eax+8], ecx
0x41AA8E: mov     [eax+0Ch], dl
0x41AA91: add     edi, 0FFFFFFFFh
0x41AA94: mov     al, [edi+1]
0x41AA97: add     edi, 1
0x41AA9A: test    al, al
0x41AA9C: jnz     short loc_41AA94
0x41AA9E: mov     ax, ds:SubStr
0x41AAA4: lea     ecx, [esp+148h+var_110]
0x41AAA8: push    5Ch ; '\'; Ch
0x41AAAA: push    ecx; Str
0x41AAAB: mov     [edi], ax
0x41AAAE: call    _strrchr
0x41AAB3: add     esp, 8
0x41AAB6: mov     ecx, esi
0x41AAB8: mov     ebx, eax
0x41AABA: call    sub_6899C0
0x41AABF: mov     ebp, eax
0x41AAC1: test    ebp, ebp
0x41AAC3: jz      short loc_41AB15
0x41AAC5: mov     byte ptr [ebx+1], 0
0x41AAC9: mov     eax, [ebp+0]
0x41AACC: test    eax, eax
0x41AACE: jz      short loc_41AB0E
0x41AAD0: mov     edx, eax
0x41AAD2: mov     cl, [eax]
0x41AAD4: add     eax, 1
0x41AAD7: test    cl, cl
0x41AAD9: jnz     short loc_41AAD2
0x41AADB: lea     edi, [esp+148h+var_110]
0x41AADF: sub     eax, edx
0x41AAE1: add     edi, 0FFFFFFFFh
0x41AAE4: mov     cl, [edi+1]
0x41AAE7: add     edi, 1
0x41AAEA: test    cl, cl
0x41AAEC: jnz     short loc_41AAE4
0x41AAEE: mov     ecx, eax
0x41AAF0: shr     ecx, 2
0x41AAF3: mov     esi, edx
0x41AAF5: rep movsd
0x41AAF7: mov     ecx, eax
0x41AAF9: and     ecx, 3
0x41AAFC: lea     edx, [esp+148h+var_110]
0x41AB00: rep movsb
0x41AB02: mov     ecx, ModelLoaderPtr
0x41AB08: push    edx
0x41AB09: call    sub_439FF0
0x41AB0E: mov     ebp, [ebp+4]
0x41AB11: test    ebp, ebp
0x41AB13: jnz     short loc_41AAC5
0x41AB15: mov     esi, [esp+148h+var_130]
0x41AB19: mov     ecx, esi
0x41AB1B: call    EffectSetting_IsUnkA4Positive
0x41AB20: test    al, al
0x41AB22: jnz     short loc_41AB40
0x41AB24: mov     ecx, esi
0x41AB26: call    EffectSetting_IsUnkA4Negative
0x41AB2B: test    al, al
0x41AB2D: jnz     short loc_41AB40
0x41AB2F: mov     eax, [esi+58h]
0x41AB32: shr     eax, 12h
0x41AB35: test    al, 1
0x41AB37: jz      short loc_41AB40
0x41AB39: add     dword_B33518, 1
0x41AB40: mov     ecx, esi
0x41AB42: call    EffectSetting_ExtendUnkA4
0x41AB47: mov     edi, [esp+148h+var_12C]
0x41AB4B: mov     eax, [edi+8]
0x41AB4E: test    eax, eax
0x41AB50: jz      short loc_41AB61
0x41AB52: lea     edi, [eax-4]
0x41AB55: test    edi, edi
0x41AB57: mov     [esp+148h+var_12C], edi
0x41AB5B: jnz     loc_41A710
0x41AB61: mov     ecx, [esp+140h]
0x41AB68: mov     large fs:0, ecx
0x41AB6F: pop     ecx
0x41AB70: pop     edi
0x41AB71: pop     esi
0x41AB72: pop     ebp
0x41AB73: pop     ebx
0x41AB74: mov     ecx, dword ptr [esp+134h+var_C]
0x41AB7B: xor     ecx, esp
0x41AB7D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x41AB82: add     esp, 138h
0x41AB88: retn    4
