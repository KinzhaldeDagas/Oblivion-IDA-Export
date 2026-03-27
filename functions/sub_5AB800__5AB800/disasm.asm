0x5AB800: push    ecx
0x5AB801: push    3EAh
0x5AB806: call    Menu_GetOpenMenuTile
0x5AB80B: add     esp, 4
0x5AB80E: test    eax, eax
0x5AB810: jz      loc_5AB974
0x5AB816: push    ebx
0x5AB817: mov     ecx, eax
0x5AB819: call    Tile_GetParentMenu
0x5AB81E: mov     ebx, eax
0x5AB820: test    ebx, ebx
0x5AB822: jz      loc_5AB973
0x5AB828: mov     ecx, [ebx+50h]
0x5AB82B: test    ecx, ecx
0x5AB82D: jz      loc_5AB973
0x5AB833: push    ebp
0x5AB834: push    esi
0x5AB835: push    edi
0x5AB836: push    0
0x5AB838: call    ContainerEntryExtraData_HasWorn
0x5AB83D: mov     eax, [ebx+50h]
0x5AB840: mov     esi, [eax+8]
0x5AB843: xor     ebp, ebp
0x5AB845: cmp     [eax], ebp
0x5AB847: mov     eax, ds:0B140E4h
0x5AB84C: mov     [esp+14h+var_4], esi
0x5AB850: jz      short loc_5AB882
0x5AB852: cmp     eax, 1
0x5AB855: jnz     short loc_5AB882
0x5AB857: mov     eax, [ebx+50h]
0x5AB85A: mov     ecx, [eax]
0x5AB85C: mov     edx, [ecx]
0x5AB85E: mov     ecx, ds:0B333C4h
0x5AB864: mov     eax, [eax+8]
0x5AB867: mov     edi, [ecx]
0x5AB869: push    ebp
0x5AB86A: lea     ebx, [esp+18h+arg_0]
0x5AB86E: push    ebx
0x5AB86F: push    1
0x5AB871: push    edx
0x5AB872: mov     edx, [edi+2C8h]
0x5AB878: push    eax
0x5AB879: call    edx
0x5AB87B: mov     ebp, eax
0x5AB87D: jmp     loc_5AB923
0x5AB882: mov     ecx, [ebx+50h]
0x5AB885: mov     esi, [ecx]
0x5AB887: test    esi, esi
0x5AB889: jz      short loc_5AB8FA
0x5AB88B: cmp     [esi+4], ebp
0x5AB88E: jnz     short loc_5AB894
0x5AB890: cmp     [esi], ebp
0x5AB892: jz      short loc_5AB8FA
0x5AB894: test    eax, eax
0x5AB896: jz      loc_5AB91F
0x5AB89C: lea     esp, [esp+0]
0x5AB8A0: test    esi, esi
0x5AB8A2: jz      short loc_5AB8FA
0x5AB8A4: mov     ecx, [esi]
0x5AB8A6: test    ecx, ecx
0x5AB8A8: jz      short loc_5AB8FA
0x5AB8AA: call    ExtraDataList_GetExtraCount
0x5AB8AF: mov     ecx, [esi]
0x5AB8B1: movsx   edi, ax
0x5AB8B4: call    ExtraDataList_GetExtraCount
0x5AB8B9: movsx   edx, ax
0x5AB8BC: mov     eax, ds:0B140E4h
0x5AB8C1: cmp     eax, edx
0x5AB8C3: jge     short loc_5AB8C7
0x5AB8C5: mov     edi, eax
0x5AB8C7: mov     ecx, ds:0B333C4h
0x5AB8CD: mov     eax, [ecx]
0x5AB8CF: mov     eax, [eax+2C8h]
0x5AB8D5: push    0
0x5AB8D7: lea     edx, [esp+18h+arg_0]
0x5AB8DB: push    edx
0x5AB8DC: mov     edx, [esi]
0x5AB8DE: push    edi
0x5AB8DF: push    edx
0x5AB8E0: mov     edx, [ebx+50h]
0x5AB8E3: mov     edx, [edx+8]
0x5AB8E6: push    edx
0x5AB8E7: call    eax
0x5AB8E9: mov     eax, ds:0B140E4h
0x5AB8EE: mov     esi, [esi+4]
0x5AB8F1: sub     eax, edi
0x5AB8F3: mov     ds:0B140E4h, eax
0x5AB8F8: jnz     short loc_5AB8A0
0x5AB8FA: test    eax, eax
0x5AB8FC: jle     short loc_5AB91F
0x5AB8FE: mov     ecx, ds:0B333C4h
0x5AB904: mov     edx, [ecx]
0x5AB906: mov     edx, [edx+2C8h]
0x5AB90C: push    0
0x5AB90E: lea     esi, [esp+18h+arg_0]
0x5AB912: push    esi
0x5AB913: push    eax
0x5AB914: mov     eax, [ebx+50h]
0x5AB917: mov     eax, [eax+8]
0x5AB91A: push    0
0x5AB91C: push    eax
0x5AB91D: call    edx
0x5AB91F: mov     esi, [esp+14h+var_4]
0x5AB923: test    esi, esi
0x5AB925: jz      short loc_5AB950
0x5AB927: cmp     byte ptr [esi+4], 22h ; '"'
0x5AB92B: jnz     short loc_5AB950
0x5AB92D: cmp     dword ptr ds:0B3B7D0h, 0
0x5AB934: jle     short loc_5AB950
0x5AB936: mov     eax, ds:0B333C4h
0x5AB93B: mov     ecx, ds:0B140E4h
0x5AB941: push    1
0x5AB943: push    1
0x5AB945: push    eax
0x5AB946: push    ecx
0x5AB947: push    esi
0x5AB948: call    sub_607F90
0x5AB94D: add     esp, 14h
0x5AB950: test    ebp, ebp
0x5AB952: jz      short loc_5AB967
0x5AB954: cmp     [esp+14h+arg_C], 0
0x5AB959: jz      short loc_5AB967
0x5AB95B: mov     ecx, ds:0B333C4h
0x5AB961: push    ebp
0x5AB962: call    sub_66E090
0x5AB967: pop     edi
0x5AB968: pop     esi
0x5AB969: pop     ebp
0x5AB96A: pop     ebx
0x5AB96B: add     esp, 4
0x5AB96E: jmp     InventoryMenu_InitializeOrUpdate
0x5AB973: pop     ebx
0x5AB974: pop     ecx
0x5AB975: retn
