0x762640: sub     esp, 24h
0x762643: push    esi
0x762644: mov     esi, ecx
0x762646: cmp     byte ptr [esi+6F0h], 0
0x76264D: jnz     loc_762BCD
0x762653: mov     eax, [esp+28h+arg_0]
0x762657: mov     ecx, [eax]
0x762659: mov     ds:0B3F92Ch, ecx
0x76265F: mov     edx, [eax+4]
0x762662: mov     ecx, ds:0B3F9A8h
0x762668: mov     ds:0B3F930h, edx
0x76266E: mov     eax, [eax+8]
0x762671: mov     edx, ds:0B3F9ACh
0x762677: mov     ds:0B3F934h, eax
0x76267C: mov     eax, ds:0B3F9B0h
0x762681: push    ebx
0x762682: mov     ebx, [esp+2Ch+arg_8]
0x762686: push    edi
0x762687: mov     edi, [esp+30h+arg_C]
0x76268B: fld     dword ptr [edi]
0x76268D: mov     [esp+30h+var_24], ecx
0x762691: fstp    dword ptr [esi+980h]
0x762697: lea     ecx, [esi+980h]
0x76269D: fld     dword ptr [ebx]
0x76269F: mov     [esp+30h+var_1C], eax
0x7626A3: fstp    dword ptr [esi+984h]
0x7626A9: mov     eax, [esp+30h+arg_4]
0x7626AD: fld     dword ptr [eax]
0x7626AF: mov     [esp+30h+var_20], edx
0x7626B3: fstp    dword ptr [esi+988h]
0x7626B9: fldz
0x7626BB: fst     dword ptr [esi+98Ch]
0x7626C1: fld     dword ptr [edi+4]
0x7626C4: fstp    dword ptr [esi+990h]
0x7626CA: fld     dword ptr [ebx+4]
0x7626CD: fstp    dword ptr [esi+994h]
0x7626D3: fld     dword ptr [eax+4]
0x7626D6: fstp    dword ptr [esi+998h]
0x7626DC: fst     dword ptr [esi+99Ch]
0x7626E2: fld     dword ptr [edi+8]
0x7626E5: fstp    dword ptr [esi+9A0h]
0x7626EB: fld     dword ptr [ebx+8]
0x7626EE: fstp    dword ptr [esi+9A4h]
0x7626F4: fld     dword ptr [eax+8]
0x7626F7: fstp    dword ptr [esi+9A8h]
0x7626FD: fst     dword ptr [esi+9ACh]
0x762703: fld     dword ptr [edi+4]
0x762706: fld     [esp+30h+var_20]
0x76270A: fld     st
0x76270C: fmulp   st(2), st
0x76270E: fld     dword ptr [edi]
0x762710: fld     [esp+30h+var_24]
0x762714: fld     st
0x762716: fmulp   st(2), st
0x762718: fxch    st(3)
0x76271A: faddp   st(1), st
0x76271C: fld     [esp+30h+var_1C]
0x762720: fld     st
0x762722: fmul    dword ptr [edi+8]
0x762725: faddp   st(2), st
0x762727: fxch    st(1)
0x762729: fstp    [esp+30h+arg_0]
0x76272D: fld     [esp+30h+arg_0]
0x762731: fchs
0x762733: fstp    dword ptr [esi+9B0h]
0x762739: fld     dword ptr [ebx]
0x76273B: fmul    st, st(3)
0x76273D: fld     st(2)
0x76273F: fmul    dword ptr [ebx+4]
0x762742: faddp   st(1), st
0x762744: fld     dword ptr [ebx+8]
0x762747: fmul    st, st(2)
0x762749: faddp   st(1), st
0x76274B: fstp    [esp+30h+arg_0]
0x76274F: fld     [esp+30h+arg_0]
0x762753: fchs
0x762755: fstp    dword ptr [esi+9B4h]
0x76275B: fld     dword ptr [eax]
0x76275D: fmul    st, st(3)
0x76275F: fld     dword ptr [eax+4]
0x762762: fmul    st, st(3)
0x762764: faddp   st(1), st
0x762766: fld     dword ptr [eax+8]
0x762769: fmul    st, st(2)
0x76276B: faddp   st(1), st
0x76276D: fstp    [esp+30h+arg_0]
0x762771: fld     [esp+30h+arg_0]
0x762775: push    ecx
0x762776: fchs
0x762778: push    2
0x76277A: fstp    dword ptr [esi+9B8h]
0x762780: fld1
0x762782: fst     dword ptr [esi+9BCh]
0x762788: fld     dword ptr [edi]
0x76278A: fstp    dword ptr [esi+0A00h]
0x762790: fld     dword ptr [edi+4]
0x762793: fstp    dword ptr [esi+0A04h]
0x762799: fld     dword ptr [edi+8]
0x76279C: fstp    dword ptr [esi+0A08h]
0x7627A2: fxch    st(4)
0x7627A4: fst     dword ptr [esi+0A0Ch]
0x7627AA: fld     dword ptr [ebx]
0x7627AC: fstp    dword ptr [esi+0A10h]
0x7627B2: fld     dword ptr [ebx+4]
0x7627B5: fstp    dword ptr [esi+0A14h]
0x7627BB: fld     dword ptr [ebx+8]
0x7627BE: fstp    dword ptr [esi+0A18h]
0x7627C4: fst     dword ptr [esi+0A1Ch]
0x7627CA: fld     dword ptr [eax]
0x7627CC: fstp    dword ptr [esi+0A20h]
0x7627D2: fld     dword ptr [eax+4]
0x7627D5: fstp    dword ptr [esi+0A24h]
0x7627DB: fld     dword ptr [eax+8]
0x7627DE: mov     eax, [esi+280h]
0x7627E4: fstp    dword ptr [esi+0A28h]
0x7627EA: push    eax
0x7627EB: fstp    dword ptr [esi+0A2Ch]
0x7627F1: fxch    st(2)
0x7627F3: fstp    dword ptr [esi+0A30h]
0x7627F9: fstp    dword ptr [esi+0A34h]
0x7627FF: fstp    dword ptr [esi+0A38h]
0x762805: fstp    dword ptr [esi+0A3Ch]
0x76280B: mov     edx, [eax]
0x76280D: mov     eax, [edx+0B0h]
0x762813: call    eax
0x762815: mov     ecx, [edi]
0x762817: mov     [esi+640h], ecx
0x76281D: mov     edx, [edi+4]
0x762820: mov     [esi+644h], edx
0x762826: mov     eax, [edi+8]
0x762829: mov     [esi+648h], eax
0x76282F: mov     ecx, [edi]
0x762831: mov     [esi+628h], ecx
0x762837: mov     edx, [edi+4]
0x76283A: mov     [esi+62Ch], edx
0x762840: mov     eax, [edi+8]
0x762843: mov     edi, [esp+28h+arg_18]
0x762847: mov     [esi+630h], eax
0x76284D: mov     ecx, [ebx]
0x76284F: mov     [esi+64Ch], ecx
0x762855: mov     edx, [ebx+4]
0x762858: mov     [esi+650h], edx
0x76285E: mov     eax, [ebx+8]
0x762861: mov     [esi+654h], eax
0x762867: mov     ecx, [ebx]
0x762869: mov     [esi+634h], ecx
0x76286F: mov     edx, [ebx+4]
0x762872: mov     [esi+638h], edx
0x762878: mov     eax, [ebx+8]
0x76287B: mov     [esi+63Ch], eax
0x762881: fld     dword ptr [edi+10h]
0x762884: fstp    dword ptr [esi+678h]
0x76288A: fld     dword ptr [edi+14h]
0x76288D: fsub    dword ptr [edi+10h]
0x762890: fstp    [esp+28h+arg_8]
0x762894: fld     [esp+28h+arg_8]
0x762898: fst     dword ptr [esi+67Ch]
0x76289E: fld     dword ptr [edi+4]
0x7628A1: fsub    dword ptr [edi]
0x7628A3: fstp    [esp+28h+arg_8]
0x7628A7: fld     dword ptr [edi+4]
0x7628AA: fadd    dword ptr [edi]
0x7628AC: fstp    [esp+28h+arg_14]
0x7628B0: fld     dword ptr [edi+8]
0x7628B3: fsub    dword ptr [edi+0Ch]
0x7628B6: fstp    [esp+28h+arg_10]
0x7628BA: fld     dword ptr [edi+0Ch]
0x7628BD: cmp     byte ptr [edi+18h], 0
0x7628C1: fadd    dword ptr [edi+8]
0x7628C4: mov     ecx, [esi+8ACh]
0x7628CA: mov     edx, [ecx]
0x7628CC: fstp    [esp+28h+arg_C]
0x7628D0: mov     eax, [edx+48h]
0x7628D3: fld1
0x7628D5: fdivrp  st(1), st
0x7628D7: fstp    [esp+28h+arg_18]
0x7628DB: jz      loc_76299D
0x7628E1: call    eax
0x7628E3: fld     qword ptr ds:0A3D0C0h
0x7628E9: test    al, al
0x7628EB: fld     [esp+28h+arg_8]
0x7628EF: lea     ecx, [esi+9C0h]
0x7628F5: fld     st
0x7628F7: jz      short loc_762915
0x7628F9: fdivr   qword ptr ds:0A3F400h
0x7628FF: fstp    dword ptr [ecx]
0x762901: fldz
0x762903: fst     dword ptr [esi+9D0h]
0x762909: fst     dword ptr [esi+9E0h]
0x76290F: fld     [esp+28h+arg_14]
0x762913: jmp     short loc_76292D
0x762915: fdivr   st, st(2)
0x762917: fstp    dword ptr [ecx]
0x762919: fldz
0x76291B: fst     dword ptr [esi+9D0h]
0x762921: fst     dword ptr [esi+9E0h]
0x762927: fld     [esp+28h+arg_14]
0x76292B: fchs
0x76292D: fdivrp  st(2), st
0x76292F: fxch    st(1)
0x762931: fstp    dword ptr [esi+9F0h]
0x762937: fst     dword ptr [esi+9C4h]
0x76293D: fld     [esp+28h+arg_10]
0x762941: fld     st
0x762943: fdivp   st(3), st
0x762945: fxch    st(2)
0x762947: fstp    dword ptr [esi+9D4h]
0x76294D: fst     dword ptr [esi+9E4h]
0x762953: fld     [esp+28h+arg_C]
0x762957: fchs
0x762959: fdivrp  st(2), st
0x76295B: fxch    st(1)
0x76295D: fstp    dword ptr [esi+9F4h]
0x762963: fst     dword ptr [esi+9C8h]
0x762969: fst     dword ptr [esi+9D8h]
0x76296F: fld     [esp+28h+arg_18]
0x762973: fst     dword ptr [esi+9E8h]
0x762979: fmul    dword ptr [edi+10h]
0x76297C: fchs
0x76297E: fstp    dword ptr [esi+9F8h]
0x762984: fst     dword ptr [esi+9CCh]
0x76298A: fst     dword ptr [esi+9DCh]
0x762990: fstp    dword ptr [esi+9ECh]
0x762996: fld1
0x762998: jmp     loc_762A5C
0x76299D: call    eax
0x76299F: fld     qword ptr ds:0A3D0C0h
0x7629A5: test    al, al
0x7629A7: fld     [esp+28h+arg_8]
0x7629AB: lea     ecx, [esi+9C0h]
0x7629B1: fld     st
0x7629B3: jz      short loc_7629CB
0x7629B5: fdivr   qword ptr ds:0A3F400h
0x7629BB: fstp    dword ptr [ecx]
0x7629BD: fldz
0x7629BF: fst     dword ptr [esi+9D0h]
0x7629C5: fld     [esp+28h+arg_14]
0x7629C9: jmp     short loc_7629DD
0x7629CB: fdivr   st, st(2)
0x7629CD: fstp    dword ptr [ecx]
0x7629CF: fldz
0x7629D1: fst     dword ptr [esi+9D0h]
0x7629D7: fld     [esp+28h+arg_14]
0x7629DB: fchs
0x7629DD: fdivrp  st(2), st
0x7629DF: fxch    st(1)
0x7629E1: fstp    dword ptr [esi+9E0h]
0x7629E7: fst     dword ptr [esi+9F0h]
0x7629ED: fst     dword ptr [esi+9C4h]
0x7629F3: fld     [esp+28h+arg_10]
0x7629F7: fld     st
0x7629F9: fdivp   st(3), st
0x7629FB: fxch    st(2)
0x7629FD: fstp    dword ptr [esi+9D4h]
0x762A03: fld     [esp+28h+arg_C]
0x762A07: fchs
0x762A09: fdivrp  st(2), st
0x762A0B: fxch    st(1)
0x762A0D: fstp    dword ptr [esi+9E4h]
0x762A13: fst     dword ptr [esi+9F4h]
0x762A19: fst     dword ptr [esi+9C8h]
0x762A1F: fst     dword ptr [esi+9D8h]
0x762A25: fld     dword ptr [edi+14h]
0x762A28: fld     [esp+28h+arg_18]
0x762A2C: fld     st
0x762A2E: fmulp   st(2), st
0x762A30: fxch    st(1)
0x762A32: fstp    dword ptr [esi+9E8h]
0x762A38: fld     dword ptr [edi+14h]
0x762A3B: fmul    dword ptr [edi+10h]
0x762A3E: fmulp   st(1), st
0x762A40: fchs
0x762A42: fstp    dword ptr [esi+9F8h]
0x762A48: fst     dword ptr [esi+9CCh]
0x762A4E: fst     dword ptr [esi+9DCh]
0x762A54: fld1
0x762A56: fstp    dword ptr [esi+9ECh]
0x762A5C: mov     eax, [esi+280h]
0x762A62: fstp    dword ptr [esi+9FCh]
0x762A68: mov     edx, [eax]
0x762A6A: push    ecx
0x762A6B: push    3
0x762A6D: push    eax
0x762A6E: mov     eax, [edx+0B0h]
0x762A74: call    eax
0x762A76: mov     ecx, [esi+87Ch]
0x762A7C: mov     edx, [ecx]
0x762A7E: mov     eax, [edx+4Ch]
0x762A81: push    0
0x762A83: call    eax
0x762A85: test    eax, eax
0x762A87: mov     [esp+28h+arg_8], eax
0x762A8B: fild    [esp+28h+arg_8]
0x762A8F: jge     short loc_762A97
0x762A91: fadd    dword ptr ds:0A2FC78h
0x762A97: mov     ecx, [esi+87Ch]
0x762A9D: fstp    [esp+28h+arg_8]
0x762AA1: mov     edx, [ecx]
0x762AA3: mov     eax, [edx+50h]
0x762AA6: push    0
0x762AA8: call    eax
0x762AAA: test    eax, eax
0x762AAC: mov     [esp+28h+arg_14], eax
0x762AB0: fild    [esp+28h+arg_14]
0x762AB4: jge     short loc_762ABC
0x762AB6: fadd    dword ptr ds:0A2FC78h
0x762ABC: mov     ecx, [esp+28h+arg_1C]
0x762AC0: fstp    [esp+28h+arg_10]
0x762AC4: fld     dword ptr [ecx]
0x762AC6: fld     [esp+28h+arg_8]
0x762ACA: fld     st
0x762ACC: fmulp   st(2), st
0x762ACE: fnstcw  word ptr [esp+28h+arg_8]
0x762AD2: movzx   eax, word ptr [esp+28h+arg_8]
0x762AD7: fxch    st(1)
0x762AD9: or      eax, 0C00h
0x762ADE: mov     [esp+28h+arg_14], eax
0x762AE2: fldcw   word ptr [esp+28h+arg_14]
0x762AE6: fistp   qword ptr [esp+28h+var_1C]
0x762AEA: mov     edx, [esp+28h+var_1C]
0x762AEE: mov     [esp+28h+var_10], edx
0x762AF2: fldcw   word ptr [esp+28h+arg_8]
0x762AF6: fld     dword ptr [ecx+8]
0x762AF9: fld1
0x762AFB: fsubrp  st(1), st
0x762AFD: fld     [esp+28h+arg_10]
0x762B01: fld     st
0x762B03: fmulp   st(2), st
0x762B05: fnstcw  word ptr [esp+28h+arg_8]
0x762B09: fxch    st(1)
0x762B0B: movzx   eax, word ptr [esp+28h+arg_8]
0x762B10: or      eax, 0C00h
0x762B15: mov     [esp+28h+arg_14], eax
0x762B19: fldcw   word ptr [esp+28h+arg_14]
0x762B1D: fistp   qword ptr [esp+28h+var_1C]
0x762B21: mov     eax, [esp+28h+var_1C]
0x762B25: mov     [esp+28h+var_C], eax
0x762B29: fldcw   word ptr [esp+28h+arg_8]
0x762B2D: fld     dword ptr [ecx+4]
0x762B30: fsub    dword ptr [ecx]
0x762B32: fnstcw  word ptr [esp+28h+arg_8]
0x762B36: fmulp   st(2), st
0x762B38: movzx   eax, word ptr [esp+28h+arg_8]
0x762B3D: fxch    st(1)
0x762B3F: or      eax, 0C00h
0x762B44: mov     [esp+28h+arg_14], eax
0x762B48: fldcw   word ptr [esp+28h+arg_14]
0x762B4C: fistp   qword ptr [esp+28h+var_1C]
0x762B50: mov     edx, [esp+28h+var_1C]
0x762B54: mov     [esp+28h+var_8], edx
0x762B58: lea     edx, [esp+28h+var_10]
0x762B5C: push    edx
0x762B5D: fldcw   word ptr [esp+2Ch+arg_8]
0x762B61: fld     dword ptr [ecx+8]
0x762B64: fsub    dword ptr [ecx+0Ch]
0x762B67: fnstcw  word ptr [esp+2Ch+arg_8]
0x762B6B: fmulp   st(1), st
0x762B6D: movzx   eax, word ptr [esp+2Ch+arg_8]
0x762B72: or      eax, 0C00h
0x762B77: mov     [esp+2Ch+arg_14], eax
0x762B7B: fldcw   word ptr [esp+2Ch+arg_14]
0x762B7F: fistp   qword ptr [esp+2Ch+var_1C]
0x762B83: mov     eax, [esp+2Ch+var_1C]
0x762B87: mov     [esp+2Ch+var_4], eax
0x762B8B: mov     eax, [esi+280h]
0x762B91: push    eax
0x762B92: fldcw   word ptr [esp+30h+arg_8]
0x762B96: fldz
0x762B98: fstp    dword ptr [esp+30h]
0x762B9C: fld1
0x762B9E: fstp    [esp+30h+arg_0]
0x762BA2: mov     ecx, [eax]
0x762BA4: mov     eax, [ecx+0BCh]
0x762BAA: call    eax
0x762BAC: fld     dword ptr [edi+14h]
0x762BAF: mov     esi, [esi+8ACh]
0x762BB5: mov     edx, [esi]
0x762BB7: mov     eax, [edx+44h]
0x762BBA: sub     esp, 8
0x762BBD: fstp    [esp+38h+var_34]
0x762BC1: mov     ecx, esi
0x762BC3: fld     dword ptr [edi+10h]
0x762BC6: fstp    [esp+38h+var_38]
0x762BC9: call    eax
0x762BCB: pop     edi
0x762BCC: pop     ebx
0x762BCD: pop     esi
0x762BCE: add     esp, 24h
0x762BD1: retn    18h
