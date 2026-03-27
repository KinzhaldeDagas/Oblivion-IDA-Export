0x786350: push    0FFFFFFFFh
0x786352: push    offset SEH_786350
0x786357: mov     eax, large fs:0
0x78635D: push    eax
0x78635E: sub     esp, 4Ch
0x786361: push    ebx
0x786362: push    ebp
0x786363: push    esi
0x786364: push    edi
0x786365: mov     eax, ds:0B30AACh
0x78636A: xor     eax, esp
0x78636C: push    eax
0x78636D: lea     eax, [esp+6Ch+var_C]
0x786371: mov     large fs:0, eax
0x786377: mov     [esp+6Ch+var_4C], ecx
0x78637B: xor     edi, edi
0x78637D: mov     [esp+6Ch+var_30], edi
0x786381: mov     [esp+6Ch+var_2C], edi
0x786385: mov     [esp+6Ch+var_28], edi
0x786389: mov     ebp, [esp+6Ch+arg_0]
0x78638D: push    ebp
0x78638E: lea     ecx, [esp+70h+var_34]
0x786392: mov     [esp+70h+var_4], edi
0x786396: call    sub_785E00
0x78639B: cmp     ebp, edi
0x78639D: jbe     loc_786461
0x7863A3: mov     eax, ebp
0x7863A5: test    eax, eax
0x7863A7: mov     [esp+6Ch+arg_0], eax
0x7863AB: fild    [esp+6Ch+arg_0]
0x7863AF: jge     short loc_7863B7
0x7863B1: fadd    dword ptr ds:0A2FC78h
0x7863B7: fstp    [esp+6Ch+var_48]
0x7863BB: mov     [esp+6Ch+arg_0], edi
0x7863BF: mov     ecx, edi
0x7863C1: test    ecx, ecx
0x7863C3: mov     [esp+6Ch+var_3C], ecx
0x7863C7: fild    [esp+6Ch+var_3C]
0x7863CB: jge     short loc_7863D3
0x7863CD: fadd    dword ptr ds:0A2FC78h
0x7863D3: fdiv    [esp+6Ch+var_48]
0x7863D7: push    ecx
0x7863D8: mov     ecx, [esp+70h+var_4C]
0x7863DC: lea     edx, [esp+70h+var_24]
0x7863E0: fstp    [esp+70h+var_40]
0x7863E4: fld     [esp+70h+var_40]
0x7863E8: fstp    [esp+70h+var_70]; float
0x7863EB: push    edx; int
0x7863EC: call    sub_7844A0
0x7863F1: mov     ebx, [esp+6Ch+var_30]
0x7863F5: test    ebx, ebx
0x7863F7: mov     esi, eax
0x7863F9: jz      short loc_786416
0x7863FB: mov     ecx, [esp+6Ch+var_2C]
0x7863FF: sub     ecx, ebx
0x786401: mov     eax, 2AAAAAABh
0x786406: imul    ecx
0x786408: sar     edx, 2
0x78640B: mov     eax, edx
0x78640D: shr     eax, 1Fh
0x786410: add     eax, edx
0x786412: cmp     edi, eax
0x786414: jb      short loc_78641F
0x786416: call    __invalid_parameter_noinfo
0x78641B: mov     ebx, [esp+6Ch+var_30]
0x78641F: mov     ecx, [esi]
0x786421: mov     eax, [esp+6Ch+arg_0]
0x786425: mov     [eax+ebx], ecx
0x786428: mov     edx, [esi+4]
0x78642B: add     eax, ebx
0x78642D: mov     [eax+4], edx
0x786430: mov     ecx, [esi+8]
0x786433: mov     [eax+8], ecx
0x786436: mov     edx, [esi+0Ch]
0x786439: mov     [eax+0Ch], edx
0x78643C: mov     ecx, [esi+10h]
0x78643F: mov     [eax+10h], ecx
0x786442: mov     edx, [esi+14h]
0x786445: lea     ecx, [esp+6Ch+var_24]; void *
0x786449: mov     [eax+14h], edx
0x78644C: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x786451: add     [esp+6Ch+arg_0], 18h
0x786456: add     edi, 1
0x786459: cmp     edi, ebp
0x78645B: jb      loc_7863BF
0x786461: mov     ebx, [esp+6Ch+var_4C]
0x786465: mov     esi, [ebx+44h]
0x786468: add     ebx, 3Ch ; '<'
0x78646B: cmp     [ebx+4], esi
0x78646E: mov     [esp+6Ch+var_40], ebx
0x786472: jbe     short loc_786479
0x786474: call    __invalid_parameter_noinfo
0x786479: mov     edi, [ebx+4]
0x78647C: cmp     edi, [ebx+8]
0x78647F: jbe     short loc_786486
0x786481: call    __invalid_parameter_noinfo
0x786486: push    esi
0x786487: push    ebx
0x786488: push    edi
0x786489: push    ebx
0x78648A: lea     eax, [esp+7Ch+var_3C]
0x78648E: push    eax
0x78648F: mov     ecx, ebx
0x786491: call    sub_784AC0
0x786496: push    ebp
0x786497: mov     ecx, ebx
0x786499: call    sub_785E00
0x78649E: mov     esi, [esp+6Ch+var_4C]
0x7864A2: mov     eax, [esi+10h]
0x7864A5: xor     edi, edi
0x7864A7: test    eax, eax
0x7864A9: mov     [esp+6Ch+arg_0], edi
0x7864AD: jz      short loc_7864C7
0x7864AF: mov     ecx, [esi+14h]
0x7864B2: sub     ecx, eax
0x7864B4: mov     eax, 2AAAAAABh
0x7864B9: imul    ecx
0x7864BB: sar     edx, 2
0x7864BE: mov     ecx, edx
0x7864C0: shr     ecx, 1Fh
0x7864C3: add     ecx, edx
0x7864C5: jnz     short loc_7864CC
0x7864C7: call    __invalid_parameter_noinfo
0x7864CC: mov     eax, [ebx+4]
0x7864CF: test    eax, eax
0x7864D1: mov     esi, [esi+10h]
0x7864D4: jz      short loc_7864EE
0x7864D6: mov     ecx, [ebx+8]
0x7864D9: sub     ecx, eax
0x7864DB: mov     eax, 2AAAAAABh
0x7864E0: imul    ecx
0x7864E2: sar     edx, 2
0x7864E5: mov     eax, edx
0x7864E7: shr     eax, 1Fh
0x7864EA: add     eax, edx
0x7864EC: jnz     short loc_7864F3
0x7864EE: call    __invalid_parameter_noinfo
0x7864F3: mov     eax, [ebx+4]
0x7864F6: mov     ecx, [esi]
0x7864F8: mov     [eax], ecx
0x7864FA: mov     edx, [esi+4]
0x7864FD: mov     [eax+4], edx
0x786500: mov     ecx, [esi+8]
0x786503: mov     [eax+8], ecx
0x786506: mov     edx, [esi+0Ch]
0x786509: mov     [eax+0Ch], edx
0x78650C: mov     ecx, [esi+10h]
0x78650F: mov     [eax+10h], ecx
0x786512: mov     edx, [esi+14h]
0x786515: mov     [eax+14h], edx
0x786518: lea     eax, [ebp-1]
0x78651B: cmp     eax, 1
0x78651E: mov     [esp+6Ch+var_50], 1
0x786526: mov     [esp+6Ch+var_54], eax
0x78652A: jbe     loc_7867F2
0x786530: test    ebp, ebp
0x786532: mov     [esp+6Ch+var_3C], ebp
0x786536: fild    [esp+6Ch+var_3C]
0x78653A: jge     short loc_786542
0x78653C: fadd    dword ptr ds:0A2FC78h
0x786542: fstp    [esp+6Ch+var_48]
0x786546: mov     [esp+6Ch+var_44], 18h
0x78654E: jmp     short loc_786558
0x786550: mov     edi, [esp+6Ch+arg_0]
0x786554: mov     eax, [esp+6Ch+var_54]
0x786558: mov     ecx, [esp+6Ch+var_50]
0x78655C: fild    [esp+6Ch+var_50]
0x786560: test    ecx, ecx
0x786562: jge     short loc_78656A
0x786564: fadd    dword ptr ds:0A2FC78h
0x78656A: cmp     edi, eax
0x78656C: fdiv    [esp+6Ch+var_48]
0x786570: mov     esi, edi
0x786572: fstp    [esp+6Ch+var_58]
0x786576: jnb     loc_78661A
0x78657C: lea     ebx, [edi+edi*2]
0x78657F: mov     edi, [esp+6Ch+var_30]
0x786583: add     ebx, ebx
0x786585: add     ebx, ebx
0x786587: add     ebx, ebx
0x786589: lea     esp, [esp+0]
0x786590: test    edi, edi
0x786592: jz      short loc_7865AF
0x786594: mov     ecx, [esp+6Ch+var_2C]
0x786598: sub     ecx, edi
0x78659A: mov     eax, 2AAAAAABh
0x78659F: imul    ecx
0x7865A1: sar     edx, 2
0x7865A4: mov     eax, edx
0x7865A6: shr     eax, 1Fh
0x7865A9: add     eax, edx
0x7865AB: cmp     esi, eax
0x7865AD: jb      short loc_7865B8
0x7865AF: call    __invalid_parameter_noinfo
0x7865B4: mov     edi, [esp+6Ch+var_30]
0x7865B8: fld     [esp+6Ch+var_58]
0x7865BC: fld     dword ptr [ebx+edi]
0x7865BF: fcompp
0x7865C1: fnstsw  ax
0x7865C3: test    ah, 41h
0x7865C6: jp      short loc_786604
0x7865C8: test    edi, edi
0x7865CA: jz      short loc_7865EA
0x7865CC: mov     ecx, [esp+6Ch+var_2C]
0x7865D0: sub     ecx, edi
0x7865D2: mov     eax, 2AAAAAABh
0x7865D7: imul    ecx
0x7865D9: sar     edx, 2
0x7865DC: mov     eax, edx
0x7865DE: shr     eax, 1Fh
0x7865E1: add     eax, edx
0x7865E3: lea     edx, [esi+1]
0x7865E6: cmp     edx, eax
0x7865E8: jb      short loc_7865F3
0x7865EA: call    __invalid_parameter_noinfo
0x7865EF: mov     edi, [esp+6Ch+var_30]
0x7865F3: fld     [esp+6Ch+var_58]
0x7865F7: fld     dword ptr [ebx+edi+18h]
0x7865FB: fcompp
0x7865FD: fnstsw  ax
0x7865FF: test    ah, 41h
0x786602: jz      short loc_786612
0x786604: add     esi, 1
0x786607: add     ebx, 18h
0x78660A: cmp     esi, [esp+6Ch+var_54]
0x78660E: jb      short loc_786590
0x786610: jmp     short loc_786616
0x786612: mov     [esp+6Ch+arg_0], esi
0x786616: mov     edi, [esp+6Ch+arg_0]
0x78661A: fldz
0x78661C: sub     esp, 14h
0x78661F: fst     [esp+80h+var_70]; float
0x786623: lea     ecx, [esp+80h+var_24]
0x786627: fst     [esp+80h+var_74]; float
0x78662B: fst     [esp+80h+var_78]; float
0x78662F: fstp    [esp+80h+var_7C]; float
0x786633: fld     [esp+80h+var_58]
0x786637: fstp    [esp+80h+var_80]; float
0x78663A: call    sub_78E5D0
0x78663F: mov     ecx, [esp+6Ch+var_30]
0x786643: test    ecx, ecx
0x786645: jz      short loc_786664
0x786647: mov     esi, [esp+6Ch+var_2C]
0x78664B: mov     edx, esi
0x78664D: sub     edx, ecx
0x78664F: mov     eax, 2AAAAAABh
0x786654: imul    edx
0x786656: sar     edx, 2
0x786659: mov     eax, edx
0x78665B: shr     eax, 1Fh
0x78665E: add     eax, edx
0x786660: cmp     edi, eax
0x786662: jb      short loc_786671
0x786664: call    __invalid_parameter_noinfo
0x786669: mov     esi, [esp+6Ch+var_2C]
0x78666D: mov     ecx, [esp+6Ch+var_30]
0x786671: lea     ebp, [edi+edi*2]
0x786674: add     ebp, ebp
0x786676: add     ebp, ebp
0x786678: add     ebp, ebp
0x78667A: lea     eax, [ecx+ebp]
0x78667D: add     edi, 1
0x786680: test    ecx, ecx
0x786682: mov     [esp+6Ch+var_3C], eax
0x786686: jz      short loc_7866A1
0x786688: mov     edx, esi
0x78668A: sub     edx, ecx
0x78668C: mov     eax, 2AAAAAABh
0x786691: imul    edx
0x786693: sar     edx, 2
0x786696: mov     eax, edx
0x786698: shr     eax, 1Fh
0x78669B: add     eax, edx
0x78669D: cmp     edi, eax
0x78669F: jb      short loc_7866AE
0x7866A1: call    __invalid_parameter_noinfo
0x7866A6: mov     esi, [esp+6Ch+var_2C]
0x7866AA: mov     ecx, [esp+6Ch+var_30]
0x7866AE: test    ecx, ecx
0x7866B0: lea     edx, [edi+edi*2]
0x7866B3: lea     ebx, [ecx+edx*8]
0x7866B6: jz      short loc_7866D3
0x7866B8: mov     edx, esi
0x7866BA: sub     edx, ecx
0x7866BC: mov     eax, 2AAAAAABh
0x7866C1: imul    edx
0x7866C3: sar     edx, 2
0x7866C6: mov     eax, edx
0x7866C8: shr     eax, 1Fh
0x7866CB: add     eax, edx
0x7866CD: cmp     [esp+6Ch+arg_0], eax
0x7866D1: jb      short loc_7866E0
0x7866D3: call    __invalid_parameter_noinfo
0x7866D8: mov     esi, [esp+6Ch+var_2C]
0x7866DC: mov     ecx, [esp+6Ch+var_30]
0x7866E0: test    ecx, ecx
0x7866E2: fld     [esp+6Ch+var_58]
0x7866E6: mov     eax, [esp+6Ch+var_3C]
0x7866EA: fsub    dword ptr [eax]
0x7866EC: fld     dword ptr [ebx]
0x7866EE: fsub    dword ptr [ecx+ebp]
0x7866F1: fdivp   st(1), st
0x7866F3: fstp    [esp+6Ch+var_58]
0x7866F7: jz      short loc_786712
0x7866F9: mov     edx, esi
0x7866FB: sub     edx, ecx
0x7866FD: mov     eax, 2AAAAAABh
0x786702: imul    edx
0x786704: sar     edx, 2
0x786707: mov     eax, edx
0x786709: shr     eax, 1Fh
0x78670C: add     eax, edx
0x78670E: cmp     edi, eax
0x786710: jb      short loc_78671F
0x786712: call    __invalid_parameter_noinfo
0x786717: mov     esi, [esp+6Ch+var_2C]
0x78671B: mov     ecx, [esp+6Ch+var_30]
0x78671F: test    ecx, ecx
0x786721: lea     edx, [edi+edi*2]
0x786724: lea     edi, [ecx+edx*8]
0x786727: jz      short loc_786742
0x786729: sub     esi, ecx
0x78672B: mov     eax, 2AAAAAABh
0x786730: imul    esi
0x786732: sar     edx, 2
0x786735: mov     eax, edx
0x786737: shr     eax, 1Fh
0x78673A: add     eax, edx
0x78673C: cmp     [esp+6Ch+arg_0], eax
0x786740: jb      short loc_78674B
0x786742: call    __invalid_parameter_noinfo
0x786747: mov     ecx, [esp+6Ch+var_30]
0x78674B: fld     dword ptr [ecx+ebp+4]
0x78674F: mov     esi, [esp+6Ch+var_40]
0x786753: mov     eax, [esi+4]
0x786756: fstp    [esp+6Ch+var_3C]
0x78675A: test    eax, eax
0x78675C: fld     dword ptr [edi+4]
0x78675F: fld     [esp+6Ch+var_3C]
0x786763: fld     st
0x786765: fsubp   st(2), st
0x786767: fld     [esp+6Ch+var_58]
0x78676B: fmulp   st(2), st
0x78676D: faddp   st(1), st
0x78676F: fstp    [esp+6Ch+var_20]
0x786773: jz      short loc_786791
0x786775: mov     ecx, [esi+8]
0x786778: sub     ecx, eax
0x78677A: mov     eax, 2AAAAAABh
0x78677F: imul    ecx
0x786781: sar     edx, 2
0x786784: mov     eax, edx
0x786786: shr     eax, 1Fh
0x786789: add     eax, edx
0x78678B: cmp     [esp+6Ch+var_50], eax
0x78678F: jb      short loc_786796
0x786791: call    __invalid_parameter_noinfo
0x786796: mov     eax, [esi+4]
0x786799: mov     ecx, [esp+6Ch+var_24]
0x78679D: mov     esi, [esp+6Ch+var_44]
0x7867A1: mov     [eax+esi], ecx
0x7867A4: mov     edx, [esp+6Ch+var_20]
0x7867A8: add     eax, esi
0x7867AA: mov     [eax+4], edx
0x7867AD: mov     ecx, [esp+6Ch+var_1C]
0x7867B1: mov     [eax+8], ecx
0x7867B4: mov     edx, [esp+6Ch+var_18]
0x7867B8: mov     [eax+0Ch], edx
0x7867BB: mov     ecx, [esp+6Ch+var_14]
0x7867BF: mov     [eax+10h], ecx
0x7867C2: mov     edx, [esp+6Ch+var_10]
0x7867C6: lea     ecx, [esp+6Ch+var_24]; void *
0x7867CA: mov     [eax+14h], edx
0x7867CD: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7867D2: mov     eax, [esp+6Ch+var_50]
0x7867D6: add     eax, 1
0x7867D9: add     esi, 18h
0x7867DC: cmp     eax, [esp+6Ch+var_54]
0x7867E0: mov     [esp+6Ch+var_50], eax
0x7867E4: mov     [esp+6Ch+var_44], esi
0x7867E8: jb      loc_786550
0x7867EE: mov     ebx, [esp+6Ch+var_40]
0x7867F2: mov     edi, [esp+6Ch+var_4C]
0x7867F6: mov     eax, [edi+10h]
0x7867F9: test    eax, eax
0x7867FB: jz      short loc_786813
0x7867FD: mov     ecx, [edi+14h]
0x786800: sub     ecx, eax
0x786802: mov     eax, 2AAAAAABh
0x786807: imul    ecx
0x786809: sar     edx, 2
0x78680C: mov     eax, edx
0x78680E: shr     eax, 1Fh
0x786811: add     eax, edx
0x786813: lea     esi, [eax-1]
0x786816: mov     eax, [edi+10h]
0x786819: test    eax, eax
0x78681B: jz      short loc_786837
0x78681D: mov     ecx, [edi+14h]
0x786820: sub     ecx, eax
0x786822: mov     eax, 2AAAAAABh
0x786827: imul    ecx
0x786829: sar     edx, 2
0x78682C: mov     eax, edx
0x78682E: shr     eax, 1Fh
0x786831: add     eax, edx
0x786833: cmp     esi, eax
0x786835: jb      short loc_78683C
0x786837: call    __invalid_parameter_noinfo
0x78683C: mov     ecx, [edi+10h]
0x78683F: mov     edi, [esp+6Ch+var_54]
0x786843: lea     eax, [esi+esi*2]
0x786846: lea     esi, [ecx+eax*8]
0x786849: mov     eax, [ebx+4]
0x78684C: test    eax, eax
0x78684E: jz      short loc_78686A
0x786850: mov     ecx, [ebx+8]
0x786853: sub     ecx, eax
0x786855: mov     eax, 2AAAAAABh
0x78685A: imul    ecx
0x78685C: sar     edx, 2
0x78685F: mov     eax, edx
0x786861: shr     eax, 1Fh
0x786864: add     eax, edx
0x786866: cmp     edi, eax
0x786868: jb      short loc_78686F
0x78686A: call    __invalid_parameter_noinfo
0x78686F: mov     eax, [ebx+4]
0x786872: mov     ecx, [esi]
0x786874: lea     edx, [edi+edi*2]
0x786877: lea     eax, [eax+edx*8]
0x78687A: mov     [eax], ecx
0x78687C: mov     edx, [esi+4]
0x78687F: mov     [eax+4], edx
0x786882: mov     ecx, [esi+8]
0x786885: mov     [eax+8], ecx
0x786888: mov     edx, [esi+0Ch]
0x78688B: mov     [eax+0Ch], edx
0x78688E: mov     ecx, [esi+10h]
0x786891: mov     [eax+10h], ecx
0x786894: mov     edx, [esi+14h]
0x786897: mov     [eax+14h], edx
0x78689A: mov     esi, [esp+6Ch+var_30]
0x78689E: test    esi, esi
0x7868A0: mov     [esp+6Ch+var_4], 0FFFFFFFFh
0x7868A8: jz      short loc_7868CD
0x7868AA: mov     edi, [esp+6Ch+var_2C]
0x7868AE: cmp     esi, edi
0x7868B0: jz      short loc_7868C4
0x7868B2: mov     ecx, esi; void *
0x7868B4: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7868B9: add     esi, 18h
0x7868BC: cmp     esi, edi
0x7868BE: jnz     short loc_7868B2
0x7868C0: mov     esi, [esp+6Ch+var_30]
0x7868C4: push    esi
0x7868C5: call    FormHeapFree
0x7868CA: add     esp, 4
0x7868CD: mov     ecx, [esp+6Ch+var_C]
0x7868D1: mov     large fs:0, ecx
0x7868D8: pop     ecx
0x7868D9: pop     edi
0x7868DA: pop     esi
0x7868DB: pop     ebp
0x7868DC: pop     ebx
0x7868DD: add     esp, 58h
0x7868E0: retn    4
