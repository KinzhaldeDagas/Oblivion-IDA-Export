0x62D750: push    ebx
0x62D751: push    esi
0x62D752: mov     esi, ecx
0x62D754: mov     eax, [esi]
0x62D756: mov     edx, [eax+184h]
0x62D75C: push    edi
0x62D75D: call    edx
0x62D75F: cmp     dword ptr [esi+120h], 0
0x62D766: jnz     short loc_62D76F
0x62D768: mov     byte ptr [esi+124h], 7Fh
0x62D76F: mov     eax, [esi+0E8h]
0x62D775: test    eax, eax
0x62D777: mov     ebx, [esp+0Ch+arg_0]
0x62D77B: jz      short loc_62D792
0x62D77D: mov     eax, [eax+8]
0x62D780: push    0
0x62D782: push    0
0x62D784: push    0
0x62D786: push    0
0x62D788: push    1
0x62D78A: push    eax
0x62D78B: mov     ecx, ebx
0x62D78D: call    Actor_UnequipItem
0x62D792: mov     ecx, ebx
0x62D794: call    sub_5E32D0
0x62D799: test    al, al
0x62D79B: jz      short loc_62D7CE
0x62D79D: mov     edx, [esi]
0x62D79F: mov     eax, [edx+36Ch]
0x62D7A5: mov     ecx, esi
0x62D7A7: call    eax
0x62D7A9: test    eax, eax
0x62D7AB: jnz     short loc_62D7CE
0x62D7AD: cmp     [esi+120h], eax
0x62D7B3: jnz     short loc_62D7CE
0x62D7B5: cmp     [esi+0B4h], eax
0x62D7BB: jnz     short loc_62D7CE
0x62D7BD: cmp     [esi+0B0h], eax
0x62D7C3: jnz     short loc_62D7CE
0x62D7C5: push    eax; float
0x62D7C6: push    ebx; int
0x62D7C7: mov     ecx, esi
0x62D7C9: call    sub_6553E0
0x62D7CE: mov     edx, [esi]
0x62D7D0: mov     eax, [edx+36Ch]
0x62D7D6: mov     ecx, esi
0x62D7D8: call    eax
0x62D7DA: cmp     eax, 9
0x62D7DD: jz      loc_62D8C4
0x62D7E3: mov     ecx, ebx
0x62D7E5: call    sub_5E32D0
0x62D7EA: test    al, al
0x62D7EC: jz      loc_62D8C4
0x62D7F2: cmp     dword ptr [esi+120h], 0
0x62D7F9: jnz     loc_62D898
0x62D7FF: lea     edi, [esi+0B0h]
0x62D805: mov     eax, edi
0x62D807: xor     ecx, ecx
0x62D809: test    eax, eax
0x62D80B: jz      loc_62D898
0x62D811: cmp     dword ptr [eax], 0
0x62D814: jz      short loc_62D819
0x62D816: add     ecx, 1
0x62D819: mov     eax, [eax+4]
0x62D81C: test    eax, eax
0x62D81E: jnz     short loc_62D811
0x62D820: test    ecx, ecx
0x62D822: jz      short loc_62D898
0x62D824: mov     ecx, [edi]
0x62D826: test    ecx, ecx
0x62D828: mov     [esi+120h], ecx
0x62D82E: jz      short loc_62D853
0x62D830: call    sub_4DB9A0
0x62D835: test    al, al
0x62D837: jnz     short loc_62D853
0x62D839: mov     ecx, [esi+120h]
0x62D83F: push    ecx
0x62D840: mov     ecx, edi
0x62D842: call    BSSimpleList_Remove
0x62D847: mov     ecx, [edi]
0x62D849: test    ecx, ecx
0x62D84B: mov     [esi+120h], ecx
0x62D851: jnz     short loc_62D830
0x62D853: mov     ecx, [esi+120h]; this
0x62D859: test    ecx, ecx
0x62D85B: jz      short loc_62D898
0x62D85D: call    TESObjectREFR_GetOwner
0x62D862: test    eax, eax
0x62D864: jnz     short loc_62D898
0x62D866: push    ebp
0x62D867: mov     ecx, edi
0x62D869: call    BSSimpleList_Count
0x62D86E: push    0; Seed
0x62D870: mov     ebp, eax
0x62D872: call    GetRandomLargeInteger?
0x62D877: cdq
0x62D878: idiv    ebp
0x62D87A: add     esp, 4
0x62D87D: cmp     edx, ebp
0x62D87F: jl      short loc_62D883
0x62D881: mov     edx, ebp
0x62D883: test    edx, edx
0x62D885: pop     ebp
0x62D886: jle     short loc_62D890
0x62D888: sub     edx, 1
0x62D88B: mov     edi, [edi+4]
0x62D88E: jnz     short loc_62D888
0x62D890: mov     edx, [edi]
0x62D892: mov     [esi+120h], edx
0x62D898: mov     eax, [esi+120h]
0x62D89E: test    eax, eax
0x62D8A0: jz      short loc_62D8C4
0x62D8A2: cmp     dword ptr [esi+2Ch], 0
0x62D8A6: jnz     short loc_62D8B5
0x62D8A8: mov     edx, [esi]
0x62D8AA: push    eax
0x62D8AB: mov     eax, [edx+0D0h]
0x62D8B1: mov     ecx, esi
0x62D8B3: call    eax
0x62D8B5: mov     edx, [esi]
0x62D8B7: mov     eax, [edx+51Ch]
0x62D8BD: push    0
0x62D8BF: push    ebx
0x62D8C0: mov     ecx, esi
0x62D8C2: call    eax
0x62D8C4: mov     edx, [esi]
0x62D8C6: mov     eax, [edx+36Ch]
0x62D8CC: mov     ecx, esi
0x62D8CE: call    eax
0x62D8D0: cmp     eax, 9
0x62D8D3: jnz     loc_62D960
0x62D8D9: mov     edx, [esi]
0x62D8DB: mov     eax, [edx+0BCh]
0x62D8E1: push    1
0x62D8E3: mov     ecx, esi
0x62D8E5: call    eax
0x62D8E7: lea     ecx, [esi+0B0h]
0x62D8ED: call    BSSimpleList_Clear
0x62D8F2: mov     ecx, esi
0x62D8F4: call    sub_64ADA0
0x62D8F9: test    al, al
0x62D8FB: jz      loc_62D9BC
0x62D901: fldz
0x62D903: push    ecx
0x62D904: lea     edi, [esi+128h]
0x62D90A: fstp    [esp+10h+var_10]; float
0x62D90D: mov     ecx, edi
0x62D90F: mov     dword ptr [esi+120h], 0
0x62D919: call    sub_6FAEE0
0x62D91E: mov     byte ptr [esi+136h], 0
0x62D925: mov     ecx, ds:0B3F9A8h
0x62D92B: mov     [edi], ecx
0x62D92D: mov     edx, ds:0B3F9ACh
0x62D933: mov     [edi+4], edx
0x62D936: mov     eax, ds:0B3F9B0h
0x62D93B: mov     edx, [esi]
0x62D93D: mov     [edi+8], eax
0x62D940: mov     eax, [edx+194h]
0x62D946: push    ebx
0x62D947: mov     ecx, esi
0x62D949: call    eax
0x62D94B: mov     edx, [esi]
0x62D94D: mov     eax, [edx+188h]
0x62D953: push    1
0x62D955: push    ebx
0x62D956: mov     ecx, esi
0x62D958: call    eax
0x62D95A: pop     edi
0x62D95B: pop     esi
0x62D95C: pop     ebx
0x62D95D: retn    4
0x62D960: cmp     dword ptr [esi+120h], 0
0x62D967: jnz     short loc_62D8F2
0x62D969: cmp     dword ptr [esi+0B4h], 0
0x62D970: jnz     short loc_62D8F2
0x62D972: cmp     dword ptr [esi+0B0h], 0
0x62D979: jnz     loc_62D8F2
0x62D97F: mov     ecx, ebx
0x62D981: call    sub_5E32D0
0x62D986: test    al, al
0x62D988: jz      loc_62D8F2
0x62D98E: mov     edx, [esi]
0x62D990: mov     eax, [edx+194h]
0x62D996: push    ebx
0x62D997: mov     ecx, esi
0x62D999: call    eax
0x62D99B: fld     dword ptr ds:0A417B4h
0x62D9A1: mov     edx, [esi]
0x62D9A3: fstp    dword ptr [esi+1E8h]
0x62D9A9: mov     eax, [edx+188h]
0x62D9AF: push    1
0x62D9B1: push    ebx
0x62D9B2: mov     ecx, esi
0x62D9B4: call    eax
0x62D9B6: pop     edi
0x62D9B7: pop     esi
0x62D9B8: pop     ebx
0x62D9B9: retn    4
0x62D9BC: mov     edx, [esi]
0x62D9BE: mov     eax, [edx+48h]
0x62D9C1: push    ebx
0x62D9C2: mov     ecx, esi
0x62D9C4: call    eax
0x62D9C6: mov     edx, [ebx]
0x62D9C8: mov     eax, [edx+18Ch]
0x62D9CE: mov     ecx, ebx
0x62D9D0: call    eax
0x62D9D2: cmp     eax, 9
0x62D9D5: jnz     short loc_62DA04
0x62D9D7: mov     ecx, ebx
0x62D9D9: call    sub_5E12B0
0x62D9DE: mov     esi, eax
0x62D9E0: test    esi, esi
0x62D9E2: jz      short loc_62DA04
0x62D9E4: mov     edx, [esi]
0x62D9E6: mov     eax, [edx+98h]
0x62D9EC: mov     ecx, esi
0x62D9EE: call    eax
0x62D9F0: test    al, al
0x62D9F2: jnz     short loc_62DA04
0x62D9F4: mov     edx, [esi]
0x62D9F6: mov     eax, [edx+9Ch]
0x62D9FC: push    0
0x62D9FE: push    1
0x62DA00: mov     ecx, esi
0x62DA02: call    eax
0x62DA04: pop     edi
0x62DA05: pop     esi
0x62DA06: pop     ebx
0x62DA07: retn    4
