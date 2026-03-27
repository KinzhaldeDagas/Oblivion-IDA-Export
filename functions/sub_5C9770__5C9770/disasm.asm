0x5C9770: push    0FFFFFFFFh
0x5C9772: push    offset SEH_5C9770
0x5C9777: mov     eax, large fs:0
0x5C977D: push    eax
0x5C977E: sub     esp, 10h
0x5C9781: push    ebx
0x5C9782: push    ebp
0x5C9783: push    esi
0x5C9784: push    edi
0x5C9785: mov     eax, ds:0B30AACh
0x5C978A: xor     eax, esp
0x5C978C: push    eax
0x5C978D: lea     eax, [esp+30h+var_C]
0x5C9791: mov     large fs:0, eax
0x5C9797: mov     edi, ecx
0x5C9799: mov     ecx, ds:0B333C4h
0x5C979F: mov     eax, [ecx]
0x5C97A1: mov     edx, [eax+170h]
0x5C97A7: call    edx
0x5C97A9: push    0FB4h
0x5C97AE: sub     esp, 8
0x5C97B1: mov     ecx, esp; this
0x5C97B3: xor     esi, esi
0x5C97B5: mov     [esp+3Ch+var_1C], esp
0x5C97B9: mov     ebp, eax
0x5C97BB: mov     eax, ds:0B38FA8h
0x5C97C0: push    esi; a3
0x5C97C1: push    eax; a2
0x5C97C2: mov     [ecx], esi
0x5C97C4: mov     [ecx+4], si
0x5C97C8: mov     [ecx+6], si
0x5C97CC: call    BSStringT_Set
0x5C97D1: mov     eax, ds:0B38F78h
0x5C97D6: sub     esp, 8
0x5C97D9: mov     ecx, esp; this
0x5C97DB: mov     [esp+44h+var_18], esp
0x5C97DF: push    esi; a3
0x5C97E0: push    eax; a2
0x5C97E1: mov     [esp+4Ch+var_4], esi
0x5C97E5: mov     [ecx], esi
0x5C97E7: mov     [ecx+4], si
0x5C97EB: mov     [ecx+6], si
0x5C97EF: call    BSStringT_Set
0x5C97F4: mov     ecx, edi
0x5C97F6: mov     [esp+44h+var_4], 0FFFFFFFFh
0x5C97FE: call    sub_5C3440
0x5C9803: mov     ecx, eax
0x5C9805: call    sub_588C10
0x5C980A: push    esi; a3
0x5C980B: push    eax; a2
0x5C980C: lea     ecx, [esp+38h+Str1]; this
0x5C9810: mov     [esp+38h+Str1], esi
0x5C9814: mov     word ptr [esp+38h+var_10], si
0x5C9819: mov     word ptr [esp+38h+var_10+2], si
0x5C981E: call    BSStringT_Set
0x5C9823: mov     ecx, ds:0B39520h
0x5C9829: cmp     ecx, esi
0x5C982B: mov     ebx, 1
0x5C9830: mov     [esp+30h+var_4], ebx
0x5C9834: jz      short loc_5C9850
0x5C9836: mov     eax, [esp+30h+Str1]
0x5C983A: cmp     eax, esi
0x5C983C: jz      short loc_5C9850
0x5C983E: push    ecx; Str2
0x5C983F: push    eax; Str1
0x5C9840: call    __strcmp
0x5C9845: mov     ecx, ds:0B39520h
0x5C984B: add     esp, 8
0x5C984E: jmp     short loc_5C985B
0x5C9850: xor     eax, eax
0x5C9852: cmp     ecx, esi
0x5C9854: setz    al
0x5C9857: lea     eax, [eax+eax-1]
0x5C985B: cmp     eax, esi
0x5C985D: jnz     short loc_5C98CC
0x5C985F: mov     eax, ds:0B38FA8h
0x5C9864: push    ecx
0x5C9865: push    0FB4h
0x5C986A: sub     esp, 8
0x5C986D: mov     ecx, esp; this
0x5C986F: mov     [esp+40h+var_18], esp
0x5C9873: push    esi; a3
0x5C9874: push    eax; a2
0x5C9875: mov     [ecx], esi
0x5C9877: mov     [ecx+4], si
0x5C987B: mov     [ecx+6], si
0x5C987F: call    BSStringT_Set
0x5C9884: mov     eax, ds:0B38F78h
0x5C9889: sub     esp, 8
0x5C988C: mov     ecx, esp; this
0x5C988E: mov     [esp+48h+var_1C], esp
0x5C9892: push    esi; a3
0x5C9893: push    eax; a2
0x5C9894: mov     byte ptr [esp+50h+var_4], 2
0x5C9899: mov     [ecx], esi
0x5C989B: mov     [ecx+4], si
0x5C989F: mov     [ecx+6], si
0x5C98A3: call    BSStringT_Set
0x5C98A8: mov     ecx, edi
0x5C98AA: mov     byte ptr [esp+48h+var_4], bl
0x5C98AE: call    sub_5C3440
0x5C98B3: mov     ecx, eax
0x5C98B5: call    Tile_SetString
0x5C98BA: mov     eax, [ebp+24h]
0x5C98BD: mov     edx, [eax+50h]
0x5C98C0: or      [ebp+28h], ebx
0x5C98C3: lea     ecx, [ebp+24h]
0x5C98C6: push    10h
0x5C98C8: call    edx
0x5C98CA: jmp     short loc_5C993D
0x5C98CC: mov     eax, ds:0B39528h
0x5C98D1: push    eax
0x5C98D2: mov     eax, ds:0B38FA8h
0x5C98D7: push    0FB4h
0x5C98DC: sub     esp, 8
0x5C98DF: mov     ecx, esp; this
0x5C98E1: mov     [esp+40h+var_18], esp
0x5C98E5: push    esi; a3
0x5C98E6: push    eax; a2
0x5C98E7: mov     [ecx], esi
0x5C98E9: mov     [ecx+4], si
0x5C98ED: mov     [ecx+6], si
0x5C98F1: call    BSStringT_Set
0x5C98F6: mov     eax, ds:0B38F78h
0x5C98FB: sub     esp, 8
0x5C98FE: mov     ecx, esp; this
0x5C9900: mov     [esp+48h+var_1C], esp
0x5C9904: push    esi; a3
0x5C9905: push    eax; a2
0x5C9906: mov     byte ptr [esp+50h+var_4], 3
0x5C990B: mov     [ecx], esi
0x5C990D: mov     [ecx+4], si
0x5C9911: mov     [ecx+6], si
0x5C9915: call    BSStringT_Set
0x5C991A: mov     ecx, edi
0x5C991C: mov     byte ptr [esp+48h+var_4], bl
0x5C9920: call    sub_5C3440
0x5C9925: mov     ecx, eax
0x5C9927: call    Tile_SetString
0x5C992C: mov     edx, [ebp+24h]
0x5C992F: mov     eax, [edx+50h]
0x5C9932: and     dword ptr [ebp+28h], 0FFFFFFFEh
0x5C9936: lea     ecx, [ebp+24h]
0x5C9939: push    10h
0x5C993B: call    eax
0x5C993D: mov     ecx, edi
0x5C993F: call    sub_5C4920
0x5C9944: push    ebx
0x5C9945: call    sub_5C7070
0x5C994A: add     esp, 4
0x5C994D: call    UpdatePlayerHead
0x5C9952: push    esi
0x5C9953: mov     ecx, edi
0x5C9955: call    sub_5C7BA0
0x5C995A: mov     ecx, [esp+30h+Str1]
0x5C995E: push    ecx
0x5C995F: call    FormHeapFree
0x5C9964: add     esp, 4
0x5C9967: mov     ecx, dword ptr [esp+30h+var_C]
0x5C996B: mov     large fs:0, ecx
0x5C9972: pop     ecx
0x5C9973: pop     edi
0x5C9974: pop     esi
0x5C9975: pop     ebp
0x5C9976: pop     ebx
0x5C9977: add     esp, 1Ch
0x5C997A: retn
