0x62A660: sub     esp, 0Ch
0x62A663: push    esi; int
0x62A664: mov     esi, ecx
0x62A666: mov     ecx, ds:0B333C4h; this
0x62A66C: call    PlayerCharacter__IsSleeping?
0x62A671: test    al, al
0x62A673: jz      short loc_62A685
0x62A675: mov     ecx, [esp+10h+arg_0]; int
0x62A679: call    sub_5EAE70
0x62A67E: pop     esi
0x62A67F: add     esp, 0Ch
0x62A682: retn    4
0x62A685: cmp     dword ptr [esi+2Ch], 0
0x62A689: push    edi
0x62A68A: mov     edi, [esp+14h+arg_0]
0x62A68E: jnz     short loc_62A69D
0x62A690: mov     eax, [esi]
0x62A692: mov     edx, [eax+558h]
0x62A698: push    edi
0x62A699: mov     ecx, esi
0x62A69B: call    edx
0x62A69D: push    ebp
0x62A69E: mov     ebp, [esi+2Ch]
0x62A6A1: test    ebp, ebp
0x62A6A3: mov     [esp+18h+var_4], ebp
0x62A6A7: jnz     short loc_62A6C1
0x62A6A9: mov     eax, [esi]
0x62A6AB: mov     edx, [eax+188h]
0x62A6B1: push    1
0x62A6B3: push    edi
0x62A6B4: mov     ecx, esi
0x62A6B6: call    edx
0x62A6B8: pop     ebp
0x62A6B9: pop     edi
0x62A6BA: pop     esi
0x62A6BB: add     esp, 0Ch
0x62A6BE: retn    4
0x62A6C1: push    0
0x62A6C3: push    ebp
0x62A6C4: mov     ecx, edi
0x62A6C6: call    TesObjectREF_GetDistance
0x62A6CB: fcomp   qword ptr ds:0A6BEA0h
0x62A6D1: fnstsw  ax
0x62A6D3: test    ah, 41h
0x62A6D6: jz      loc_62A999
0x62A6DC: push    ebx
0x62A6DD: mov     ecx, edi; this
0x62A6DF: call    Actor_IsNPC
0x62A6E4: test    al, al
0x62A6E6: jz      loc_62A865
0x62A6EC: cmp     [ebp+7Ch], edi
0x62A6EF: jz      loc_62A865
0x62A6F5: mov     ecx, ebp; this
0x62A6F7: call    Actor_IsNPC
0x62A6FC: test    al, al
0x62A6FE: jz      loc_62A865
0x62A704: mov     eax, [esi]
0x62A706: mov     edx, [eax+0C0h]
0x62A70C: mov     ecx, esi
0x62A70E: call    edx
0x62A710: test    al, al
0x62A712: jnz     loc_62A7EC
0x62A718: push    3
0x62A71A: push    6
0x62A71C: call    TESTopic__GEtTopic
0x62A721: mov     ebx, eax
0x62A723: add     esp, 8
0x62A726: test    ebx, ebx
0x62A728: jz      loc_62A849
0x62A72E: mov     eax, [esi]
0x62A730: mov     edx, [eax+344h]
0x62A736: push    0
0x62A738: mov     ecx, esi
0x62A73A: call    edx
0x62A73C: mov     eax, [esi+2Ch]
0x62A73F: push    0
0x62A741: push    0
0x62A743: push    eax
0x62A744: push    edi
0x62A745: mov     ecx, ebx
0x62A747: call    TESTopic__CreateDialogueInfo
0x62A74C: mov     edx, [esi]
0x62A74E: mov     edx, [edx+484h]
0x62A754: mov     ebx, eax
0x62A756: mov     eax, [esi+2Ch]
0x62A759: push    eax
0x62A75A: mov     ecx, esi
0x62A75C: mov     [esp+1Ch+var_4], ebx
0x62A760: call    edx
0x62A762: test    ebx, ebx
0x62A764: jz      short loc_62A7CF
0x62A766: mov     ecx, ebx
0x62A768: call    sub_6B7BA0
0x62A76D: mov     ecx, ebx
0x62A76F: call    sub_6B7C20
0x62A774: test    eax, eax
0x62A776: jz      short loc_62A7CF
0x62A778: mov     cl, ds:0B1490Ch
0x62A77E: mov     edx, [eax+10h]
0x62A781: mov     ebp, [eax+0Ch]
0x62A784: mov     ebx, [eax+8]
0x62A787: mov     byte ptr [esp+18h+arg_4], cl
0x62A78B: mov     ecx, [esp+18h+arg_4]
0x62A78F: push    1
0x62A791: push    ecx
0x62A792: push    0
0x62A794: push    0
0x62A796: mov     ecx, eax
0x62A798: mov     [esp+28h+var_8], edx
0x62A79C: call    BSStringT_GetLen
0x62A7A1: push    eax
0x62A7A2: mov     eax, [esp+2Ch+var_8]
0x62A7A6: push    ebp
0x62A7A7: push    ebx
0x62A7A8: lea     edx, [esi+220h]
0x62A7AE: push    edx
0x62A7AF: push    eax
0x62A7B0: mov     ecx, edi
0x62A7B2: call    Actor__InitDialogue
0x62A7B7: fstp    dword ptr [esi+21Ch]
0x62A7BD: mov     edx, [esi]
0x62A7BF: mov     eax, [edx+48h]
0x62A7C2: push    edi
0x62A7C3: mov     ecx, esi
0x62A7C5: call    eax
0x62A7C7: mov     ebx, [esp+18h+var_4]
0x62A7CB: mov     ebp, [esp+18h]
0x62A7CF: mov     edx, [esi]
0x62A7D1: mov     eax, [edx+0BCh]
0x62A7D7: push    1
0x62A7D9: mov     ecx, esi
0x62A7DB: mov     [esi+250h], ebx
0x62A7E1: mov     byte ptr [esi+228h], 1
0x62A7E8: call    eax
0x62A7EA: jmp     short loc_62A849
0x62A7EC: fldz
0x62A7EE: fcomp   dword ptr [esi+21Ch]
0x62A7F4: fnstsw  ax
0x62A7F6: test    ah, 5
0x62A7F9: jp      short loc_62A80F
0x62A7FB: fld     dword ptr [esi+21Ch]
0x62A801: fsub    dword ptr ds:0B33E9Ch
0x62A807: fstp    dword ptr [esi+21Ch]
0x62A80D: jmp     short loc_62A816
0x62A80F: mov     byte ptr ds:0B3B92Ch, 1
0x62A816: mov     ecx, [esi+250h]; int
0x62A81C: test    ecx, ecx
0x62A81E: jz      short loc_62A849
0x62A820: call    sub_6B7C30
0x62A825: mov     ebx, [esi+250h]
0x62A82B: test    ebx, ebx
0x62A82D: jz      short loc_62A83F
0x62A82F: mov     ecx, ebx
0x62A831: call    sub_6B81D0
0x62A836: push    ebx
0x62A837: call    FormHeapFree
0x62A83C: add     esp, 4
0x62A83F: mov     dword ptr [esi+250h], 0
0x62A849: cmp     byte ptr ds:0B3B92Ch, 0
0x62A850: jz      short loc_62A88D
0x62A852: mov     dword ptr [esi+250h], 0
0x62A85C: mov     byte ptr [esi+228h], 0
0x62A863: jmp     short loc_62A88D
0x62A865: mov     edx, [esi]
0x62A867: mov     eax, [edx+0C0h]
0x62A86D: mov     ecx, esi
0x62A86F: call    eax
0x62A871: test    al, al
0x62A873: jnz     short loc_62A88D
0x62A875: mov     edx, [esi]
0x62A877: mov     eax, [edx+48h]
0x62A87A: push    edi
0x62A87B: mov     ecx, esi
0x62A87D: call    eax
0x62A87F: mov     edx, [esi]
0x62A881: mov     eax, [edx+0BCh]
0x62A887: push    1
0x62A889: mov     ecx, esi
0x62A88B: call    eax
0x62A88D: mov     edx, [edi]
0x62A88F: mov     eax, [edx+164h]
0x62A895: mov     ecx, edi
0x62A897: call    eax
0x62A899: test    eax, eax
0x62A89B: jz      loc_62A97A
0x62A8A1: mov     ecx, eax
0x62A8A3: call    sub_472EA0
0x62A8A8: test    al, al
0x62A8AA: jz      loc_62A97A
0x62A8B0: mov     ecx, [ebp+58h]
0x62A8B3: test    ecx, ecx
0x62A8B5: jz      short loc_62A8C3
0x62A8B7: mov     edx, [ecx]
0x62A8B9: mov     eax, [edx+204h]
0x62A8BF: push    0
0x62A8C1: call    eax
0x62A8C3: mov     ecx, offset flt_B36CC0
0x62A8C8: call    GameSetting_GetSafeFloatPointer
0x62A8CD: fld     dword ptr [eax]
0x62A8CF: fstp    dword ptr [ebp+84h]
0x62A8D5: mov     edx, [esi]
0x62A8D7: mov     eax, [edx+49Ch]
0x62A8DD: mov     ecx, esi
0x62A8DF: call    eax
0x62A8E1: cmp     dword ptr [esi+3Ch], 0
0x62A8E5: mov     edx, [esi]
0x62A8E7: lea     ebp, [esi+3Ch]
0x62A8EA: mov     ecx, esi
0x62A8EC: jz      loc_62A984
0x62A8F2: mov     eax, [edx+33Ch]
0x62A8F8: push    0
0x62A8FA: call    eax
0x62A8FC: test    eax, eax
0x62A8FE: jz      short loc_62A919
0x62A900: mov     edx, [esi]
0x62A902: mov     eax, [edx+33Ch]
0x62A908: push    0
0x62A90A: mov     ecx, esi
0x62A90C: call    eax
0x62A90E: mov     ecx, eax
0x62A910: call    sub_6B7260
0x62A915: test    al, al
0x62A917: jnz     short loc_62A97A
0x62A919: mov     ebx, [ebp+0]
0x62A91C: mov     ecx, [ebx]
0x62A91E: mov     [esp+1Ch+arg_0], ecx
0x62A922: mov     ecx, ebp
0x62A924: call    sub_67F100
0x62A929: push    ebx
0x62A92A: call    FormHeapFree
0x62A92F: mov     edx, [esi]
0x62A931: mov     eax, [edx+0BCh]
0x62A937: add     esp, 4
0x62A93A: push    0
0x62A93C: mov     ecx, esi
0x62A93E: call    eax
0x62A940: mov     edx, [esi]
0x62A942: mov     eax, [edx+188h]
0x62A948: push    0FFFFFFFFh
0x62A94A: push    edi
0x62A94B: mov     ecx, esi
0x62A94D: call    eax
0x62A94F: mov     edx, [esi]
0x62A951: mov     edi, [esp+1Ch+arg_0]
0x62A955: mov     eax, [edx+184h]
0x62A95B: mov     ecx, esi
0x62A95D: mov     [esi+2Ch], edi
0x62A960: call    eax
0x62A962: mov     ecx, [esi+2Ch]
0x62A965: push    ecx
0x62A966: mov     ecx, [eax+24h]
0x62A969: call    TESPackage_LocationData_SetReference
0x62A96E: push    edi
0x62A96F: lea     ecx, [esi+0A8h]
0x62A975: call    BSSimpleList_PushFront
0x62A97A: pop     ebx
0x62A97B: pop     ebp
0x62A97C: pop     edi
0x62A97D: pop     esi
0x62A97E: add     esp, 0Ch
0x62A981: retn    4
0x62A984: mov     eax, [edx+188h]
0x62A98A: push    1
0x62A98C: push    edi
0x62A98D: call    eax
0x62A98F: pop     ebx
0x62A990: pop     ebp
0x62A991: pop     edi
0x62A992: pop     esi
0x62A993: add     esp, 0Ch
0x62A996: retn    4
0x62A999: mov     edx, [esi]
0x62A99B: mov     eax, [edx+188h]
0x62A9A1: push    1
0x62A9A3: push    edi
0x62A9A4: mov     ecx, esi
0x62A9A6: call    eax
0x62A9A8: pop     ebp
0x62A9A9: pop     edi
0x62A9AA: pop     esi
0x62A9AB: add     esp, 0Ch
0x62A9AE: retn    4
