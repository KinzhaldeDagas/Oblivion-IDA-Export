0x7F63D0: movzx   eax, [esp+arg_4]
0x7F63D5: cmp     eax, 11Bh
0x7F63DA: jg      loc_7F66EA
0x7F63E0: jz      loc_7F66CB
0x7F63E6: sub     eax, 18h; switch 253 cases
0x7F63E9: cmp     eax, 0FCh
0x7F63EE: ja      def_7F63FB; jumptable 007F63FB default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,118-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x7F63F4: movzx   eax, ds:byte_7F67B8[eax]
0x7F63FB: jmp     ds:jpt_7F63FB[eax*4]; switch jump
0x7F6402: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 24
0x7F6406: mov     edx, [esp+arg_8]
0x7F640A: mov     eax, [esp+arg_0]
0x7F640E: push    1
0x7F6410: push    ecx
0x7F6411: mov     ecx, [esp+8+arg_10]
0x7F6415: push    edx
0x7F6416: push    0
0x7F6418: push    eax
0x7F6419: call    sub_85BF40
0x7F641E: retn    14h
0x7F6421: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 47
0x7F6425: mov     edx, [esp+arg_8]
0x7F6429: mov     eax, [esp+arg_0]
0x7F642D: push    1
0x7F642F: push    ecx
0x7F6430: mov     ecx, [esp+8+arg_10]
0x7F6434: push    edx
0x7F6435: push    0
0x7F6437: push    eax
0x7F6438: call    sub_85BFD0
0x7F643D: retn    14h
0x7F6440: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 48
0x7F6444: mov     edx, [esp+arg_8]
0x7F6448: mov     eax, [esp+arg_0]
0x7F644C: push    1
0x7F644E: push    ecx
0x7F644F: mov     ecx, [esp+8+arg_10]
0x7F6453: push    edx
0x7F6454: push    0
0x7F6456: push    eax
0x7F6457: call    sub_85C110
0x7F645C: retn    14h
0x7F645F: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 51
0x7F6463: mov     edx, [esp+arg_8]
0x7F6467: mov     eax, [esp+arg_0]
0x7F646B: push    1
0x7F646D: push    ecx
0x7F646E: mov     ecx, [esp+8+arg_10]
0x7F6472: push    edx
0x7F6473: push    0
0x7F6475: push    eax
0x7F6476: call    sub_85C250
0x7F647B: retn    14h
0x7F647E: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 230
0x7F6482: mov     edx, [esp+arg_8]
0x7F6486: mov     eax, [esp+arg_0]
0x7F648A: push    1
0x7F648C: push    ecx
0x7F648D: mov     ecx, [esp+8+arg_10]
0x7F6491: push    edx
0x7F6492: push    0
0x7F6494: push    eax
0x7F6495: call    sub_85C370
0x7F649A: retn    14h
0x7F649D: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 231
0x7F64A1: mov     edx, [esp+arg_8]
0x7F64A5: mov     eax, [esp+arg_0]
0x7F64A9: push    1
0x7F64AB: push    ecx
0x7F64AC: mov     ecx, [esp+8+arg_10]
0x7F64B0: push    edx
0x7F64B1: push    0
0x7F64B3: push    eax
0x7F64B4: call    sub_85C450
0x7F64B9: retn    14h
0x7F64BC: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 275
0x7F64C0: mov     edx, [esp+arg_8]
0x7F64C4: mov     eax, [esp+arg_0]
0x7F64C8: push    1
0x7F64CA: push    ecx
0x7F64CB: mov     ecx, [esp+8+arg_10]
0x7F64CF: push    edx
0x7F64D0: push    0
0x7F64D2: push    eax
0x7F64D3: call    sub_85C610
0x7F64D8: retn    14h
0x7F64DB: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 276
0x7F64DF: mov     edx, [esp+arg_8]
0x7F64E3: mov     eax, [esp+arg_0]
0x7F64E7: push    1
0x7F64E9: push    ecx
0x7F64EA: mov     ecx, [esp+8+arg_10]
0x7F64EE: push    edx
0x7F64EF: push    0
0x7F64F1: push    eax
0x7F64F2: call    sub_85C6F0
0x7F64F7: retn    14h
0x7F64FA: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 267
0x7F64FE: mov     edx, [esp+arg_8]
0x7F6502: mov     eax, [esp+arg_0]
0x7F6506: push    1
0x7F6508: push    ecx
0x7F6509: mov     ecx, [esp+8+arg_10]
0x7F650D: push    edx
0x7F650E: push    0
0x7F6510: push    eax
0x7F6511: call    sub_85C530
0x7F6516: retn    14h
0x7F6519: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 84
0x7F651D: mov     edx, [esp+arg_8]
0x7F6521: mov     eax, [esp+arg_0]
0x7F6525: push    1
0x7F6527: push    ecx
0x7F6528: mov     ecx, [esp+8+arg_10]
0x7F652C: push    edx
0x7F652D: push    0
0x7F652F: push    eax
0x7F6530: call    sub_85D380
0x7F6535: retn    14h
0x7F6538: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 95
0x7F653C: mov     edx, [esp+arg_8]
0x7F6540: mov     eax, [esp+arg_0]
0x7F6544: push    1
0x7F6546: push    ecx
0x7F6547: mov     ecx, [esp+8+arg_10]
0x7F654B: push    edx
0x7F654C: push    0
0x7F654E: push    eax
0x7F654F: call    sub_85D500
0x7F6554: retn    14h
0x7F6557: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 106
0x7F655B: mov     edx, [esp+arg_8]
0x7F655F: mov     eax, [esp+arg_0]
0x7F6563: push    1
0x7F6565: push    ecx
0x7F6566: mov     ecx, [esp+8+arg_10]
0x7F656A: push    edx
0x7F656B: push    0
0x7F656D: push    eax
0x7F656E: call    sub_85D720
0x7F6573: retn    14h
0x7F6576: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 117
0x7F657A: mov     edx, [esp+arg_8]
0x7F657E: mov     eax, [esp+arg_0]
0x7F6582: push    1
0x7F6584: push    ecx
0x7F6585: mov     ecx, [esp+8+arg_10]
0x7F6589: push    edx
0x7F658A: push    0
0x7F658C: push    eax
0x7F658D: call    sub_85D8A0
0x7F6592: retn    14h
0x7F6595: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 130
0x7F6599: mov     edx, [esp+arg_8]
0x7F659D: mov     eax, [esp+arg_0]
0x7F65A1: push    1
0x7F65A3: push    ecx
0x7F65A4: mov     ecx, [esp+8+arg_10]
0x7F65A8: push    edx
0x7F65A9: push    0
0x7F65AB: push    eax
0x7F65AC: call    sub_85C870
0x7F65B1: retn    14h
0x7F65B4: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 144
0x7F65B8: mov     edx, [esp+arg_8]
0x7F65BC: mov     eax, [esp+arg_0]
0x7F65C0: push    1
0x7F65C2: push    ecx
0x7F65C3: mov     ecx, [esp+8+arg_10]
0x7F65C7: push    edx
0x7F65C8: push    0
0x7F65CA: push    eax
0x7F65CB: call    sub_85CA00
0x7F65D0: retn    14h
0x7F65D3: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 157
0x7F65D7: mov     edx, [esp+arg_8]
0x7F65DB: mov     eax, [esp+arg_0]
0x7F65DF: push    1
0x7F65E1: push    ecx
0x7F65E2: mov     ecx, [esp+8+arg_10]
0x7F65E6: push    edx
0x7F65E7: push    0
0x7F65E9: push    eax
0x7F65EA: call    sub_85CC20
0x7F65EF: retn    14h
0x7F65F2: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 170
0x7F65F6: mov     edx, [esp+arg_8]
0x7F65FA: mov     eax, [esp+arg_0]
0x7F65FE: push    1
0x7F6600: push    ecx
0x7F6601: mov     ecx, [esp+8+arg_10]
0x7F6605: push    edx
0x7F6606: push    0
0x7F6608: push    eax
0x7F6609: call    sub_85CDB0
0x7F660E: retn    14h
0x7F6611: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 184
0x7F6615: mov     edx, [esp+arg_8]
0x7F6619: mov     eax, [esp+arg_0]
0x7F661D: push    1
0x7F661F: push    ecx
0x7F6620: mov     ecx, [esp+8+arg_10]
0x7F6624: push    edx
0x7F6625: push    0
0x7F6627: push    eax
0x7F6628: call    sub_85CFD0
0x7F662D: retn    14h
0x7F6630: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 197
0x7F6634: mov     edx, [esp+arg_8]
0x7F6638: mov     eax, [esp+arg_0]
0x7F663C: push    1
0x7F663E: push    ecx
0x7F663F: mov     ecx, [esp+8+arg_10]
0x7F6643: push    edx
0x7F6644: push    0
0x7F6646: push    eax
0x7F6647: call    sub_85D160
0x7F664C: retn    14h
0x7F664F: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 210
0x7F6653: mov     edx, [esp+arg_8]
0x7F6657: mov     eax, [esp+arg_0]
0x7F665B: push    1
0x7F665D: push    ecx
0x7F665E: mov     ecx, [esp+8+arg_10]
0x7F6662: push    edx
0x7F6663: push    0
0x7F6665: push    eax
0x7F6666: call    sub_85DAC0
0x7F666B: retn    14h
0x7F666E: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 223
0x7F6672: mov     edx, [esp+arg_8]
0x7F6676: mov     eax, [esp+arg_0]
0x7F667A: push    1
0x7F667C: push    ecx
0x7F667D: mov     ecx, [esp+8+arg_10]
0x7F6681: push    edx
0x7F6682: push    0
0x7F6684: push    eax
0x7F6685: call    sub_85DC50
0x7F668A: retn    14h
0x7F668D: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 238
0x7F6691: mov     edx, [esp+arg_8]
0x7F6695: mov     eax, [esp+arg_0]
0x7F6699: push    1
0x7F669B: push    ecx
0x7F669C: mov     ecx, [esp+8+arg_10]
0x7F66A0: push    edx
0x7F66A1: push    0
0x7F66A3: push    eax
0x7F66A4: call    sub_85DE70
0x7F66A9: retn    14h
0x7F66AC: mov     ecx, [esp+arg_C]; jumptable 007F63FB case 252
0x7F66B0: mov     edx, [esp+arg_8]
0x7F66B4: mov     eax, [esp+arg_0]
0x7F66B8: push    1
0x7F66BA: push    ecx
0x7F66BB: mov     ecx, [esp+8+arg_10]
0x7F66BF: push    edx
0x7F66C0: push    0
0x7F66C2: push    eax
0x7F66C3: call    sub_85DF60
0x7F66C8: retn    14h
0x7F66CB: mov     ecx, [esp+arg_C]
0x7F66CF: mov     edx, [esp+arg_8]
0x7F66D3: mov     eax, [esp+arg_0]
0x7F66D7: push    1
0x7F66D9: push    ecx
0x7F66DA: mov     ecx, [esp+8+arg_10]
0x7F66DE: push    edx
0x7F66DF: push    0
0x7F66E1: push    eax
0x7F66E2: call    sub_85E050
0x7F66E7: retn    14h
0x7F66EA: sub     eax, 122h
0x7F66EF: jz      short loc_7F6739
0x7F66F1: sub     eax, 7
0x7F66F4: jz      short loc_7F671A
0x7F66F6: sub     eax, 6Bh ; 'k'
0x7F66F9: jnz     short def_7F63FB; jumptable 007F63FB default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,118-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
0x7F66FB: mov     ecx, [esp+arg_C]
0x7F66FF: mov     edx, [esp+arg_8]
0x7F6703: mov     eax, [esp+arg_0]
0x7F6707: push    1
0x7F6709: push    ecx
0x7F670A: mov     ecx, [esp+8+arg_10]
0x7F670E: push    edx
0x7F670F: push    0
0x7F6711: push    eax
0x7F6712: call    sub_85C7D0
0x7F6717: retn    14h
0x7F671A: mov     ecx, [esp+arg_C]
0x7F671E: mov     edx, [esp+arg_8]
0x7F6722: mov     eax, [esp+arg_0]
0x7F6726: push    1
0x7F6728: push    ecx
0x7F6729: mov     ecx, [esp+8+arg_10]
0x7F672D: push    edx
0x7F672E: push    0
0x7F6730: push    eax
0x7F6731: call    sub_85E300
0x7F6736: retn    14h
0x7F6739: mov     ecx, [esp+arg_C]
0x7F673D: mov     edx, [esp+arg_8]
0x7F6741: mov     eax, [esp+arg_0]
0x7F6745: push    1
0x7F6747: push    ecx
0x7F6748: mov     ecx, [esp+8+arg_10]
0x7F674C: push    edx
0x7F674D: push    0
0x7F674F: push    eax
0x7F6750: call    sub_85E160
0x7F6755: retn    14h; jumptable 007F63FB default case, cases 25-46,49,50,52-83,85-94,96-105,107-116,118-129,131-143,145-156,158-169,171-183,185-196,198-209,211-222,224-229,232-237,239-251,253-266,268-274
