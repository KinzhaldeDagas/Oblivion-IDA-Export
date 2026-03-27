0x64E320: sub     esp, 54h
0x64E323: push    ebp
0x64E324: push    esi
0x64E325: mov     esi, ecx
0x64E327: mov     eax, [esi]
0x64E329: mov     edx, [eax+184h]
0x64E32F: call    edx
0x64E331: mov     ebp, eax
0x64E333: test    ebp, ebp
0x64E335: mov     [esp+5Ch+var_50], ebp
0x64E339: jz      loc_64EC3C
0x64E33F: push    edi
0x64E340: mov     edi, [esp+60h+arg_0]
0x64E344: mov     ecx, edi
0x64E346: call    sub_5E6780
0x64E34B: test    eax, eax
0x64E34D: mov     [esp+60h+var_54], eax
0x64E351: jnz     loc_64E402
0x64E357: mov     ecx, [esi+2Ch]
0x64E35A: test    ecx, ecx
0x64E35C: jz      short loc_64E37E
0x64E35E: mov     eax, [ecx]
0x64E360: mov     edx, [eax+190h]
0x64E366: call    edx
0x64E368: test    al, al
0x64E36A: jnz     short loc_64E3E6
0x64E36C: mov     eax, [esi+2Ch]
0x64E36F: mov     eax, [eax+0Ch]
0x64E372: push    eax
0x64E373: mov     ecx, edi
0x64E375: call    sub_4D88C0
0x64E37A: test    al, al
0x64E37C: jnz     short loc_64E3E6
0x64E37E: mov     edx, [esi]
0x64E380: mov     eax, [edx+558h]
0x64E386: push    edi
0x64E387: mov     ecx, esi
0x64E389: call    eax
0x64E38B: mov     ecx, [esi+2Ch]
0x64E38E: test    ecx, ecx
0x64E390: jz      short loc_64E3B2
0x64E392: mov     edx, [ecx]
0x64E394: mov     eax, [edx+190h]
0x64E39A: call    eax
0x64E39C: test    al, al
0x64E39E: jnz     short loc_64E3E6
0x64E3A0: mov     ecx, [esi+2Ch]
0x64E3A3: mov     eax, [ecx+0Ch]
0x64E3A6: push    eax
0x64E3A7: mov     ecx, edi
0x64E3A9: call    sub_4D88C0
0x64E3AE: test    al, al
0x64E3B0: jnz     short loc_64E3E6
0x64E3B2: mov     edx, [esi]
0x64E3B4: mov     eax, [edx+188h]
0x64E3BA: push    1
0x64E3BC: push    edi
0x64E3BD: mov     ecx, esi
0x64E3BF: call    eax
0x64E3C1: cmp     byte ptr [esi+0D0h], 0
0x64E3C8: jnz     loc_64EC3B
0x64E3CE: mov     edx, [esi]
0x64E3D0: mov     eax, [edx+194h]
0x64E3D6: push    edi
0x64E3D7: mov     ecx, esi
0x64E3D9: call    eax
0x64E3DB: pop     edi
0x64E3DC: pop     esi
0x64E3DD: xor     al, al
0x64E3DF: pop     ebp
0x64E3E0: add     esp, 54h
0x64E3E3: retn    4
0x64E3E6: mov     eax, [esi+44h]
0x64E3E9: test    eax, eax
0x64E3EB: jz      short loc_64E402
0x64E3ED: cmp     [eax], edi
0x64E3EF: jnz     short loc_64E402
0x64E3F1: mov     ecx, [eax+4]
0x64E3F4: push    0
0x64E3F6: push    ecx
0x64E3F7: mov     ecx, edi
0x64E3F9: call    sub_4D8D70
0x64E3FE: mov     [esp+60h+var_54], eax
0x64E402: mov     ecx, [esi+2Ch]
0x64E405: test    ecx, ecx
0x64E407: mov     byte ptr [esp+60h+arg_0], 0
0x64E40C: jz      short loc_64E47C
0x64E40E: mov     edx, [ecx]
0x64E410: mov     eax, [edx+190h]
0x64E416: call    eax
0x64E418: test    al, al
0x64E41A: jz      short loc_64E47C
0x64E41C: mov     eax, [esi+2Ch]
0x64E41F: cmp     eax, edi
0x64E421: jz      short loc_64E47C
0x64E423: push    0; int
0x64E425: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64E42A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64E42F: push    0; int
0x64E431: push    eax; void *
0x64E432: mov     byte ptr [esp+74h+arg_0], 1
0x64E437: call    OblivionDynamicCast
0x64E43C: mov     edx, [esi+2Ch]
0x64E43F: mov     ecx, [eax+58h]
0x64E442: mov     ecx, [ecx+8]
0x64E445: add     esp, 14h
0x64E448: cmp     edx, ds:0B333C4h
0x64E44E: jz      short loc_64E47C
0x64E450: test    ecx, ecx
0x64E452: jz      short loc_64E463
0x64E454: cmp     byte ptr [ecx+20h], 1
0x64E458: jz      short loc_64E47C
0x64E45A: call    sub_5660A0
0x64E45F: test    al, al
0x64E461: jnz     short loc_64E47C
0x64E463: mov     eax, [esi]
0x64E465: mov     edx, [eax+17Ch]
0x64E46B: push    0
0x64E46D: mov     ecx, esi
0x64E46F: call    edx
0x64E471: pop     edi
0x64E472: pop     esi
0x64E473: xor     al, al
0x64E475: pop     ebp
0x64E476: add     esp, 54h
0x64E479: retn    4
0x64E47C: mov     eax, [edi]
0x64E47E: mov     edx, [eax+174h]
0x64E484: push    ebx
0x64E485: mov     ecx, edi
0x64E487: call    edx
0x64E489: cmp     byte ptr [esp+64h+arg_0], 0
0x64E48E: mov     ecx, [eax]
0x64E490: mov     edx, [eax+4]
0x64E493: mov     eax, [eax+8]
0x64E496: mov     [esp+64h+var_30], ecx
0x64E49A: mov     [esp+64h+var_2C], edx
0x64E49E: mov     [esp+64h+var_28], eax
0x64E4A2: jz      short loc_64E4F3
0x64E4A4: mov     ecx, [esi+2Ch]
0x64E4A7: mov     edx, [ecx]
0x64E4A9: mov     eax, [edx+174h]
0x64E4AF: call    eax
0x64E4B1: mov     edx, [edi]
0x64E4B3: mov     ebx, eax
0x64E4B5: mov     eax, [edx+174h]
0x64E4BB: mov     ecx, edi
0x64E4BD: call    eax
0x64E4BF: fld     dword ptr [eax]
0x64E4C1: fsub    dword ptr [ebx]
0x64E4C3: fstp    dword ptr [esp+64h+var_3C]
0x64E4C7: mov     ecx, dword ptr [esp+64h+var_3C]
0x64E4CB: fld     dword ptr [eax+4]
0x64E4CE: mov     [esp+64h+var_30], ecx
0x64E4D2: fsub    dword ptr [ebx+4]
0x64E4D5: fstp    dword ptr [esp+64h+var_3C+4]
0x64E4D9: mov     edx, dword ptr [esp+64h+var_3C+4]
0x64E4DD: fld     dword ptr [eax+8]
0x64E4E0: mov     [esp+64h+var_2C], edx
0x64E4E4: fsub    dword ptr [ebx+8]
0x64E4E7: fstp    [esp+64h+var_34]
0x64E4EB: mov     eax, [esp+64h+var_34]
0x64E4EF: mov     [esp+64h+var_28], eax
0x64E4F3: cmp     byte ptr [esp+64h+arg_0], 0
0x64E4F8: fldz
0x64E4FA: fstp    [esp+64h+var_4C]
0x64E4FE: jz      loc_64E624
0x64E504: mov     ecx, [esi+2Ch]
0x64E507: mov     dword ptr [esp+64h+var_3C], ecx
0x64E50B: mov     ecx, [ebp+28h]
0x64E50E: call    sub_452A60
0x64E513: test    eax, eax
0x64E515: mov     [esp+64h+var_4C], eax
0x64E519: jg      short loc_64E523
0x64E51B: mov     [esp+64h+var_4C], 0C8h ; 'È'
0x64E523: mov     edx, [esi+2Ch]
0x64E526: cmp     edx, ds:0B333C4h
0x64E52C: jnz     short loc_64E534
0x64E52E: fild    [esp+64h+var_4C]
0x64E532: jmp     short loc_64E558
0x64E534: mov     ecx, edi; this
0x64E536: call    TESObjectREFR_GetParentCell
0x64E53B: mov     ecx, eax; this
0x64E53D: call    TESObjectCELL_IsInterior
0x64E542: test    al, al
0x64E544: jz      short loc_64E54E
0x64E546: fld     dword ptr ds:0B36AA0h
0x64E54C: jmp     short loc_64E558
0x64E54E: fild    [esp+64h+var_4C]
0x64E552: fmul    dword ptr ds:0B36A98h
0x64E558: mov     ecx, [edi+58h]
0x64E55B: fstp    [esp+64h+var_4C]
0x64E55F: mov     eax, [ecx]
0x64E561: mov     edx, [eax+40Ch]
0x64E567: push    0; int
0x64E569: push    offset ??_R0?AVPathHigh@@@8; struct TypeDescriptor *
0x64E56E: push    offset ??_R0?AVPathLow@@@8; struct _s_RTTICompleteObjectLocator *
0x64E573: push    0; int
0x64E575: call    edx
0x64E577: push    eax; void *
0x64E578: call    OblivionDynamicCast
0x64E57D: mov     ebx, eax
0x64E57F: add     esp, 14h
0x64E582: test    ebx, ebx
0x64E584: jz      loc_64E624
0x64E58A: mov     ecx, ebx
0x64E58C: call    sub_68A160
0x64E591: mov     ebp, eax
0x64E593: mov     eax, [edi]
0x64E595: mov     edx, [eax+174h]
0x64E59B: mov     ecx, edi
0x64E59D: call    edx
0x64E59F: fld     dword ptr [eax]
0x64E5A1: fsub    dword ptr [ebp+0]
0x64E5A4: fstp    [esp+64h+var_24]
0x64E5A8: fld     dword ptr [eax+4]
0x64E5AB: fsub    dword ptr [ebp+4]
0x64E5AE: fstp    [esp+64h+var_20]
0x64E5B2: mov     ecx, [esp+64h+var_20]
0x64E5B6: fld     dword ptr [eax+8]
0x64E5B9: mov     eax, [esp+64h+var_24]
0x64E5BD: fsub    dword ptr [ebp+8]
0x64E5C0: mov     [esp+64h+var_14], ecx
0x64E5C4: mov     ecx, ebx
0x64E5C6: mov     [esp+64h+var_18], eax
0x64E5CA: fstp    [esp+64h+var_1C]
0x64E5CE: mov     edx, [esp+64h+var_1C]
0x64E5D2: mov     [esp+64h+var_10], edx
0x64E5D6: call    sub_68A160
0x64E5DB: mov     ecx, dword ptr [esp+64h+var_3C]
0x64E5DF: mov     ebp, eax
0x64E5E1: mov     eax, [ecx]
0x64E5E3: mov     edx, [eax+174h]
0x64E5E9: call    edx
0x64E5EB: fld     dword ptr [eax]
0x64E5ED: fsub    dword ptr [ebp+0]
0x64E5F0: fstp    [esp+64h+var_24]
0x64E5F4: fld     dword ptr [eax+4]
0x64E5F7: fsub    dword ptr [ebp+4]
0x64E5FA: fstp    [esp+64h+var_20]
0x64E5FE: mov     ecx, [esp+64h+var_20]
0x64E602: fld     dword ptr [eax+8]
0x64E605: mov     eax, [esp+64h+var_24]
0x64E609: fsub    dword ptr [ebp+8]
0x64E60C: mov     ebp, [esp+64h+var_50]
0x64E610: mov     [esp+64h+var_C], eax
0x64E614: mov     [esp+64h+var_8], ecx
0x64E618: fstp    [esp+64h+var_1C]
0x64E61C: mov     edx, [esp+64h+var_1C]
0x64E620: mov     [esp+64h+var_4], edx
0x64E624: cmp     dword ptr [ebp+24h], 0
0x64E628: jz      loc_64EBB1
0x64E62E: fld     dword ptr ds:0A30634h
0x64E634: push    ecx
0x64E635: fstp    [esp+68h+var_68]; float
0x64E638: push    0; char
0x64E63A: push    edi; int
0x64E63B: mov     ecx, ebp
0x64E63D: call    sub_566DC0
0x64E642: test    al, al
0x64E644: jz      loc_64EBB1
0x64E64A: cmp     byte ptr [esp+64h+arg_0], 0
0x64E64F: jnz     loc_64EABE
0x64E655: cmp     [esp+64h+var_54], 0
0x64E65A: mov     eax, [ebp+24h]
0x64E65D: mov     ecx, [ebp+28h]
0x64E660: mov     [esp+64h+var_4C], eax
0x64E664: mov     [esp+64h+var_40], ecx
0x64E668: jz      loc_64EA89
0x64E66E: mov     edx, [esp+64h+var_54]
0x64E672: mov     eax, [edx]
0x64E674: xor     ebp, ebp
0x64E676: test    eax, eax
0x64E678: mov     [esp+64h+arg_0], ebp
0x64E67C: jz      short loc_64E686
0x64E67E: mov     eax, [eax]
0x64E680: mov     [esp+64h+arg_0], eax
0x64E684: mov     ebp, eax
0x64E686: test    ebp, ebp
0x64E688: mov     [esp+64h+var_48], 0
0x64E690: jz      short loc_64E6AB
0x64E692: mov     ecx, ebp
0x64E694: call    ExtraDataList_GetReferencePointer
0x64E699: test    eax, eax
0x64E69B: jz      short loc_64E6AB
0x64E69D: mov     ecx, ebp
0x64E69F: call    ExtraDataList_GetReferencePointer
0x64E6A4: mov     ecx, [eax+0Ch]
0x64E6A7: mov     [esp+64h+var_48], ecx
0x64E6AB: mov     edx, [esp+64h+var_50]
0x64E6AF: mov     ecx, [edx+24h]
0x64E6B2: call    sub_5697E0
0x64E6B7: mov     ebx, eax
0x64E6B9: test    ebx, ebx
0x64E6BB: mov     [esp+64h+var_44], eax
0x64E6BF: jnz     short loc_64E6CC
0x64E6C1: mov     ebx, [esi+30h]
0x64E6C4: test    ebx, ebx
0x64E6C6: mov     [esp+64h+var_44], ebx
0x64E6CA: jz      short loc_64E707
0x64E6CC: mov     ecx, ebx; this
0x64E6CE: call    TESObjectREFR_GetContainer
0x64E6D3: test    eax, eax
0x64E6D5: jz      short loc_64E707
0x64E6D7: mov     eax, [esp+64h+var_50]
0x64E6DB: mov     edx, [esp+64h+var_54]
0x64E6DF: mov     ecx, [eax+28h]
0x64E6E2: mov     eax, [edx+8]
0x64E6E5: mov     edx, [esp+64h+var_48]
0x64E6E9: push    edx
0x64E6EA: mov     dword ptr [esp+68h+var_3C], eax
0x64E6EE: call    sub_452A60
0x64E6F3: push    eax
0x64E6F4: mov     eax, dword ptr [esp+6Ch+var_3C]
0x64E6F8: push    ebx
0x64E6F9: push    ebp
0x64E6FA: push    eax
0x64E6FB: mov     ecx, edi
0x64E6FD: call    sub_5FC6D0
0x64E702: jmp     loc_64E7F8
0x64E707: mov     ecx, [esp+64h+var_54]
0x64E70B: mov     eax, [ecx]
0x64E70D: test    eax, eax
0x64E70F: jz      short loc_64E719
0x64E711: mov     edx, [eax]
0x64E713: mov     [esp+64h+arg_0], edx
0x64E717: mov     ebp, edx
0x64E719: cmp     [esp+64h+var_4C], 0
0x64E71E: mov     dword ptr [esp+64h+var_3C], 0
0x64E726: jz      loc_64E7BB
0x64E72C: mov     ecx, [esp+64h+var_4C]
0x64E730: call    sub_5697E0
0x64E735: mov     ebp, eax
0x64E737: test    ebp, ebp
0x64E739: jnz     short loc_64E742
0x64E73B: mov     ebp, [esi+30h]
0x64E73E: test    ebp, ebp
0x64E740: jz      short loc_64E7B7
0x64E742: mov     eax, [ebp+0]
0x64E745: mov     edx, [eax+170h]
0x64E74B: mov     ecx, ebp
0x64E74D: call    edx
0x64E74F: cmp     eax, ds:0B35EACh
0x64E755: jz      short loc_64E76C
0x64E757: mov     eax, [ebp+0]
0x64E75A: mov     edx, [eax+170h]
0x64E760: mov     ecx, ebp
0x64E762: call    edx
0x64E764: cmp     eax, ds:0B35EB0h
0x64E76A: jnz     short loc_64E7B7
0x64E76C: mov     eax, [ebp+0]
0x64E76F: mov     edx, [eax+174h]
0x64E775: mov     ecx, ebp
0x64E777: call    edx
0x64E779: mov     ecx, [eax]
0x64E77B: mov     edx, [eax+4]
0x64E77E: mov     eax, [eax+8]
0x64E781: push    0Ch; Size
0x64E783: mov     [esp+68h+var_24], ecx
0x64E787: mov     [esp+68h+var_20], edx
0x64E78B: mov     [esp+68h+var_1C], eax
0x64E78F: call    FormHeapAlloc
0x64E794: add     esp, 4
0x64E797: test    eax, eax
0x64E799: jz      short loc_64E7B1
0x64E79B: fld     [esp+64h+var_24]
0x64E79F: fstp    dword ptr [eax]
0x64E7A1: fld     [esp+64h+var_20]
0x64E7A5: fstp    dword ptr [eax+4]
0x64E7A8: fld     [esp+64h+var_1C]
0x64E7AC: fstp    dword ptr [eax+8]
0x64E7AF: jmp     short loc_64E7B3
0x64E7B1: xor     eax, eax
0x64E7B3: mov     dword ptr [esp+64h+var_3C], eax
0x64E7B7: mov     ebp, [esp+64h+arg_0]
0x64E7BB: mov     ecx, [esp+64h+var_40]
0x64E7BF: mov     ebx, 1
0x64E7C4: call    sub_569E60
0x64E7C9: test    eax, eax
0x64E7CB: jnz     short loc_64E7DB
0x64E7CD: mov     ecx, [esp+64h+var_50]
0x64E7D1: mov     ecx, [ecx+28h]
0x64E7D4: call    sub_452A60
0x64E7D9: mov     ebx, eax
0x64E7DB: mov     eax, dword ptr [esp+64h+var_3C]
0x64E7DF: mov     ecx, [esp+64h+var_54]
0x64E7E3: mov     edx, [edi]
0x64E7E5: mov     edx, [edx+2C8h]
0x64E7EB: push    0
0x64E7ED: push    eax
0x64E7EE: mov     eax, [ecx+8]
0x64E7F1: push    ebx
0x64E7F2: push    ebp
0x64E7F3: push    eax
0x64E7F4: mov     ecx, edi
0x64E7F6: call    edx
0x64E7F8: mov     ebx, [esp+64h+var_54]
0x64E7FC: mov     ecx, ebx
0x64E7FE: call    ContainerEntryExtraData_DestroyDataTable
0x64E803: push    ebx
0x64E804: call    FormHeapFree
0x64E809: mov     ebx, [esp+68h+var_40]
0x64E80D: add     esp, 4
0x64E810: mov     ecx, ebx
0x64E812: call    sub_569E80
0x64E817: cmp     eax, 0Dh
0x64E81A: jz      short loc_64E840
0x64E81C: mov     ecx, ebx
0x64E81E: call    sub_569E80
0x64E823: cmp     eax, 15h
0x64E826: jl      loc_64EA7B
0x64E82C: mov     ecx, ebx
0x64E82E: call    sub_569E80
0x64E833: cmp     eax, 19h
0x64E836: jg      loc_64EA7B
0x64E83C: lea     esp, [esp+0]
0x64E840: cmp     dword ptr [esi+40h], 0
0x64E844: jnz     short loc_64E850
0x64E846: cmp     dword ptr [esi+3Ch], 0
0x64E84A: jz      loc_64E9CB
0x64E850: mov     eax, [esi+3Ch]
0x64E853: lea     ecx, [esi+3Ch]
0x64E856: push    eax
0x64E857: mov     [esi+44h], eax
0x64E85A: call    BSSimpleList_Remove
0x64E85F: mov     ecx, [esi+44h]
0x64E862: mov     edx, [ecx]
0x64E864: mov     eax, [esi]
0x64E866: mov     eax, [eax+0D0h]
0x64E86C: push    edx
0x64E86D: mov     ecx, esi
0x64E86F: call    eax
0x64E871: mov     ecx, [esi+44h]
0x64E874: mov     edx, [ecx+4]
0x64E877: xor     ebp, ebp
0x64E879: push    ebp
0x64E87A: push    edx
0x64E87B: mov     ecx, edi
0x64E87D: call    sub_4D8D70
0x64E882: mov     ebx, eax
0x64E884: mov     eax, [esi+44h]
0x64E887: cmp     eax, ebp
0x64E889: jz      short loc_64E894
0x64E88B: push    eax
0x64E88C: call    FormHeapFree
0x64E891: add     esp, 4
0x64E894: mov     ecx, [esp+64h+var_44]; this
0x64E898: cmp     ecx, ebp
0x64E89A: mov     [esi+44h], ebp
0x64E89D: jz      short loc_64E8D4
0x64E89F: call    TESObjectREFR_GetContainer
0x64E8A4: test    eax, eax
0x64E8A6: jz      short loc_64E8D4
0x64E8A8: mov     eax, [esp+64h+var_50]
0x64E8AC: mov     edx, [esp+64h+var_48]
0x64E8B0: mov     ecx, [eax+28h]
0x64E8B3: mov     ebp, [ebx+8]
0x64E8B6: push    edx
0x64E8B7: call    sub_452A60
0x64E8BC: mov     ecx, [esp+68h+arg_0]
0x64E8C0: push    eax
0x64E8C1: mov     eax, [esp+6Ch+var_44]
0x64E8C5: push    eax
0x64E8C6: push    ecx
0x64E8C7: push    ebp
0x64E8C8: mov     ecx, edi
0x64E8CA: call    sub_5FC6D0
0x64E8CF: jmp     loc_64E9B6
0x64E8D4: mov     eax, [ebx]
0x64E8D6: cmp     eax, ebp
0x64E8D8: jz      short loc_64E8E0
0x64E8DA: mov     edx, [eax]
0x64E8DC: mov     [esp+64h+arg_0], edx
0x64E8E0: cmp     [esp+64h+var_4C], ebp
0x64E8E4: mov     dword ptr [esp+64h+var_3C], ebp
0x64E8E8: jz      loc_64E979
0x64E8EE: mov     ecx, [esp+64h+var_4C]
0x64E8F2: call    sub_5697E0
0x64E8F7: mov     ebp, eax
0x64E8F9: test    ebp, ebp
0x64E8FB: jnz     short loc_64E904
0x64E8FD: mov     ebp, [esi+30h]
0x64E900: test    ebp, ebp
0x64E902: jz      short loc_64E979
0x64E904: mov     eax, [ebp+0]
0x64E907: mov     edx, [eax+170h]
0x64E90D: mov     ecx, ebp
0x64E90F: call    edx
0x64E911: cmp     eax, ds:0B35EACh
0x64E917: jz      short loc_64E92E
0x64E919: mov     eax, [ebp+0]
0x64E91C: mov     edx, [eax+170h]
0x64E922: mov     ecx, ebp
0x64E924: call    edx
0x64E926: cmp     eax, ds:0B35EB0h
0x64E92C: jnz     short loc_64E979
0x64E92E: mov     eax, [ebp+0]
0x64E931: mov     edx, [eax+174h]
0x64E937: mov     ecx, ebp
0x64E939: call    edx
0x64E93B: mov     ecx, [eax]
0x64E93D: mov     edx, [eax+4]
0x64E940: mov     eax, [eax+8]
0x64E943: push    0Ch; Size
0x64E945: mov     [esp+68h+var_24], ecx
0x64E949: mov     [esp+68h+var_20], edx
0x64E94D: mov     [esp+68h+var_1C], eax
0x64E951: call    FormHeapAlloc
0x64E956: add     esp, 4
0x64E959: test    eax, eax
0x64E95B: jz      short loc_64E973
0x64E95D: fld     [esp+64h+var_24]
0x64E961: fstp    dword ptr [eax]
0x64E963: fld     [esp+64h+var_20]
0x64E967: fstp    dword ptr [eax+4]
0x64E96A: fld     [esp+64h+var_1C]
0x64E96E: fstp    dword ptr [eax+8]
0x64E971: jmp     short loc_64E975
0x64E973: xor     eax, eax
0x64E975: mov     dword ptr [esp+64h+var_3C], eax
0x64E979: mov     ecx, [esp+64h+var_40]
0x64E97D: mov     ebp, 1
0x64E982: call    sub_569E60
0x64E987: test    eax, eax
0x64E989: jnz     short loc_64E999
0x64E98B: mov     ecx, [esp+64h+var_50]
0x64E98F: mov     ecx, [ecx+28h]
0x64E992: call    sub_452A60
0x64E997: mov     ebp, eax
0x64E999: mov     eax, dword ptr [esp+64h+var_3C]
0x64E99D: mov     ecx, [esp+64h+arg_0]
0x64E9A1: mov     edx, [edi]
0x64E9A3: mov     edx, [edx+2C8h]
0x64E9A9: push    0
0x64E9AB: push    eax
0x64E9AC: mov     eax, [ebx+8]
0x64E9AF: push    ebp
0x64E9B0: push    ecx
0x64E9B1: push    eax
0x64E9B2: mov     ecx, edi
0x64E9B4: call    edx
0x64E9B6: mov     ecx, ebx
0x64E9B8: call    ContainerEntryExtraData_DestroyDataTable
0x64E9BD: push    ebx
0x64E9BE: call    FormHeapFree
0x64E9C3: add     esp, 4
0x64E9C6: jmp     loc_64E840
0x64E9CB: mov     eax, [esi+8]
0x64E9CE: test    eax, eax
0x64E9D0: mov     byte ptr [esp+64h+var_40], 1
0x64E9D5: mov     byte ptr [esp+64h+arg_0], 1
0x64E9DA: jz      short loc_64E9FA
0x64E9DC: mov     eax, [eax+1Ch]
0x64E9DF: mov     ecx, eax
0x64E9E1: shr     ecx, 14h
0x64E9E4: test    cl, 1
0x64E9E7: jz      short loc_64E9EE
0x64E9E9: mov     byte ptr [esp+64h+var_40], 0
0x64E9EE: shr     eax, 15h
0x64E9F1: test    al, 1
0x64E9F3: jz      short loc_64E9FA
0x64E9F5: mov     byte ptr [esp+64h+arg_0], 0
0x64E9FA: mov     ecx, edi
0x64E9FC: call    sub_5E32D0
0x64EA01: test    al, al
0x64EA03: push    0; int
0x64EA05: mov     ecx, edi
0x64EA07: jz      short loc_64EA44
0x64EA09: mov     edx, [edi]
0x64EA0B: mov     eax, [edx+170h]
0x64EA11: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x64EA16: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64EA1B: push    0; int
0x64EA1D: call    eax
0x64EA1F: push    eax; void *
0x64EA20: call    OblivionDynamicCast
0x64EA25: add     esp, 14h
0x64EA28: test    eax, eax
0x64EA2A: jz      short loc_64EA7B
0x64EA2C: mov     ecx, [esp+64h+arg_0]
0x64EA30: mov     edx, [esp+64h+var_40]
0x64EA34: push    1; char
0x64EA36: push    0; int
0x64EA38: push    ecx; int
0x64EA39: push    edx; int
0x64EA3A: push    edi; int
0x64EA3B: mov     ecx, eax; int
0x64EA3D: call    sub_5227A0
0x64EA42: jmp     short loc_64EA7B
0x64EA44: mov     eax, [edi]
0x64EA46: mov     edx, [eax+170h]
0x64EA4C: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x64EA51: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x64EA56: push    0; int
0x64EA58: call    edx
0x64EA5A: push    eax; void *
0x64EA5B: call    OblivionDynamicCast
0x64EA60: add     esp, 14h
0x64EA63: test    eax, eax
0x64EA65: jz      short loc_64EA7B
0x64EA67: mov     ecx, [esp+64h+arg_0]
0x64EA6B: mov     edx, [esp+64h+var_40]
0x64EA6F: push    1
0x64EA71: push    ecx
0x64EA72: push    edx
0x64EA73: push    edi
0x64EA74: mov     ecx, eax
0x64EA76: call    sub_51E240
0x64EA7B: mov     eax, [esi]
0x64EA7D: mov     edx, [eax+0BCh]
0x64EA83: push    1
0x64EA85: mov     ecx, esi
0x64EA87: call    edx
0x64EA89: mov     eax, [esi]
0x64EA8B: mov     edx, [eax+188h]
0x64EA91: push    1
0x64EA93: push    edi
0x64EA94: mov     ecx, esi
0x64EA96: call    edx
0x64EA98: cmp     byte ptr [esi+0D0h], 0
0x64EA9F: jnz     loc_64EC3A
0x64EAA5: mov     edx, [esi]
0x64EAA7: mov     eax, [edx+194h]
0x64EAAD: push    edi
0x64EAAE: mov     ecx, esi
0x64EAB0: call    eax
0x64EAB2: pop     ebx
0x64EAB3: pop     edi
0x64EAB4: pop     esi
0x64EAB5: xor     al, al
0x64EAB7: pop     ebp
0x64EAB8: add     esp, 54h
0x64EABB: retn    4
0x64EABE: lea     ecx, [esp+64h+var_30]
0x64EAC2: call    sub_404C90
0x64EAC7: fld     [esp+64h+var_4C]
0x64EACB: fcompp
0x64EACD: fnstsw  ax
0x64EACF: test    ah, 1
0x64EAD2: jnz     short loc_64EA98
0x64EAD4: lea     ecx, [esp+64h+var_18]
0x64EAD8: call    sub_404C90
0x64EADD: fstp    [esp+64h+var_3C]
0x64EAE1: lea     ecx, [esp+64h+var_C]
0x64EAE5: call    sub_404C90
0x64EAEA: fcomp   [esp+64h+var_3C]
0x64EAEE: fnstsw  ax
0x64EAF0: test    ah, 1
0x64EAF3: jnz     short loc_64EA98
0x64EAF5: mov     eax, [esi]
0x64EAF7: mov     edx, [eax+188h]
0x64EAFD: push    1
0x64EAFF: push    edi
0x64EB00: mov     ecx, esi
0x64EB02: call    edx
0x64EB04: mov     ebp, [esi+2Ch]
0x64EB07: mov     ecx, [ebp+58h]
0x64EB0A: mov     eax, [ecx]
0x64EB0C: mov     edx, [eax+184h]
0x64EB12: call    edx
0x64EB14: test    eax, eax
0x64EB16: jz      short loc_64EA98
0x64EB18: mov     ecx, [ebp+58h]
0x64EB1B: mov     eax, [ecx]
0x64EB1D: mov     edx, [eax+188h]
0x64EB23: push    1
0x64EB25: push    edi
0x64EB26: call    edx
0x64EB28: mov     ecx, [ebp+58h]
0x64EB2B: mov     eax, [ecx]
0x64EB2D: mov     edx, [eax+184h]
0x64EB33: call    edx
0x64EB35: mov     ecx, eax
0x64EB37: call    sub_5660A0
0x64EB3C: test    al, al
0x64EB3E: jz      loc_64EA98
0x64EB44: mov     ecx, [ebp+58h]
0x64EB47: mov     eax, [ecx]
0x64EB49: mov     edx, [eax+184h]
0x64EB4F: call    edx
0x64EB51: test    eax, eax
0x64EB53: jz      short loc_64EB60
0x64EB55: mov     edx, [eax]
0x64EB57: mov     ecx, eax
0x64EB59: mov     eax, [edx+10h]
0x64EB5C: push    1
0x64EB5E: call    eax
0x64EB60: mov     ecx, [ebp+58h]
0x64EB63: mov     dword ptr [ecx+8], 0
0x64EB6A: mov     edx, [ebp+0]
0x64EB6D: mov     eax, [edx+44h]
0x64EB70: push    30000h
0x64EB75: mov     ecx, ebp
0x64EB77: call    eax
0x64EB79: mov     ecx, ebp
0x64EB7B: call    sub_5E05B0
0x64EB80: test    al, al
0x64EB82: jz      short loc_64EB8B
0x64EB84: mov     ecx, ebp
0x64EB86: call    sub_5E02B0
0x64EB8B: mov     edx, [esi]
0x64EB8D: mov     eax, [edx+0BCh]
0x64EB93: push    1
0x64EB95: mov     ecx, esi
0x64EB97: call    eax
0x64EB99: mov     edx, [esi]
0x64EB9B: mov     eax, [edx+18h]
0x64EB9E: push    0
0x64EBA0: push    edi
0x64EBA1: mov     ecx, esi
0x64EBA3: call    eax
0x64EBA5: pop     ebx
0x64EBA6: pop     edi
0x64EBA7: pop     esi
0x64EBA8: xor     al, al
0x64EBAA: pop     ebp
0x64EBAB: add     esp, 54h
0x64EBAE: retn    4
0x64EBB1: mov     ecx, [esi+8]
0x64EBB4: push    2
0x64EBB6: push    edi
0x64EBB7: call    sub_5677B0
0x64EBBC: call    Double_To_SInt32
0x64EBC1: mov     ecx, [esi+2Ch]
0x64EBC4: test    ecx, ecx
0x64EBC6: mov     [esp+64h+arg_0], eax
0x64EBCA: jz      short loc_64EBF4
0x64EBCC: mov     edx, [ecx]
0x64EBCE: mov     eax, [edx+190h]
0x64EBD4: call    eax
0x64EBD6: test    al, al
0x64EBD8: jz      short loc_64EBF4
0x64EBDA: mov     ecx, [esi+2Ch]
0x64EBDD: push    0
0x64EBDF: push    ecx
0x64EBE0: mov     ecx, edi
0x64EBE2: call    TesObjectREF_GetDistance
0x64EBE7: fild    [esp+64h+arg_0]
0x64EBEB: fcompp
0x64EBED: fnstsw  ax
0x64EBEF: test    ah, 5
0x64EBF2: jp      short loc_64EC3A
0x64EBF4: fild    [esp+64h+arg_0]
0x64EBF8: mov     ebx, [esi]
0x64EBFA: mov     ecx, [esi+8]
0x64EBFD: sub     esp, 8
0x64EC00: fstp    [esp+6Ch+var_68]
0x64EC04: add     ebx, 418h
0x64EC0A: fld     dword ptr ds:0A71E4Ch
0x64EC10: fstp    [esp+6Ch+var_6C]
0x64EC13: push    edi
0x64EC14: call    sub_566940
0x64EC19: mov     ecx, [esi+8]
0x64EC1C: push    eax
0x64EC1D: push    edi
0x64EC1E: call    sub_566A40
0x64EC23: mov     ecx, [esi+8]
0x64EC26: push    eax
0x64EC27: push    edi
0x64EC28: lea     edx, [esp+78h+var_C]
0x64EC2C: push    edx
0x64EC2D: call    sub_566B30
0x64EC32: push    eax
0x64EC33: mov     eax, [ebx]
0x64EC35: push    edi
0x64EC36: mov     ecx, esi
0x64EC38: call    eax
0x64EC3A: pop     ebx
0x64EC3B: pop     edi
0x64EC3C: pop     esi
0x64EC3D: xor     al, al
0x64EC3F: pop     ebp
0x64EC40: add     esp, 54h
0x64EC43: retn    4
