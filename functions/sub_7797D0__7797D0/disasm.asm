0x7797D0: push    esi
0x7797D1: mov     esi, [esp+4+arg_8]
0x7797D5: mov     ecx, [esi+0Ch]
0x7797D8: push    edi
0x7797D9: mov     edi, [esp+8+arg_C]
0x7797DD: push    edi
0x7797DE: push    20000h
0x7797E3: push    0Bh
0x7797E5: call    sub_772FF0
0x7797EA: mov     ecx, [esi+0Ch]
0x7797ED: push    edi
0x7797EE: push    2
0x7797F0: push    18h
0x7797F2: mov     byte ptr [esi+5Ah], 1
0x7797F6: call    sub_772FF0
0x7797FB: mov     ecx, [esp+8+arg_0]
0x7797FF: mov     eax, [esp+8+arg_10]
0x779803: fld     dword ptr [ecx+4]
0x779806: fmul    dword ptr [eax+0A04h]
0x77980C: fld     dword ptr [eax+0A00h]
0x779812: fmul    dword ptr [ecx]
0x779814: faddp   st(1), st
0x779816: fld     dword ptr [eax+0A08h]
0x77981C: fmul    dword ptr [ecx+8]
0x77981F: faddp   st(1), st
0x779821: fstp    dword ptr [esi+18h]
0x779824: fld     dword ptr [ecx]
0x779826: fmul    dword ptr [eax+0A10h]
0x77982C: fld     dword ptr [ecx+4]
0x77982F: fmul    dword ptr [eax+0A14h]
0x779835: faddp   st(1), st
0x779837: fld     dword ptr [ecx+8]
0x77983A: fmul    dword ptr [eax+0A18h]
0x779840: faddp   st(1), st
0x779842: fstp    dword ptr [esi+28h]
0x779845: fld     dword ptr [ecx]
0x779847: fmul    dword ptr [eax+0A20h]
0x77984D: fld     dword ptr [ecx+4]
0x779850: fmul    dword ptr [eax+0A24h]
0x779856: faddp   st(1), st
0x779858: fld     dword ptr [ecx+8]
0x77985B: fmul    dword ptr [eax+0A28h]
0x779861: faddp   st(1), st
0x779863: fstp    dword ptr [esi+38h]
0x779866: fld     dword ptr [ecx+10h]
0x779869: fmul    dword ptr [eax+0A04h]
0x77986F: fld     dword ptr [eax+0A00h]
0x779875: fmul    dword ptr [ecx+0Ch]
0x779878: faddp   st(1), st
0x77987A: fld     dword ptr [eax+0A08h]
0x779880: fmul    dword ptr [ecx+14h]
0x779883: faddp   st(1), st
0x779885: fstp    dword ptr [esi+1Ch]
0x779888: fld     dword ptr [ecx+10h]
0x77988B: fmul    dword ptr [eax+0A14h]
0x779891: fld     dword ptr [ecx+0Ch]
0x779894: fmul    dword ptr [eax+0A10h]
0x77989A: faddp   st(1), st
0x77989C: fld     dword ptr [eax+0A18h]
0x7798A2: fmul    dword ptr [ecx+14h]
0x7798A5: faddp   st(1), st
0x7798A7: fstp    dword ptr [esi+2Ch]
0x7798AA: fld     dword ptr [ecx+10h]
0x7798AD: fmul    dword ptr [eax+0A24h]
0x7798B3: fld     dword ptr [ecx+0Ch]
0x7798B6: fmul    dword ptr [eax+0A20h]
0x7798BC: faddp   st(1), st
0x7798BE: fld     dword ptr [eax+0A28h]
0x7798C4: fmul    dword ptr [ecx+14h]
0x7798C7: faddp   st(1), st
0x7798C9: fstp    dword ptr [esi+3Ch]
0x7798CC: fld     dword ptr [eax+0A00h]
0x7798D2: fmul    dword ptr [ecx+18h]
0x7798D5: fld     dword ptr [ecx+1Ch]
0x7798D8: fmul    dword ptr [eax+0A04h]
0x7798DE: faddp   st(1), st
0x7798E0: fld     dword ptr [ecx+20h]
0x7798E3: fmul    dword ptr [eax+0A08h]
0x7798E9: faddp   st(1), st
0x7798EB: fstp    dword ptr [esi+20h]
0x7798EE: fld     dword ptr [eax+0A14h]
0x7798F4: fmul    dword ptr [ecx+1Ch]
0x7798F7: mov     edx, [esp+8+arg_4]
0x7798FB: fld     dword ptr [ecx+18h]
0x7798FE: pop     edi
0x7798FF: fmul    dword ptr [eax+0A10h]
0x779905: faddp   st(1), st
0x779907: fld     dword ptr [ecx+20h]
0x77990A: fmul    dword ptr [eax+0A18h]
0x779910: faddp   st(1), st
0x779912: fstp    dword ptr [esi+30h]
0x779915: fld     dword ptr [eax+0A24h]
0x77991B: fmul    dword ptr [ecx+1Ch]
0x77991E: fld     dword ptr [ecx+18h]
0x779921: fmul    dword ptr [eax+0A20h]
0x779927: faddp   st(1), st
0x779929: fld     dword ptr [ecx+20h]
0x77992C: fmul    dword ptr [eax+0A28h]
0x779932: faddp   st(1), st
0x779934: fstp    dword ptr [esi+40h]
0x779937: fld     dword ptr [ecx]
0x779939: fmul    dword ptr [eax+0A30h]
0x77993F: fld     dword ptr [ecx+4]
0x779942: fmul    dword ptr [eax+0A34h]
0x779948: faddp   st(1), st
0x77994A: fld     dword ptr [ecx+8]
0x77994D: fmul    dword ptr [eax+0A38h]
0x779953: faddp   st(1), st
0x779955: fadd    dword ptr [edx]
0x779957: fstp    dword ptr [esi+48h]
0x77995A: fld     dword ptr [ecx+10h]
0x77995D: fmul    dword ptr [eax+0A34h]
0x779963: fld     dword ptr [eax+0A30h]
0x779969: fmul    dword ptr [ecx+0Ch]
0x77996C: faddp   st(1), st
0x77996E: fld     dword ptr [ecx+14h]
0x779971: fmul    dword ptr [eax+0A38h]
0x779977: faddp   st(1), st
0x779979: fadd    dword ptr [edx+4]
0x77997C: fstp    dword ptr [esi+4Ch]
0x77997F: fld     dword ptr [eax+0A30h]
0x779985: fmul    dword ptr [ecx+18h]
0x779988: fld     dword ptr [ecx+1Ch]
0x77998B: fmul    dword ptr [eax+0A34h]
0x779991: faddp   st(1), st
0x779993: fld     dword ptr [ecx+20h]
0x779996: fmul    dword ptr [eax+0A38h]
0x77999C: faddp   st(1), st
0x77999E: fadd    dword ptr [edx+8]
0x7799A1: fstp    dword ptr [esi+50h]
0x7799A4: fldz
0x7799A6: fst     dword ptr [esi+54h]
0x7799A9: fst     dword ptr [esi+44h]
0x7799AC: fst     dword ptr [esi+34h]
0x7799AF: fstp    dword ptr [esi+24h]
0x7799B2: pop     esi
0x7799B3: retn
