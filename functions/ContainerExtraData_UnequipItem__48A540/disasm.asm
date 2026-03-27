0x48A540: sub     esp, 8
0x48A543: fld     dword ptr ds:0A30634h
0x48A549: push    ebx
0x48A54A: mov     ebx, ecx
0x48A54C: mov     eax, [ebx]
0x48A54E: fst     dword ptr [ebx+8]
0x48A551: test    eax, eax
0x48A553: fstp    dword ptr [ebx+0Ch]
0x48A556: push    esi
0x48A557: mov     [esp+10h+var_8], ebx
0x48A55B: mov     dl, 1
0x48A55D: jz      short loc_48A596
0x48A55F: nop
0x48A560: test    dl, dl
0x48A562: jz      short loc_48A588
0x48A564: mov     ecx, [eax]
0x48A566: test    ecx, ecx
0x48A568: jz      short loc_48A577
0x48A56A: mov     esi, [esp+10h+arg_4]
0x48A56E: cmp     [ecx+8], esi
0x48A571: jnz     short loc_48A577
0x48A573: xor     dl, dl
0x48A575: jmp     short loc_48A57A
0x48A577: mov     eax, [eax+4]
0x48A57A: test    eax, eax
0x48A57C: jnz     short loc_48A560
0x48A57E: pop     esi
0x48A57F: mov     al, 1
0x48A581: pop     ebx
0x48A582: add     esp, 8
0x48A585: retn    1Ch
0x48A588: test    eax, eax
0x48A58A: jz      short loc_48A596
0x48A58C: mov     eax, [eax]
0x48A58E: test    eax, eax
0x48A590: mov     [esp+10h+var_4], eax
0x48A594: jnz     short loc_48A5A0
0x48A596: pop     esi
0x48A597: mov     al, 1
0x48A599: pop     ebx
0x48A59A: add     esp, 8
0x48A59D: retn    1Ch
0x48A5A0: push    ebp
0x48A5A1: mov     ebp, [esp+14h+arg_0]
0x48A5A5: mov     byte ptr [ebp+0], 1
0x48A5A9: mov     esi, [eax]
0x48A5AB: test    esi, esi
0x48A5AD: push    edi
0x48A5AE: mov     byte ptr [esp+18h+arg_0], 1
0x48A5B3: jz      loc_48A939
0x48A5B9: mov     ebx, [esp+18h+arg_10]
0x48A5BD: lea     ecx, [ecx+0]
0x48A5C0: mov     edi, [esi]
0x48A5C2: test    edi, edi
0x48A5C4: jz      short loc_48A610
0x48A5C6: mov     ecx, edi
0x48A5C8: call    sub_41DF40
0x48A5CD: test    al, al
0x48A5CF: jz      short loc_48A5E9
0x48A5D1: mov     ecx, [esp+18h+arg_C]
0x48A5D5: mov     eax, [ecx]
0x48A5D7: mov     edx, [eax+198h]
0x48A5DD: push    0
0x48A5DF: call    edx
0x48A5E1: test    al, al
0x48A5E3: jz      loc_48A905
0x48A5E9: mov     eax, [esp+18h+arg_14]
0x48A5ED: push    eax
0x48A5EE: mov     ecx, edi
0x48A5F0: call    ExtraDataList_HasWorn
0x48A5F5: test    al, al
0x48A5F7: jz      short loc_48A609
0x48A5F9: test    ebx, ebx
0x48A5FB: jz      loc_48A6AD
0x48A601: cmp     ebx, edi
0x48A603: jz      loc_48A6AD
0x48A609: mov     esi, [esi+4]
0x48A60C: test    esi, esi
0x48A60E: jnz     short loc_48A5C0
0x48A610: mov     ebp, [esp+18h+arg_C]
0x48A614: mov     ebx, [esp+18h+var_8]
0x48A618: mov     ecx, [ebx+4]
0x48A61B: test    ecx, ecx
0x48A61D: jz      loc_48A942
0x48A623: mov     edx, [ecx]
0x48A625: mov     eax, [edx+40h]
0x48A628: push    8000000h
0x48A62D: call    eax
0x48A62F: mov     edi, [esp+18h+arg_4]
0x48A633: mov     al, [edi+4]
0x48A636: cmp     al, 16h
0x48A638: jz      short loc_48A642
0x48A63A: cmp     al, 14h
0x48A63C: jnz     loc_48A946
0x48A642: push    edi
0x48A643: call    sub_4691B0
0x48A648: add     esp, 4
0x48A64B: mov     esi, eax
0x48A64D: push    0
0x48A64F: push    7
0x48A651: mov     ecx, esi
0x48A653: call    TESBipedModelForm_CoversSlot
0x48A658: test    al, al
0x48A65A: jnz     loc_48A946
0x48A660: push    0
0x48A662: push    6
0x48A664: mov     ecx, esi
0x48A666: call    TESBipedModelForm_CoversSlot
0x48A66B: test    al, al
0x48A66D: jnz     loc_48A946
0x48A673: push    0
0x48A675: push    8
0x48A677: mov     ecx, esi
0x48A679: call    TESBipedModelForm_CoversSlot
0x48A67E: test    al, al
0x48A680: jnz     loc_48A946
0x48A686: push    0
0x48A688: push    0Dh
0x48A68A: mov     ecx, esi
0x48A68C: call    TESBipedModelForm_CoversSlot
0x48A691: test    al, al
0x48A693: jnz     loc_48A946
0x48A699: mov     ecx, [ebx+4]
0x48A69C: mov     edx, [ecx]
0x48A69E: mov     eax, [edx+40h]
0x48A6A1: push    20000000h
0x48A6A6: call    eax
0x48A6A8: jmp     loc_48A946
0x48A6AD: mov     ecx, [esp+18h+arg_4]
0x48A6B1: push    ecx
0x48A6B2: call    sub_4691B0
0x48A6B7: mov     ebp, [esp+1Ch+arg_C]
0x48A6BB: mov     ecx, [ebp+58h]
0x48A6BE: add     esp, 4
0x48A6C1: test    ecx, ecx
0x48A6C3: mov     esi, eax
0x48A6C5: jz      ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A6CB: mov     edx, [esp+18h+arg_4]
0x48A6CF: movzx   eax, byte ptr [edx+4]
0x48A6D3: add     eax, 0FFFFFFECh; switch 15 cases
0x48A6D6: cmp     eax, 0Eh
0x48A6D9: ja      ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A6DF: movzx   eax, ds:byte_48A9F4[eax]
0x48A6E6: jmp     ds:jpt_48A6E6[eax*4]; switch jump
0x48A6ED: push    0; jumptable 0048A6E6 case 22
0x48A6EF: push    7
0x48A6F1: mov     ecx, esi
0x48A6F3: call    TESBipedModelForm_CoversSlot
0x48A6F8: test    al, al
0x48A6FA: jnz     short loc_48A748
0x48A6FC: push    0
0x48A6FE: push    6
0x48A700: mov     ecx, esi
0x48A702: call    TESBipedModelForm_CoversSlot
0x48A707: test    al, al
0x48A709: jnz     short loc_48A748
0x48A70B: push    0
0x48A70D: push    8
0x48A70F: mov     ecx, esi
0x48A711: call    TESBipedModelForm_CoversSlot
0x48A716: test    al, al
0x48A718: mov     ecx, [ebp+58h]
0x48A71B: mov     edx, [ecx]
0x48A71D: jz      short loc_48A73B
0x48A71F: mov     eax, [edx+320h]
0x48A725: call    eax
0x48A727: test    al, al
0x48A729: jnz     ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A72F: mov     ecx, ebp
0x48A731: call    sub_4DD000
0x48A736: jmp     ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A73B: mov     eax, [edx+31Ch]
0x48A741: push    1
0x48A743: jmp     loc_48A83F
0x48A748: mov     ecx, [ebp+58h]
0x48A74B: mov     edx, [ecx]
0x48A74D: mov     eax, [edx+320h]
0x48A753: call    eax
0x48A755: test    al, al
0x48A757: jnz     ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A75D: mov     ecx, [esp+18h+arg_14]
0x48A761: push    ecx
0x48A762: mov     ecx, ebp
0x48A764: call    sub_4DCF10
0x48A769: jmp     ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A76E: mov     edx, [ecx]; jumptable 0048A6E6 case 33
0x48A770: mov     eax, [edx+0ECh]
0x48A776: push    1
0x48A778: call    eax
0x48A77A: test    eax, eax
0x48A77C: jz      ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A782: mov     ecx, [eax]
0x48A784: cmp     [ecx], edi
0x48A786: jz      short loc_48A790
0x48A788: test    ebx, ebx
0x48A78A: jnz     ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A790: mov     ecx, ebp
0x48A792: call    UnequipWeapon
0x48A797: mov     ecx, [ebp+58h]
0x48A79A: mov     edx, [ecx]
0x48A79C: mov     eax, [edx+104h]
0x48A7A2: push    0
0x48A7A4: push    0
0x48A7A6: call    eax
0x48A7A8: jmp     ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A7AD: mov     edx, [ecx]; jumptable 0048A6E6 case 26
0x48A7AF: mov     eax, [edx+0F0h]
0x48A7B5: push    0
0x48A7B7: call    eax
0x48A7B9: test    eax, eax
0x48A7BB: jz      ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A7C1: mov     ecx, ebp
0x48A7C3: call    UnequipLight
0x48A7C8: mov     ecx, [ebp+58h]
0x48A7CB: mov     edx, [ecx]
0x48A7CD: mov     eax, [edx+108h]
0x48A7D3: jmp     short loc_48A83D
0x48A7D5: push    0; jumptable 0048A6E6 case 20
0x48A7D7: push    0Dh
0x48A7D9: mov     ecx, esi
0x48A7DB: call    TESBipedModelForm_CoversSlot
0x48A7E0: test    al, al
0x48A7E2: mov     ecx, [ebp+58h]
0x48A7E5: mov     edx, [ecx]
0x48A7E7: jz      loc_48A73B
0x48A7ED: mov     eax, [edx+0F8h]
0x48A7F3: push    0
0x48A7F5: call    eax
0x48A7F7: test    eax, eax
0x48A7F9: jz      short ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A7FB: mov     ecx, [ebp+58h]
0x48A7FE: mov     edx, [ecx]
0x48A800: mov     eax, [edx+110h]
0x48A806: push    0
0x48A808: call    eax
0x48A80A: push    1
0x48A80C: mov     ecx, ebp
0x48A80E: call    sub_4DC8F0
0x48A813: jmp     short ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A815: mov     edx, [ecx]; jumptable 0048A6E6 case 34
0x48A817: mov     eax, [edx+0F4h]
0x48A81D: push    1
0x48A81F: call    eax
0x48A821: test    eax, eax
0x48A823: jz      short ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A825: mov     ecx, [eax]
0x48A827: cmp     [ecx], edi
0x48A829: jnz     short ContainerExtraData_UnequipItem___def_48A6E6; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A82B: mov     ecx, ebp
0x48A82D: call    sub_4DCCF0
0x48A832: mov     ecx, [ebp+58h]
0x48A835: mov     edx, [ecx]
0x48A837: mov     eax, [edx+10Ch]
0x48A83D: push    0
0x48A83F: call    eax
0x48A841: mov     ecx, [esp+18h+arg_14]; jumptable 0048A6E6 default case, cases 21,23-25,27-32
0x48A845: push    ecx
0x48A846: push    0
0x48A848: mov     ecx, edi
0x48A84A: call    SetWorn
0x48A84F: mov     ecx, edi
0x48A851: call    BaseExtraList_Count
0x48A856: cmp     eax, 1
0x48A859: ja      short loc_48A864
0x48A85B: push    0
0x48A85D: mov     ecx, edi
0x48A85F: call    ExtraDataList_SetExtraCount
0x48A864: cmp     dword ptr [edi+4], 0
0x48A868: jz      loc_48A915
0x48A86E: mov     edx, [esp+18h+var_4]
0x48A872: mov     ebp, [edx]
0x48A874: test    ebp, ebp
0x48A876: jz      loc_48A935
0x48A87C: mov     ebx, [esp+18h+arg_8]
0x48A880: mov     esi, [ebp+0]
0x48A883: test    esi, esi
0x48A885: jz      loc_48A935
0x48A88B: cmp     byte ptr [esp+18h+arg_0], 0
0x48A890: jz      loc_48A935
0x48A896: test    edi, edi
0x48A898: jz      short loc_48A8F9
0x48A89A: push    esi
0x48A89B: mov     ecx, edi
0x48A89D: call    ExtraDataList_CompareListForContainer
0x48A8A2: test    al, al
0x48A8A4: jnz     short loc_48A8F9
0x48A8A6: cmp     edi, esi
0x48A8A8: jz      short loc_48A8F9
0x48A8AA: mov     ecx, esi
0x48A8AC: call    ExtraDataList_GetExtraCount
0x48A8B1: add     ax, bx
0x48A8B4: mov     ecx, esi
0x48A8B6: push    eax
0x48A8B7: call    ExtraDataList_SetExtraCount
0x48A8BC: cmp     dword ptr [esi+4], 0
0x48A8C0: jnz     short loc_48A8DA
0x48A8C2: mov     eax, [esp+18h+var_4]
0x48A8C6: mov     ecx, [eax]
0x48A8C8: push    esi
0x48A8C9: call    BSSimpleList_Remove
0x48A8CE: mov     edx, [esi]
0x48A8D0: mov     eax, [edx]
0x48A8D2: push    1
0x48A8D4: mov     ecx, esi
0x48A8D6: call    eax
0x48A8D8: jmp     short loc_48A8E6
0x48A8DA: mov     ecx, [esp+18h+var_4]
0x48A8DE: mov     ecx, [ecx]
0x48A8E0: push    edi
0x48A8E1: call    BSSimpleList_Remove
0x48A8E6: mov     edx, [edi]
0x48A8E8: mov     eax, [edx]
0x48A8EA: push    1
0x48A8EC: mov     ecx, edi
0x48A8EE: call    eax
0x48A8F0: xor     edi, edi
0x48A8F2: mov     byte ptr [esp+18h+arg_0], 0
0x48A8F7: jmp     short loc_48A8FC
0x48A8F9: mov     ebp, [ebp+4]
0x48A8FC: test    ebp, ebp
0x48A8FE: jnz     short loc_48A880
0x48A900: jmp     loc_48A610
0x48A905: pop     edi
0x48A906: mov     byte ptr [ebp+0], 0
0x48A90A: pop     ebp
0x48A90B: pop     esi
0x48A90C: mov     al, 1
0x48A90E: pop     ebx
0x48A90F: add     esp, 8
0x48A912: retn    1Ch
0x48A915: mov     ecx, [esp+18h+var_4]
0x48A919: mov     ecx, [ecx]
0x48A91B: push    edi
0x48A91C: call    BSSimpleList_Remove
0x48A921: mov     edx, [edi]
0x48A923: mov     eax, [edx]
0x48A925: push    1
0x48A927: mov     ecx, edi
0x48A929: call    eax
0x48A92B: mov     byte ptr [esp+18h+arg_0], 0
0x48A930: jmp     loc_48A614
0x48A935: mov     ebx, [esp+18h+var_8]
0x48A939: mov     ebp, [esp+18h+arg_C]
0x48A93D: jmp     loc_48A618
0x48A942: mov     edi, [esp+18h+arg_4]
0x48A946: mov     ecx, [ebx+4]; this
0x48A949: test    ecx, ecx
0x48A94B: jz      short loc_48A954
0x48A94D: call    TESObjectREFR_GetContainer
0x48A952: jmp     short loc_48A956
0x48A954: xor     eax, eax
0x48A956: push    edi
0x48A957: mov     ecx, eax
0x48A959: call    TESContainer_GetFormCount
0x48A95E: mov     esi, [esp+18h+var_4]
0x48A962: mov     ecx, [esi]
0x48A964: test    ecx, ecx
0x48A966: jz      short loc_48A9B4
0x48A968: cmp     dword ptr [ecx+4], 0
0x48A96C: jnz     short loc_48A9B4
0x48A96E: cmp     dword ptr [ecx], 0
0x48A971: jnz     short loc_48A9B4
0x48A973: mov     edx, [esi+4]
0x48A976: test    edx, edx
0x48A978: jz      short loc_48A97E
0x48A97A: cmp     eax, edx
0x48A97C: jnz     short loc_48A9B4
0x48A97E: mov     ecx, [ebx]
0x48A980: push    esi
0x48A981: call    BSSimpleList_Remove
0x48A986: mov     ecx, [esi]
0x48A988: test    ecx, ecx
0x48A98A: jz      short loc_48A991
0x48A98C: call    BSSimpleList_Clear
0x48A991: mov     ecx, [esi]
0x48A993: push    ecx
0x48A994: call    FormHeapFree
0x48A999: push    esi
0x48A99A: mov     dword ptr [esi], 0
0x48A9A0: call    FormHeapFree
0x48A9A5: add     esp, 8
0x48A9A8: pop     edi
0x48A9A9: pop     ebp
0x48A9AA: pop     esi
0x48A9AB: xor     al, al
0x48A9AD: pop     ebx
0x48A9AE: add     esp, 8
0x48A9B1: retn    1Ch
0x48A9B4: cmp     dword ptr [esi+4], 0
0x48A9B8: jge     short loc_48A9C3
0x48A9BA: test    ecx, ecx
0x48A9BC: jz      short loc_48A9C3
0x48A9BE: call    BSSimpleList_Clear
0x48A9C3: mov     edx, [ebp+3Ch]
0x48A9C6: push    edx
0x48A9C7: mov     ecx, ebp
0x48A9C9: call    sub_5EA1A0
0x48A9CE: mov     al, byte ptr [esp+18h+arg_0]
0x48A9D2: pop     edi
0x48A9D3: pop     ebp
0x48A9D4: pop     esi
0x48A9D5: pop     ebx
0x48A9D6: add     esp, 8
0x48A9D9: retn    1Ch
