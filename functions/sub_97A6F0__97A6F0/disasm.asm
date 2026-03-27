0x97A6F0: push    esi
0x97A6F1: push    edi
0x97A6F2: mov     edi, [esp+8+arg_0]
0x97A6F6: test    edi, edi
0x97A6F8: mov     esi, ecx
0x97A6FA: jnz     short loc_97A703
0x97A6FC: pop     edi
0x97A6FD: xor     eax, eax
0x97A6FF: pop     esi
0x97A700: retn    28h ; '('
0x97A703: push    ebx
0x97A704: mov     ebx, [esp+0Ch+arg_1C]
0x97A708: cmp     ebx, [esi+88h]
0x97A70E: push    ebp
0x97A70F: mov     ebp, [esp+10h+arg_C]
0x97A713: jz      short loc_97A727
0x97A715: lea     eax, [ebp+64h]
0x97A718: push    eax
0x97A719: lea     ecx, [esi+4]
0x97A71C: call    sub_97AEC0
0x97A721: mov     [esi+88h], ebx
0x97A727: mov     ecx, [esp+10h+arg_20]
0x97A72B: cmp     ecx, [edi+88h]
0x97A731: mov     ebx, [esp+10h+arg_10]
0x97A735: jz      short loc_97A74D
0x97A737: lea     edx, [ebx+64h]
0x97A73A: push    edx
0x97A73B: lea     ecx, [edi+4]
0x97A73E: call    sub_97AEC0
0x97A743: mov     eax, [esp+10h+arg_20]
0x97A747: mov     [edi+88h], eax
0x97A74D: lea     ecx, [edi+4]
0x97A750: push    ecx
0x97A751: lea     ecx, [esi+4]
0x97A754: call    sub_97AFC0
0x97A759: test    eax, eax
0x97A75B: jz      loc_97A9A6
0x97A761: cmp     [esp+10h+arg_14], 0
0x97A766: jz      loc_97A9AF
0x97A76C: cmp     [esp+10h+arg_18], 0
0x97A771: jz      loc_97A9AF
0x97A777: mov     edx, [esi]
0x97A779: mov     eax, [edx+4]
0x97A77C: mov     ecx, esi
0x97A77E: call    eax
0x97A780: mov     edx, [edi]
0x97A782: test    al, al
0x97A784: mov     eax, [edx+4]
0x97A787: mov     ecx, edi
0x97A789: jz      loc_97A85B
0x97A78F: call    eax
0x97A791: test    al, al
0x97A793: jnz     loc_97A832
0x97A799: mov     ecx, edi
0x97A79B: call    sub_977510
0x97A7A0: test    al, al
0x97A7A2: jz      loc_97A832
0x97A7A8: mov     ecx, [esp+10h+arg_24]
0x97A7AC: mov     eax, [esp+10h+arg_18]
0x97A7B0: push    ecx
0x97A7B1: mov     ecx, [esp+14h+arg_20]
0x97A7B5: mov     edx, [esi]
0x97A7B7: mov     edx, [edx+0Ch]
0x97A7BA: push    ecx
0x97A7BB: mov     ecx, [esp+18h+arg_1C]
0x97A7BF: push    ecx
0x97A7C0: mov     ecx, [esp+1Ch+arg_8]
0x97A7C4: add     eax, 0FFFFFFFFh
0x97A7C7: push    eax
0x97A7C8: mov     [esp+20h+arg_18], eax
0x97A7CC: mov     eax, [esp+20h+arg_14]
0x97A7D0: push    eax
0x97A7D1: mov     eax, [esp+24h+arg_4]
0x97A7D5: push    ebx
0x97A7D6: push    ebp
0x97A7D7: push    ecx
0x97A7D8: mov     ecx, [edi+80h]
0x97A7DE: push    eax
0x97A7DF: push    ecx
0x97A7E0: mov     ecx, esi
0x97A7E2: call    edx
0x97A7E4: cmp     eax, 1
0x97A7E7: jge     loc_97A9C8
0x97A7ED: mov     ecx, [esp+10h+arg_24]
0x97A7F1: mov     edx, [esp+10h+arg_20]
0x97A7F5: mov     eax, [esi]
0x97A7F7: mov     eax, [eax+0Ch]
0x97A7FA: push    ecx
0x97A7FB: mov     ecx, [esp+14h+arg_1C]
0x97A7FF: push    edx
0x97A800: mov     edx, [esp+18h+arg_18]
0x97A804: push    ecx
0x97A805: mov     ecx, [esp+1Ch+arg_14]
0x97A809: push    edx
0x97A80A: mov     edx, [esp+20h+arg_8]
0x97A80E: push    ecx
0x97A80F: mov     ecx, [esp+24h+arg_4]
0x97A813: push    ebx
0x97A814: push    ebp
0x97A815: push    edx
0x97A816: mov     edx, [edi+84h]
0x97A81C: push    ecx
0x97A81D: push    edx
0x97A81E: mov     ecx, esi
0x97A820: call    eax
0x97A822: cmp     eax, 1
0x97A825: jl      loc_97A9A6
0x97A82B: pop     ebp
0x97A82C: pop     ebx
0x97A82D: pop     edi
0x97A82E: pop     esi
0x97A82F: retn    28h ; '('
0x97A832: mov     ecx, [esp+10h+arg_24]
0x97A836: mov     edx, [esp+10h+arg_8]
0x97A83A: mov     eax, [esp+10h+arg_4]
0x97A83E: push    ecx
0x97A83F: push    ebx
0x97A840: push    ebp
0x97A841: push    edx
0x97A842: push    eax
0x97A843: push    edi
0x97A844: mov     ecx, esi
0x97A846: call    sub_97A530
0x97A84B: cmp     eax, 1
0x97A84E: jl      loc_97A9A6
0x97A854: pop     ebp
0x97A855: pop     ebx
0x97A856: pop     edi
0x97A857: pop     esi
0x97A858: retn    28h ; '('
0x97A85B: call    eax
0x97A85D: test    al, al
0x97A85F: mov     ecx, [esi+80h]
0x97A865: jz      loc_97A924
0x97A86B: test    ecx, ecx
0x97A86D: jz      loc_97A904
0x97A873: cmp     dword ptr [esi+84h], 0
0x97A87A: jz      loc_97A904
0x97A880: mov     edx, [esp+10h+arg_14]
0x97A884: add     edx, 0FFFFFFFFh
0x97A887: mov     eax, [ecx]
0x97A889: mov     [esp+10h+arg_14], edx
0x97A88D: mov     edx, [esp+10h+arg_24]
0x97A891: push    edx
0x97A892: mov     edx, [esp+14h+arg_20]
0x97A896: push    edx
0x97A897: mov     edx, [esp+18h+arg_1C]
0x97A89B: mov     eax, [eax+0Ch]
0x97A89E: push    edx
0x97A89F: mov     edx, [esp+1Ch+arg_18]
0x97A8A3: push    edx
0x97A8A4: mov     edx, [esp+20h+arg_14]
0x97A8A8: push    edx
0x97A8A9: mov     edx, [esp+24h+arg_8]
0x97A8AD: push    ebx
0x97A8AE: push    ebp
0x97A8AF: push    edx
0x97A8B0: mov     edx, [esp+30h+arg_4]
0x97A8B4: push    edx
0x97A8B5: push    edi
0x97A8B6: call    eax
0x97A8B8: cmp     eax, 1
0x97A8BB: jge     loc_97A9C8
0x97A8C1: mov     eax, [esp+10h+arg_24]
0x97A8C5: push    eax
0x97A8C6: mov     eax, [esp+14h+arg_20]
0x97A8CA: mov     ecx, [esi+84h]
0x97A8D0: mov     edx, [ecx]
0x97A8D2: push    eax
0x97A8D3: mov     eax, [esp+18h+arg_1C]
0x97A8D7: mov     edx, [edx+0Ch]
0x97A8DA: push    eax
0x97A8DB: mov     eax, [esp+1Ch+arg_18]
0x97A8DF: push    eax
0x97A8E0: mov     eax, [esp+20h+arg_14]
0x97A8E4: push    eax
0x97A8E5: mov     eax, [esp+24h+arg_8]
0x97A8E9: push    ebx
0x97A8EA: push    ebp
0x97A8EB: push    eax
0x97A8EC: mov     eax, [esp+30h+arg_4]
0x97A8F0: push    eax
0x97A8F1: push    edi
0x97A8F2: call    edx
0x97A8F4: cmp     eax, 1
0x97A8F7: jl      loc_97A9A6
0x97A8FD: pop     ebp
0x97A8FE: pop     ebx
0x97A8FF: pop     edi
0x97A900: pop     esi
0x97A901: retn    28h ; '('
0x97A904: mov     eax, [esp+10h+arg_24]
0x97A908: mov     ecx, [esp+10h+arg_8]
0x97A90C: mov     edx, [esp+10h+arg_4]
0x97A910: push    eax
0x97A911: push    ebx
0x97A912: push    ebp
0x97A913: push    ecx
0x97A914: push    edx
0x97A915: push    edi
0x97A916: mov     ecx, esi
0x97A918: call    sub_97A530
0x97A91D: pop     ebp
0x97A91E: pop     ebx
0x97A91F: pop     edi
0x97A920: pop     esi
0x97A921: retn    28h ; '('
0x97A924: mov     eax, [esp+10h+arg_14]
0x97A928: add     eax, 0FFFFFFFFh
0x97A92B: test    ecx, ecx
0x97A92D: mov     [esp+10h+arg_14], eax
0x97A931: jz      short loc_97A9AF
0x97A933: cmp     dword ptr [esi+84h], 0
0x97A93A: jz      short loc_97A9AF
0x97A93C: mov     eax, [esp+10h+arg_24]
0x97A940: push    eax
0x97A941: mov     eax, [esp+14h+arg_20]
0x97A945: mov     edx, [ecx]
0x97A947: push    eax
0x97A948: mov     eax, [esp+18h+arg_1C]
0x97A94C: mov     edx, [edx+0Ch]
0x97A94F: push    eax
0x97A950: mov     eax, [esp+1Ch+arg_18]
0x97A954: push    eax
0x97A955: mov     eax, [esp+20h+arg_14]
0x97A959: push    eax
0x97A95A: mov     eax, [esp+24h+arg_8]
0x97A95E: push    ebx
0x97A95F: push    ebp
0x97A960: push    eax
0x97A961: mov     eax, [esp+30h+arg_4]
0x97A965: push    eax
0x97A966: push    edi
0x97A967: call    edx
0x97A969: cmp     eax, 1
0x97A96C: jge     short loc_97A9C8
0x97A96E: mov     edx, [esp+10h+arg_24]
0x97A972: push    edx
0x97A973: mov     edx, [esp+14h+arg_20]
0x97A977: mov     ecx, [esi+84h]
0x97A97D: mov     eax, [ecx]
0x97A97F: push    edx
0x97A980: mov     edx, [esp+18h+arg_1C]
0x97A984: mov     eax, [eax+0Ch]
0x97A987: push    edx
0x97A988: mov     edx, [esp+1Ch+arg_18]
0x97A98C: push    edx
0x97A98D: mov     edx, [esp+20h+arg_14]
0x97A991: push    edx
0x97A992: mov     edx, [esp+24h+arg_8]
0x97A996: push    ebx
0x97A997: push    ebp
0x97A998: push    edx
0x97A999: mov     edx, [esp+30h+arg_4]
0x97A99D: push    edx
0x97A99E: push    edi
0x97A99F: call    eax
0x97A9A1: cmp     eax, 1
0x97A9A4: jge     short loc_97A9C8
0x97A9A6: pop     ebp
0x97A9A7: pop     ebx
0x97A9A8: pop     edi
0x97A9A9: xor     eax, eax
0x97A9AB: pop     esi
0x97A9AC: retn    28h ; '('
0x97A9AF: mov     ecx, [esp+10h+arg_24]
0x97A9B3: mov     edx, [esp+10h+arg_8]
0x97A9B7: mov     eax, [esp+10h+arg_4]
0x97A9BB: push    ecx
0x97A9BC: push    ebx
0x97A9BD: push    ebp
0x97A9BE: push    edx
0x97A9BF: push    eax
0x97A9C0: push    edi
0x97A9C1: mov     ecx, esi
0x97A9C3: call    sub_97A530
0x97A9C8: pop     ebp
0x97A9C9: pop     ebx
0x97A9CA: pop     edi
0x97A9CB: pop     esi
0x97A9CC: retn    28h ; '('
