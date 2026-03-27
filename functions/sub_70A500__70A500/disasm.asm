0x70A500: push    0FFFFFFFFh
0x70A502: push    offset SEH_70A500
0x70A507: mov     eax, large fs:0
0x70A50D: push    eax
0x70A50E: sub     esp, 10h
0x70A511: push    ebx
0x70A512: push    ebp
0x70A513: push    esi
0x70A514: push    edi
0x70A515: mov     eax, ds:0B30AACh
0x70A51A: xor     eax, esp
0x70A51C: push    eax
0x70A51D: lea     eax, [esp+30h+var_C]
0x70A521: mov     large fs:0, eax
0x70A527: mov     [esp+30h+var_18], ecx
0x70A52B: mov     edi, [esp+30h+a2]
0x70A52F: test    edi, edi
0x70A531: mov     esi, edi
0x70A533: mov     [esp+30h+var_10], 0
0x70A53B: mov     [esp+30h+var_1C], esi
0x70A53F: jz      short loc_70A54B
0x70A541: lea     eax, [edi+4]
0x70A544: push    eax; lpAddend
0x70A545: call    dword ptr ds:0A28078h
0x70A54B: xor     bl, bl
0x70A54D: test    edi, edi
0x70A54F: mov     [esp+30h+var_4], 1
0x70A557: jz      loc_70A757
0x70A55D: mov     ebp, [edi+0Ch]
0x70A560: test    ebp, ebp
0x70A562: jz      short loc_70A5D7
0x70A564: mov     ecx, [ebp+4]
0x70A567: test    ecx, ecx
0x70A569: mov     ebp, [ebp+0]
0x70A56C: mov     [esp+30h+var_14], ecx
0x70A570: jz      short loc_70A5D3
0x70A572: mov     edx, [esp+30h+var_18]
0x70A576: push    edx
0x70A577: call    sub_708CE0
0x70A57C: test    al, al
0x70A57E: jz      short loc_70A5D3
0x70A580: test    bl, bl
0x70A582: jnz     short loc_70A5C7
0x70A584: mov     ecx, edi
0x70A586: call    sub_731B60
0x70A58B: mov     edi, eax
0x70A58D: cmp     esi, edi
0x70A58F: jz      short loc_70A5C1
0x70A591: test    esi, esi
0x70A593: jz      short loc_70A5AD
0x70A595: lea     eax, [esi+4]
0x70A598: push    eax; lpAddend
0x70A599: call    dword ptr ds:0A2807Ch
0x70A59F: test    eax, eax
0x70A5A1: jnz     short loc_70A5AD
0x70A5A3: mov     edx, [esi]
0x70A5A5: mov     eax, [edx]
0x70A5A7: push    1
0x70A5A9: mov     ecx, esi
0x70A5AB: call    eax
0x70A5AD: test    edi, edi
0x70A5AF: mov     esi, edi
0x70A5B1: mov     [esp+30h+var_1C], esi
0x70A5B5: jz      short loc_70A5C1
0x70A5B7: add     edi, 4
0x70A5BA: push    edi; lpAddend
0x70A5BB: call    dword ptr ds:0A28078h
0x70A5C1: mov     edi, [esp+30h+a2]
0x70A5C5: mov     bl, 1
0x70A5C7: mov     ecx, [esp+30h+var_14]
0x70A5CB: push    ecx
0x70A5CC: mov     ecx, esi
0x70A5CE: call    sub_731D80
0x70A5D3: test    ebp, ebp
0x70A5D5: jnz     short loc_70A564
0x70A5D7: mov     ebp, [edi+10h]
0x70A5DA: test    ebp, ebp
0x70A5DC: jz      short loc_70A653
0x70A5DE: mov     edi, edi
0x70A5E0: mov     ecx, [ebp+4]
0x70A5E3: test    ecx, ecx
0x70A5E5: mov     ebp, [ebp+0]
0x70A5E8: mov     [esp+30h+var_14], ecx
0x70A5EC: jz      short loc_70A64F
0x70A5EE: mov     edx, [esp+30h+var_18]
0x70A5F2: push    edx
0x70A5F3: call    sub_708CE0
0x70A5F8: test    al, al
0x70A5FA: jz      short loc_70A64F
0x70A5FC: test    bl, bl
0x70A5FE: jnz     short loc_70A643
0x70A600: mov     ecx, edi
0x70A602: call    sub_731B60
0x70A607: mov     edi, eax
0x70A609: cmp     esi, edi
0x70A60B: jz      short loc_70A63D
0x70A60D: test    esi, esi
0x70A60F: jz      short loc_70A629
0x70A611: lea     eax, [esi+4]
0x70A614: push    eax; lpAddend
0x70A615: call    dword ptr ds:0A2807Ch
0x70A61B: test    eax, eax
0x70A61D: jnz     short loc_70A629
0x70A61F: mov     edx, [esi]
0x70A621: mov     eax, [edx]
0x70A623: push    1
0x70A625: mov     ecx, esi
0x70A627: call    eax
0x70A629: test    edi, edi
0x70A62B: mov     esi, edi
0x70A62D: mov     [esp+30h+var_1C], esi
0x70A631: jz      short loc_70A63D
0x70A633: add     edi, 4
0x70A636: push    edi; lpAddend
0x70A637: call    dword ptr ds:0A28078h
0x70A63D: mov     edi, [esp+30h+a2]
0x70A641: mov     bl, 1
0x70A643: mov     ecx, [esp+30h+var_14]
0x70A647: push    ecx
0x70A648: mov     ecx, esi
0x70A64A: call    sub_731D80
0x70A64F: test    ebp, ebp
0x70A651: jnz     short loc_70A5E0
0x70A653: mov     ebp, [edi+14h]
0x70A656: test    ebp, ebp
0x70A658: jz      short loc_70A6D3
0x70A65A: lea     ebx, [ebx+0]
0x70A660: mov     ecx, [ebp+4]
0x70A663: test    ecx, ecx
0x70A665: mov     ebp, [ebp+0]
0x70A668: mov     [esp+30h+var_14], ecx
0x70A66C: jz      short loc_70A6CF
0x70A66E: mov     edx, [esp+30h+var_18]
0x70A672: push    edx
0x70A673: call    sub_708CE0
0x70A678: test    al, al
0x70A67A: jz      short loc_70A6CF
0x70A67C: test    bl, bl
0x70A67E: jnz     short loc_70A6C3
0x70A680: mov     ecx, edi
0x70A682: call    sub_731B60
0x70A687: mov     edi, eax
0x70A689: cmp     esi, edi
0x70A68B: jz      short loc_70A6BD
0x70A68D: test    esi, esi
0x70A68F: jz      short loc_70A6A9
0x70A691: lea     eax, [esi+4]
0x70A694: push    eax; lpAddend
0x70A695: call    dword ptr ds:0A2807Ch
0x70A69B: test    eax, eax
0x70A69D: jnz     short loc_70A6A9
0x70A69F: mov     edx, [esi]
0x70A6A1: mov     eax, [edx]
0x70A6A3: push    1
0x70A6A5: mov     ecx, esi
0x70A6A7: call    eax
0x70A6A9: test    edi, edi
0x70A6AB: mov     esi, edi
0x70A6AD: mov     [esp+30h+var_1C], esi
0x70A6B1: jz      short loc_70A6BD
0x70A6B3: add     edi, 4
0x70A6B6: push    edi; lpAddend
0x70A6B7: call    dword ptr ds:0A28078h
0x70A6BD: mov     edi, [esp+30h+a2]
0x70A6C1: mov     bl, 1
0x70A6C3: mov     ecx, [esp+30h+var_14]
0x70A6C7: push    ecx
0x70A6C8: mov     ecx, esi
0x70A6CA: call    sub_731D80
0x70A6CF: test    ebp, ebp
0x70A6D1: jnz     short loc_70A660
0x70A6D3: mov     ebp, [esp+30h+a2]
0x70A6D7: mov     edi, [edi+18h]
0x70A6DA: test    edi, edi
0x70A6DC: mov     edx, [ebp+1Ch]
0x70A6DF: mov     [esp+30h+var_14], edx
0x70A6E3: jz      short loc_70A718
0x70A6E5: mov     eax, [esp+30h+var_18]
0x70A6E9: push    eax
0x70A6EA: mov     ecx, edi
0x70A6EC: call    sub_708CE0
0x70A6F1: test    al, al
0x70A6F3: jz      short loc_70A718
0x70A6F5: test    bl, bl
0x70A6F7: jnz     short loc_70A710
0x70A6F9: mov     ecx, ebp
0x70A6FB: call    sub_731B60
0x70A700: push    eax; a2
0x70A701: lea     ecx, [esp+34h+var_1C]; this
0x70A705: call    NiSmartPointer_Set??
0x70A70A: mov     esi, [esp+30h+var_1C]
0x70A70E: mov     bl, 1
0x70A710: push    edi
0x70A711: mov     ecx, esi
0x70A713: call    sub_731D80
0x70A718: mov     ecx, [esp+30h+var_14]
0x70A71C: test    ecx, ecx
0x70A71E: jz      short loc_70A755
0x70A720: mov     edx, [esp+30h+var_18]
0x70A724: push    edx
0x70A725: call    sub_708CE0
0x70A72A: test    al, al
0x70A72C: jz      short loc_70A755
0x70A72E: test    bl, bl
0x70A730: jnz     short loc_70A749
0x70A732: mov     ecx, ebp
0x70A734: call    sub_731B60
0x70A739: push    eax; a2
0x70A73A: lea     ecx, [esp+34h+var_1C]; this
0x70A73E: call    NiSmartPointer_Set??
0x70A743: mov     esi, [esp+30h+var_1C]
0x70A747: mov     bl, 1
0x70A749: mov     eax, [esp+30h+var_14]
0x70A74D: push    eax
0x70A74E: mov     ecx, esi
0x70A750: call    sub_731D80
0x70A755: mov     edi, ebp
0x70A757: mov     ebp, [esp+30h+var_18]
0x70A75B: cmp     dword ptr [ebp+0C8h], 0
0x70A762: jnz     short loc_70A77D
0x70A764: test    esi, esi
0x70A766: mov     edi, [esp+30h+arg_0]
0x70A76A: mov     [edi], esi
0x70A76C: jz      short loc_70A778
0x70A76E: lea     ecx, [esi+4]
0x70A771: push    ecx; lpAddend
0x70A772: call    dword ptr ds:0A28078h
0x70A778: jmp     loc_70A7F7
0x70A77D: test    edi, edi
0x70A77F: jnz     short loc_70A79E
0x70A781: push    20h ; ' '; Size
0x70A783: call    FormHeapAlloc
0x70A788: add     esp, 4
0x70A78B: test    eax, eax
0x70A78D: jz      short loc_70A799
0x70A78F: mov     ecx, eax
0x70A791: call    sub_709E60
0x70A796: push    eax
0x70A797: jmp     short loc_70A7B8
0x70A799: xor     eax, eax
0x70A79B: push    eax
0x70A79C: jmp     short loc_70A7B8
0x70A79E: cmp     [esp+30h+arg_8], 0
0x70A7A3: jz      short loc_70A7B3
0x70A7A5: test    bl, bl
0x70A7A7: jnz     short loc_70A7C5
0x70A7A9: mov     ecx, edi
0x70A7AB: call    sub_731B60
0x70A7B0: push    eax
0x70A7B1: jmp     short loc_70A7B8
0x70A7B3: test    bl, bl
0x70A7B5: jnz     short loc_70A7C5
0x70A7B7: push    edi; a2
0x70A7B8: lea     ecx, [esp+34h+var_1C]; this
0x70A7BC: call    NiSmartPointer_Set??
0x70A7C1: mov     esi, [esp+30h+var_1C]
0x70A7C5: mov     edi, [ebp+0C0h]
0x70A7CB: test    edi, edi
0x70A7CD: jz      short loc_70A7E3
0x70A7CF: nop
0x70A7D0: lea     eax, [edi+8]
0x70A7D3: mov     eax, [eax]
0x70A7D5: mov     edi, [edi]
0x70A7D7: push    eax
0x70A7D8: mov     ecx, esi
0x70A7DA: call    sub_731CE0
0x70A7DF: test    edi, edi
0x70A7E1: jnz     short loc_70A7D0
0x70A7E3: test    esi, esi
0x70A7E5: mov     edi, [esp+30h+arg_0]
0x70A7E9: mov     [edi], esi
0x70A7EB: jz      short loc_70A7F9
0x70A7ED: lea     ecx, [esi+4]
0x70A7F0: push    ecx; lpAddend
0x70A7F1: call    dword ptr ds:0A28078h
0x70A7F7: test    esi, esi
0x70A7F9: mov     byte ptr [esp+30h+var_4], 0
0x70A7FE: mov     [esp+30h+var_10], 1
0x70A806: jz      short loc_70A820
0x70A808: lea     edx, [esi+4]
0x70A80B: push    edx; lpAddend
0x70A80C: call    dword ptr ds:0A2807Ch
0x70A812: test    eax, eax
0x70A814: jnz     short loc_70A820
0x70A816: mov     eax, [esi]
0x70A818: mov     edx, [eax]
0x70A81A: push    1
0x70A81C: mov     ecx, esi
0x70A81E: call    edx
0x70A820: mov     eax, edi
0x70A822: mov     ecx, dword ptr [esp+30h+var_C]
0x70A826: mov     large fs:0, ecx
0x70A82D: pop     ecx
0x70A82E: pop     edi
0x70A82F: pop     esi
0x70A830: pop     ebp
0x70A831: pop     ebx
0x70A832: add     esp, 1Ch
0x70A835: retn    0Ch
