0x4A6460: push    0FFFFFFFFh
0x4A6462: push    offset SEH_6FDC30
0x4A6467: mov     eax, large fs:0
0x4A646D: push    eax
0x4A646E: sub     esp, 18h
0x4A6471: push    ebx
0x4A6472: push    ebp
0x4A6473: push    esi
0x4A6474: push    edi
0x4A6475: mov     eax, ds:0B30AACh
0x4A647A: xor     eax, esp
0x4A647C: push    eax
0x4A647D: lea     eax, [esp+38h+var_C]
0x4A6481: mov     large fs:0, eax
0x4A6487: xor     ebx, ebx
0x4A6489: cmp     ecx, ebx
0x4A648B: mov     byte ptr [esp+38h+var_20+3], bl
0x4A648F: mov     [esp+38h+var_14], ebx
0x4A6493: mov     [esp+38h+var_10], ebx
0x4A6497: mov     [esp+38h+var_18], ebx
0x4A649B: jz      short loc_4A64A2
0x4A649D: lea     ebp, [ecx+4]
0x4A64A0: jmp     short loc_4A64A4
0x4A64A2: xor     ebp, ebp
0x4A64A4: push    10h; Size
0x4A64A6: call    FormHeapAlloc
0x4A64AB: add     esp, 4
0x4A64AE: cmp     eax, ebx
0x4A64B0: jz      short loc_4A64C7
0x4A64B2: mov     [eax+4], ebx
0x4A64B5: mov     [eax+8], ebx
0x4A64B8: mov     dword ptr [eax], offset ??_7TESRegionList@@6B@; const TESRegionList::`vftable'
0x4A64BE: mov     [eax+0Ch], bl
0x4A64C1: mov     [esp+38h+var_1C], eax
0x4A64C5: jmp     short loc_4A64CB
0x4A64C7: mov     [esp+38h+var_1C], ebx
0x4A64CB: cmp     ebp, ebx
0x4A64CD: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4A64D5: jz      loc_4A657C
0x4A64DB: jmp     short loc_4A64E0
0x4A64DD: align 10h
0x4A64E0: mov     edi, [ebp+0]
0x4A64E3: cmp     edi, ebx
0x4A64E5: jz      loc_4A657C
0x4A64EB: mov     eax, [edi+8]
0x4A64EE: shr     eax, 5
0x4A64F1: test    al, 1
0x4A64F3: jnz     short loc_4A6571
0x4A64F5: mov     eax, [esp+38h+arg_8]
0x4A64F9: cmp     eax, ebx
0x4A64FB: jz      short loc_4A6502
0x4A64FD: cmp     eax, [edi+20h]
0x4A6500: jnz     short loc_4A6571
0x4A6502: mov     edx, [esp+38h+arg_0]
0x4A6506: mov     ecx, [edi+18h]
0x4A6509: push    edx
0x4A650A: call    sub_4A4460
0x4A650F: cmp     eax, ebx
0x4A6511: jz      short loc_4A6571
0x4A6513: cmp     [eax+5], bl
0x4A6516: jnz     short loc_4A6571
0x4A6518: cmp     [esp+38h+arg_4], ebx
0x4A651C: jz      short loc_4A654E
0x4A651E: mov     esi, [edi+1Ch]
0x4A6521: cmp     esi, ebx
0x4A6523: jz      short loc_4A6571
0x4A6525: mov     ecx, [esi]
0x4A6527: cmp     ecx, ebx
0x4A6529: jz      short loc_4A6571
0x4A652B: mov     eax, [esp+38h+arg_4]
0x4A652F: push    eax
0x4A6530: call    sub_4A7330
0x4A6535: test    al, al
0x4A6537: jnz     short loc_4A6542
0x4A6539: mov     esi, [esi+4]
0x4A653C: cmp     esi, ebx
0x4A653E: jnz     short loc_4A6525
0x4A6540: jmp     short loc_4A6571
0x4A6542: mov     ecx, [esp+38h+var_1C]
0x4A6546: push    edi
0x4A6547: call    sub_4A6350
0x4A654C: jmp     short loc_4A6571
0x4A654E: mov     ecx, [esp+38h+var_1C]
0x4A6552: add     ecx, 4
0x4A6555: mov     eax, ecx
0x4A6557: cmp     eax, ebx
0x4A6559: jz      short loc_4A656B
0x4A655B: jmp     short loc_4A6560
0x4A655D: align 10h
0x4A6560: cmp     [eax], edi
0x4A6562: jz      short loc_4A6571
0x4A6564: mov     eax, [eax+4]
0x4A6567: cmp     eax, ebx
0x4A6569: jnz     short loc_4A6560
0x4A656B: push    edi
0x4A656C: call    BSSimpleList_PushFront
0x4A6571: mov     ebp, [ebp+4]
0x4A6574: cmp     ebp, ebx
0x4A6576: jnz     loc_4A64E0
0x4A657C: mov     ebp, [esp+38h+arg_0]
0x4A6580: mov     esi, ds:0B35420h[ebp*8]
0x4A6587: cmp     esi, ebx
0x4A6589: lea     edi, ds:0B35420h[ebp*8]
0x4A6590: mov     [esp+38h+arg_8], edi
0x4A6594: jz      short loc_4A65E0
0x4A6596: mov     ecx, ds:0B35424h[ebp*8]
0x4A659D: cmp     ecx, ebx
0x4A659F: jz      short loc_4A65D0
0x4A65A1: mov     edx, [esp+38h+var_1C]
0x4A65A5: push    edx
0x4A65A6: call    sub_4A6410
0x4A65AB: test    al, al
0x4A65AD: jz      short loc_4A65D0
0x4A65AF: mov     esi, [esp+38h+var_1C]
0x4A65B3: lea     ecx, [esi+4]
0x4A65B6: call    BSSimpleList_Clear
0x4A65BB: cmp     esi, ebx
0x4A65BD: jz      short loc_4A65C9
0x4A65BF: mov     eax, [esi]
0x4A65C1: mov     edx, [eax]
0x4A65C3: push    1
0x4A65C5: mov     ecx, esi
0x4A65C7: call    edx
0x4A65C9: mov     eax, [edi]
0x4A65CB: jmp     loc_4A6739
0x4A65D0: cmp     esi, ebx
0x4A65D2: jz      short loc_4A65E0
0x4A65D4: mov     [edi], ebx
0x4A65D6: mov     eax, [esi]
0x4A65D8: mov     edx, [eax]
0x4A65DA: push    1
0x4A65DC: mov     ecx, esi
0x4A65DE: call    edx
0x4A65E0: mov     ecx, ds:0B35424h[ebp*8]
0x4A65E7: cmp     ecx, ebx
0x4A65E9: lea     esi, ds:0B35424h[ebp*8]
0x4A65F0: mov     [esp+38h+arg_4], esi
0x4A65F4: jz      short loc_4A6600
0x4A65F6: mov     [esi], ebx
0x4A65F8: mov     eax, [ecx]
0x4A65FA: mov     edx, [eax]
0x4A65FC: push    1
0x4A65FE: call    edx
0x4A6600: mov     ebp, [esp+38h+var_1C]
0x4A6604: cmp     ebp, ebx
0x4A6606: jz      loc_4A6735
0x4A660C: add     ebp, 4
0x4A660F: mov     edi, ebp
0x4A6611: cmp     edi, ebx
0x4A6613: jz      loc_4A6722
0x4A6619: lea     esp, [esp+0]
0x4A6620: mov     eax, [edi]
0x4A6622: cmp     eax, ebx
0x4A6624: jz      loc_4A66C7
0x4A662A: mov     ecx, [esp+38h+arg_0]
0x4A662E: mov     eax, [eax+18h]
0x4A6631: push    ecx
0x4A6632: mov     ecx, eax
0x4A6634: call    sub_4A4460
0x4A6639: mov     esi, eax
0x4A663B: cmp     esi, ebx
0x4A663D: jz      short loc_4A66B8
0x4A663F: cmp     [esi+4], bl
0x4A6642: jz      short loc_4A6676
0x4A6644: mov     ecx, [esp+38h+var_18]
0x4A6648: cmp     ecx, ebx
0x4A664A: mov     byte ptr [esp+38h+var_20+3], 1
0x4A664F: jz      short loc_4A665D
0x4A6651: mov     edx, [ecx]
0x4A6653: mov     eax, [edx]
0x4A6655: push    1
0x4A6657: call    eax
0x4A6659: mov     [esp+38h+var_18], ebx
0x4A665D: movzx   ax, byte ptr [esi+6]
0x4A6662: cmp     ax, word ptr [esp+38h+var_14]
0x4A6667: jbe     short loc_4A66B8
0x4A6669: movzx   ecx, ax
0x4A666C: mov     [esp+38h+var_10], esi
0x4A6670: mov     [esp+38h+var_14], ecx
0x4A6674: jmp     short loc_4A66B8
0x4A6676: cmp     byte ptr [esp+38h+var_20+3], bl
0x4A667A: jnz     short loc_4A66B8
0x4A667C: mov     edx, [esp+38h+var_18]
0x4A6680: cmp     edx, ebx
0x4A6682: jz      short loc_4A66AB
0x4A6684: mov     eax, ebp
0x4A6686: xor     ecx, ecx
0x4A6688: cmp     eax, ebx
0x4A668A: jz      short loc_4A669E
0x4A668C: lea     esp, [esp+0]
0x4A6690: cmp     [eax], ebx
0x4A6692: jz      short loc_4A6697
0x4A6694: add     ecx, 1
0x4A6697: mov     eax, [eax+4]
0x4A669A: cmp     eax, ebx
0x4A669C: jnz     short loc_4A6690
0x4A669E: mov     eax, [edx]
0x4A66A0: push    ecx
0x4A66A1: mov     ecx, edx
0x4A66A3: mov     edx, [eax+18h]
0x4A66A6: push    esi
0x4A66A7: call    edx
0x4A66A9: jmp     short loc_4A66B8
0x4A66AB: mov     eax, [esi]
0x4A66AD: mov     edx, [eax+10h]
0x4A66B0: mov     ecx, esi
0x4A66B2: call    edx
0x4A66B4: mov     [esp+38h+var_18], eax
0x4A66B8: mov     edi, [edi+4]
0x4A66BB: cmp     edi, ebx
0x4A66BD: mov     esi, [esp+38h+arg_4]
0x4A66C1: jnz     loc_4A6620
0x4A66C7: cmp     byte ptr [esp+38h+var_20+3], bl
0x4A66CB: jz      short loc_4A66E0
0x4A66CD: mov     ecx, [esp+38h+var_10]
0x4A66D1: mov     eax, [ecx]
0x4A66D3: mov     edx, [eax+10h]
0x4A66D6: call    edx
0x4A66D8: mov     edi, eax
0x4A66DA: mov     [esp+38h+var_18], edi
0x4A66DE: jmp     short loc_4A66E4
0x4A66E0: mov     edi, [esp+38h+var_18]
0x4A66E4: cmp     edi, ebx
0x4A66E6: jz      short loc_4A6722
0x4A66E8: mov     ebp, [esp+38h+arg_8]
0x4A66EC: mov     ecx, [ebp+0]
0x4A66EF: cmp     ecx, ebx
0x4A66F1: jz      short loc_4A66FB
0x4A66F3: mov     eax, [ecx]
0x4A66F5: mov     edx, [eax]
0x4A66F7: push    1
0x4A66F9: call    edx
0x4A66FB: mov     eax, [esi]
0x4A66FD: cmp     eax, ebx
0x4A66FF: mov     [ebp+0], edi
0x4A6702: jz      short loc_4A671A
0x4A6704: lea     ecx, [eax+4]
0x4A6707: call    BSSimpleList_Clear
0x4A670C: mov     ecx, [esi]
0x4A670E: cmp     ecx, ebx
0x4A6710: jz      short loc_4A671A
0x4A6712: mov     eax, [ecx]
0x4A6714: mov     edx, [eax]
0x4A6716: push    1
0x4A6718: call    edx
0x4A671A: mov     eax, [esp+38h+var_1C]
0x4A671E: mov     [esi], eax
0x4A6720: jmp     short loc_4A6735
0x4A6722: mov     ecx, ebp
0x4A6724: call    BSSimpleList_Clear
0x4A6729: mov     ecx, [esp+38h+var_1C]
0x4A672D: mov     edx, [ecx]
0x4A672F: mov     eax, [edx]
0x4A6731: push    1
0x4A6733: call    eax
0x4A6735: mov     eax, [esp+38h+var_18]
0x4A6739: mov     ecx, dword ptr [esp+38h+var_C]
0x4A673D: mov     large fs:0, ecx
0x4A6744: pop     ecx
0x4A6745: pop     edi
0x4A6746: pop     esi
0x4A6747: pop     ebp
0x4A6748: pop     ebx
0x4A6749: add     esp, 24h
0x4A674C: retn    0Ch
