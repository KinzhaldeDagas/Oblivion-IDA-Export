0x4917E0: sub     esp, 14h
0x4917E3: push    esi
0x4917E4: mov     esi, ecx
0x4917E6: mov     eax, [esi]
0x4917E8: test    eax, eax
0x4917EA: mov     [esp+18h+var_8], esi
0x4917EE: mov     [esp+18h+var_10], eax
0x4917F2: jz      loc_491920
0x4917F8: push    ebx
0x4917F9: push    ebp
0x4917FA: push    edi
0x4917FB: jmp     short loc_491800
0x4917FD: align 10h
0x491800: mov     ecx, [eax+4]
0x491803: test    ecx, ecx
0x491805: jnz     short loc_49180F
0x491807: cmp     [eax], ecx
0x491809: jz      loc_49191D
0x49180F: mov     ebp, [eax]
0x491811: test    ebp, ebp
0x491813: mov     [esp+24h+var_11], 0
0x491818: jz      loc_49199C
0x49181E: mov     eax, [ebp+4]
0x491821: test    eax, eax
0x491823: jle     loc_49199C
0x491829: mov     ecx, [ebp+0]
0x49182C: test    ecx, ecx
0x49182E: mov     edx, [ebp+8]
0x491831: mov     [esp+24h+var_C], ecx
0x491835: mov     [esp+24h+var_4], edx
0x491839: jz      loc_4919A5
0x49183F: cmp     dword ptr [ecx], 0
0x491842: jz      loc_4919A5
0x491848: mov     eax, [esp+24h+var_C]
0x49184C: mov     esi, [eax]
0x49184E: test    esi, esi
0x491850: jz      loc_49190D
0x491856: mov     ecx, esi
0x491858: xor     bl, bl
0x49185A: call    ExtraDataList_GetOwner
0x49185F: test    eax, eax
0x491861: jz      loc_491927
0x491867: mov     ecx, [esp+24h+arg_4]
0x49186B: mov     edx, [ecx]
0x49186D: mov     eax, [edx+170h]
0x491873: call    eax
0x491875: mov     ecx, esi
0x491877: mov     edi, eax
0x491879: call    ExtraDataList_GetOwner
0x49187E: cmp     eax, edi
0x491880: jz      loc_491927
0x491886: mov     esi, [ebp+0]
0x491889: xor     edi, edi
0x49188B: test    esi, esi
0x49188D: jz      short loc_4918AB
0x49188F: nop
0x491890: mov     ecx, [esi]
0x491892: test    ecx, ecx
0x491894: jz      short loc_4918AB
0x491896: push    0
0x491898: call    ExtraDataList_IsExtraDefaultForContainer
0x49189D: test    al, al
0x49189F: jz      short loc_4918A4
0x4918A1: add     edi, 1
0x4918A4: mov     esi, [esi+4]
0x4918A7: test    esi, esi
0x4918A9: jnz     short loc_491890
0x4918AB: mov     ecx, ebp
0x4918AD: call    InventoryEntryData_Cleanup
0x4918B2: add     eax, edi
0x4918B4: test    eax, eax
0x4918B6: jle     short loc_4918E4
0x4918B8: mov     ecx, [esp+24h+arg_4]
0x4918BC: mov     edx, [ebp+4]
0x4918BF: push    0
0x4918C1: push    1
0x4918C3: push    0
0x4918C5: push    0
0x4918C7: push    ecx
0x4918C8: mov     ecx, [esp+38h+arg_0]
0x4918CC: push    0
0x4918CE: push    0
0x4918D0: sub     edx, eax
0x4918D2: mov     eax, [esp+40h+var_4]
0x4918D6: push    edx
0x4918D7: push    0
0x4918D9: push    eax
0x4918DA: push    ecx
0x4918DB: mov     ecx, [esp+50h+var_8]
0x4918DF: call    ContainerExtraData_RemoveForm
0x4918E4: mov     ecx, [esp+24h+var_C]
0x4918E8: mov     eax, [ecx+4]
0x4918EB: test    eax, eax
0x4918ED: mov     [esp+24h+var_C], eax
0x4918F1: jnz     loc_491848
0x4918F7: mov     edx, [esp+24h+var_10]
0x4918FB: mov     eax, [edx+4]
0x4918FE: mov     [esp+24h+var_10], eax
0x491902: cmp     [esp+24h+var_C], 0
0x491907: jnz     loc_491848
0x49190D: mov     esi, [esp+24h+var_8]
0x491911: mov     eax, [esp+24h+var_10]
0x491915: test    eax, eax
0x491917: jnz     loc_491800
0x49191D: pop     edi
0x49191E: pop     ebp
0x49191F: pop     ebx
0x491920: pop     esi
0x491921: add     esp, 14h
0x491924: retn    8
0x491927: mov     eax, [ebp+0]
0x49192A: xor     ecx, ecx
0x49192C: test    eax, eax
0x49192E: jz      short loc_491944
0x491930: cmp     dword ptr [eax], 0
0x491933: jz      short loc_491938
0x491935: add     ecx, 1
0x491938: mov     eax, [eax+4]
0x49193B: test    eax, eax
0x49193D: jnz     short loc_491930
0x49193F: cmp     ecx, 1
0x491942: ja      short loc_49194B
0x491944: mov     [esp+24h+var_11], 1
0x491949: jmp     short loc_49194D
0x49194B: mov     bl, 1
0x49194D: mov     edx, [esp+24h+arg_4]
0x491951: push    0
0x491953: push    1
0x491955: push    0
0x491957: push    0
0x491959: push    edx
0x49195A: push    0
0x49195C: push    esi
0x49195D: mov     ecx, esi
0x49195F: call    ExtraDataList_GetExtraCount
0x491964: mov     ecx, [esp+40h+var_4]
0x491968: mov     edx, [esp+40h+arg_0]
0x49196C: mov     esi, [esp+40h+var_8]
0x491970: movsx   eax, ax
0x491973: push    eax
0x491974: push    0
0x491976: push    ecx
0x491977: push    edx
0x491978: mov     ecx, esi
0x49197A: call    ContainerExtraData_RemoveForm
0x49197F: cmp     [esp+24h+var_11], 0
0x491984: jnz     short loc_49199A
0x491986: test    bl, bl
0x491988: jz      loc_4918E4
0x49198E: mov     eax, [ebp+0]
0x491991: mov     [esp+24h+var_C], eax
0x491995: jmp     loc_491902
0x49199A: mov     ecx, [esi]
0x49199C: mov     [esp+24h+var_10], ecx
0x4919A0: jmp     loc_491911
0x4919A5: mov     ecx, [esp+24h+arg_4]
0x4919A9: push    0
0x4919AB: push    1
0x4919AD: push    0
0x4919AF: push    0
0x4919B1: push    ecx
0x4919B2: push    0
0x4919B4: push    0
0x4919B6: push    eax
0x4919B7: push    0
0x4919B9: push    edx
0x4919BA: mov     edx, [esp+4Ch+arg_0]
0x4919BE: push    edx
0x4919BF: mov     ecx, esi
0x4919C1: call    ContainerExtraData_RemoveForm
0x4919C6: mov     eax, [esi]
0x4919C8: mov     [esp+24h+var_10], eax
0x4919CC: jmp     loc_491911
