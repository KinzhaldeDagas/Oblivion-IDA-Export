0x975690: push    ecx
0x975691: fld     dword ptr [edi+edx*4]
0x975694: push    ebx
0x975695: mov     ebx, [esp+8+arg_0]
0x975699: fsub    dword ptr [ebx+edx*4+30h]
0x97569D: push    ebp
0x97569E: mov     ebp, [esp+0Ch+arg_C]
0x9756A2: fstp    [esp+0Ch+arg_0]
0x9756A6: fld     dword ptr [edi+ecx*4]
0x9756A9: fsub    dword ptr [ebx+ecx*4+30h]
0x9756AD: fstp    [esp+0Ch+var_4]
0x9756B1: fld     dword ptr [esi+ecx*4]
0x9756B4: fld     [esp+0Ch+arg_0]
0x9756B8: fld     st
0x9756BA: fmulp   st(2), st
0x9756BC: fxch    st(1)
0x9756BE: fstp    [esp+0Ch+arg_0]
0x9756C2: fld     dword ptr [esi+edx*4]
0x9756C5: fld     [esp+0Ch+var_4]
0x9756C9: fld     st
0x9756CB: fmulp   st(2), st
0x9756CD: fxch    st(1)
0x9756CF: fstp    [esp+0Ch+var_4]
0x9756D3: fld     [esp+0Ch+arg_0]
0x9756D7: fld     [esp+0Ch+var_4]
0x9756DB: fcom    st(1)
0x9756DD: fnstsw  ax
0x9756DF: test    ah, 41h
0x9756E2: jp      loc_9757A0
0x9756E8: fstp    st
0x9756EA: fstp    st(1)
0x9756EC: fld     dword ptr [ebx+edx*4+30h]
0x9756F0: fstp    dword ptr [edi+edx*4]
0x9756F3: fld     dword ptr [edi+ecx*4]
0x9756F6: fadd    dword ptr [ebx+ecx*4+30h]
0x9756FA: fstp    [esp+0Ch+arg_0]
0x9756FE: fld     dword ptr [esi+edx*4]
0x975701: fld     [esp+0Ch+arg_0]
0x975705: fld     st
0x975707: fmulp   st(2), st
0x975709: fxch    st(1)
0x97570B: fsubr   st, st(2)
0x97570D: fstp    [esp+0Ch+arg_0]
0x975711: fldz
0x975713: fld     [esp+0Ch+arg_0]
0x975717: fcom    st(1)
0x975719: fnstsw  ax
0x97571B: fstp    st(1)
0x97571D: test    ah, 1
0x975720: jnz     short loc_97576C
0x975722: fstp    st(2)
0x975724: fld     dword ptr [esi+edx*4]
0x975727: fld     dword ptr [esi+ecx*4]
0x97572A: fld     st(1)
0x97572C: fmulp   st(2), st
0x97572E: fmul    st, st
0x975730: faddp   st(1), st
0x975732: fld1
0x975734: fdivrp  st(1), st
0x975736: fstp    [esp+0Ch+arg_0]
0x97573A: fld     st(1)
0x97573C: fmulp   st(2), st
0x97573E: fld     [esp+0Ch+arg_0]
0x975742: fld     st
0x975744: fmulp   st(3), st
0x975746: fld     dword ptr [ebp+0]
0x975749: faddp   st(3), st
0x97574B: fxch    st(2)
0x97574D: fstp    dword ptr [ebp+0]
0x975750: fld     dword ptr [ebx+ecx*4+30h]
0x975754: fchs
0x975756: fstp    dword ptr [edi+ecx*4]
0x975759: fmul    dword ptr [esi+ecx*4]
0x97575C: fld     dword ptr [esi+edx*4]
0x97575F: fmulp   st(3), st
0x975761: faddp   st(2), st
0x975763: fmulp   st(1), st
0x975765: fchs
0x975767: jmp     loc_97584E
0x97576C: fstp    st(1)
0x97576E: fstp    st
0x975770: fld     dword ptr [esi+edx*4]
0x975773: fld1
0x975775: fdivrp  st(1), st
0x975777: fstp    [esp+0Ch+arg_0]
0x97577B: fld     dword ptr [edi+ecx*4]
0x97577E: fld     [esp+0Ch+arg_0]
0x975782: fld     st
0x975784: fmulp   st(3), st
0x975786: fxch    st(1)
0x975788: fsubrp  st(2), st
0x97578A: fxch    st(1)
0x97578C: fstp    dword ptr [edi+ecx*4]
0x97578F: mov     ecx, [esp+0Ch+arg_8]
0x975793: fxch    st(1)
0x975795: fchs
0x975797: fmulp   st(1), st
0x975799: fstp    dword ptr [ecx]
0x97579B: jmp     loc_975854
0x9757A0: fstp    st(1)
0x9757A2: fstp    st(2)
0x9757A4: fld     dword ptr [ebx+ecx*4+30h]
0x9757A8: fstp    dword ptr [edi+ecx*4]
0x9757AB: fld     dword ptr [ebx+edx*4+30h]
0x9757AF: fadd    dword ptr [edi+edx*4]
0x9757B2: fstp    [esp+0Ch+arg_0]
0x9757B6: fld     dword ptr [esi+ecx*4]
0x9757B9: fld     [esp+0Ch+arg_0]
0x9757BD: fld     st
0x9757BF: fmulp   st(2), st
0x9757C1: fxch    st(1)
0x9757C3: fsubr   st, st(3)
0x9757C5: fstp    [esp+0Ch+arg_0]
0x9757C9: fldz
0x9757CB: fld     [esp+0Ch+arg_0]
0x9757CF: fcom    st(1)
0x9757D1: fnstsw  ax
0x9757D3: fstp    st(1)
0x9757D5: test    ah, 1
0x9757D8: jnz     short loc_975827
0x9757DA: fstp    st(3)
0x9757DC: fld     dword ptr [esi+edx*4]
0x9757DF: fld     dword ptr [esi+ecx*4]
0x9757E2: fld     st(1)
0x9757E4: fmulp   st(2), st
0x9757E6: fmul    st, st
0x9757E8: faddp   st(1), st
0x9757EA: fld1
0x9757EC: fdivrp  st(1), st
0x9757EE: fstp    [esp+0Ch+arg_0]
0x9757F2: fld     st(2)
0x9757F4: fmulp   st(3), st
0x9757F6: fld     [esp+0Ch+arg_0]
0x9757FA: fld     st
0x9757FC: fmulp   st(4), st
0x9757FE: fld     dword ptr [ebp+0]
0x975801: faddp   st(4), st
0x975803: fxch    st(3)
0x975805: fstp    dword ptr [ebp+0]
0x975808: fld     dword ptr [ebx+edx*4+30h]
0x97580C: fchs
0x97580E: fstp    dword ptr [edi+edx*4]
0x975811: fld     dword ptr [esi+ecx*4]
0x975814: fmulp   st(2), st
0x975816: fmul    dword ptr [esi+edx*4]
0x975819: mov     edx, [esp+0Ch+arg_8]
0x97581D: faddp   st(1), st
0x97581F: fmulp   st(1), st
0x975821: fchs
0x975823: fstp    dword ptr [edx]
0x975825: jmp     short loc_975854
0x975827: fstp    st(1)
0x975829: fstp    st
0x97582B: fld     dword ptr [esi+ecx*4]
0x97582E: fld1
0x975830: fdivrp  st(1), st
0x975832: fstp    [esp+0Ch+arg_0]
0x975836: fld     dword ptr [edi+edx*4]
0x975839: fld     [esp+0Ch+arg_0]
0x97583D: fld     st
0x97583F: fmulp   st(4), st
0x975841: fxch    st(1)
0x975843: fsubrp  st(3), st
0x975845: fxch    st(2)
0x975847: fstp    dword ptr [edi+edx*4]
0x97584A: fchs
0x97584C: fmulp   st(1), st
0x97584E: mov     eax, [esp+0Ch+arg_8]
0x975852: fstp    dword ptr [eax]
0x975854: mov     ecx, [esp+0Ch+arg_4]
0x975858: fld     dword ptr [edi+ecx*4]
0x97585B: fld     dword ptr [ebx+ecx*4+30h]
0x97585F: fchs
0x975861: fcompp
0x975863: fnstsw  ax
0x975865: fld     dword ptr [edi+ecx*4]
0x975868: test    ah, 41h
0x97586B: jnz     short loc_97588E
0x97586D: fadd    dword ptr [ebx+ecx*4+30h]
0x975871: fstp    [esp+0Ch+arg_0]
0x975875: fld     [esp+0Ch+arg_0]
0x975879: fmul    st, st
0x97587B: fadd    dword ptr [ebp+0]
0x97587E: fstp    dword ptr [ebp+0]
0x975881: pop     ebp
0x975882: fld     dword ptr [ebx+ecx*4+30h]
0x975886: pop     ebx
0x975887: fchs
0x975889: fstp    dword ptr [edi+ecx*4]
0x97588C: pop     ecx
0x97588D: retn
0x97588E: fld     dword ptr [ebx+ecx*4+30h]
0x975892: fcompp
0x975894: fnstsw  ax
0x975896: test    ah, 5
0x975899: jp      short loc_9758B9
0x97589B: fld     dword ptr [edi+ecx*4]
0x97589E: fsub    dword ptr [ebx+ecx*4+30h]
0x9758A2: fstp    [esp+0Ch+arg_0]
0x9758A6: fld     [esp+0Ch+arg_0]
0x9758AA: fmul    st, st
0x9758AC: fadd    dword ptr [ebp+0]
0x9758AF: fstp    dword ptr [ebp+0]
0x9758B2: fld     dword ptr [ebx+ecx*4+30h]
0x9758B6: fstp    dword ptr [edi+ecx*4]
0x9758B9: pop     ebp
0x9758BA: pop     ebx
0x9758BB: pop     ecx
0x9758BC: retn
