0x96A37F: fstp    st(1); jumptable 0096A36B default case
0x96A381: fstp    st
0x96A383: fstp    st
0x96A385: cmp     byte ptr [ebp+24h], 0
0x96A389: jz      loc_96C364
0x96A38F: mov     esi, [ebp+28h]
0x96A392: mov     ecx, esi
0x96A394: call    sub_47DA40
0x96A399: fstp    [esp+arg_8]
0x96A39D: fld     [esp+arg_8]
0x96A3A1: fld     qword ptr ds:0A2F928h
0x96A3A7: fsubr   st, st(1)
0x96A3A9: fstp    [esp+arg_8]
0x96A3AD: fld     [esp+arg_8]
0x96A3B1: fabs
0x96A3B3: fstp    [esp+arg_8]
0x96A3B7: fld     [esp+arg_8]
0x96A3BB: fld     dword ptr ds:0AA3B44h
0x96A3C1: fcom    st(1)
0x96A3C3: fnstsw  ax
0x96A3C5: fstp    st(1)
0x96A3C7: test    ah, 5
0x96A3CA: jp      loc_96C32F
0x96A3D0: fcompp
0x96A3D2: fnstsw  ax
0x96A3D4: test    ah, 5
0x96A3D7: jp      loc_96C314
0x96A3DD: mov     ecx, esi
0x96A3DF: call    sub_43F350
0x96A3E4: jmp     loc_96C331
0x96A3E9: fstp    st
0x96A3EB: jmp     short loc_96A378
0x96A3ED: fstp    st(2)
0x96A3EF: fstp    st
0x96A3F1: fstp    st
0x96A3F3: fstp    st(3)
0x96A3F5: jmp     short loc_96A378
0x96A3F7: mov     edx, [esp+arg_8]; jumptable 0096A36B case 0
0x96A3FB: fstp    st(1)
0x96A3FD: mov     ecx, [esp+arg_9C]
0x96A404: fstp    st
0x96A406: push    edx
0x96A407: fstp    st
0x96A409: lea     eax, [esp+4+arg_8C]
0x96A410: push    eax
0x96A411: call    sub_47D9B0
0x96A416: fld     dword ptr ds:0A3D65Ch
0x96A41C: push    eax; int
0x96A41D: push    ecx
0x96A41E: lea     ecx, [esp+8+arg_64]
0x96A422: fstp    [esp+8+var_8]; float
0x96A425: push    ecx; int
0x96A426: call    sub_47DA10
0x96A42B: mov     edx, [eax]
0x96A42D: mov     ecx, [ebp+20h]
0x96A430: mov     [ecx], edx
0x96A432: mov     edx, [eax+4]
0x96A435: mov     [ecx+4], edx
0x96A438: mov     eax, [eax+8]
0x96A43B: add     esp, 0Ch
0x96A43E: cmp     byte ptr [ebp+24h], 0
0x96A442: mov     [ecx+8], eax
0x96A445: jz      loc_96C364
0x96A44B: mov     edx, [esp+arg_9C]
0x96A452: push    edx
0x96A453: lea     eax, [esp+4+arg_34]
0x96A457: push    eax
0x96A458: call    sub_4121A0
0x96A45D: mov     edx, [eax]
0x96A45F: mov     ecx, [ebp+28h]
0x96A462: mov     [ecx], edx
0x96A464: mov     edx, [eax+4]
0x96A467: mov     [ecx+4], edx
0x96A46A: mov     eax, [eax+8]
0x96A46D: mov     [ecx+8], eax
0x96A470: jmp     loc_96A385
0x96A475: mov     eax, [esp+arg_44]; jumptable 0096A36B cases 1-3
0x96A479: fstp    st(1)
0x96A47B: fstp    st
0x96A47D: lea     ecx, [eax+eax*2-3]
0x96A481: add     ecx, ecx
0x96A483: fstp    st
0x96A485: fldz
0x96A487: add     ecx, ecx
0x96A489: fcom    [esp+ecx+arg_A8]
0x96A490: mov     [esp+arg_48], ecx
0x96A494: fnstsw  ax
0x96A496: test    ah, 5
0x96A499: jp      short loc_96A4B8
0x96A49B: mov     edx, [esp+arg_C]
0x96A49F: neg     edx
0x96A4A1: mov     [esp+arg_88], edx
0x96A4A8: fild    [esp+arg_88]
0x96A4AF: fmul    dword ptr [ebx+34h]
0x96A4B2: fstp    [esp+arg_4C]
0x96A4B6: jmp     short loc_96A4D7
0x96A4B8: fcom    [esp+ecx+arg_A8]
0x96A4BF: fnstsw  ax
0x96A4C1: test    ah, 41h
0x96A4C4: jnz     short loc_96A4D3
0x96A4C6: fild    [esp+arg_C]
0x96A4CA: fmul    dword ptr [ebx+34h]
0x96A4CD: fstp    [esp+arg_4C]
0x96A4D1: jmp     short loc_96A4D7
0x96A4D3: fst     [esp+arg_4C]
0x96A4D7: fcom    [esp+ecx+arg_AC]
0x96A4DE: fnstsw  ax
0x96A4E0: test    ah, 5
0x96A4E3: jp      short loc_96A502
0x96A4E5: mov     eax, [esp+arg_C]
0x96A4E9: neg     eax
0x96A4EB: mov     [esp+arg_88], eax
0x96A4F2: fild    [esp+arg_88]
0x96A4F9: fmul    dword ptr [ebx+38h]
0x96A4FC: fstp    [esp+arg_50]
0x96A500: jmp     short loc_96A521
0x96A502: fcom    [esp+ecx+arg_AC]
0x96A509: fnstsw  ax
0x96A50B: test    ah, 41h
0x96A50E: jnz     short loc_96A51D
0x96A510: fild    [esp+arg_C]
0x96A514: fmul    dword ptr [ebx+38h]
0x96A517: fstp    [esp+arg_50]
0x96A51B: jmp     short loc_96A521
0x96A51D: fst     [esp+arg_50]
0x96A521: fcom    [esp+ecx+arg_B0]
0x96A528: lea     ecx, [esp+ecx+arg_B0]
0x96A52F: fnstsw  ax
0x96A531: test    ah, 5
0x96A534: jp      short loc_96A54E
0x96A536: mov     ecx, [esp+arg_C]
0x96A53A: fstp    st
0x96A53C: neg     ecx
0x96A53E: mov     [esp+arg_88], ecx
0x96A545: fild    [esp+arg_88]
0x96A54C: jmp     short loc_96A55D
0x96A54E: fcom    dword ptr [ecx]
0x96A550: fnstsw  ax
0x96A552: test    ah, 41h
0x96A555: jnz     short loc_96A560
0x96A557: fstp    st
0x96A559: fild    [esp+arg_C]
0x96A55D: fmul    dword ptr [ebx+3Ch]
0x96A560: fstp    [esp+arg_54]
0x96A564: mov     ecx, [ebp+18h]
0x96A567: fld     [esp+arg_4C]
0x96A56B: mov     edx, [esp+arg_8]
0x96A56F: fld     [esp+arg_50]
0x96A573: mov     eax, [esp+arg_98]
0x96A57A: fld     [esp+arg_54]
0x96A57E: fld     dword ptr [ecx]
0x96A580: fmul    dword ptr [edi]
0x96A582: fadd    dword ptr [edx]
0x96A584: mov     edx, [ebp+10h]
0x96A587: fld     dword ptr [eax]
0x96A589: mov     eax, [ebp+20h]
0x96A58C: fmul    st, st(4)
0x96A58E: push    eax; int
0x96A58F: push    edi; int
0x96A590: push    edx; int
0x96A591: faddp   st(1), st
0x96A593: push    esi; int
0x96A594: fld     dword ptr [ebx+1Ch]
0x96A597: push    ecx; int
0x96A598: fmul    st, st(3)
0x96A59A: push    ebx; int
0x96A59B: push    ecx
0x96A59C: faddp   st(1), st
0x96A59E: fld     dword ptr [ebx+28h]
0x96A5A1: fmul    st, st(2)
0x96A5A3: faddp   st(1), st
0x96A5A5: fstp    dword ptr [eax]
0x96A5A7: fld     dword ptr [edi]
0x96A5A9: fmul    dword ptr [ecx+4]
0x96A5AC: fadd    dword ptr [ebx+8]
0x96A5AF: fld     dword ptr [ebx+14h]
0x96A5B2: fmul    st, st(4)
0x96A5B4: faddp   st(1), st
0x96A5B6: fld     dword ptr [ebx+20h]
0x96A5B9: fmul    st, st(3)
0x96A5BB: faddp   st(1), st
0x96A5BD: fld     dword ptr [ebx+2Ch]
0x96A5C0: fmul    st, st(2)
0x96A5C2: faddp   st(1), st
0x96A5C4: fstp    dword ptr [eax+4]
0x96A5C7: fld     dword ptr [edi]
0x96A5C9: fmul    dword ptr [ecx+8]
0x96A5CC: fadd    dword ptr [ebx+0Ch]
0x96A5CF: fld     dword ptr [ebx+18h]
0x96A5D2: fmulp   st(4), st
0x96A5D4: faddp   st(3), st
0x96A5D6: fld     dword ptr [ebx+24h]
0x96A5D9: fmulp   st(2), st
0x96A5DB: fxch    st(2)
0x96A5DD: faddp   st(1), st
0x96A5DF: fld     dword ptr [ebx+30h]
0x96A5E2: fmulp   st(2), st
0x96A5E4: faddp   st(1), st
0x96A5E6: fstp    dword ptr [eax+8]
0x96A5E9: fld     dword ptr [ebp+8]
0x96A5EC: fstp    [esp+1Ch+var_1C]; float
0x96A5EF: call    sub_9684F0
0x96A5F4: add     esp, 1Ch
0x96A5F7: cmp     byte ptr [ebp+24h], 0
0x96A5FB: jz      loc_96C364
0x96A601: cmp     [esp+arg_C], 0
0x96A606: jge     short loc_96A646
0x96A608: mov     eax, [esp+arg_48]
0x96A60C: mov     ecx, [esp+arg_60]
0x96A610: fld     dword ptr [eax+ecx]
0x96A613: fchs
0x96A615: fstp    [esp+arg_28]
0x96A619: fld     dword ptr [eax+ecx+4]
0x96A61D: fchs
0x96A61F: fstp    [esp+arg_2C]
0x96A623: mov     edx, [esp+arg_2C]
0x96A627: fld     dword ptr [eax+ecx+8]
0x96A62B: mov     eax, [ebp+28h]
0x96A62E: mov     ecx, [esp+arg_28]
0x96A632: fchs
0x96A634: mov     [eax], ecx
0x96A636: fstp    [esp+arg_30]
0x96A63A: mov     ecx, [esp+arg_30]
0x96A63E: mov     [eax+4], edx
0x96A641: mov     [eax+8], ecx
0x96A644: jmp     short loc_96A664
0x96A646: mov     ecx, [esp+arg_48]
0x96A64A: mov     edx, [esp+arg_60]
0x96A64E: mov     esi, [ecx+edx]
0x96A651: mov     eax, [ebp+28h]
0x96A654: mov     [eax], esi
0x96A656: mov     esi, [ecx+edx+4]
0x96A65A: mov     [eax+4], esi
0x96A65D: mov     edx, [ecx+edx+8]
0x96A661: mov     [eax+8], edx
0x96A664: fld     dword ptr [eax]
0x96A666: fchs
0x96A668: fstp    [esp+arg_28]
0x96A66C: fld     dword ptr [eax+4]
0x96A66F: fchs
0x96A671: fstp    [esp+arg_2C]
0x96A675: fld     dword ptr [eax+8]
0x96A678: jmp     loc_96C347
0x96A67D: mov     ecx, [esp+arg_44]; jumptable 0096A36B cases 4-6
0x96A681: fstp    st(1)
0x96A683: fstp    st
0x96A685: fstp    st
0x96A687: fldz
0x96A689: fcom    [esp+ecx*4+arg_98]
0x96A690: fnstsw  ax
0x96A692: test    ah, 5
0x96A695: jp      short loc_96A6A4
0x96A697: fild    [esp+arg_C]
0x96A69B: fmul    dword ptr [esi+34h]
0x96A69E: fstp    [esp+arg_34]
0x96A6A2: jmp     short loc_96A6CD
0x96A6A4: fcom    [esp+ecx*4+arg_98]
0x96A6AB: fnstsw  ax
0x96A6AD: test    ah, 41h
0x96A6B0: jnz     short loc_96A6C9
0x96A6B2: mov     edx, [esp+arg_C]
0x96A6B6: neg     edx
0x96A6B8: mov     [esp+arg_8], edx
0x96A6BC: fild    [esp+arg_8]
0x96A6C0: fmul    dword ptr [esi+34h]
0x96A6C3: fstp    [esp+arg_34]
0x96A6C7: jmp     short loc_96A6CD
0x96A6C9: fst     [esp+arg_34]
0x96A6CD: fcom    [esp+ecx*4+arg_A4]
0x96A6D4: fnstsw  ax
0x96A6D6: test    ah, 5
0x96A6D9: jp      short loc_96A6E8
0x96A6DB: fild    [esp+arg_C]
0x96A6DF: fmul    dword ptr [esi+38h]
0x96A6E2: fstp    [esp+arg_38]
0x96A6E6: jmp     short loc_96A711
0x96A6E8: fcom    [esp+ecx*4+arg_A4]
0x96A6EF: fnstsw  ax
0x96A6F1: test    ah, 41h
0x96A6F4: jnz     short loc_96A70D
0x96A6F6: mov     eax, [esp+arg_C]
0x96A6FA: neg     eax
0x96A6FC: mov     [esp+arg_8], eax
0x96A700: fild    [esp+arg_8]
0x96A704: fmul    dword ptr [esi+38h]
0x96A707: fstp    [esp+arg_38]
0x96A70B: jmp     short loc_96A711
0x96A70D: fst     [esp+arg_38]
0x96A711: fcom    [esp+ecx*4+arg_B0]
0x96A718: lea     ecx, [esp+ecx*4+arg_B0]
0x96A71F: fnstsw  ax
0x96A721: test    ah, 5
0x96A724: jp      short loc_96A72E
0x96A726: fstp    st
0x96A728: fild    [esp+arg_C]
0x96A72C: jmp     short loc_96A747
0x96A72E: fcom    dword ptr [ecx]
0x96A730: fnstsw  ax
0x96A732: test    ah, 41h
0x96A735: jnz     short loc_96A74A
0x96A737: mov     ecx, [esp+arg_C]
0x96A73B: fstp    st
0x96A73D: neg     ecx
0x96A73F: mov     [esp+arg_8], ecx
0x96A743: fild    [esp+arg_8]
0x96A747: fmul    dword ptr [esi+3Ch]
0x96A74A: fstp    [esp+arg_3C]
0x96A74E: mov     ecx, [ebp+10h]
0x96A751: fld     [esp+arg_34]
0x96A755: mov     edx, [esp+arg_9C]
0x96A75C: fld     [esp+arg_38]
0x96A760: mov     eax, [esp+arg_60]
0x96A764: fld     [esp+arg_3C]
0x96A768: fld     dword ptr [edi]
0x96A76A: fmul    dword ptr [ecx]
0x96A76C: fadd    dword ptr [edx]
0x96A76E: mov     edx, [ebp+18h]
0x96A771: fld     dword ptr [eax]
0x96A773: mov     eax, [ebp+20h]
0x96A776: fmul    st, st(4)
0x96A778: push    eax; int
0x96A779: push    edi; int
0x96A77A: push    edx; int
0x96A77B: faddp   st(1), st
0x96A77D: push    ebx; int
0x96A77E: fld     dword ptr [esi+1Ch]
0x96A781: push    ecx; int
0x96A782: fmul    st, st(3)
0x96A784: push    esi; int
0x96A785: push    ecx
0x96A786: faddp   st(1), st
0x96A788: fld     dword ptr [esi+28h]
0x96A78B: fmul    st, st(2)
0x96A78D: faddp   st(1), st
0x96A78F: fstp    dword ptr [eax]
0x96A791: fld     dword ptr [edi]
0x96A793: fmul    dword ptr [ecx+4]
0x96A796: fadd    dword ptr [esi+8]
0x96A799: fld     dword ptr [esi+14h]
0x96A79C: fmul    st, st(4)
0x96A79E: faddp   st(1), st
0x96A7A0: fld     dword ptr [esi+20h]
0x96A7A3: fmul    st, st(3)
0x96A7A5: faddp   st(1), st
0x96A7A7: fld     dword ptr [esi+2Ch]
0x96A7AA: fmul    st, st(2)
0x96A7AC: faddp   st(1), st
0x96A7AE: fstp    dword ptr [eax+4]
0x96A7B1: fld     dword ptr [edi]
0x96A7B3: fmul    dword ptr [ecx+8]
0x96A7B6: fadd    dword ptr [esi+0Ch]
0x96A7B9: fld     dword ptr [esi+18h]
0x96A7BC: fmulp   st(4), st
0x96A7BE: faddp   st(3), st
0x96A7C0: fld     dword ptr [esi+24h]
0x96A7C3: fmulp   st(2), st
0x96A7C5: fxch    st(2)
0x96A7C7: faddp   st(1), st
0x96A7C9: fld     dword ptr [esi+30h]
0x96A7CC: fmulp   st(2), st
0x96A7CE: faddp   st(1), st
0x96A7D0: fstp    dword ptr [eax+8]
0x96A7D3: fld     dword ptr [ebp+8]
0x96A7D6: fstp    [esp+1Ch+var_1C]; float
0x96A7D9: call    sub_9684F0
0x96A7DE: add     esp, 1Ch
0x96A7E1: cmp     byte ptr [ebp+24h], 0
0x96A7E5: jz      loc_96C364
0x96A7EB: cmp     [esp+arg_C], 0
0x96A7F0: mov     eax, [esp+arg_44]
0x96A7F4: mov     ecx, [esp+arg_98]
0x96A7FB: lea     eax, [eax+eax*2-0Ch]
0x96A7FF: jge     short loc_96A838
0x96A801: fld     dword ptr [ecx+eax*4]
0x96A804: lea     eax, [ecx+eax*4]
0x96A807: fchs
0x96A809: fstp    [esp+arg_28]
0x96A80D: mov     edx, [esp+arg_28]
0x96A811: fld     dword ptr [eax+4]
0x96A814: fchs
0x96A816: fstp    [esp+arg_2C]
0x96A81A: mov     ecx, [esp+arg_2C]
0x96A81E: fld     dword ptr [eax+8]
0x96A821: mov     eax, [ebp+28h]
0x96A824: fchs
0x96A826: mov     [eax], edx
0x96A828: fstp    [esp+arg_30]
0x96A82C: mov     edx, [esp+arg_30]
0x96A830: mov     [eax+4], ecx
0x96A833: mov     [eax+8], edx
0x96A836: jmp     short loc_96A84F
0x96A838: mov     edx, [ecx+eax*4]
0x96A83B: lea     ecx, [ecx+eax*4]
0x96A83E: mov     eax, [ebp+28h]
0x96A841: mov     [eax], edx
0x96A843: mov     edx, [ecx+4]
0x96A846: mov     [eax+4], edx
0x96A849: mov     ecx, [ecx+8]
0x96A84C: mov     [eax+8], ecx
0x96A84F: fld     dword ptr [eax]
0x96A851: fchs
0x96A853: fstp    [esp+arg_28]
0x96A857: mov     edx, [esp+arg_28]
0x96A85B: fld     dword ptr [eax+4]
0x96A85E: fchs
0x96A860: fstp    [esp+arg_2C]
0x96A864: mov     ecx, [esp+arg_2C]
0x96A868: fld     dword ptr [eax+8]
0x96A86B: mov     eax, [ebp+2Ch]
0x96A86E: mov     [eax], edx
0x96A870: fchs
0x96A872: fstp    [esp+arg_30]
0x96A876: mov     edx, [esp+arg_30]
0x96A87A: mov     [eax+4], ecx
0x96A87D: mov     [eax+8], edx
0x96A880: mov     al, 1
0x96A882: pop     edi
0x96A883: pop     esi
0x96A884: pop     ebx
0x96A885: mov     esp, ebp
0x96A887: pop     ebp
0x96A888: retn
0x96A889: mov     ecx, [esp+arg_C]; jumptable 0096A36B case 7
0x96A88D: fstp    st(1)
0x96A88F: fstp    st
0x96A891: fldz
0x96A893: fld     [esp+arg_C0]
0x96A89A: fcom    st(1)
0x96A89C: fnstsw  ax
0x96A89E: test    ah, 41h
0x96A8A1: jnz     short loc_96A8BA
0x96A8A3: mov     eax, ecx
0x96A8A5: fstp    st
0x96A8A7: neg     eax
0x96A8A9: mov     [esp+arg_8], eax
0x96A8AD: fild    [esp+arg_8]
0x96A8B1: fmul    dword ptr [esi+38h]
0x96A8B4: fstp    [esp+arg_38]
0x96A8B8: jmp     short loc_96A8D4
0x96A8BA: fcomp   st(1)
0x96A8BC: fnstsw  ax
0x96A8BE: test    ah, 5
0x96A8C1: jp      short loc_96A8D0
0x96A8C3: fild    [esp+arg_C]
0x96A8C7: fmul    dword ptr [esi+38h]
0x96A8CA: fstp    [esp+arg_38]
0x96A8CE: jmp     short loc_96A8D4
0x96A8D0: fst     [esp+arg_38]
0x96A8D4: fld     [esp+arg_B4]
0x96A8DB: fcom    st(1)
0x96A8DD: fnstsw  ax
0x96A8DF: test    ah, 41h
0x96A8E2: jnz     short loc_96A8F3
0x96A8E4: fstp    st
0x96A8E6: fild    [esp+arg_C]
0x96A8EA: fmul    dword ptr [esi+3Ch]
0x96A8ED: fstp    [esp+arg_3C]
0x96A8F1: jmp     short loc_96A915
0x96A8F3: fcomp   st(1)
0x96A8F5: fnstsw  ax
0x96A8F7: test    ah, 5
0x96A8FA: jp      short loc_96A911
0x96A8FC: mov     edx, ecx
0x96A8FE: neg     edx
0x96A900: mov     [esp+arg_8], edx
0x96A904: fild    [esp+arg_8]
0x96A908: fmul    dword ptr [esi+3Ch]
0x96A90B: fstp    [esp+arg_3C]
0x96A90F: jmp     short loc_96A915
0x96A911: fst     [esp+arg_3C]
0x96A915: fld     [esp+arg_B0]
0x96A91C: fcom    st(1)
0x96A91E: fnstsw  ax
0x96A920: test    ah, 41h
0x96A923: jnz     short loc_96A93C
0x96A925: mov     eax, ecx
0x96A927: fstp    st
0x96A929: neg     eax
0x96A92B: mov     [esp+arg_8], eax
0x96A92F: fild    [esp+arg_8]
0x96A933: fmul    dword ptr [ebx+38h]
0x96A936: fstp    [esp+arg_50]
0x96A93A: jmp     short loc_96A956
0x96A93C: fcomp   st(1)
0x96A93E: fnstsw  ax
0x96A940: test    ah, 5
0x96A943: jp      short loc_96A952
0x96A945: fild    [esp+arg_C]
0x96A949: fmul    dword ptr [ebx+38h]
0x96A94C: fstp    [esp+arg_50]
0x96A950: jmp     short loc_96A956
0x96A952: fst     [esp+arg_50]
0x96A956: fld     [esp+arg_AC]
0x96A95D: fcom    st(1)
0x96A95F: fnstsw  ax
0x96A961: test    ah, 41h
0x96A964: jnz     short loc_96A975
0x96A966: fstp    st
0x96A968: fild    [esp+arg_C]
0x96A96C: fmul    dword ptr [ebx+3Ch]
0x96A96F: fstp    [esp+arg_54]
0x96A973: jmp     short loc_96A995
0x96A975: fcomp   st(1)
0x96A977: fnstsw  ax
0x96A979: test    ah, 5
0x96A97C: jp      short loc_96A991
0x96A97E: neg     ecx
0x96A980: mov     [esp+arg_8], ecx
0x96A984: fild    [esp+arg_8]
0x96A988: fmul    dword ptr [ebx+3Ch]
0x96A98B: fstp    [esp+arg_54]
0x96A98F: jmp     short loc_96A995
0x96A991: fst     [esp+arg_54]
0x96A995: fld     qword ptr [esp+arg_10C]
0x96A99C: fmul    st, st
0x96A99E: fsubp   st(2), st
0x96A9A0: fxch    st(1)
0x96A9A2: fstp    dword ptr [esp+arg_14]
0x96A9A6: fld     dword ptr [esp+arg_14]
0x96A9AA: fst     [esp+arg_14]
0x96A9AE: fabs
0x96A9B0: fstp    [esp+arg_8]
0x96A9B4: fld     [esp+arg_8]
0x96A9B8: fcomp   dword ptr ds:0A372CCh
0x96A9BE: fnstsw  ax
0x96A9C0: test    ah, 41h
0x96A9C3: jnz     loc_96AA9E
0x96A9C9: lea     ecx, [esp+arg_28]
0x96A9CD: fstp    st
0x96A9CF: fld     dword ptr [edi]
0x96A9D1: push    ecx; int
0x96A9D2: push    ecx
0x96A9D3: lea     edx, [esp+8+arg_1BC]
0x96A9DA: fstp    [esp+8+var_8]; float
0x96A9DD: push    edx; int
0x96A9DE: call    sub_47DA10
0x96A9E3: fld     dword ptr [eax]
0x96A9E5: fadd    [esp+0Ch+arg_12C]
0x96A9EC: add     esp, 0Ch
0x96A9EF: fstp    [esp+arg_28]
0x96A9F3: fld     dword ptr [eax+4]
0x96A9F6: fadd    [esp+arg_13C]
0x96A9FD: fstp    [esp+arg_2C]
0x96AA01: mov     ecx, [esp+arg_2C]
0x96AA05: fld     dword ptr [eax+8]
0x96AA08: mov     eax, [esp+arg_28]
0x96AA0C: fadd    [esp+arg_15C]
0x96AA13: mov     dword ptr [esp+arg_74], eax
0x96AA17: lea     eax, [esp+arg_74]
0x96AA1B: mov     dword ptr [esp+arg_74+4], ecx
0x96AA1F: mov     ecx, [esp+arg_98]
0x96AA26: fstp    [esp+arg_30]
0x96AA2A: fld     [esp+arg_3C]
0x96AA2E: mov     edx, [esp+arg_30]
0x96AA32: fmul    qword ptr [esp+arg_17C]
0x96AA39: push    eax
0x96AA3A: fld     [esp+4+arg_38]
0x96AA3E: mov     [esp+4+arg_7C], edx
0x96AA45: fmul    [esp+4+arg_11C]
0x96AA4C: faddp   st(1), st
0x96AA4E: fstp    qword ptr [esp+4+arg_64]
0x96AA52: call    sub_47D9E0
0x96AA57: fsubr   qword ptr [esp+arg_64]
0x96AA5B: lea     ecx, [esp+arg_74]
0x96AA5F: push    ecx
0x96AA60: mov     ecx, [esp+4+arg_60]
0x96AA64: fstp    [esp+4+arg_8]
0x96AA68: fld     [esp+4+arg_8]
0x96AA6C: fmul    qword ptr [esp+4+arg_10C]
0x96AA73: fstp    qword ptr [esp+4+arg_64]
0x96AA77: call    sub_47D9E0
0x96AA7C: fadd    qword ptr [esp+arg_64]
0x96AA80: fld     [esp+arg_50]
0x96AA84: fmul    qword ptr [esp+arg_CC]
0x96AA8B: faddp   st(1), st
0x96AA8D: fld     [esp+arg_54]
0x96AA91: fmul    [esp+arg_18C]
0x96AA98: faddp   st(1), st
0x96AA9A: fdiv    [esp+arg_14]
0x96AA9E: fstp    [esp+arg_34]
0x96AAA2: mov     ecx, [ebp+10h]
0x96AAA5: fld     [esp+arg_34]
0x96AAA9: mov     edx, [esp+arg_9C]
0x96AAB0: fld     [esp+arg_38]
0x96AAB4: mov     eax, [esp+arg_60]
0x96AAB8: fld     [esp+arg_3C]
0x96AABC: fld     dword ptr [edi]
0x96AABE: fmul    dword ptr [ecx]
0x96AAC0: fadd    dword ptr [edx]
0x96AAC2: mov     edx, [ebp+18h]
0x96AAC5: fld     dword ptr [eax]
0x96AAC7: mov     eax, [ebp+20h]
0x96AACA: fmul    st, st(4)
0x96AACC: push    eax; int
0x96AACD: push    edi; int
0x96AACE: push    edx; int
0x96AACF: faddp   st(1), st
0x96AAD1: push    ebx; int
0x96AAD2: fld     dword ptr [esi+1Ch]
0x96AAD5: push    ecx; int
0x96AAD6: fmul    st, st(3)
0x96AAD8: push    esi; int
0x96AAD9: push    ecx
0x96AADA: faddp   st(1), st
0x96AADC: fld     dword ptr [esi+28h]
0x96AADF: fmul    st, st(2)
0x96AAE1: faddp   st(1), st
0x96AAE3: fstp    dword ptr [eax]
0x96AAE5: fld     dword ptr [edi]
0x96AAE7: fmul    dword ptr [ecx+4]
0x96AAEA: fadd    dword ptr [esi+8]
0x96AAED: fld     dword ptr [esi+14h]
0x96AAF0: fmul    st, st(4)
0x96AAF2: faddp   st(1), st
0x96AAF4: fld     dword ptr [esi+20h]
0x96AAF7: fmul    st, st(3)
0x96AAF9: faddp   st(1), st
0x96AAFB: fld     dword ptr [esi+2Ch]
0x96AAFE: fmul    st, st(2)
0x96AB00: faddp   st(1), st
0x96AB02: fstp    dword ptr [eax+4]
0x96AB05: fld     dword ptr [edi]
0x96AB07: fmul    dword ptr [ecx+8]
0x96AB0A: fadd    dword ptr [esi+0Ch]
0x96AB0D: fld     dword ptr [esi+18h]
0x96AB10: fmulp   st(4), st
0x96AB12: faddp   st(3), st
0x96AB14: fld     dword ptr [esi+24h]
0x96AB17: fmulp   st(2), st
0x96AB19: fxch    st(2)
0x96AB1B: faddp   st(1), st
0x96AB1D: fld     dword ptr [esi+30h]
0x96AB20: fmulp   st(2), st
0x96AB22: faddp   st(1), st
0x96AB24: fstp    dword ptr [eax+8]
0x96AB27: fld     dword ptr [ebp+8]
0x96AB2A: fstp    [esp+1Ch+var_1C]; float
0x96AB2D: call    sub_9684F0
0x96AB32: add     esp, 1Ch
0x96AB35: cmp     byte ptr [ebp+24h], 0
0x96AB39: jz      loc_96C364
0x96AB3F: cmp     [esp+arg_C], 0
0x96AB44: mov     eax, [esp+arg_98]
0x96AB4B: push    eax
0x96AB4C: jge     short loc_96AB5C
0x96AB4E: lea     ecx, [esp+4+arg_4C]
0x96AB52: push    ecx
0x96AB53: mov     ecx, [esp+8+arg_60]
0x96AB57: jmp     loc_96C2C3
0x96AB5C: lea     ecx, [esp+4+arg_74]
0x96AB60: push    ecx
0x96AB61: mov     ecx, [esp+8+arg_60]
0x96AB65: call    sub_498FE0
0x96AB6A: jmp     loc_96A45D
0x96AB6F: mov     ecx, [esp+arg_C]; jumptable 0096A36B case 8
0x96AB73: fstp    st(1)
0x96AB75: fstp    st
0x96AB77: fldz
0x96AB79: fld     [esp+arg_C4]
0x96AB80: fcom    st(1)
0x96AB82: fnstsw  ax
0x96AB84: test    ah, 41h
0x96AB87: jnz     short loc_96ABA0
0x96AB89: mov     edx, ecx
0x96AB8B: fstp    st
0x96AB8D: neg     edx
0x96AB8F: mov     [esp+arg_8], edx
0x96AB93: fild    [esp+arg_8]
0x96AB97: fmul    dword ptr [esi+38h]
0x96AB9A: fstp    [esp+arg_38]
0x96AB9E: jmp     short loc_96ABBA
0x96ABA0: fcomp   st(1)
0x96ABA2: fnstsw  ax
0x96ABA4: test    ah, 5
0x96ABA7: jp      short loc_96ABB6
0x96ABA9: fild    [esp+arg_C]
0x96ABAD: fmul    dword ptr [esi+38h]
0x96ABB0: fstp    [esp+arg_38]
0x96ABB4: jmp     short loc_96ABBA
0x96ABB6: fst     [esp+arg_38]
0x96ABBA: fld     [esp+arg_B8]
0x96ABC1: fcom    st(1)
0x96ABC3: fnstsw  ax
0x96ABC5: test    ah, 41h
0x96ABC8: jnz     short loc_96ABD9
0x96ABCA: fstp    st
0x96ABCC: fild    [esp+arg_C]
0x96ABD0: fmul    dword ptr [esi+3Ch]
0x96ABD3: fstp    [esp+arg_3C]
0x96ABD7: jmp     short loc_96ABFB
0x96ABD9: fcomp   st(1)
0x96ABDB: fnstsw  ax
0x96ABDD: test    ah, 5
0x96ABE0: jp      short loc_96ABF7
0x96ABE2: mov     eax, ecx
0x96ABE4: neg     eax
0x96ABE6: mov     [esp+arg_8], eax
0x96ABEA: fild    [esp+arg_8]
0x96ABEE: fmul    dword ptr [esi+3Ch]
0x96ABF1: fstp    [esp+arg_3C]
0x96ABF5: jmp     short loc_96ABFB
0x96ABF7: fst     [esp+arg_3C]
0x96ABFB: fld     [esp+arg_B0]
0x96AC02: fcom    st(1)
0x96AC04: fnstsw  ax
0x96AC06: test    ah, 41h
0x96AC09: jnz     short loc_96AC1A
0x96AC0B: fstp    st
0x96AC0D: fild    [esp+arg_C]
0x96AC11: fmul    dword ptr [ebx+34h]
0x96AC14: fstp    [esp+arg_4C]
0x96AC18: jmp     short loc_96AC3C
0x96AC1A: fcomp   st(1)
0x96AC1C: fnstsw  ax
0x96AC1E: test    ah, 5
0x96AC21: jp      short loc_96AC38
0x96AC23: mov     edx, ecx
0x96AC25: neg     edx
0x96AC27: mov     [esp+arg_8], edx
0x96AC2B: fild    [esp+arg_8]
0x96AC2F: fmul    dword ptr [ebx+34h]
0x96AC32: fstp    [esp+arg_4C]
0x96AC36: jmp     short loc_96AC3C
0x96AC38: fst     [esp+arg_4C]
0x96AC3C: fld     [esp+arg_A8]
0x96AC43: fcom    st(1)
0x96AC45: fnstsw  ax
0x96AC47: test    ah, 41h
0x96AC4A: jnz     short loc_96AC61
0x96AC4C: neg     ecx
0x96AC4E: fstp    st
0x96AC50: mov     [esp+arg_8], ecx
0x96AC54: fild    [esp+arg_8]
0x96AC58: fmul    dword ptr [ebx+3Ch]
0x96AC5B: fstp    [esp+arg_54]
0x96AC5F: jmp     short loc_96AC7B
0x96AC61: fcomp   st(1)
0x96AC63: fnstsw  ax
0x96AC65: test    ah, 5
0x96AC68: jp      short loc_96AC77
0x96AC6A: fild    [esp+arg_C]
0x96AC6E: fmul    dword ptr [ebx+3Ch]
0x96AC71: fstp    [esp+arg_54]
0x96AC75: jmp     short loc_96AC7B
0x96AC77: fst     [esp+arg_54]
0x96AC7B: fld     qword ptr [esp+arg_CC]
0x96AC82: fmul    st, st
0x96AC84: fsubp   st(2), st
0x96AC86: fxch    st(1)
0x96AC88: fstp    dword ptr [esp+arg_14]
0x96AC8C: fld     dword ptr [esp+arg_14]
0x96AC90: fst     [esp+arg_14]
0x96AC94: fabs
0x96AC96: fstp    [esp+arg_8]
0x96AC9A: fld     [esp+arg_8]
0x96AC9E: fcomp   dword ptr ds:0A372CCh
0x96ACA4: fnstsw  ax
0x96ACA6: test    ah, 41h
0x96ACA9: jnz     loc_96AD87
0x96ACAF: lea     eax, [esp+arg_28]
0x96ACB3: fstp    st
0x96ACB5: fld     dword ptr [edi]
0x96ACB7: push    eax; int
0x96ACB8: push    ecx
0x96ACB9: lea     ecx, [esp+8+arg_214]
0x96ACC0: fstp    [esp+8+var_8]; float
0x96ACC3: push    ecx; int
0x96ACC4: call    sub_47DA10
0x96ACC9: fld     dword ptr [eax]
0x96ACCB: fadd    [esp+0Ch+arg_12C]
0x96ACD2: add     esp, 0Ch
0x96ACD5: fstp    [esp+arg_28]
0x96ACD9: mov     edx, [esp+arg_28]
0x96ACDD: fld     dword ptr [eax+4]
0x96ACE0: fadd    [esp+arg_13C]
0x96ACE7: fstp    [esp+arg_2C]
0x96ACEB: fld     dword ptr [eax+8]
0x96ACEE: mov     eax, [esp+arg_2C]
0x96ACF2: fadd    [esp+arg_15C]
0x96ACF9: mov     dword ptr [esp+arg_74], edx
0x96ACFD: lea     edx, [esp+arg_74]
0x96AD01: push    edx
0x96AD02: fstp    [esp+4+arg_30]
0x96AD06: mov     ecx, [esp+4+arg_30]
0x96AD0A: fld     [esp+4+arg_3C]
0x96AD0E: mov     [esp+4+arg_7C], ecx
0x96AD15: fmul    [esp+4+arg_16C]
0x96AD1C: mov     ecx, [esp+4+arg_A0]
0x96AD23: fld     [esp+4+arg_38]
0x96AD27: mov     dword ptr [esp+4+arg_74+4], eax
0x96AD2E: fmul    qword ptr [esp+4+arg_14C]
0x96AD35: faddp   st(1), st
0x96AD37: fstp    qword ptr [esp+4+arg_64]
0x96AD3B: call    sub_47D9E0
0x96AD40: fsubr   qword ptr [esp+arg_64]
0x96AD44: mov     ecx, [esp+arg_60]
0x96AD48: lea     eax, [esp+arg_74]
0x96AD4C: push    eax
0x96AD4D: fstp    [esp+4+arg_8]
0x96AD51: fld     [esp+4+arg_8]
0x96AD55: fmul    qword ptr [esp+4+arg_CC]
0x96AD5C: fstp    qword ptr [esp+4+arg_64]
0x96AD60: call    sub_47D9E0
0x96AD65: fadd    qword ptr [esp+arg_64]
0x96AD69: fld     [esp+arg_4C]
0x96AD6D: fmul    qword ptr [esp+arg_10C]
0x96AD74: faddp   st(1), st
0x96AD76: fld     [esp+arg_54]
0x96AD7A: fmul    [esp+arg_18C]
0x96AD81: faddp   st(1), st
0x96AD83: fdiv    [esp+arg_14]
0x96AD87: fstp    [esp+arg_34]
0x96AD8B: mov     ecx, [ebp+10h]
0x96AD8E: fld     [esp+arg_34]
0x96AD92: mov     edx, [esp+arg_9C]
0x96AD99: fld     [esp+arg_38]
0x96AD9D: mov     eax, [esp+arg_60]
0x96ADA1: fld     [esp+arg_3C]
0x96ADA5: fld     dword ptr [edi]
0x96ADA7: fmul    dword ptr [ecx]
0x96ADA9: fadd    dword ptr [edx]
0x96ADAB: mov     edx, [ebp+18h]
0x96ADAE: fld     dword ptr [eax]
0x96ADB0: mov     eax, [ebp+20h]
0x96ADB3: fmul    st, st(4)
0x96ADB5: push    eax; int
0x96ADB6: push    edi; int
0x96ADB7: push    edx; int
0x96ADB8: faddp   st(1), st
0x96ADBA: push    ebx; int
0x96ADBB: fld     dword ptr [esi+1Ch]
0x96ADBE: push    ecx; int
0x96ADBF: fmul    st, st(3)
0x96ADC1: push    esi; int
0x96ADC2: push    ecx
0x96ADC3: faddp   st(1), st
0x96ADC5: fld     dword ptr [esi+28h]
0x96ADC8: fmul    st, st(2)
0x96ADCA: faddp   st(1), st
0x96ADCC: fstp    dword ptr [eax]
0x96ADCE: fld     dword ptr [edi]
0x96ADD0: fmul    dword ptr [ecx+4]
0x96ADD3: fadd    dword ptr [esi+8]
0x96ADD6: fld     dword ptr [esi+14h]
0x96ADD9: fmul    st, st(4)
0x96ADDB: faddp   st(1), st
0x96ADDD: fld     dword ptr [esi+20h]
0x96ADE0: fmul    st, st(3)
0x96ADE2: faddp   st(1), st
0x96ADE4: fld     dword ptr [esi+2Ch]
0x96ADE7: fmul    st, st(2)
0x96ADE9: faddp   st(1), st
0x96ADEB: fstp    dword ptr [eax+4]
0x96ADEE: fld     dword ptr [edi]
0x96ADF0: fmul    dword ptr [ecx+8]
0x96ADF3: fadd    dword ptr [esi+0Ch]
0x96ADF6: fld     dword ptr [esi+18h]
0x96ADF9: fmulp   st(4), st
0x96ADFB: faddp   st(3), st
0x96ADFD: fld     dword ptr [esi+24h]
0x96AE00: fmulp   st(2), st
0x96AE02: fxch    st(2)
0x96AE04: faddp   st(1), st
0x96AE06: fld     dword ptr [esi+30h]
0x96AE09: fmulp   st(2), st
0x96AE0B: faddp   st(1), st
0x96AE0D: fstp    dword ptr [eax+8]
0x96AE10: fld     dword ptr [ebp+8]
0x96AE13: fstp    [esp+1Ch+var_1C]; float
0x96AE16: call    sub_9684F0
0x96AE1B: add     esp, 1Ch
0x96AE1E: cmp     byte ptr [ebp+24h], 0
0x96AE22: jz      loc_96C364
0x96AE28: cmp     [esp+arg_C], 0
0x96AE2D: mov     eax, [esp+arg_A0]
0x96AE34: push    eax
0x96AE35: jge     short loc_96AE48
0x96AE37: lea     ecx, [esp+4+arg_18C]
0x96AE3E: push    ecx
0x96AE3F: mov     ecx, [esp+8+arg_60]
0x96AE43: jmp     loc_96C2C3
0x96AE48: lea     ecx, [esp+4+arg_204]
0x96AE4F: push    ecx
0x96AE50: mov     ecx, [esp+8+arg_60]
0x96AE54: call    sub_498FE0
0x96AE59: jmp     loc_96A45D
0x96AE5E: fldz; jumptable 0096A36B case 9
0x96AE60: mov     ecx, [esp+arg_C]
0x96AE64: fcom    st(1)
0x96AE66: fnstsw  ax
0x96AE68: test    ah, 5
0x96AE6B: jp      short loc_96AE84
0x96AE6D: mov     edx, ecx
0x96AE6F: fstp    st(1)
0x96AE71: neg     edx
0x96AE73: mov     [esp+arg_8], edx
0x96AE77: fild    [esp+arg_8]
0x96AE7B: fmul    dword ptr [esi+38h]
0x96AE7E: fstp    [esp+arg_38]
0x96AE82: jmp     short loc_96AEA0
0x96AE84: fcom    st(1)
0x96AE86: fnstsw  ax
0x96AE88: fstp    st(1)
0x96AE8A: test    ah, 41h
0x96AE8D: jnz     short loc_96AE9C
0x96AE8F: fild    [esp+arg_C]
0x96AE93: fmul    dword ptr [esi+38h]
0x96AE96: fstp    [esp+arg_38]
0x96AE9A: jmp     short loc_96AEA0
0x96AE9C: fst     [esp+arg_38]
0x96AEA0: fld     [esp+arg_BC]
0x96AEA7: fcom    st(1)
0x96AEA9: fnstsw  ax
0x96AEAB: test    ah, 41h
0x96AEAE: jnz     short loc_96AEBF
0x96AEB0: fstp    st
0x96AEB2: fild    [esp+arg_C]
0x96AEB6: fmul    dword ptr [esi+3Ch]
0x96AEB9: fstp    [esp+arg_3C]
0x96AEBD: jmp     short loc_96AEE1
0x96AEBF: fcomp   st(1)
0x96AEC1: fnstsw  ax
0x96AEC3: test    ah, 5
0x96AEC6: jp      short loc_96AEDD
0x96AEC8: mov     eax, ecx
0x96AECA: neg     eax
0x96AECC: mov     [esp+arg_8], eax
0x96AED0: fild    [esp+arg_8]
0x96AED4: fmul    dword ptr [esi+3Ch]
0x96AED7: fstp    [esp+arg_3C]
0x96AEDB: jmp     short loc_96AEE1
0x96AEDD: fst     [esp+arg_3C]
0x96AEE1: fld     [esp+arg_AC]
0x96AEE8: fcom    st(1)
0x96AEEA: fnstsw  ax
0x96AEEC: test    ah, 41h
0x96AEEF: jnz     short loc_96AF08
0x96AEF1: mov     edx, ecx
0x96AEF3: fstp    st
0x96AEF5: neg     edx
0x96AEF7: mov     [esp+arg_8], edx
0x96AEFB: fild    [esp+arg_8]
0x96AEFF: fmul    dword ptr [ebx+34h]
0x96AF02: fstp    [esp+arg_4C]
0x96AF06: jmp     short loc_96AF22
0x96AF08: fcomp   st(1)
0x96AF0A: fnstsw  ax
0x96AF0C: test    ah, 5
0x96AF0F: jp      short loc_96AF1E
0x96AF11: fild    [esp+arg_C]
0x96AF15: fmul    dword ptr [ebx+34h]
0x96AF18: fstp    [esp+arg_4C]
0x96AF1C: jmp     short loc_96AF22
0x96AF1E: fst     [esp+arg_4C]
0x96AF22: fld     [esp+arg_A8]
0x96AF29: fcom    st(1)
0x96AF2B: fnstsw  ax
0x96AF2D: test    ah, 41h
0x96AF30: jnz     short loc_96AF41
0x96AF32: fstp    st
0x96AF34: fild    [esp+arg_C]
0x96AF38: fmul    dword ptr [ebx+38h]
0x96AF3B: fstp    [esp+arg_50]
0x96AF3F: jmp     short loc_96AF61
0x96AF41: fcomp   st(1)
0x96AF43: fnstsw  ax
0x96AF45: test    ah, 5
0x96AF48: jp      short loc_96AF5D
0x96AF4A: neg     ecx
0x96AF4C: mov     [esp+arg_8], ecx
0x96AF50: fild    [esp+arg_8]
0x96AF54: fmul    dword ptr [ebx+38h]
0x96AF57: fstp    [esp+arg_50]
0x96AF5B: jmp     short loc_96AF61
0x96AF5D: fst     [esp+arg_50]
0x96AF61: fld     st(1)
0x96AF63: fmulp   st(2), st
0x96AF65: fxch    st(2)
0x96AF67: fsubrp  st(1), st
0x96AF69: fstp    dword ptr [esp+arg_14]
0x96AF6D: fld     dword ptr [esp+arg_14]
0x96AF71: fst     [esp+arg_14]
0x96AF75: fabs
0x96AF77: fstp    [esp+arg_8]
0x96AF7B: fld     [esp+arg_8]
0x96AF7F: fcomp   dword ptr ds:0A372CCh
0x96AF85: fnstsw  ax
0x96AF87: test    ah, 41h
0x96AF8A: jnz     loc_96B068
0x96AF90: lea     eax, [esp+arg_28]
0x96AF94: fstp    st
0x96AF96: fld     dword ptr [edi]
0x96AF98: push    eax; int
0x96AF99: push    ecx
0x96AF9A: lea     ecx, [esp+8+arg_224]
0x96AFA1: fstp    [esp+8+var_8]; float
0x96AFA4: push    ecx; int
0x96AFA5: call    sub_47DA10
0x96AFAA: fld     dword ptr [eax]
0x96AFAC: fadd    [esp+0Ch+arg_12C]
0x96AFB3: add     esp, 0Ch
0x96AFB6: fstp    [esp+arg_28]
0x96AFBA: mov     edx, [esp+arg_28]
0x96AFBE: fld     dword ptr [eax+4]
0x96AFC1: fadd    [esp+arg_13C]
0x96AFC8: fstp    [esp+arg_2C]
0x96AFCC: fld     dword ptr [eax+8]
0x96AFCF: mov     eax, [esp+arg_2C]
0x96AFD3: fadd    [esp+arg_15C]
0x96AFDA: mov     dword ptr [esp+arg_74], edx
0x96AFDE: lea     edx, [esp+arg_74]
0x96AFE2: push    edx
0x96AFE3: fstp    [esp+4+arg_30]
0x96AFE7: mov     ecx, [esp+4+arg_30]
0x96AFEB: fld     [esp+4+arg_3C]
0x96AFEF: mov     [esp+4+arg_7C], ecx
0x96AFF6: fmul    [esp+4+arg_FC]
0x96AFFD: mov     ecx, [esp+4+arg_A4]
0x96B004: fld     [esp+4+arg_38]
0x96B008: mov     dword ptr [esp+4+arg_74+4], eax
0x96B00F: fmul    qword ptr [esp+4+arg_EC]
0x96B016: faddp   st(1), st
0x96B018: fstp    qword ptr [esp+4+arg_64]
0x96B01C: call    sub_47D9E0
0x96B021: fsubr   qword ptr [esp+arg_64]
0x96B025: mov     ecx, [esp+arg_60]
0x96B029: lea     eax, [esp+arg_74]
0x96B02D: push    eax
0x96B02E: fstp    [esp+4+arg_8]
0x96B032: fld     [esp+4+arg_8]
0x96B036: fmul    [esp+4+arg_18C]
0x96B03D: fstp    qword ptr [esp+4+arg_64]
0x96B041: call    sub_47D9E0
0x96B046: fadd    qword ptr [esp+arg_64]
0x96B04A: fld     [esp+arg_4C]
0x96B04E: fmul    qword ptr [esp+arg_10C]
0x96B055: faddp   st(1), st
0x96B057: fld     [esp+arg_50]
0x96B05B: fmul    qword ptr [esp+arg_CC]
0x96B062: faddp   st(1), st
0x96B064: fdiv    [esp+arg_14]
0x96B068: fstp    [esp+arg_34]
0x96B06C: mov     ecx, [ebp+10h]
0x96B06F: fld     [esp+arg_34]
0x96B073: mov     edx, [esp+arg_9C]
0x96B07A: fld     [esp+arg_38]
0x96B07E: mov     eax, [esp+arg_60]
0x96B082: fld     [esp+arg_3C]
0x96B086: fld     dword ptr [edi]
0x96B088: fmul    dword ptr [ecx]
0x96B08A: fadd    dword ptr [edx]
0x96B08C: mov     edx, [ebp+18h]
0x96B08F: fld     dword ptr [eax]
0x96B091: mov     eax, [ebp+20h]
0x96B094: fmul    st, st(4)
0x96B096: push    eax; int
0x96B097: push    edi; int
0x96B098: push    edx; int
0x96B099: faddp   st(1), st
0x96B09B: push    ebx; int
0x96B09C: fld     dword ptr [esi+1Ch]
0x96B09F: push    ecx; int
0x96B0A0: fmul    st, st(3)
0x96B0A2: push    esi; int
0x96B0A3: push    ecx
0x96B0A4: faddp   st(1), st
0x96B0A6: fld     dword ptr [esi+28h]
0x96B0A9: fmul    st, st(2)
0x96B0AB: faddp   st(1), st
0x96B0AD: fstp    dword ptr [eax]
0x96B0AF: fld     dword ptr [edi]
0x96B0B1: fmul    dword ptr [ecx+4]
0x96B0B4: fadd    dword ptr [esi+8]
0x96B0B7: fld     dword ptr [esi+14h]
0x96B0BA: fmul    st, st(4)
0x96B0BC: faddp   st(1), st
0x96B0BE: fld     dword ptr [esi+20h]
0x96B0C1: fmul    st, st(3)
0x96B0C3: faddp   st(1), st
0x96B0C5: fld     dword ptr [esi+2Ch]
0x96B0C8: fmul    st, st(2)
0x96B0CA: faddp   st(1), st
0x96B0CC: fstp    dword ptr [eax+4]
0x96B0CF: fld     dword ptr [edi]
0x96B0D1: fmul    dword ptr [ecx+8]
0x96B0D4: fadd    dword ptr [esi+0Ch]
0x96B0D7: fld     dword ptr [esi+18h]
0x96B0DA: fmulp   st(4), st
0x96B0DC: faddp   st(3), st
0x96B0DE: fld     dword ptr [esi+24h]
0x96B0E1: fmulp   st(2), st
0x96B0E3: fxch    st(2)
0x96B0E5: faddp   st(1), st
0x96B0E7: fld     dword ptr [esi+30h]
0x96B0EA: fmulp   st(2), st
0x96B0EC: faddp   st(1), st
0x96B0EE: fstp    dword ptr [eax+8]
0x96B0F1: fld     dword ptr [ebp+8]
0x96B0F4: fstp    [esp+1Ch+var_1C]; float
0x96B0F7: call    sub_9684F0
0x96B0FC: add     esp, 1Ch
0x96B0FF: cmp     byte ptr [ebp+24h], 0
0x96B103: jz      loc_96C364
0x96B109: cmp     [esp+arg_C], 0
0x96B10E: mov     eax, [esp+arg_A4]
0x96B115: push    eax
0x96B116: jge     short loc_96B129
0x96B118: lea     ecx, [esp+4+arg_1CC]
0x96B11F: push    ecx
0x96B120: mov     ecx, [esp+8+arg_60]
0x96B124: jmp     loc_96C2C3
0x96B129: lea     ecx, [esp+4+arg_1AC]
0x96B130: push    ecx
0x96B131: mov     ecx, [esp+8+arg_60]
0x96B135: call    sub_498FE0
0x96B13A: jmp     loc_96A45D
0x96B13F: fstp    st(1); jumptable 0096A36B case 10
0x96B141: fstp    st
0x96B143: fldz
0x96B145: fld     [esp+arg_C0]
0x96B14C: fcom    st(1)
0x96B14E: fnstsw  ax
0x96B150: test    ah, 41h
0x96B153: jnz     short loc_96B164
0x96B155: fstp    st
0x96B157: fild    [esp+arg_C]
0x96B15B: fmul    dword ptr [esi+34h]
0x96B15E: fstp    [esp+arg_34]
0x96B162: jmp     short loc_96B18A
0x96B164: fcomp   st(1)
0x96B166: fnstsw  ax
0x96B168: test    ah, 5
0x96B16B: jp      short loc_96B186
0x96B16D: mov     ecx, [esp+arg_C]
0x96B171: mov     edx, ecx
0x96B173: neg     edx
0x96B175: mov     [esp+arg_8], edx
0x96B179: fild    [esp+arg_8]
0x96B17D: fmul    dword ptr [esi+34h]
0x96B180: fstp    [esp+arg_34]
0x96B184: jmp     short loc_96B18E
0x96B186: fst     [esp+arg_34]
0x96B18A: mov     ecx, [esp+arg_C]
0x96B18E: fld     [esp+arg_A8]
0x96B195: fcom    st(1)
0x96B197: fnstsw  ax
0x96B199: test    ah, 41h
0x96B19C: jnz     short loc_96B1B5
0x96B19E: mov     eax, ecx
0x96B1A0: fstp    st
0x96B1A2: neg     eax
0x96B1A4: mov     [esp+arg_8], eax
0x96B1A8: fild    [esp+arg_8]
0x96B1AC: fmul    dword ptr [esi+3Ch]
0x96B1AF: fstp    [esp+arg_3C]
0x96B1B3: jmp     short loc_96B1CF
0x96B1B5: fcomp   st(1)
0x96B1B7: fnstsw  ax
0x96B1B9: test    ah, 5
0x96B1BC: jp      short loc_96B1CB
0x96B1BE: fild    [esp+arg_C]
0x96B1C2: fmul    dword ptr [esi+3Ch]
0x96B1C5: fstp    [esp+arg_3C]
0x96B1C9: jmp     short loc_96B1CF
0x96B1CB: fst     [esp+arg_3C]
0x96B1CF: fld     [esp+arg_BC]
0x96B1D6: fcom    st(1)
0x96B1D8: fnstsw  ax
0x96B1DA: test    ah, 41h
0x96B1DD: jnz     short loc_96B1F6
0x96B1DF: mov     edx, ecx
0x96B1E1: fstp    st
0x96B1E3: neg     edx
0x96B1E5: mov     [esp+arg_8], edx
0x96B1E9: fild    [esp+arg_8]
0x96B1ED: fmul    dword ptr [ebx+38h]
0x96B1F0: fstp    [esp+arg_50]
0x96B1F4: jmp     short loc_96B210
0x96B1F6: fcomp   st(1)
0x96B1F8: fnstsw  ax
0x96B1FA: test    ah, 5
0x96B1FD: jp      short loc_96B20C
0x96B1FF: fild    [esp+arg_C]
0x96B203: fmul    dword ptr [ebx+38h]
0x96B206: fstp    [esp+arg_50]
0x96B20A: jmp     short loc_96B210
0x96B20C: fst     [esp+arg_50]
0x96B210: fld     [esp+arg_B8]
0x96B217: fcom    st(1)
0x96B219: fnstsw  ax
0x96B21B: test    ah, 41h
0x96B21E: jnz     short loc_96B22F
0x96B220: fstp    st
0x96B222: fild    [esp+arg_C]
0x96B226: fmul    dword ptr [ebx+3Ch]
0x96B229: fstp    [esp+arg_54]
0x96B22D: jmp     short loc_96B24F
0x96B22F: fcomp   st(1)
0x96B231: fnstsw  ax
0x96B233: test    ah, 5
0x96B236: jp      short loc_96B24B
0x96B238: neg     ecx
0x96B23A: mov     [esp+arg_8], ecx
0x96B23E: fild    [esp+arg_8]
0x96B242: fmul    dword ptr [ebx+3Ch]
0x96B245: fstp    [esp+arg_54]
0x96B249: jmp     short loc_96B24F
0x96B24B: fst     [esp+arg_54]
0x96B24F: fld     [esp+arg_11C]
0x96B256: fmul    st, st
0x96B258: fsubp   st(2), st
0x96B25A: fxch    st(1)
0x96B25C: fstp    dword ptr [esp+arg_14]
0x96B260: fld     dword ptr [esp+arg_14]
0x96B264: fst     [esp+arg_14]
0x96B268: fabs
0x96B26A: fstp    [esp+arg_8]
0x96B26E: fld     [esp+arg_8]
0x96B272: fcomp   dword ptr ds:0A372CCh
0x96B278: fnstsw  ax
0x96B27A: test    ah, 41h
0x96B27D: jnz     loc_96B35E
0x96B283: lea     eax, [esp+arg_28]
0x96B287: fstp    st
0x96B289: fld     dword ptr [edi]
0x96B28B: push    eax; int
0x96B28C: push    ecx
0x96B28D: lea     ecx, [esp+8+arg_19C]
0x96B294: fstp    [esp+8+var_8]; float
0x96B297: push    ecx; int
0x96B298: call    sub_47DA10
0x96B29D: fld     dword ptr [eax]
0x96B29F: fadd    [esp+0Ch+arg_12C]
0x96B2A6: add     esp, 0Ch
0x96B2A9: fstp    [esp+arg_28]
0x96B2AD: mov     edx, [esp+arg_28]
0x96B2B1: fld     dword ptr [eax+4]
0x96B2B4: fadd    [esp+arg_13C]
0x96B2BB: fstp    [esp+arg_2C]
0x96B2BF: fld     dword ptr [eax+8]
0x96B2C2: mov     eax, [esp+arg_2C]
0x96B2C6: fadd    [esp+arg_15C]
0x96B2CD: mov     dword ptr [esp+arg_74], edx
0x96B2D1: lea     edx, [esp+arg_74]
0x96B2D5: push    edx
0x96B2D6: fstp    [esp+4+arg_30]
0x96B2DA: mov     ecx, [esp+4+arg_30]
0x96B2DE: fld     [esp+4+arg_34]
0x96B2E2: mov     [esp+4+arg_7C], ecx
0x96B2E9: fmul    qword ptr [esp+4+arg_10C]
0x96B2F0: mov     ecx, [esp+4+arg_98]
0x96B2F7: fld     [esp+4+arg_3C]
0x96B2FB: mov     dword ptr [esp+4+arg_74+4], eax
0x96B302: fmul    qword ptr [esp+4+arg_17C]
0x96B309: faddp   st(1), st
0x96B30B: fstp    qword ptr [esp+4+arg_64]
0x96B30F: call    sub_47D9E0
0x96B314: fsubr   qword ptr [esp+arg_64]
0x96B318: mov     ecx, [esp+arg_88]
0x96B31F: lea     eax, [esp+arg_74]
0x96B323: push    eax
0x96B324: fstp    [esp+4+arg_8]
0x96B328: fld     [esp+4+arg_8]
0x96B32C: fmul    [esp+4+arg_11C]
0x96B333: fstp    qword ptr [esp+4+arg_64]
0x96B337: call    sub_47D9E0
0x96B33C: fadd    qword ptr [esp+arg_64]
0x96B340: fld     [esp+arg_50]
0x96B344: fmul    qword ptr [esp+arg_14C]
0x96B34B: faddp   st(1), st
0x96B34D: fld     [esp+arg_54]
0x96B351: fmul    qword ptr [esp+arg_EC]
0x96B358: faddp   st(1), st
0x96B35A: fdiv    [esp+arg_14]
0x96B35E: fstp    [esp+arg_38]
0x96B362: mov     ecx, [ebp+10h]
0x96B365: fld     [esp+arg_34]
0x96B369: mov     edx, [esp+arg_9C]
0x96B370: fld     [esp+arg_38]
0x96B374: mov     eax, [esp+arg_60]
0x96B378: fld     [esp+arg_3C]
0x96B37C: fld     dword ptr [edi]
0x96B37E: fmul    dword ptr [ecx]
0x96B380: fadd    dword ptr [edx]
0x96B382: mov     edx, [ebp+18h]
0x96B385: fld     dword ptr [eax]
0x96B387: mov     eax, [ebp+20h]
0x96B38A: fmul    st, st(4)
0x96B38C: push    eax; int
0x96B38D: push    edi; int
0x96B38E: push    edx; int
0x96B38F: faddp   st(1), st
0x96B391: push    ebx; int
0x96B392: fld     dword ptr [esi+1Ch]
0x96B395: push    ecx; int
0x96B396: fmul    st, st(3)
0x96B398: push    esi; int
0x96B399: push    ecx
0x96B39A: faddp   st(1), st
0x96B39C: fld     dword ptr [esi+28h]
0x96B39F: fmul    st, st(2)
0x96B3A1: faddp   st(1), st
0x96B3A3: fstp    dword ptr [eax]
0x96B3A5: fld     dword ptr [edi]
0x96B3A7: fmul    dword ptr [ecx+4]
0x96B3AA: fadd    dword ptr [esi+8]
0x96B3AD: fld     dword ptr [esi+14h]
0x96B3B0: fmul    st, st(4)
0x96B3B2: faddp   st(1), st
0x96B3B4: fld     dword ptr [esi+20h]
0x96B3B7: fmul    st, st(3)
0x96B3B9: faddp   st(1), st
0x96B3BB: fld     dword ptr [esi+2Ch]
0x96B3BE: fmul    st, st(2)
0x96B3C0: faddp   st(1), st
0x96B3C2: fstp    dword ptr [eax+4]
0x96B3C5: fld     dword ptr [edi]
0x96B3C7: fmul    dword ptr [ecx+8]
0x96B3CA: fadd    dword ptr [esi+0Ch]
0x96B3CD: fld     dword ptr [esi+18h]
0x96B3D0: fmulp   st(4), st
0x96B3D2: faddp   st(3), st
0x96B3D4: fld     dword ptr [esi+24h]
0x96B3D7: fmulp   st(2), st
0x96B3D9: fxch    st(2)
0x96B3DB: faddp   st(1), st
0x96B3DD: fld     dword ptr [esi+30h]
0x96B3E0: fmulp   st(2), st
0x96B3E2: faddp   st(1), st
0x96B3E4: fstp    dword ptr [eax+8]
0x96B3E7: fld     dword ptr [ebp+8]
0x96B3EA: fstp    [esp+1Ch+var_1C]; float
0x96B3ED: call    sub_9684F0
0x96B3F2: add     esp, 1Ch
0x96B3F5: cmp     byte ptr [ebp+24h], 0
0x96B3F9: jz      loc_96C364
0x96B3FF: cmp     [esp+arg_C], 0
0x96B404: mov     eax, [esp+arg_98]
0x96B40B: push    eax
0x96B40C: jge     short loc_96B422
0x96B40E: lea     ecx, [esp+4+arg_FC]
0x96B415: push    ecx
0x96B416: mov     ecx, [esp+8+arg_88]
0x96B41D: jmp     loc_96C2C3
0x96B422: lea     ecx, [esp+4+arg_EC]
0x96B429: push    ecx
0x96B42A: mov     ecx, [esp+8+arg_88]
0x96B431: call    sub_498FE0
0x96B436: jmp     loc_96A45D
0x96B43B: fstp    st(1); jumptable 0096A36B case 11
0x96B43D: fstp    st
0x96B43F: fldz
0x96B441: fld     [esp+arg_C4]
0x96B448: fcom    st(1)
0x96B44A: fnstsw  ax
0x96B44C: test    ah, 41h
0x96B44F: jnz     short loc_96B460
0x96B451: fstp    st
0x96B453: fild    [esp+arg_C]
0x96B457: fmul    dword ptr [esi+34h]
0x96B45A: fstp    [esp+arg_34]
0x96B45E: jmp     short loc_96B486
0x96B460: fcomp   st(1)
0x96B462: fnstsw  ax
0x96B464: test    ah, 5
0x96B467: jp      short loc_96B482
0x96B469: mov     ecx, [esp+arg_C]
0x96B46D: mov     edx, ecx
0x96B46F: neg     edx
0x96B471: mov     [esp+arg_8], edx
0x96B475: fild    [esp+arg_8]
0x96B479: fmul    dword ptr [esi+34h]
0x96B47C: fstp    [esp+arg_34]
0x96B480: jmp     short loc_96B48A
0x96B482: fst     [esp+arg_34]
0x96B486: mov     ecx, [esp+arg_C]
0x96B48A: fld     [esp+arg_AC]
0x96B491: fcom    st(1)
0x96B493: fnstsw  ax
0x96B495: test    ah, 41h
0x96B498: jnz     short loc_96B4B1
0x96B49A: mov     eax, ecx
0x96B49C: fstp    st
0x96B49E: neg     eax
0x96B4A0: mov     [esp+arg_8], eax
0x96B4A4: fild    [esp+arg_8]
0x96B4A8: fmul    dword ptr [esi+3Ch]
0x96B4AB: fstp    [esp+arg_3C]
0x96B4AF: jmp     short loc_96B4CB
0x96B4B1: fcomp   st(1)
0x96B4B3: fnstsw  ax
0x96B4B5: test    ah, 5
0x96B4B8: jp      short loc_96B4C7
0x96B4BA: fild    [esp+arg_C]
0x96B4BE: fmul    dword ptr [esi+3Ch]
0x96B4C1: fstp    [esp+arg_3C]
0x96B4C5: jmp     short loc_96B4CB
0x96B4C7: fst     [esp+arg_3C]
0x96B4CB: fld     [esp+arg_BC]
0x96B4D2: fcom    st(1)
0x96B4D4: fnstsw  ax
0x96B4D6: test    ah, 41h
0x96B4D9: jnz     short loc_96B4EA
0x96B4DB: fstp    st
0x96B4DD: fild    [esp+arg_C]
0x96B4E1: fmul    dword ptr [ebx+34h]
0x96B4E4: fstp    [esp+arg_4C]
0x96B4E8: jmp     short loc_96B50C
0x96B4EA: fcomp   st(1)
0x96B4EC: fnstsw  ax
0x96B4EE: test    ah, 5
0x96B4F1: jp      short loc_96B508
0x96B4F3: mov     edx, ecx
0x96B4F5: neg     edx
0x96B4F7: mov     [esp+arg_8], edx
0x96B4FB: fild    [esp+arg_8]
0x96B4FF: fmul    dword ptr [ebx+34h]
0x96B502: fstp    [esp+arg_4C]
0x96B506: jmp     short loc_96B50C
0x96B508: fst     [esp+arg_4C]
0x96B50C: fld     [esp+arg_B4]
0x96B513: fcom    st(1)
0x96B515: fnstsw  ax
0x96B517: test    ah, 41h
0x96B51A: jnz     short loc_96B531
0x96B51C: neg     ecx
0x96B51E: fstp    st
0x96B520: mov     [esp+arg_8], ecx
0x96B524: fild    [esp+arg_8]
0x96B528: fmul    dword ptr [ebx+3Ch]
0x96B52B: fstp    [esp+arg_54]
0x96B52F: jmp     short loc_96B54B
0x96B531: fcomp   st(1)
0x96B533: fnstsw  ax
0x96B535: test    ah, 5
0x96B538: jp      short loc_96B547
0x96B53A: fild    [esp+arg_C]
0x96B53E: fmul    dword ptr [ebx+3Ch]
0x96B541: fstp    [esp+arg_54]
0x96B545: jmp     short loc_96B54B
0x96B547: fst     [esp+arg_54]
0x96B54B: fld     qword ptr [esp+arg_14C]
0x96B552: fmul    st, st
0x96B554: fsubp   st(2), st
0x96B556: fxch    st(1)
0x96B558: fstp    dword ptr [esp+arg_14]
0x96B55C: fld     dword ptr [esp+arg_14]
0x96B560: fst     [esp+arg_14]
0x96B564: fabs
0x96B566: fstp    [esp+arg_8]
0x96B56A: fld     [esp+arg_8]
0x96B56E: fcomp   dword ptr ds:0A372CCh
0x96B574: fnstsw  ax
0x96B576: test    ah, 41h
0x96B579: jnz     loc_96B65A
0x96B57F: lea     eax, [esp+arg_28]
0x96B583: fstp    st
0x96B585: fld     dword ptr [edi]
0x96B587: push    eax; int
0x96B588: push    ecx
0x96B589: lea     ecx, [esp+8+arg_10C]
0x96B590: fstp    [esp+8+var_8]; float
0x96B593: push    ecx; int
0x96B594: call    sub_47DA10
0x96B599: fld     dword ptr [eax]
0x96B59B: fadd    [esp+0Ch+arg_12C]
0x96B5A2: add     esp, 0Ch
0x96B5A5: fstp    [esp+arg_28]
0x96B5A9: mov     edx, [esp+arg_28]
0x96B5AD: fld     dword ptr [eax+4]
0x96B5B0: fadd    [esp+arg_13C]
0x96B5B7: fstp    [esp+arg_2C]
0x96B5BB: fld     dword ptr [eax+8]
0x96B5BE: mov     eax, [esp+arg_2C]
0x96B5C2: fadd    [esp+arg_15C]
0x96B5C9: mov     dword ptr [esp+arg_74], edx
0x96B5CD: lea     edx, [esp+arg_74]
0x96B5D1: push    edx
0x96B5D2: fstp    [esp+4+arg_30]
0x96B5D6: mov     ecx, [esp+4+arg_30]
0x96B5DA: fld     [esp+4+arg_34]
0x96B5DE: mov     [esp+4+arg_7C], ecx
0x96B5E5: fmul    qword ptr [esp+4+arg_CC]
0x96B5EC: mov     ecx, [esp+4+arg_A0]
0x96B5F3: fld     [esp+4+arg_3C]
0x96B5F7: mov     dword ptr [esp+4+arg_74+4], eax
0x96B5FE: fmul    [esp+4+arg_16C]
0x96B605: faddp   st(1), st
0x96B607: fstp    qword ptr [esp+4+arg_64]
0x96B60B: call    sub_47D9E0
0x96B610: fsubr   qword ptr [esp+arg_64]
0x96B614: mov     ecx, [esp+arg_88]
0x96B61B: lea     eax, [esp+arg_74]
0x96B61F: push    eax
0x96B620: fstp    [esp+4+arg_8]
0x96B624: fld     [esp+4+arg_8]
0x96B628: fmul    qword ptr [esp+4+arg_14C]
0x96B62F: fstp    qword ptr [esp+4+arg_64]
0x96B633: call    sub_47D9E0
0x96B638: fadd    qword ptr [esp+arg_64]
0x96B63C: fld     [esp+arg_4C]
0x96B640: fmul    [esp+arg_11C]
0x96B647: faddp   st(1), st
0x96B649: fld     [esp+arg_54]
0x96B64D: fmul    qword ptr [esp+arg_EC]
0x96B654: faddp   st(1), st
0x96B656: fdiv    [esp+arg_14]
0x96B65A: fstp    [esp+arg_38]
0x96B65E: mov     ecx, [ebp+10h]
0x96B661: fld     [esp+arg_34]
0x96B665: mov     edx, [esp+arg_9C]
0x96B66C: fld     [esp+arg_38]
0x96B670: mov     eax, [esp+arg_60]
0x96B674: fld     [esp+arg_3C]
0x96B678: fld     dword ptr [edi]
0x96B67A: fmul    dword ptr [ecx]
0x96B67C: fadd    dword ptr [edx]
0x96B67E: mov     edx, [ebp+18h]
0x96B681: fld     dword ptr [eax]
0x96B683: mov     eax, [ebp+20h]
0x96B686: fmul    st, st(4)
0x96B688: push    eax; int
0x96B689: push    edi; int
0x96B68A: push    edx; int
0x96B68B: faddp   st(1), st
0x96B68D: push    ebx; int
0x96B68E: fld     dword ptr [esi+1Ch]
0x96B691: push    ecx; int
0x96B692: fmul    st, st(3)
0x96B694: push    esi; int
0x96B695: push    ecx
0x96B696: faddp   st(1), st
0x96B698: fld     dword ptr [esi+28h]
0x96B69B: fmul    st, st(2)
0x96B69D: faddp   st(1), st
0x96B69F: fstp    dword ptr [eax]
0x96B6A1: fld     dword ptr [edi]
0x96B6A3: fmul    dword ptr [ecx+4]
0x96B6A6: fadd    dword ptr [esi+8]
0x96B6A9: fld     dword ptr [esi+14h]
0x96B6AC: fmul    st, st(4)
0x96B6AE: faddp   st(1), st
0x96B6B0: fld     dword ptr [esi+20h]
0x96B6B3: fmul    st, st(3)
0x96B6B5: faddp   st(1), st
0x96B6B7: fld     dword ptr [esi+2Ch]
0x96B6BA: fmul    st, st(2)
0x96B6BC: faddp   st(1), st
0x96B6BE: fstp    dword ptr [eax+4]
0x96B6C1: fld     dword ptr [edi]
0x96B6C3: fmul    dword ptr [ecx+8]
0x96B6C6: fadd    dword ptr [esi+0Ch]
0x96B6C9: fld     dword ptr [esi+18h]
0x96B6CC: fmulp   st(4), st
0x96B6CE: faddp   st(3), st
0x96B6D0: fld     dword ptr [esi+24h]
0x96B6D3: fmulp   st(2), st
0x96B6D5: fxch    st(2)
0x96B6D7: faddp   st(1), st
0x96B6D9: fld     dword ptr [esi+30h]
0x96B6DC: fmulp   st(2), st
0x96B6DE: faddp   st(1), st
0x96B6E0: fstp    dword ptr [eax+8]
0x96B6E3: fld     dword ptr [ebp+8]
0x96B6E6: fstp    [esp+1Ch+var_1C]; float
0x96B6E9: call    sub_9684F0
0x96B6EE: add     esp, 1Ch
0x96B6F1: cmp     byte ptr [ebp+24h], 0
0x96B6F5: jz      loc_96C364
0x96B6FB: cmp     [esp+arg_C], 0
0x96B700: mov     eax, [esp+arg_A0]
0x96B707: push    eax
0x96B708: jge     short loc_96B71E
0x96B70A: lea     ecx, [esp+4+arg_CC]
0x96B711: push    ecx
0x96B712: mov     ecx, [esp+8+arg_88]
0x96B719: jmp     loc_96C2C3
0x96B71E: lea     ecx, [esp+4+arg_16C]
0x96B725: push    ecx
0x96B726: mov     ecx, [esp+8+arg_88]
0x96B72D: call    sub_498FE0
0x96B732: jmp     loc_96A45D
0x96B737: fstp    st(1); jumptable 0096A36B case 12
0x96B739: fldz
0x96B73B: fcom    st(1)
0x96B73D: fnstsw  ax
0x96B73F: test    ah, 5
0x96B742: jp      short loc_96B753
0x96B744: fstp    st(1)
0x96B746: fild    [esp+arg_C]
0x96B74A: fmul    dword ptr [esi+34h]
0x96B74D: fstp    [esp+arg_34]
0x96B751: jmp     short loc_96B77B
0x96B753: fcom    st(1)
0x96B755: fnstsw  ax
0x96B757: fstp    st(1)
0x96B759: test    ah, 41h
0x96B75C: jnz     short loc_96B777
0x96B75E: mov     ecx, [esp+arg_C]
0x96B762: mov     edx, ecx
0x96B764: neg     edx
0x96B766: mov     [esp+arg_8], edx
0x96B76A: fild    [esp+arg_8]
0x96B76E: fmul    dword ptr [esi+34h]
0x96B771: fstp    [esp+arg_34]
0x96B775: jmp     short loc_96B77F
0x96B777: fst     [esp+arg_34]
0x96B77B: mov     ecx, [esp+arg_C]
0x96B77F: fld     [esp+arg_B0]
0x96B786: fcom    st(1)
0x96B788: fnstsw  ax
0x96B78A: test    ah, 41h
0x96B78D: jnz     short loc_96B7A6
0x96B78F: mov     eax, ecx
0x96B791: fstp    st
0x96B793: neg     eax
0x96B795: mov     [esp+arg_8], eax
0x96B799: fild    [esp+arg_8]
0x96B79D: fmul    dword ptr [esi+3Ch]
0x96B7A0: fstp    [esp+arg_3C]
0x96B7A4: jmp     short loc_96B7C0
0x96B7A6: fcomp   st(1)
0x96B7A8: fnstsw  ax
0x96B7AA: test    ah, 5
0x96B7AD: jp      short loc_96B7BC
0x96B7AF: fild    [esp+arg_C]
0x96B7B3: fmul    dword ptr [esi+3Ch]
0x96B7B6: fstp    [esp+arg_3C]
0x96B7BA: jmp     short loc_96B7C0
0x96B7BC: fst     [esp+arg_3C]
0x96B7C0: fld     [esp+arg_B8]
0x96B7C7: fcom    st(1)
0x96B7C9: fnstsw  ax
0x96B7CB: test    ah, 41h
0x96B7CE: jnz     short loc_96B7E7
0x96B7D0: mov     edx, ecx
0x96B7D2: fstp    st
0x96B7D4: neg     edx
0x96B7D6: mov     [esp+arg_8], edx
0x96B7DA: fild    [esp+arg_8]
0x96B7DE: fmul    dword ptr [ebx+34h]
0x96B7E1: fstp    [esp+arg_4C]
0x96B7E5: jmp     short loc_96B801
0x96B7E7: fcomp   st(1)
0x96B7E9: fnstsw  ax
0x96B7EB: test    ah, 5
0x96B7EE: jp      short loc_96B7FD
0x96B7F0: fild    [esp+arg_C]
0x96B7F4: fmul    dword ptr [ebx+34h]
0x96B7F7: fstp    [esp+arg_4C]
0x96B7FB: jmp     short loc_96B801
0x96B7FD: fst     [esp+arg_4C]
0x96B801: fld     [esp+arg_B4]
0x96B808: fcom    st(1)
0x96B80A: fnstsw  ax
0x96B80C: test    ah, 41h
0x96B80F: jnz     short loc_96B820
0x96B811: fstp    st
0x96B813: fild    [esp+arg_C]
0x96B817: fmul    dword ptr [ebx+38h]
0x96B81A: fstp    [esp+arg_50]
0x96B81E: jmp     short loc_96B840
0x96B820: fcomp   st(1)
0x96B822: fnstsw  ax
0x96B824: test    ah, 5
0x96B827: jp      short loc_96B83C
0x96B829: neg     ecx
0x96B82B: mov     [esp+arg_8], ecx
0x96B82F: fild    [esp+arg_8]
0x96B833: fmul    dword ptr [ebx+38h]
0x96B836: fstp    [esp+arg_50]
0x96B83A: jmp     short loc_96B840
0x96B83C: fst     [esp+arg_50]
0x96B840: fld     qword ptr [esp+arg_EC]
0x96B847: fmul    st, st
0x96B849: fsubp   st(2), st
0x96B84B: fxch    st(1)
0x96B84D: fstp    dword ptr [esp+arg_14]
0x96B851: fld     dword ptr [esp+arg_14]
0x96B855: fst     [esp+arg_14]
0x96B859: fabs
0x96B85B: fstp    [esp+arg_8]
0x96B85F: fld     [esp+arg_8]
0x96B863: fcomp   dword ptr ds:0A372CCh
0x96B869: fnstsw  ax
0x96B86B: test    ah, 41h
0x96B86E: jnz     loc_96B94F
0x96B874: lea     eax, [esp+arg_28]
0x96B878: fstp    st
0x96B87A: fld     dword ptr [edi]
0x96B87C: push    eax; int
0x96B87D: push    ecx
0x96B87E: lea     ecx, [esp+8+arg_17C]
0x96B885: fstp    [esp+8+var_8]; float
0x96B888: push    ecx; int
0x96B889: call    sub_47DA10
0x96B88E: fld     dword ptr [eax]
0x96B890: fadd    [esp+0Ch+arg_12C]
0x96B897: add     esp, 0Ch
0x96B89A: fstp    [esp+arg_28]
0x96B89E: mov     edx, [esp+arg_28]
0x96B8A2: fld     dword ptr [eax+4]
0x96B8A5: fadd    [esp+arg_13C]
0x96B8AC: fstp    [esp+arg_2C]
0x96B8B0: fld     dword ptr [eax+8]
0x96B8B3: mov     eax, [esp+arg_2C]
0x96B8B7: fadd    [esp+arg_15C]
0x96B8BE: mov     dword ptr [esp+arg_74], edx
0x96B8C2: lea     edx, [esp+arg_74]
0x96B8C6: push    edx
0x96B8C7: fstp    [esp+4+arg_30]
0x96B8CB: mov     ecx, [esp+4+arg_30]
0x96B8CF: fld     [esp+4+arg_34]
0x96B8D3: mov     [esp+4+arg_7C], ecx
0x96B8DA: fmul    [esp+4+arg_18C]
0x96B8E1: mov     ecx, [esp+4+arg_A4]
0x96B8E8: fld     [esp+4+arg_3C]
0x96B8EC: mov     dword ptr [esp+4+arg_74+4], eax
0x96B8F3: fmul    [esp+4+arg_FC]
0x96B8FA: faddp   st(1), st
0x96B8FC: fstp    qword ptr [esp+4+arg_64]
0x96B900: call    sub_47D9E0
0x96B905: fsubr   qword ptr [esp+arg_64]
0x96B909: mov     ecx, [esp+arg_88]
0x96B910: lea     eax, [esp+arg_74]
0x96B914: push    eax
0x96B915: fstp    [esp+4+arg_8]
0x96B919: fld     [esp+4+arg_8]
0x96B91D: fmul    qword ptr [esp+4+arg_EC]
0x96B924: fstp    qword ptr [esp+4+arg_64]
0x96B928: call    sub_47D9E0
0x96B92D: fadd    qword ptr [esp+arg_64]
0x96B931: fld     [esp+arg_4C]
0x96B935: fmul    [esp+arg_11C]
0x96B93C: faddp   st(1), st
0x96B93E: fld     [esp+arg_50]
0x96B942: fmul    qword ptr [esp+arg_14C]
0x96B949: faddp   st(1), st
0x96B94B: fdiv    [esp+arg_14]
0x96B94F: fstp    [esp+arg_38]
0x96B953: mov     ecx, [ebp+10h]
0x96B956: fld     [esp+arg_34]
0x96B95A: mov     edx, [esp+arg_9C]
0x96B961: fld     [esp+arg_38]
0x96B965: mov     eax, [esp+arg_60]
0x96B969: fld     [esp+arg_3C]
0x96B96D: fld     dword ptr [edi]
0x96B96F: fmul    dword ptr [ecx]
0x96B971: fadd    dword ptr [edx]
0x96B973: mov     edx, [ebp+18h]
0x96B976: fld     dword ptr [eax]
0x96B978: mov     eax, [ebp+20h]
0x96B97B: fmul    st, st(4)
0x96B97D: push    eax; int
0x96B97E: push    edi; int
0x96B97F: push    edx; int
0x96B980: faddp   st(1), st
0x96B982: push    ebx; int
0x96B983: fld     dword ptr [esi+1Ch]
0x96B986: push    ecx; int
0x96B987: fmul    st, st(3)
0x96B989: push    esi; int
0x96B98A: push    ecx
0x96B98B: faddp   st(1), st
0x96B98D: fld     dword ptr [esi+28h]
0x96B990: fmul    st, st(2)
0x96B992: faddp   st(1), st
0x96B994: fstp    dword ptr [eax]
0x96B996: fld     dword ptr [edi]
0x96B998: fmul    dword ptr [ecx+4]
0x96B99B: fadd    dword ptr [esi+8]
0x96B99E: fld     dword ptr [esi+14h]
0x96B9A1: fmul    st, st(4)
0x96B9A3: faddp   st(1), st
0x96B9A5: fld     dword ptr [esi+20h]
0x96B9A8: fmul    st, st(3)
0x96B9AA: faddp   st(1), st
0x96B9AC: fld     dword ptr [esi+2Ch]
0x96B9AF: fmul    st, st(2)
0x96B9B1: faddp   st(1), st
0x96B9B3: fstp    dword ptr [eax+4]
0x96B9B6: fld     dword ptr [edi]
0x96B9B8: fmul    dword ptr [ecx+8]
0x96B9BB: fadd    dword ptr [esi+0Ch]
0x96B9BE: fld     dword ptr [esi+18h]
0x96B9C1: fmulp   st(4), st
0x96B9C3: faddp   st(3), st
0x96B9C5: fld     dword ptr [esi+24h]
0x96B9C8: fmulp   st(2), st
0x96B9CA: fxch    st(2)
0x96B9CC: faddp   st(1), st
0x96B9CE: fld     dword ptr [esi+30h]
0x96B9D1: fmulp   st(2), st
0x96B9D3: faddp   st(1), st
0x96B9D5: fstp    dword ptr [eax+8]
0x96B9D8: fld     dword ptr [ebp+8]
0x96B9DB: fstp    [esp+1Ch+var_1C]; float
0x96B9DE: call    sub_9684F0
0x96B9E3: add     esp, 1Ch
0x96B9E6: cmp     byte ptr [ebp+24h], 0
0x96B9EA: jz      loc_96C364
0x96B9F0: cmp     [esp+arg_C], 0
0x96B9F5: mov     eax, [esp+arg_A4]
0x96B9FC: push    eax
0x96B9FD: jge     short loc_96BA13
0x96B9FF: lea     ecx, [esp+4+arg_15C]
0x96BA06: push    ecx
0x96BA07: mov     ecx, [esp+8+arg_88]
0x96BA0E: jmp     loc_96C2C3
0x96BA13: lea     ecx, [esp+4+arg_13C]
0x96BA1A: push    ecx
0x96BA1B: mov     ecx, [esp+8+arg_88]
0x96BA22: call    sub_498FE0
0x96BA27: jmp     loc_96A45D
0x96BA2C: mov     ecx, [esp+arg_C]; jumptable 0096A36B case 13
0x96BA30: fstp    st(1)
0x96BA32: fldz
0x96BA34: fld     [esp+arg_B4]
0x96BA3B: fcom    st(1)
0x96BA3D: fnstsw  ax
0x96BA3F: test    ah, 41h
0x96BA42: jnz     short loc_96BA5B
0x96BA44: mov     edx, ecx
0x96BA46: fstp    st
0x96BA48: neg     edx
0x96BA4A: mov     [esp+arg_8], edx
0x96BA4E: fild    [esp+arg_8]
0x96BA52: fmul    dword ptr [esi+34h]
0x96BA55: fstp    [esp+arg_34]
0x96BA59: jmp     short loc_96BA75
0x96BA5B: fcomp   st(1)
0x96BA5D: fnstsw  ax
0x96BA5F: test    ah, 5
0x96BA62: jp      short loc_96BA71
0x96BA64: fild    [esp+arg_C]
0x96BA68: fmul    dword ptr [esi+34h]
0x96BA6B: fstp    [esp+arg_34]
0x96BA6F: jmp     short loc_96BA75
0x96BA71: fst     [esp+arg_34]
0x96BA75: fld     [esp+arg_A8]
0x96BA7C: fcom    st(1)
0x96BA7E: fnstsw  ax
0x96BA80: test    ah, 41h
0x96BA83: jnz     short loc_96BA94
0x96BA85: fstp    st
0x96BA87: fild    [esp+arg_C]
0x96BA8B: fmul    dword ptr [esi+38h]
0x96BA8E: fstp    [esp+arg_38]
0x96BA92: jmp     short loc_96BAB6
0x96BA94: fcomp   st(1)
0x96BA96: fnstsw  ax
0x96BA98: test    ah, 5
0x96BA9B: jp      short loc_96BAB2
0x96BA9D: mov     eax, ecx
0x96BA9F: neg     eax
0x96BAA1: mov     [esp+arg_8], eax
0x96BAA5: fild    [esp+arg_8]
0x96BAA9: fmul    dword ptr [esi+38h]
0x96BAAC: fstp    [esp+arg_38]
0x96BAB0: jmp     short loc_96BAB6
0x96BAB2: fst     [esp+arg_38]
0x96BAB6: fcom    st(1)
0x96BAB8: fnstsw  ax
0x96BABA: test    ah, 5
0x96BABD: jp      short loc_96BAD6
0x96BABF: mov     edx, ecx
0x96BAC1: fstp    st(1)
0x96BAC3: neg     edx
0x96BAC5: mov     [esp+arg_8], edx
0x96BAC9: fild    [esp+arg_8]
0x96BACD: fmul    dword ptr [ebx+38h]
0x96BAD0: fstp    [esp+arg_50]
0x96BAD4: jmp     short loc_96BAF2
0x96BAD6: fcom    st(1)
0x96BAD8: fnstsw  ax
0x96BADA: fstp    st(1)
0x96BADC: test    ah, 41h
0x96BADF: jnz     short loc_96BAEE
0x96BAE1: fild    [esp+arg_C]
0x96BAE5: fmul    dword ptr [ebx+38h]
0x96BAE8: fstp    [esp+arg_50]
0x96BAEC: jmp     short loc_96BAF2
0x96BAEE: fst     [esp+arg_50]
0x96BAF2: fld     [esp+arg_C4]
0x96BAF9: fcom    st(1)
0x96BAFB: fnstsw  ax
0x96BAFD: test    ah, 41h
0x96BB00: jnz     short loc_96BB11
0x96BB02: fstp    st
0x96BB04: fild    [esp+arg_C]
0x96BB08: fmul    dword ptr [ebx+3Ch]
0x96BB0B: fstp    [esp+arg_54]
0x96BB0F: jmp     short loc_96BB31
0x96BB11: fcomp   st(1)
0x96BB13: fnstsw  ax
0x96BB15: test    ah, 5
0x96BB18: jp      short loc_96BB2D
0x96BB1A: neg     ecx
0x96BB1C: mov     [esp+arg_8], ecx
0x96BB20: fild    [esp+arg_8]
0x96BB24: fmul    dword ptr [ebx+3Ch]
0x96BB27: fstp    [esp+arg_54]
0x96BB2B: jmp     short loc_96BB31
0x96BB2D: fst     [esp+arg_54]
0x96BB31: fld     qword ptr [esp+arg_17C]
0x96BB38: fmul    st, st
0x96BB3A: fsubp   st(2), st
0x96BB3C: fxch    st(1)
0x96BB3E: fstp    dword ptr [esp+arg_14]
0x96BB42: fld     dword ptr [esp+arg_14]
0x96BB46: fst     [esp+arg_14]
0x96BB4A: fabs
0x96BB4C: fstp    [esp+arg_8]
0x96BB50: fld     [esp+arg_8]
0x96BB54: fcomp   dword ptr ds:0A372CCh
0x96BB5A: fnstsw  ax
0x96BB5C: test    ah, 41h
0x96BB5F: jnz     loc_96BC3D
0x96BB65: lea     eax, [esp+arg_28]
0x96BB69: fstp    st
0x96BB6B: fld     dword ptr [edi]
0x96BB6D: push    eax; int
0x96BB6E: push    ecx
0x96BB6F: lea     ecx, [esp+8+arg_14C]
0x96BB76: fstp    [esp+8+var_8]; float
0x96BB79: push    ecx; int
0x96BB7A: call    sub_47DA10
0x96BB7F: fld     dword ptr [eax]
0x96BB81: fadd    [esp+0Ch+arg_12C]
0x96BB88: add     esp, 0Ch
0x96BB8B: fstp    [esp+arg_28]
0x96BB8F: mov     edx, [esp+arg_28]
0x96BB93: fld     dword ptr [eax+4]
0x96BB96: fadd    [esp+arg_13C]
0x96BB9D: fstp    [esp+arg_2C]
0x96BBA1: fld     dword ptr [eax+8]
0x96BBA4: mov     eax, [esp+arg_2C]
0x96BBA8: fadd    [esp+arg_15C]
0x96BBAF: mov     dword ptr [esp+arg_74], edx
0x96BBB3: lea     edx, [esp+arg_74]
0x96BBB7: push    edx
0x96BBB8: fstp    [esp+4+arg_30]
0x96BBBC: mov     ecx, [esp+4+arg_30]
0x96BBC0: fld     [esp+4+arg_34]
0x96BBC4: mov     [esp+4+arg_7C], ecx
0x96BBCB: fmul    qword ptr [esp+4+arg_10C]
0x96BBD2: mov     ecx, [esp+4+arg_98]
0x96BBD9: fld     [esp+4+arg_38]
0x96BBDD: mov     dword ptr [esp+4+arg_74+4], eax
0x96BBE4: fmul    [esp+4+arg_11C]
0x96BBEB: faddp   st(1), st
0x96BBED: fstp    qword ptr [esp+4+arg_64]
0x96BBF1: call    sub_47D9E0
0x96BBF6: fsubr   qword ptr [esp+arg_64]
0x96BBFA: mov     ecx, [esp+arg_48]
0x96BBFE: lea     eax, [esp+arg_74]
0x96BC02: push    eax
0x96BC03: fstp    [esp+4+arg_8]
0x96BC07: fld     [esp+4+arg_8]
0x96BC0B: fmul    qword ptr [esp+4+arg_17C]
0x96BC12: fstp    qword ptr [esp+4+arg_64]
0x96BC16: call    sub_47D9E0
0x96BC1B: fadd    qword ptr [esp+arg_64]
0x96BC1F: fld     [esp+arg_50]
0x96BC23: fmul    [esp+arg_16C]
0x96BC2A: faddp   st(1), st
0x96BC2C: fld     [esp+arg_54]
0x96BC30: fmul    [esp+arg_FC]
0x96BC37: faddp   st(1), st
0x96BC39: fdiv    [esp+arg_14]
0x96BC3D: fstp    [esp+arg_3C]
0x96BC41: mov     ecx, [ebp+10h]
0x96BC44: fld     [esp+arg_34]
0x96BC48: mov     edx, [esp+arg_9C]
0x96BC4F: fld     [esp+arg_38]
0x96BC53: mov     eax, [esp+arg_60]
0x96BC57: fld     [esp+arg_3C]
0x96BC5B: fld     dword ptr [edi]
0x96BC5D: fmul    dword ptr [ecx]
0x96BC5F: fadd    dword ptr [edx]
0x96BC61: mov     edx, [ebp+18h]
0x96BC64: fld     dword ptr [eax]
0x96BC66: mov     eax, [ebp+20h]
0x96BC69: fmul    st, st(4)
0x96BC6B: push    eax; int
0x96BC6C: push    edi; int
0x96BC6D: push    edx; int
0x96BC6E: faddp   st(1), st
0x96BC70: push    ebx; int
0x96BC71: fld     dword ptr [esi+1Ch]
0x96BC74: push    ecx; int
0x96BC75: fmul    st, st(3)
0x96BC77: push    esi; int
0x96BC78: push    ecx
0x96BC79: faddp   st(1), st
0x96BC7B: fld     dword ptr [esi+28h]
0x96BC7E: fmul    st, st(2)
0x96BC80: faddp   st(1), st
0x96BC82: fstp    dword ptr [eax]
0x96BC84: fld     dword ptr [edi]
0x96BC86: fmul    dword ptr [ecx+4]
0x96BC89: fadd    dword ptr [esi+8]
0x96BC8C: fld     dword ptr [esi+14h]
0x96BC8F: fmul    st, st(4)
0x96BC91: faddp   st(1), st
0x96BC93: fld     dword ptr [esi+20h]
0x96BC96: fmul    st, st(3)
0x96BC98: faddp   st(1), st
0x96BC9A: fld     dword ptr [esi+2Ch]
0x96BC9D: fmul    st, st(2)
0x96BC9F: faddp   st(1), st
0x96BCA1: fstp    dword ptr [eax+4]
0x96BCA4: fld     dword ptr [edi]
0x96BCA6: fmul    dword ptr [ecx+8]
0x96BCA9: fadd    dword ptr [esi+0Ch]
0x96BCAC: fld     dword ptr [esi+18h]
0x96BCAF: fmulp   st(4), st
0x96BCB1: faddp   st(3), st
0x96BCB3: fld     dword ptr [esi+24h]
0x96BCB6: fmulp   st(2), st
0x96BCB8: fxch    st(2)
0x96BCBA: faddp   st(1), st
0x96BCBC: fld     dword ptr [esi+30h]
0x96BCBF: fmulp   st(2), st
0x96BCC1: faddp   st(1), st
0x96BCC3: fstp    dword ptr [eax+8]
0x96BCC6: fld     dword ptr [ebp+8]
0x96BCC9: fstp    [esp+1Ch+var_1C]; float
0x96BCCC: call    sub_9684F0
0x96BCD1: add     esp, 1Ch
0x96BCD4: cmp     byte ptr [ebp+24h], 0
0x96BCD8: jz      loc_96C364
0x96BCDE: cmp     [esp+arg_C], 0
0x96BCE3: mov     eax, [esp+arg_98]
0x96BCEA: push    eax
0x96BCEB: jge     short loc_96BCF9
0x96BCED: lea     ecx, [esp+4+arg_12C]
0x96BCF4: jmp     loc_96C2BE
0x96BCF9: lea     ecx, [esp+4+arg_11C]
0x96BD00: push    ecx
0x96BD01: mov     ecx, [esp+8+arg_48]
0x96BD05: call    sub_498FE0
0x96BD0A: jmp     loc_96A45D
0x96BD0F: mov     ecx, [esp+arg_C]; jumptable 0096A36B case 14
0x96BD13: fstp    st(1)
0x96BD15: fldz
0x96BD17: fld     [esp+arg_B8]
0x96BD1E: fcom    st(1)
0x96BD20: fnstsw  ax
0x96BD22: test    ah, 41h
0x96BD25: jnz     short loc_96BD3E
0x96BD27: mov     edx, ecx
0x96BD29: fstp    st
0x96BD2B: neg     edx
0x96BD2D: mov     [esp+arg_8], edx
0x96BD31: fild    [esp+arg_8]
0x96BD35: fmul    dword ptr [esi+34h]
0x96BD38: fstp    [esp+arg_34]
0x96BD3C: jmp     short loc_96BD58
0x96BD3E: fcomp   st(1)
0x96BD40: fnstsw  ax
0x96BD42: test    ah, 5
0x96BD45: jp      short loc_96BD54
0x96BD47: fild    [esp+arg_C]
0x96BD4B: fmul    dword ptr [esi+34h]
0x96BD4E: fstp    [esp+arg_34]
0x96BD52: jmp     short loc_96BD58
0x96BD54: fst     [esp+arg_34]
0x96BD58: fld     [esp+arg_AC]
0x96BD5F: fcom    st(1)
0x96BD61: fnstsw  ax
0x96BD63: test    ah, 41h
0x96BD66: jnz     short loc_96BD77
0x96BD68: fstp    st
0x96BD6A: fild    [esp+arg_C]
0x96BD6E: fmul    dword ptr [esi+38h]
0x96BD71: fstp    [esp+arg_38]
0x96BD75: jmp     short loc_96BD99
0x96BD77: fcomp   st(1)
0x96BD79: fnstsw  ax
0x96BD7B: test    ah, 5
0x96BD7E: jp      short loc_96BD95
0x96BD80: mov     eax, ecx
0x96BD82: neg     eax
0x96BD84: mov     [esp+arg_8], eax
0x96BD88: fild    [esp+arg_8]
0x96BD8C: fmul    dword ptr [esi+38h]
0x96BD8F: fstp    [esp+arg_38]
0x96BD93: jmp     short loc_96BD99
0x96BD95: fst     [esp+arg_38]
0x96BD99: fcom    st(1)
0x96BD9B: fnstsw  ax
0x96BD9D: test    ah, 5
0x96BDA0: jp      short loc_96BDB1
0x96BDA2: fstp    st(1)
0x96BDA4: fild    [esp+arg_C]
0x96BDA8: fmul    dword ptr [ebx+34h]
0x96BDAB: fstp    [esp+arg_4C]
0x96BDAF: jmp     short loc_96BDD5
0x96BDB1: fcom    st(1)
0x96BDB3: fnstsw  ax
0x96BDB5: fstp    st(1)
0x96BDB7: test    ah, 41h
0x96BDBA: jnz     short loc_96BDD1
0x96BDBC: mov     edx, ecx
0x96BDBE: neg     edx
0x96BDC0: mov     [esp+arg_8], edx
0x96BDC4: fild    [esp+arg_8]
0x96BDC8: fmul    dword ptr [ebx+34h]
0x96BDCB: fstp    [esp+arg_4C]
0x96BDCF: jmp     short loc_96BDD5
0x96BDD1: fst     [esp+arg_4C]
0x96BDD5: fld     [esp+arg_C0]
0x96BDDC: fcom    st(1)
0x96BDDE: fnstsw  ax
0x96BDE0: test    ah, 41h
0x96BDE3: jnz     short loc_96BDFA
0x96BDE5: neg     ecx
0x96BDE7: fstp    st
0x96BDE9: mov     [esp+arg_8], ecx
0x96BDED: fild    [esp+arg_8]
0x96BDF1: fmul    dword ptr [ebx+3Ch]
0x96BDF4: fstp    [esp+arg_54]
0x96BDF8: jmp     short loc_96BE14
0x96BDFA: fcomp   st(1)
0x96BDFC: fnstsw  ax
0x96BDFE: test    ah, 5
0x96BE01: jp      short loc_96BE10
0x96BE03: fild    [esp+arg_C]
0x96BE07: fmul    dword ptr [ebx+3Ch]
0x96BE0A: fstp    [esp+arg_54]
0x96BE0E: jmp     short loc_96BE14
0x96BE10: fst     [esp+arg_54]
0x96BE14: fld     [esp+arg_16C]
0x96BE1B: fmul    st, st
0x96BE1D: fsubp   st(2), st
0x96BE1F: fxch    st(1)
0x96BE21: fstp    dword ptr [esp+arg_14]
0x96BE25: fld     dword ptr [esp+arg_14]
0x96BE29: fst     [esp+arg_14]
0x96BE2D: fabs
0x96BE2F: fstp    [esp+arg_8]
0x96BE33: fld     [esp+arg_8]
0x96BE37: fcomp   dword ptr ds:0A372CCh
0x96BE3D: fnstsw  ax
0x96BE3F: test    ah, 41h
0x96BE42: jnz     loc_96BF20
0x96BE48: lea     eax, [esp+arg_28]
0x96BE4C: fstp    st
0x96BE4E: fld     dword ptr [edi]
0x96BE50: push    eax; int
0x96BE51: push    ecx
0x96BE52: lea     ecx, [esp+8+arg_DC]
0x96BE59: fstp    [esp+8+var_8]; float
0x96BE5C: push    ecx; int
0x96BE5D: call    sub_47DA10
0x96BE62: fld     dword ptr [eax]
0x96BE64: fadd    [esp+0Ch+arg_12C]
0x96BE6B: add     esp, 0Ch
0x96BE6E: fstp    [esp+arg_28]
0x96BE72: mov     edx, [esp+arg_28]
0x96BE76: fld     dword ptr [eax+4]
0x96BE79: fadd    [esp+arg_13C]
0x96BE80: fstp    [esp+arg_2C]
0x96BE84: fld     dword ptr [eax+8]
0x96BE87: mov     eax, [esp+arg_2C]
0x96BE8B: fadd    [esp+arg_15C]
0x96BE92: mov     dword ptr [esp+arg_74], edx
0x96BE96: lea     edx, [esp+arg_74]
0x96BE9A: push    edx
0x96BE9B: fstp    [esp+4+arg_30]
0x96BE9F: mov     ecx, [esp+4+arg_30]
0x96BEA3: fld     [esp+4+arg_34]
0x96BEA7: mov     [esp+4+arg_7C], ecx
0x96BEAE: fmul    qword ptr [esp+4+arg_CC]
0x96BEB5: mov     ecx, [esp+4+arg_A0]
0x96BEBC: fld     [esp+4+arg_38]
0x96BEC0: mov     dword ptr [esp+4+arg_74+4], eax
0x96BEC7: fmul    qword ptr [esp+4+arg_14C]
0x96BECE: faddp   st(1), st
0x96BED0: fstp    qword ptr [esp+4+arg_64]
0x96BED4: call    sub_47D9E0
0x96BED9: fsubr   qword ptr [esp+arg_64]
0x96BEDD: mov     ecx, [esp+arg_48]
0x96BEE1: lea     eax, [esp+arg_74]
0x96BEE5: push    eax
0x96BEE6: fstp    [esp+4+arg_8]
0x96BEEA: fld     [esp+4+arg_8]
0x96BEEE: fmul    [esp+4+arg_16C]
0x96BEF5: fstp    qword ptr [esp+4+arg_64]
0x96BEF9: call    sub_47D9E0
0x96BEFE: fadd    qword ptr [esp+arg_64]
0x96BF02: fld     [esp+arg_4C]
0x96BF06: fmul    qword ptr [esp+arg_17C]
0x96BF0D: faddp   st(1), st
0x96BF0F: fld     [esp+arg_54]
0x96BF13: fmul    [esp+arg_FC]
0x96BF1A: faddp   st(1), st
0x96BF1C: fdiv    [esp+arg_14]
0x96BF20: fstp    [esp+arg_3C]
0x96BF24: mov     ecx, [ebp+10h]
0x96BF27: fld     [esp+arg_34]
0x96BF2B: mov     edx, [esp+arg_9C]
0x96BF32: fld     [esp+arg_38]
0x96BF36: mov     eax, [esp+arg_60]
0x96BF3A: fld     [esp+arg_3C]
0x96BF3E: fld     dword ptr [edi]
0x96BF40: fmul    dword ptr [ecx]
0x96BF42: fadd    dword ptr [edx]
0x96BF44: mov     edx, [ebp+18h]
0x96BF47: fld     dword ptr [eax]
0x96BF49: mov     eax, [ebp+20h]
0x96BF4C: fmul    st, st(4)
0x96BF4E: push    eax; int
0x96BF4F: push    edi; int
0x96BF50: push    edx; int
0x96BF51: faddp   st(1), st
0x96BF53: push    ebx; int
0x96BF54: fld     dword ptr [esi+1Ch]
0x96BF57: push    ecx; int
0x96BF58: fmul    st, st(3)
0x96BF5A: push    esi; int
0x96BF5B: push    ecx
0x96BF5C: faddp   st(1), st
0x96BF5E: fld     dword ptr [esi+28h]
0x96BF61: fmul    st, st(2)
0x96BF63: faddp   st(1), st
0x96BF65: fstp    dword ptr [eax]
0x96BF67: fld     dword ptr [edi]
0x96BF69: fmul    dword ptr [ecx+4]
0x96BF6C: fadd    dword ptr [esi+8]
0x96BF6F: fld     dword ptr [esi+14h]
0x96BF72: fmul    st, st(4)
0x96BF74: faddp   st(1), st
0x96BF76: fld     dword ptr [esi+20h]
0x96BF79: fmul    st, st(3)
0x96BF7B: faddp   st(1), st
0x96BF7D: fld     dword ptr [esi+2Ch]
0x96BF80: fmul    st, st(2)
0x96BF82: faddp   st(1), st
0x96BF84: fstp    dword ptr [eax+4]
0x96BF87: fld     dword ptr [edi]
0x96BF89: fmul    dword ptr [ecx+8]
0x96BF8C: fadd    dword ptr [esi+0Ch]
0x96BF8F: fld     dword ptr [esi+18h]
0x96BF92: fmulp   st(4), st
0x96BF94: faddp   st(3), st
0x96BF96: fld     dword ptr [esi+24h]
0x96BF99: fmulp   st(2), st
0x96BF9B: fxch    st(2)
0x96BF9D: faddp   st(1), st
0x96BF9F: fld     dword ptr [esi+30h]
0x96BFA2: fmulp   st(2), st
0x96BFA4: faddp   st(1), st
0x96BFA6: fstp    dword ptr [eax+8]
0x96BFA9: fld     dword ptr [ebp+8]
0x96BFAC: fstp    [esp+1Ch+var_1C]; float
0x96BFAF: call    sub_9684F0
0x96BFB4: add     esp, 1Ch
0x96BFB7: cmp     byte ptr [ebp+24h], 0
0x96BFBB: jz      loc_96C364
0x96BFC1: cmp     [esp+arg_C], 0
0x96BFC6: mov     eax, [esp+arg_A0]
0x96BFCD: push    eax
0x96BFCE: jge     short loc_96BFD9
0x96BFD0: lea     ecx, [esp+4+arg_14]
0x96BFD4: jmp     loc_96C2BE
0x96BFD9: lea     ecx, [esp+4+arg_240]
0x96BFE0: push    ecx
0x96BFE1: mov     ecx, [esp+8+arg_48]
0x96BFE5: call    sub_498FE0
0x96BFEA: jmp     loc_96A45D
0x96BFEF: mov     ecx, [esp+arg_C]; jumptable 0096A36B case 15
0x96BFF3: fstp    st(1)
0x96BFF5: fstp    st
0x96BFF7: fldz
0x96BFF9: fld     [esp+arg_BC]
0x96C000: fcom    st(1)
0x96C002: fnstsw  ax
0x96C004: test    ah, 41h
0x96C007: jnz     short loc_96C020
0x96C009: mov     edx, ecx
0x96C00B: fstp    st
0x96C00D: neg     edx
0x96C00F: mov     [esp+arg_8], edx
0x96C013: fild    [esp+arg_8]
0x96C017: fmul    dword ptr [esi+34h]
0x96C01A: fstp    [esp+arg_34]
0x96C01E: jmp     short loc_96C03A
0x96C020: fcomp   st(1)
0x96C022: fnstsw  ax
0x96C024: test    ah, 5
0x96C027: jp      short loc_96C036
0x96C029: fild    [esp+arg_C]
0x96C02D: fmul    dword ptr [esi+34h]
0x96C030: fstp    [esp+arg_34]
0x96C034: jmp     short loc_96C03A
0x96C036: fst     [esp+arg_34]
0x96C03A: fld     [esp+arg_B0]
0x96C041: fcom    st(1)
0x96C043: fnstsw  ax
0x96C045: test    ah, 41h
0x96C048: jnz     short loc_96C059
0x96C04A: fstp    st
0x96C04C: fild    [esp+arg_C]
0x96C050: fmul    dword ptr [esi+38h]
0x96C053: fstp    [esp+arg_38]
0x96C057: jmp     short loc_96C07B
0x96C059: fcomp   st(1)
0x96C05B: fnstsw  ax
0x96C05D: test    ah, 5
0x96C060: jp      short loc_96C077
0x96C062: mov     eax, ecx
0x96C064: neg     eax
0x96C066: mov     [esp+arg_8], eax
0x96C06A: fild    [esp+arg_8]
0x96C06E: fmul    dword ptr [esi+38h]
0x96C071: fstp    [esp+arg_38]
0x96C075: jmp     short loc_96C07B
0x96C077: fst     [esp+arg_38]
0x96C07B: fld     [esp+arg_C4]
0x96C082: fcom    st(1)
0x96C084: fnstsw  ax
0x96C086: test    ah, 41h
0x96C089: jnz     short loc_96C0A2
0x96C08B: mov     edx, ecx
0x96C08D: fstp    st
0x96C08F: neg     edx
0x96C091: mov     [esp+arg_8], edx
0x96C095: fild    [esp+arg_8]
0x96C099: fmul    dword ptr [ebx+34h]
0x96C09C: fstp    [esp+arg_4C]
0x96C0A0: jmp     short loc_96C0BC
0x96C0A2: fcomp   st(1)
0x96C0A4: fnstsw  ax
0x96C0A6: test    ah, 5
0x96C0A9: jp      short loc_96C0B8
0x96C0AB: fild    [esp+arg_C]
0x96C0AF: fmul    dword ptr [ebx+34h]
0x96C0B2: fstp    [esp+arg_4C]
0x96C0B6: jmp     short loc_96C0BC
0x96C0B8: fst     [esp+arg_4C]
0x96C0BC: fld     [esp+arg_C0]
0x96C0C3: fcom    st(1)
0x96C0C5: fnstsw  ax
0x96C0C7: test    ah, 41h
0x96C0CA: jnz     short loc_96C0DB
0x96C0CC: fstp    st
0x96C0CE: fild    [esp+arg_C]
0x96C0D2: fmul    dword ptr [ebx+38h]
0x96C0D5: fstp    [esp+arg_50]
0x96C0D9: jmp     short loc_96C0FB
0x96C0DB: fcomp   st(1)
0x96C0DD: fnstsw  ax
0x96C0DF: test    ah, 5
0x96C0E2: jp      short loc_96C0F7
0x96C0E4: neg     ecx
0x96C0E6: mov     [esp+arg_8], ecx
0x96C0EA: fild    [esp+arg_8]
0x96C0EE: fmul    dword ptr [ebx+38h]
0x96C0F1: fstp    [esp+arg_50]
0x96C0F5: jmp     short loc_96C0FB
0x96C0F7: fst     [esp+arg_50]
0x96C0FB: fld     [esp+arg_FC]
0x96C102: fmul    st, st
0x96C104: fsubp   st(2), st
0x96C106: fxch    st(1)
0x96C108: fstp    dword ptr [esp+arg_14]
0x96C10C: fld     dword ptr [esp+arg_14]
0x96C110: fst     [esp+arg_14]
0x96C114: fabs
0x96C116: fstp    [esp+arg_8]
0x96C11A: fld     [esp+arg_8]
0x96C11E: fcomp   dword ptr ds:0A372CCh
0x96C124: fnstsw  ax
0x96C126: test    ah, 41h
0x96C129: jnz     loc_96C207
0x96C12F: lea     eax, [esp+arg_28]
0x96C133: fstp    st
0x96C135: fld     dword ptr [edi]
0x96C137: push    eax; int
0x96C138: push    ecx
0x96C139: lea     ecx, [esp+8+arg_234]
0x96C140: fstp    [esp+8+var_8]; float
0x96C143: push    ecx; int
0x96C144: call    sub_47DA10
0x96C149: fld     dword ptr [eax]
0x96C14B: fadd    [esp+0Ch+arg_12C]
0x96C152: add     esp, 0Ch
0x96C155: fstp    [esp+arg_28]
0x96C159: mov     edx, [esp+arg_28]
0x96C15D: fld     dword ptr [eax+4]
0x96C160: fadd    [esp+arg_13C]
0x96C167: fstp    [esp+arg_2C]
0x96C16B: fld     dword ptr [eax+8]
0x96C16E: mov     eax, [esp+arg_2C]
0x96C172: fadd    [esp+arg_15C]
0x96C179: mov     dword ptr [esp+arg_74], edx
0x96C17D: lea     edx, [esp+arg_74]
0x96C181: push    edx
0x96C182: fstp    [esp+4+arg_30]
0x96C186: mov     ecx, [esp+4+arg_30]
0x96C18A: fld     [esp+4+arg_34]
0x96C18E: mov     [esp+4+arg_7C], ecx
0x96C195: fmul    [esp+4+arg_18C]
0x96C19C: mov     ecx, [esp+4+arg_A4]
0x96C1A3: fld     [esp+4+arg_38]
0x96C1A7: mov     dword ptr [esp+4+arg_74+4], eax
0x96C1AE: fmul    qword ptr [esp+4+arg_EC]
0x96C1B5: faddp   st(1), st
0x96C1B7: fstp    qword ptr [esp+4+arg_64]
0x96C1BB: call    sub_47D9E0
0x96C1C0: fsubr   qword ptr [esp+arg_64]
0x96C1C4: mov     ecx, [esp+arg_48]
0x96C1C8: lea     eax, [esp+arg_74]
0x96C1CC: push    eax
0x96C1CD: fstp    [esp+4+arg_8]
0x96C1D1: fld     [esp+4+arg_8]
0x96C1D5: fmul    [esp+4+arg_FC]
0x96C1DC: fstp    qword ptr [esp+4+arg_64]
0x96C1E0: call    sub_47D9E0
0x96C1E5: fadd    qword ptr [esp+arg_64]
0x96C1E9: fld     [esp+arg_4C]
0x96C1ED: fmul    qword ptr [esp+arg_17C]
0x96C1F4: faddp   st(1), st
0x96C1F6: fld     [esp+arg_50]
0x96C1FA: fmul    [esp+arg_16C]
0x96C201: faddp   st(1), st
0x96C203: fdiv    [esp+arg_14]
0x96C207: fstp    [esp+arg_3C]
0x96C20B: mov     ecx, [ebp+10h]
0x96C20E: fld     [esp+arg_34]
0x96C212: mov     edx, [esp+arg_9C]
0x96C219: fld     [esp+arg_38]
0x96C21D: mov     eax, [esp+arg_60]
0x96C221: fld     [esp+arg_3C]
0x96C225: fld     dword ptr [edi]
0x96C227: fmul    dword ptr [ecx]
0x96C229: fadd    dword ptr [edx]
0x96C22B: mov     edx, [ebp+18h]
0x96C22E: fld     dword ptr [eax]
0x96C230: mov     eax, [ebp+20h]
0x96C233: fmul    st, st(4)
0x96C235: push    eax; int
0x96C236: push    edi; int
0x96C237: push    edx; int
0x96C238: faddp   st(1), st
0x96C23A: push    ebx; int
0x96C23B: fld     dword ptr [esi+1Ch]
0x96C23E: push    ecx; int
0x96C23F: fmul    st, st(3)
0x96C241: push    esi; int
0x96C242: push    ecx
0x96C243: faddp   st(1), st
0x96C245: fld     dword ptr [esi+28h]
0x96C248: fmul    st, st(2)
0x96C24A: faddp   st(1), st
0x96C24C: fstp    dword ptr [eax]
0x96C24E: fld     dword ptr [edi]
0x96C250: fmul    dword ptr [ecx+4]
0x96C253: fadd    dword ptr [esi+8]
0x96C256: fld     dword ptr [esi+14h]
0x96C259: fmul    st, st(4)
0x96C25B: faddp   st(1), st
0x96C25D: fld     dword ptr [esi+20h]
0x96C260: fmul    st, st(3)
0x96C262: faddp   st(1), st
0x96C264: fld     dword ptr [esi+2Ch]
0x96C267: fmul    st, st(2)
0x96C269: faddp   st(1), st
0x96C26B: fstp    dword ptr [eax+4]
0x96C26E: fld     dword ptr [edi]
0x96C270: fmul    dword ptr [ecx+8]
0x96C273: fadd    dword ptr [esi+0Ch]
0x96C276: fld     dword ptr [esi+18h]
0x96C279: fmulp   st(4), st
0x96C27B: faddp   st(3), st
0x96C27D: fld     dword ptr [esi+24h]
0x96C280: fmulp   st(2), st
0x96C282: fxch    st(2)
0x96C284: faddp   st(1), st
0x96C286: fld     dword ptr [esi+30h]
0x96C289: fmulp   st(2), st
0x96C28B: faddp   st(1), st
0x96C28D: fstp    dword ptr [eax+8]
0x96C290: fld     dword ptr [ebp+8]
0x96C293: fstp    [esp+1Ch+var_1C]; float
0x96C296: call    sub_9684F0
0x96C29B: add     esp, 1Ch
0x96C29E: cmp     byte ptr [ebp+24h], 0
0x96C2A2: jz      loc_96C364
0x96C2A8: cmp     [esp+arg_C], 0
0x96C2AD: mov     eax, [esp+arg_A4]
0x96C2B4: push    eax
0x96C2B5: jge     short loc_96C2FE
0x96C2B7: lea     ecx, [esp+4+arg_258]
0x96C2BE: push    ecx
0x96C2BF: mov     ecx, [esp+8+arg_48]
0x96C2C3: call    sub_498FE0
0x96C2C8: fld     dword ptr [eax]
0x96C2CA: fchs
0x96C2CC: fstp    [esp+arg_28]
0x96C2D0: mov     edx, [esp+arg_28]
0x96C2D4: fld     dword ptr [eax+4]
0x96C2D7: fchs
0x96C2D9: fstp    [esp+arg_2C]
0x96C2DD: mov     ecx, [esp+arg_2C]
0x96C2E1: fld     dword ptr [eax+8]
0x96C2E4: mov     eax, [ebp+28h]
0x96C2E7: fchs
0x96C2E9: mov     [eax], edx
0x96C2EB: fstp    [esp+arg_30]
0x96C2EF: mov     edx, [esp+arg_30]
0x96C2F3: mov     [eax+4], ecx
0x96C2F6: mov     [eax+8], edx
0x96C2F9: jmp     loc_96A385
0x96C2FE: lea     ecx, [esp+4+arg_24C]
0x96C305: push    ecx
0x96C306: mov     ecx, [esp+8+arg_48]
0x96C30A: call    sub_498FE0
0x96C30F: jmp     loc_96A45D
0x96C314: mov     ecx, ds:0B258D0h
0x96C31A: mov     [esi], ecx
0x96C31C: mov     edx, ds:0B258D4h
0x96C322: mov     [esi+4], edx
0x96C325: mov     eax, ds:0B258D8h
0x96C32A: mov     [esi+8], eax
0x96C32D: jmp     short loc_96C333
0x96C32F: fstp    st
0x96C331: fstp    st
0x96C333: fld     dword ptr [esi]
0x96C335: fchs
0x96C337: fstp    [esp+arg_28]
0x96C33B: fld     dword ptr [esi+4]
0x96C33E: fchs
0x96C340: fstp    [esp+arg_2C]
0x96C344: fld     dword ptr [esi+8]
0x96C347: mov     eax, [ebp+2Ch]
0x96C34A: fchs
0x96C34C: mov     ecx, [esp+arg_28]
0x96C350: fstp    [esp+arg_30]
0x96C354: mov     edx, [esp+arg_2C]
0x96C358: mov     [eax], ecx
0x96C35A: mov     ecx, [esp+arg_30]
0x96C35E: mov     [eax+4], edx
0x96C361: mov     [eax+8], ecx
0x96C364: pop     edi
0x96C365: pop     esi
0x96C366: mov     al, 1
0x96C368: pop     ebx
0x96C369: mov     esp, ebp
0x96C36B: pop     ebp
0x96C36C: retn
