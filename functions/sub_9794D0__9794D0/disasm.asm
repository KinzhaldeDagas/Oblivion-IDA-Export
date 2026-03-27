0x9794D0: sub     esp, 38h
0x9794D3: fldz
0x9794D5: mov     eax, [esp+38h+arg_14]
0x9794D9: fst     [esp+38h+var_30]
0x9794DD: movzx   edx, ax
0x9794E0: fst     [esp+38h+var_2C]
0x9794E4: movzx   eax, ax
0x9794E7: fst     [esp+38h+var_28]
0x9794EB: fst     [esp+38h+var_38]
0x9794EE: cmp     eax, [esp+38h+arg_18]
0x9794F2: fst     [esp+38h+var_18]
0x9794F6: fst     [esp+38h+var_14]
0x9794FA: mov     [esp+38h+var_34], ecx
0x9794FE: fst     [esp+38h+var_10]
0x979502: mov     [esp+38h+arg_14], edx
0x979506: fst     [esp+38h+var_C]
0x97950A: fst     [esp+38h+var_8]
0x97950E: fstp    [esp+38h+var_4]
0x979512: jg      loc_9796BF
0x979518: push    ebx
0x979519: push    ebp
0x97951A: mov     ebp, [esp+40h+arg_8]
0x97951E: push    esi
0x97951F: push    edi
0x979520: mov     edx, [esp+48h+arg_1C]
0x979524: mov     ebx, [edx+eax*4]
0x979527: mov     ecx, [esp+48h+arg_4]
0x97952B: lea     eax, [ebx+ebx*2]
0x97952E: movzx   edx, word ptr [ecx+eax*2]
0x979532: movzx   esi, word ptr [ecx+eax*2+2]
0x979537: add     eax, 1
0x97953A: movzx   eax, word ptr [ecx+eax*2+2]
0x97953F: lea     eax, [eax+eax*2]
0x979542: lea     edi, [ebp+eax*4+0]
0x979546: mov     eax, [esp+48h+arg_10]
0x97954A: lea     ecx, [ebx+ebx*2]
0x97954D: lea     eax, [eax+ecx*4]
0x979550: mov     ecx, [esp+48h+arg_C]
0x979554: lea     edx, [edx+edx*2]
0x979557: lea     edx, [ebp+edx*4+0]
0x97955B: fld     dword ptr [ecx+ebx*4]
0x97955E: lea     esi, [esi+esi*2]
0x979561: fstp    [esp+48h+arg_8]
0x979565: lea     esi, [ebp+esi*4+0]
0x979569: fld     [esp+48h+arg_8]
0x97956D: fld     st
0x97956F: fadd    [esp+48h+var_38]
0x979573: fstp    [esp+48h+var_38]
0x979577: fld     dword ptr [eax]
0x979579: fmul    st, st(1)
0x97957B: fstp    [esp+48h+var_24]
0x97957F: fld     st
0x979581: fmul    dword ptr [eax+4]
0x979584: fstp    [esp+48h+var_20]
0x979588: fld     dword ptr [eax+8]
0x97958B: fmul    st, st(1)
0x97958D: fstp    [esp+48h+var_1C]
0x979591: fld     [esp+48h+var_24]
0x979595: fadd    [esp+48h+var_30]
0x979599: fstp    [esp+48h+var_30]
0x97959D: fld     [esp+48h+var_20]
0x9795A1: fadd    [esp+48h+var_2C]
0x9795A5: fstp    [esp+48h+var_2C]
0x9795A9: fld     [esp+48h+var_1C]
0x9795AD: fadd    [esp+48h+var_28]
0x9795B1: fstp    [esp+48h+var_28]
0x9795B5: fld     dword ptr [eax]
0x9795B7: fld     dword ptr [edx]
0x9795B9: fld     dword ptr [esi]
0x9795BB: fld     dword ptr [edi]
0x9795BD: fld     st(2)
0x9795BF: fmulp   st(3), st
0x9795C1: fld     st(3)
0x9795C3: fmulp   st(4), st
0x9795C5: fxch    st(2)
0x9795C7: faddp   st(3), st
0x9795C9: fmul    st, st
0x9795CB: faddp   st(2), st
0x9795CD: fmul    st, st
0x9795CF: faddp   st(1), st
0x9795D1: fmul    st, st(1)
0x9795D3: fadd    [esp+48h+var_18]
0x9795D7: fstp    [esp+48h+var_18]
0x9795DB: fld     dword ptr [eax]
0x9795DD: fmul    dword ptr [eax+4]
0x9795E0: fld     dword ptr [edx+4]
0x9795E3: fmul    dword ptr [edx]
0x9795E5: faddp   st(1), st
0x9795E7: fld     dword ptr [esi]
0x9795E9: fmul    dword ptr [esi+4]
0x9795EC: faddp   st(1), st
0x9795EE: fld     dword ptr [edi]
0x9795F0: fmul    dword ptr [edi+4]
0x9795F3: faddp   st(1), st
0x9795F5: fmul    st, st(1)
0x9795F7: fadd    [esp+48h+var_14]
0x9795FB: fstp    [esp+48h+var_14]
0x9795FF: fld     dword ptr [eax]
0x979601: fmul    dword ptr [eax+8]
0x979604: fld     dword ptr [edx+8]
0x979607: fmul    dword ptr [edx]
0x979609: faddp   st(1), st
0x97960B: fld     dword ptr [esi]
0x97960D: fmul    dword ptr [esi+8]
0x979610: faddp   st(1), st
0x979612: fld     dword ptr [edi]
0x979614: fmul    dword ptr [edi+8]
0x979617: faddp   st(1), st
0x979619: fmul    st, st(1)
0x97961B: fadd    [esp+48h+var_10]
0x97961F: fstp    [esp+48h+var_10]
0x979623: fld     dword ptr [eax+4]
0x979626: fld     dword ptr [edx+4]
0x979629: fld     dword ptr [esi+4]
0x97962C: fld     dword ptr [edi+4]
0x97962F: fld     st(2)
0x979631: fmulp   st(3), st
0x979633: fld     st(3)
0x979635: fmulp   st(4), st
0x979637: fxch    st(2)
0x979639: faddp   st(3), st
0x97963B: fmul    st, st
0x97963D: faddp   st(2), st
0x97963F: fmul    st, st
0x979641: faddp   st(1), st
0x979643: fmul    st, st(1)
0x979645: fadd    [esp+48h+var_C]
0x979649: fstp    [esp+48h+var_C]
0x97964D: fld     dword ptr [eax+8]
0x979650: fmul    dword ptr [eax+4]
0x979653: fld     dword ptr [edx+8]
0x979656: fmul    dword ptr [edx+4]
0x979659: faddp   st(1), st
0x97965B: fld     dword ptr [esi+8]
0x97965E: fmul    dword ptr [esi+4]
0x979661: faddp   st(1), st
0x979663: fld     dword ptr [edi+8]
0x979666: fmul    dword ptr [edi+4]
0x979669: faddp   st(1), st
0x97966B: fmul    st, st(1)
0x97966D: fadd    [esp+48h+var_8]
0x979671: fstp    [esp+48h+var_8]
0x979675: fld     dword ptr [eax+8]
0x979678: mov     eax, [esp+48h+arg_14]
0x97967C: fld     dword ptr [edx+8]
0x97967F: add     eax, 1
0x979682: fld     dword ptr [esi+8]
0x979685: mov     [esp+48h+arg_14], eax
0x979689: fld     dword ptr [edi+8]
0x97968C: movzx   eax, ax
0x97968F: cmp     eax, [esp+48h+arg_18]
0x979693: fld     st(2)
0x979695: fmulp   st(3), st
0x979697: fld     st(3)
0x979699: fmulp   st(4), st
0x97969B: fxch    st(2)
0x97969D: faddp   st(3), st
0x97969F: fmul    st, st
0x9796A1: faddp   st(2), st
0x9796A3: fmul    st, st
0x9796A5: faddp   st(1), st
0x9796A7: fmulp   st(1), st
0x9796A9: fadd    [esp+48h+var_4]
0x9796AD: fstp    [esp+48h+var_4]
0x9796B1: jle     loc_979520
0x9796B7: mov     ecx, [esp+48h+var_34]
0x9796BB: pop     edi
0x9796BC: pop     esi
0x9796BD: pop     ebp
0x9796BE: pop     ebx
0x9796BF: fld     [esp+38h+var_38]
0x9796C2: fld1
0x9796C4: fdivrp  st(1), st
0x9796C6: fstp    [esp+38h+arg_4]
0x9796CA: fld     [esp+38h+arg_4]
0x9796CE: fld     qword ptr ds:0A3C770h
0x9796D4: fmul    st, st(1)
0x9796D6: fstp    [esp+38h+arg_4]
0x9796DA: fld     [esp+38h+var_30]
0x9796DE: fmul    st, st(1)
0x9796E0: fstp    [esp+38h+var_24]
0x9796E4: mov     edx, [esp+38h+var_24]
0x9796E8: fld     [esp+38h+var_2C]
0x9796EC: mov     [ecx+4], edx
0x9796EF: fmul    st, st(1)
0x9796F1: fstp    [esp+38h+var_20]
0x9796F5: mov     eax, [esp+38h+var_20]
0x9796F9: mov     [ecx+8], eax
0x9796FC: fmul    [esp+38h+var_28]
0x979700: mov     eax, [esp+38h+arg_0]
0x979704: fstp    [esp+38h+var_1C]
0x979708: mov     edx, [esp+38h+var_1C]
0x97970C: mov     [ecx+0Ch], edx
0x97970F: fld     dword ptr [ecx+4]
0x979712: fld     [esp+38h+arg_4]
0x979716: fld     st
0x979718: fmul    [esp+38h+var_18]
0x97971C: fld     st(2)
0x97971E: fmulp   st(3), st
0x979720: fsubrp  st(2), st
0x979722: fxch    st(1)
0x979724: fstp    dword ptr [eax]
0x979726: fld     st
0x979728: fmul    [esp+38h+var_14]
0x97972C: fld     dword ptr [ecx+8]
0x97972F: fmul    dword ptr [ecx+4]
0x979732: fsubp   st(1), st
0x979734: fstp    [esp+38h+arg_4]
0x979738: fld     [esp+38h+arg_4]
0x97973C: fst     dword ptr [eax+4]
0x97973F: fld     st(1)
0x979741: fmul    [esp+38h+var_10]
0x979745: fld     dword ptr [ecx+4]
0x979748: fmul    dword ptr [ecx+0Ch]
0x97974B: fsubp   st(1), st
0x97974D: fstp    [esp+38h+arg_4]
0x979751: fld     [esp+38h+arg_4]
0x979755: fst     dword ptr [eax+8]
0x979758: fld     dword ptr [ecx+8]
0x97975B: fld     st(3)
0x97975D: fmul    [esp+38h+var_C]
0x979761: fld     st(1)
0x979763: fmulp   st(2), st
0x979765: fsubrp  st(1), st
0x979767: fstp    dword ptr [eax+10h]
0x97976A: fld     st(2)
0x97976C: fmul    [esp+38h+var_8]
0x979770: fld     dword ptr [ecx+8]
0x979773: fmul    dword ptr [ecx+0Ch]
0x979776: fsubp   st(1), st
0x979778: fstp    [esp+38h+arg_4]
0x97977C: fld     [esp+38h+arg_4]
0x979780: fst     dword ptr [eax+14h]
0x979783: fld     dword ptr [ecx+0Ch]
0x979786: fld     [esp+38h+var_4]
0x97978A: fmulp   st(5), st
0x97978C: fmul    st, st
0x97978E: fsubp   st(4), st
0x979790: fxch    st(3)
0x979792: fstp    dword ptr [eax+20h]
0x979795: fxch    st(1)
0x979797: fstp    dword ptr [eax+0Ch]
0x97979A: fstp    dword ptr [eax+18h]
0x97979D: fstp    dword ptr [eax+1Ch]
0x9797A0: add     esp, 38h
0x9797A3: retn    20h ; ' '
