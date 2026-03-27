0x754810: sub     esp, 18h
0x754813: fld     dword ptr [ecx+14h]
0x754816: mov     edx, [esp+18h+arg_8]
0x75481A: fsub    dword ptr [ecx+3Ch]
0x75481D: movzx   eax, dx
0x754820: push    esi
0x754821: mov     esi, [esp+1Ch+arg_4]
0x754825: fstp    [esp+1Ch+var_18]
0x754829: push    edi
0x75482A: fld     dword ptr [ecx+18h]
0x75482D: lea     edi, ds:0[eax*8]
0x754834: fsub    dword ptr [ecx+40h]
0x754837: sub     edi, eax
0x754839: mov     eax, [esi+5Ch]
0x75483C: lea     eax, [eax+edi*4]
0x75483F: fstp    [esp+20h+var_14]
0x754843: fld     dword ptr [ecx+1Ch]
0x754846: fsub    dword ptr [ecx+44h]
0x754849: fstp    [esp+20h+var_10]
0x75484D: fld     dword ptr [ecx+34h]
0x754850: fld1
0x754852: fdivrp  st(1), st
0x754854: fstp    [esp+20h+arg_8]
0x754858: fld     [esp+20h+arg_8]
0x75485C: fld     st
0x75485E: fmul    [esp+20h+var_18]
0x754862: fstp    [esp+20h+var_C]
0x754866: fld     [esp+20h+var_14]
0x75486A: fmul    st, st(1)
0x75486C: fstp    [esp+20h+var_8]
0x754870: fmul    [esp+20h+var_10]
0x754874: fstp    [esp+20h+var_4]
0x754878: fld     dword ptr [eax]
0x75487A: fld     [esp+20h+var_C]
0x75487E: fld     st
0x754880: fmulp   st(2), st
0x754882: fld     dword ptr [eax+4]
0x754885: fld     [esp+20h+var_8]
0x754889: fld     st
0x75488B: fmulp   st(2), st
0x75488D: fxch    st(3)
0x75488F: faddp   st(1), st
0x754891: fld     dword ptr [eax+8]
0x754894: fld     [esp+20h+var_4]
0x754898: fld     st
0x75489A: fmulp   st(2), st
0x75489C: fxch    st(2)
0x75489E: faddp   st(1), st
0x7548A0: fstp    [esp+20h+arg_8]
0x7548A4: fld     [esp+20h+arg_8]
0x7548A8: fld     st
0x7548AA: fmulp   st(3), st
0x7548AC: fxch    st(2)
0x7548AE: fstp    [esp+20h+var_C]
0x7548B2: fld     st(1)
0x7548B4: fmulp   st(3), st
0x7548B6: fxch    st(2)
0x7548B8: fstp    [esp+20h+var_8]
0x7548BC: fmulp   st(1), st
0x7548BE: fstp    [esp+20h+var_4]
0x7548C2: fld     [esp+20h+var_C]
0x7548C6: fadd    st, st
0x7548C8: fstp    [esp+20h+var_18]
0x7548CC: fld     [esp+20h+var_8]
0x7548D0: fadd    st, st
0x7548D2: fstp    [esp+20h+var_14]
0x7548D6: fld     [esp+20h+var_4]
0x7548DA: fadd    st, st
0x7548DC: fstp    [esp+20h+var_10]
0x7548E0: fld     dword ptr [eax]
0x7548E2: fsub    [esp+20h+var_18]
0x7548E6: fstp    [esp+20h+arg_8]
0x7548EA: fld     [esp+20h+arg_8]
0x7548EE: fst     dword ptr [eax]
0x7548F0: fld     dword ptr [eax+4]
0x7548F3: fsub    [esp+20h+var_14]
0x7548F7: fstp    [esp+20h+arg_8]
0x7548FB: fld     [esp+20h+arg_8]
0x7548FF: fst     dword ptr [eax+4]
0x754902: fld     dword ptr [eax+8]
0x754905: fsub    [esp+20h+var_10]
0x754909: fstp    [esp+20h+arg_8]
0x75490D: fld     [esp+20h+arg_8]
0x754911: push    edx; int
0x754912: fst     dword ptr [eax+8]
0x754915: push    esi; int
0x754916: fld     dword ptr [ecx+8]
0x754919: push    ecx
0x75491A: fstp    [esp+2Ch+arg_8]
0x75491E: fld     [esp+2Ch+arg_8]
0x754922: fld     st
0x754924: fmulp   st(4), st
0x754926: fxch    st(3)
0x754928: fstp    dword ptr [eax]
0x75492A: fld     st(2)
0x75492C: fmulp   st(2), st
0x75492E: fxch    st(1)
0x754930: fstp    dword ptr [eax+4]
0x754933: fmulp   st(1), st
0x754935: fstp    dword ptr [eax+8]
0x754938: fld     [esp+2Ch+arg_0]
0x75493C: fstp    [esp+2Ch+var_2C]; float
0x75493F: call    sub_75EC40
0x754944: pop     edi
0x754945: pop     esi
0x754946: add     esp, 18h
0x754949: retn    0Ch
