0x9708E0: sub     esp, 6Ch
0x9708E3: push    ebx
0x9708E4: push    ebp
0x9708E5: push    esi
0x9708E6: mov     esi, [esp+78h+arg_4]
0x9708ED: fld     dword ptr [esi+20h]
0x9708F0: lea     ebx, [esi+0Ch]
0x9708F3: fmul    dword ptr [ebx+4]
0x9708F6: push    edi
0x9708F7: fld     dword ptr [esi+1Ch]
0x9708FA: lea     edi, [esi+18h]
0x9708FD: fmul    dword ptr [ebx+8]
0x970900: mov     ebp, [esp+7Ch+arg_0]
0x970907: fsubp   st(1), st
0x970909: fstp    [esp+7Ch+var_24]
0x97090D: fld     dword ptr [ebx+8]
0x970910: fmul    dword ptr [edi]
0x970912: fld     dword ptr [ebx]
0x970914: fmul    dword ptr [edi+8]
0x970917: fsubp   st(1), st
0x970919: fstp    [esp+7Ch+var_20]
0x97091D: fld     dword ptr [edi+4]
0x970920: fmul    dword ptr [ebx]
0x970922: fld     dword ptr [edi]
0x970924: fmul    dword ptr [ebx+4]
0x970927: fsubp   st(1), st
0x970929: fstp    [esp+7Ch+var_1C]
0x97092D: fld     dword ptr [ebp+10h]
0x970930: fstp    [esp+7Ch+var_38]
0x970934: fld     dword ptr [ebp+0Ch]
0x970937: fstp    [esp+7Ch+var_30]
0x97093B: fld     dword ptr [ebp+14h]
0x97093E: fstp    [esp+7Ch+var_44]
0x970942: fld     [esp+7Ch+var_20]
0x970946: fld     st
0x970948: fld     [esp+7Ch+var_24]
0x97094C: fld     st
0x97094E: fld     [esp+7Ch+var_1C]
0x970952: fld     st
0x970954: fld     dword ptr [ebp+10h]
0x970957: fmulp   st(6), st
0x970959: fld     dword ptr [ebp+0Ch]
0x97095C: fmulp   st(4), st
0x97095E: fxch    st(5)
0x970960: faddp   st(3), st
0x970962: fmul    dword ptr [ebp+14h]
0x970965: faddp   st(2), st
0x970967: fxch    st(1)
0x970969: fstp    [esp+7Ch+arg_4]
0x970970: fld     [esp+7Ch+arg_4]
0x970977: fabs
0x970979: fstp    [esp+7Ch+arg_4]
0x970980: fld     [esp+7Ch+arg_4]
0x970987: fstp    [esp+7Ch+var_3C]
0x97098B: fmul    st, st
0x97098D: fld     st(1)
0x97098F: fmulp   st(2), st
0x970991: faddp   st(1), st
0x970993: fld     st(1)
0x970995: fmulp   st(2), st
0x970997: faddp   st(1), st
0x970999: fstp    [esp+7Ch+arg_4]
0x9709A0: fld     [esp+7Ch+arg_4]
0x9709A7: call    __CIsqrt
0x9709AC: fstp    [esp+7Ch+arg_4]
0x9709B3: fld     [esp+7Ch+arg_4]
0x9709BA: fstp    [esp+7Ch+arg_0]
0x9709C1: fld     [esp+7Ch+var_30]
0x9709C5: fmul    st, st
0x9709C7: fld     [esp+7Ch+var_38]
0x9709CB: fmul    st, st
0x9709CD: faddp   st(1), st
0x9709CF: fld     [esp+7Ch+var_44]
0x9709D3: fmul    st, st
0x9709D5: faddp   st(1), st
0x9709D7: fstp    [esp+7Ch+arg_4]
0x9709DE: fld     [esp+7Ch+arg_4]
0x9709E5: call    __CIsqrt
0x9709EA: fstp    [esp+7Ch+arg_4]
0x9709F1: fld     [esp+7Ch+arg_4]
0x9709F8: fmul    [esp+7Ch+arg_0]
0x9709FF: fmul    qword ptr ds:0AA3AF8h
0x970A05: fstp    [esp+7Ch+arg_4]
0x970A0C: fld     [esp+7Ch+arg_4]
0x970A13: fld     [esp+7Ch+var_3C]
0x970A17: fcompp
0x970A19: fnstsw  ax
0x970A1B: test    ah, 41h
0x970A1E: jnz     loc_972392
0x970A24: fld     dword ptr [esi]
0x970A26: fsub    dword ptr [ebp+0]
0x970A29: fstp    [esp+7Ch+var_24]
0x970A2D: fld     dword ptr [esi+4]
0x970A30: fsub    dword ptr [ebp+4]
0x970A33: fstp    [esp+7Ch+var_20]
0x970A37: fld     dword ptr [esi+8]
0x970A3A: fsub    dword ptr [ebp+8]
0x970A3D: fstp    [esp+7Ch+var_1C]
0x970A41: fld     dword ptr [ebp+10h]
0x970A44: fmul    dword ptr [ebp+10h]
0x970A47: fld     dword ptr [ebp+0Ch]
0x970A4A: fmul    dword ptr [ebp+0Ch]
0x970A4D: faddp   st(1), st
0x970A4F: fld     dword ptr [ebp+14h]
0x970A52: fmul    dword ptr [ebp+14h]
0x970A55: faddp   st(1), st
0x970A57: fstp    [esp+7Ch+var_48]
0x970A5B: fld     dword ptr [ebx+4]
0x970A5E: fmul    dword ptr [ebp+10h]
0x970A61: fld     dword ptr [ebx]
0x970A63: fmul    dword ptr [ebp+0Ch]
0x970A66: faddp   st(1), st
0x970A68: fld     dword ptr [ebx+8]
0x970A6B: fmul    dword ptr [ebp+14h]
0x970A6E: faddp   st(1), st
0x970A70: fstp    [esp+7Ch+arg_4]
0x970A77: fld     [esp+7Ch+arg_4]
0x970A7E: fchs
0x970A80: fstp    [esp+7Ch+var_54]
0x970A84: fld     dword ptr [edi+4]
0x970A87: fmul    dword ptr [ebp+10h]
0x970A8A: fld     dword ptr [edi]
0x970A8C: fmul    dword ptr [ebp+0Ch]
0x970A8F: faddp   st(1), st
0x970A91: fld     dword ptr [edi+8]
0x970A94: fmul    dword ptr [ebp+14h]
0x970A97: faddp   st(1), st
0x970A99: fstp    [esp+7Ch+arg_4]
0x970AA0: fld     [esp+7Ch+arg_4]
0x970AA7: fchs
0x970AA9: fstp    [esp+7Ch+var_64]
0x970AAD: fld     dword ptr [ebx+4]
0x970AB0: fmul    dword ptr [ebx+4]
0x970AB3: fld     dword ptr [ebx]
0x970AB5: fmul    dword ptr [ebx]
0x970AB7: faddp   st(1), st
0x970AB9: fld     dword ptr [ebx+8]
0x970ABC: fmul    dword ptr [ebx+8]
0x970ABF: faddp   st(1), st
0x970AC1: fstp    [esp+7Ch+arg_0]
0x970AC8: fld     dword ptr [edi+4]
0x970ACB: fmul    dword ptr [ebx+4]
0x970ACE: fld     dword ptr [edi]
0x970AD0: fmul    dword ptr [ebx]
0x970AD2: faddp   st(1), st
0x970AD4: fld     dword ptr [edi+8]
0x970AD7: fmul    dword ptr [ebx+8]
0x970ADA: faddp   st(1), st
0x970ADC: fstp    [esp+7Ch+var_50]
0x970AE0: fld     dword ptr [edi+4]
0x970AE3: fmul    dword ptr [edi+4]
0x970AE6: fld     dword ptr [edi]
0x970AE8: fmul    dword ptr [edi]
0x970AEA: faddp   st(1), st
0x970AEC: fld     dword ptr [edi+8]
0x970AEF: fmul    dword ptr [edi+8]
0x970AF2: faddp   st(1), st
0x970AF4: fstp    [esp+7Ch+var_68]
0x970AF8: fld     dword ptr [ebp+10h]
0x970AFB: fld     [esp+7Ch+var_20]
0x970AFF: fld     st
0x970B01: fmulp   st(2), st
0x970B03: fld     [esp+7Ch+var_24]
0x970B07: fld     st
0x970B09: fmul    dword ptr [ebp+0Ch]
0x970B0C: faddp   st(3), st
0x970B0E: fld     dword ptr [ebp+14h]
0x970B11: fld     [esp+7Ch+var_1C]
0x970B15: fld     st
0x970B17: fmulp   st(2), st
0x970B19: fxch    st(4)
0x970B1B: faddp   st(1), st
0x970B1D: fstp    [esp+7Ch+arg_4]
0x970B24: fld     [esp+7Ch+arg_4]
0x970B2B: fchs
0x970B2D: fstp    dword ptr [esp+7Ch+var_44]
0x970B31: fld     dword ptr [ebx+4]
0x970B34: fmul    st, st(2)
0x970B36: fld     st(1)
0x970B38: fmul    dword ptr [ebx]
0x970B3A: faddp   st(1), st
0x970B3C: fld     dword ptr [ebx+8]
0x970B3F: fmul    st, st(4)
0x970B41: faddp   st(1), st
0x970B43: fstp    [esp+7Ch+var_4C]
0x970B47: fld     dword ptr [edi+4]
0x970B4A: fmulp   st(2), st
0x970B4C: fmul    dword ptr [edi]
0x970B4E: faddp   st(1), st
0x970B50: fld     dword ptr [edi+8]
0x970B53: fmulp   st(2), st
0x970B55: faddp   st(1), st
0x970B57: fstp    [esp+7Ch+var_3C]
0x970B5B: fld     [esp+7Ch+var_50]
0x970B5F: fld     st
0x970B61: fld     [esp+7Ch+var_68]
0x970B65: fld     st
0x970B67: fld     [esp+7Ch+arg_0]
0x970B6E: fld     st
0x970B70: fmulp   st(2), st
0x970B72: fld     st(3)
0x970B74: fmulp   st(4), st
0x970B76: fxch    st(1)
0x970B78: fsubrp  st(3), st
0x970B7A: fxch    st(2)
0x970B7C: fstp    [esp+7Ch+var_6C]
0x970B80: fld     st(2)
0x970B82: fld     [esp+7Ch+var_64]
0x970B86: fld     st
0x970B88: fmulp   st(2), st
0x970B8A: fld     [esp+7Ch+var_54]
0x970B8E: fld     st
0x970B90: fmulp   st(4), st
0x970B92: fxch    st(2)
0x970B94: fsubrp  st(3), st
0x970B96: fxch    st(2)
0x970B98: fstp    [esp+7Ch+var_60]
0x970B9C: fld     st(3)
0x970B9E: fmul    st, st(1)
0x970BA0: fld     st(2)
0x970BA2: fmulp   st(4), st
0x970BA4: fsubrp  st(3), st
0x970BA6: fxch    st(2)
0x970BA8: fstp    [esp+7Ch+arg_4]
0x970BAF: fld     [esp+7Ch+var_60]
0x970BB3: fld     st
0x970BB5: fmul    st, st(3)
0x970BB7: fld     [esp+7Ch+var_6C]
0x970BBB: fld     [esp+7Ch+var_48]
0x970BBF: fld     st
0x970BC1: fmulp   st(2), st
0x970BC3: fxch    st(2)
0x970BC5: faddp   st(1), st
0x970BC7: fld     [esp+7Ch+arg_4]
0x970BCE: fmul    st, st(4)
0x970BD0: faddp   st(1), st
0x970BD2: fstp    [esp+7Ch+var_58]
0x970BD6: fld     [esp+7Ch+var_58]
0x970BDA: fld     st
0x970BDC: fabs
0x970BDE: fstp    [esp+7Ch+var_58]
0x970BE2: fld     [esp+7Ch+var_58]
0x970BE6: fcomp   dword ptr ds:0A3C778h
0x970BEC: fnstsw  ax
0x970BEE: test    ah, 1
0x970BF1: jnz     loc_972386
0x970BF7: fld     st(3)
0x970BF9: mov     edx, [esp+7Ch+arg_8]
0x970C00: fmul    st, st(5)
0x970C02: mov     ecx, [esp+7Ch+arg_C]
0x970C09: fld     st(2)
0x970C0B: mov     eax, [esp+7Ch+arg_10]
0x970C12: fmulp   st(7), st
0x970C14: fsubrp  st(6), st
0x970C16: fxch    st(5)
0x970C18: fstp    [esp+7Ch+var_58]
0x970C1C: fld1
0x970C1E: fdivrp  st(5), st
0x970C20: fxch    st(4)
0x970C22: fstp    [esp+7Ch+var_5C]
0x970C26: fld     dword ptr [esp+7Ch+var_44]
0x970C2A: fchs
0x970C2C: fld     [esp+7Ch+var_5C]
0x970C30: fld     st
0x970C32: fmulp   st(2), st
0x970C34: fxch    st(1)
0x970C36: fstp    dword ptr [esp+7Ch+var_30]
0x970C3A: fld     [esp+7Ch+var_4C]
0x970C3E: fchs
0x970C40: fmul    st, st(1)
0x970C42: fstp    dword ptr [esp+7Ch+var_38]
0x970C46: fld     [esp+7Ch+var_3C]
0x970C4A: fchs
0x970C4C: fmulp   st(1), st
0x970C4E: fstp    [esp+7Ch+var_5C]
0x970C52: fld     dword ptr [esp+7Ch+var_38]
0x970C56: fld     st
0x970C58: fmulp   st(2), st
0x970C5A: fld     dword ptr [esp+7Ch+var_30]
0x970C5E: fld     st
0x970C60: fmul    [esp+7Ch+var_6C]
0x970C64: faddp   st(3), st
0x970C66: fld     [esp+7Ch+var_5C]
0x970C6A: fmul    [esp+7Ch+arg_4]
0x970C71: faddp   st(3), st
0x970C73: fxch    st(2)
0x970C75: fstp    dword ptr [edx]
0x970C77: fld     [esp+7Ch+var_68]
0x970C7B: fmul    st, st(5)
0x970C7D: fld     st(3)
0x970C7F: fmulp   st(4), st
0x970C81: fsubrp  st(3), st
0x970C83: fxch    st(2)
0x970C85: fstp    dword ptr [esp+7Ch+var_30]
0x970C89: fld     dword ptr [esp+7Ch+var_30]
0x970C8D: fmul    st, st(2)
0x970C8F: fld     st(1)
0x970C91: fmul    [esp+7Ch+var_60]
0x970C95: faddp   st(1), st
0x970C97: fld     [esp+7Ch+var_5C]
0x970C9B: fld     st
0x970C9D: fmul    [esp+7Ch+var_58]
0x970CA1: faddp   st(2), st
0x970CA3: fxch    st(1)
0x970CA5: fstp    dword ptr [ecx]
0x970CA7: fld     [esp+7Ch+arg_0]
0x970CAE: fmulp   st(5), st
0x970CB0: fld     st(3)
0x970CB2: fmulp   st(4), st
0x970CB4: fxch    st(4)
0x970CB6: fsubrp  st(3), st
0x970CB8: fxch    st(2)
0x970CBA: fstp    dword ptr [esp+7Ch+var_30]
0x970CBE: fld     dword ptr [esp+7Ch+var_30]
0x970CC2: fmulp   st(3), st
0x970CC4: fmul    [esp+7Ch+var_58]
0x970CC8: fld     [esp+7Ch+arg_4]
0x970CCF: fmulp   st(2), st
0x970CD1: faddp   st(1), st
0x970CD3: faddp   st(1), st
0x970CD5: fstp    [esp+7Ch+arg_4]
0x970CDC: fld     [esp+7Ch+arg_4]
0x970CE3: fst     dword ptr [eax]
0x970CE5: fldz
0x970CE7: fcom    dword ptr [edx]
0x970CE9: fnstsw  ax
0x970CEB: test    ah, 41h
0x970CEE: jnz     loc_9714EB
0x970CF4: fcom    dword ptr [ecx]
0x970CF6: fnstsw  ax
0x970CF8: test    ah, 41h
0x970CFB: jnz     loc_971033
0x970D01: fcomp   st(1)
0x970D03: fnstsw  ax
0x970D05: test    ah, 41h
0x970D08: jnz     loc_970E05
0x970D0E: mov     ecx, [esi]
0x970D10: fstp    st
0x970D12: mov     edx, [esi+4]
0x970D15: mov     eax, [esi+8]
0x970D18: mov     [esp+7Ch+var_18], ecx
0x970D1C: mov     ecx, [edi]
0x970D1E: mov     [esp+7Ch+var_14], edx
0x970D22: mov     edx, [edi+4]
0x970D25: mov     [esp+7Ch+var_10], eax
0x970D29: mov     eax, [edi+8]
0x970D2C: mov     [esp+7Ch+var_C], ecx
0x970D30: mov     ecx, [esp+7Ch+arg_10]
0x970D37: push    ecx
0x970D38: mov     [esp+80h+var_8], edx
0x970D3C: mov     edx, [esp+80h+arg_8]
0x970D43: mov     [esp+80h+var_4], eax
0x970D47: push    edx
0x970D48: lea     eax, [esp+84h+var_18]
0x970D4C: push    eax
0x970D4D: push    ebp
0x970D4E: call    sub_96FCD0
0x970D53: fstp    [esp+8Ch+arg_4]
0x970D5A: fldz
0x970D5C: mov     ecx, [esp+8Ch+arg_C]
0x970D63: fstp    dword ptr [ecx]
0x970D65: mov     edx, [esi]
0x970D67: mov     eax, [esi+4]
0x970D6A: mov     ecx, [esi+8]
0x970D6D: mov     [esp+8Ch+var_18], edx
0x970D71: mov     edx, [ebx]
0x970D73: mov     [esp+8Ch+var_14], eax
0x970D77: mov     eax, [ebx+4]
0x970D7A: mov     [esp+8Ch+var_10], ecx
0x970D7E: mov     ecx, [ebx+8]
0x970D81: mov     [esp+8Ch+var_C], edx
0x970D88: lea     edx, [esp+8Ch+var_6C]
0x970D8C: push    edx
0x970D8D: mov     [esp+90h+var_8], eax
0x970D94: lea     eax, [esp+90h+var_64]
0x970D98: mov     [esp+90h+var_4], ecx
0x970D9F: push    eax
0x970DA0: lea     ecx, [esp+94h+var_18]
0x970DA4: push    ecx
0x970DA5: push    ebp
0x970DA6: call    sub_96FCD0
0x970DAB: fstp    [esp+9Ch+arg_0]
0x970DB2: fldz
0x970DB4: add     esp, 20h
0x970DB7: fst     [esp+7Ch+var_68]
0x970DBB: fld     [esp+7Ch+arg_0]
0x970DC2: fld     [esp+7Ch+arg_4]
0x970DC9: fcomp   st(1)
0x970DCB: fnstsw  ax
0x970DCD: test    ah, 41h
0x970DD0: jnz     loc_9712D7
0x970DD6: mov     edx, [esp+7Ch+arg_8]
0x970DDD: fstp    [esp+7Ch+arg_4]
0x970DE4: fld     [esp+7Ch+var_64]
0x970DE8: mov     eax, [esp+7Ch+arg_C]
0x970DEF: mov     ecx, [esp+7Ch+arg_10]
0x970DF6: fstp    dword ptr [edx]
0x970DF8: fld     [esp+7Ch+var_6C]
0x970DFC: fstp    dword ptr [eax]
0x970DFE: fstp    dword ptr [ecx]
0x970E00: jmp     loc_9712DB
0x970E05: fld1
0x970E07: fcompp
0x970E09: fnstsw  ax
0x970E0B: test    ah, 1
0x970E0E: jnz     loc_970ECC
0x970E14: mov     ecx, [esi]
0x970E16: mov     edx, [esi+4]
0x970E19: mov     eax, [esi+8]
0x970E1C: mov     [esp+7Ch+var_18], ecx
0x970E20: mov     ecx, [edi]
0x970E22: mov     [esp+7Ch+var_14], edx
0x970E26: mov     edx, [edi+4]
0x970E29: mov     [esp+7Ch+var_C], ecx
0x970E2D: mov     ecx, [esp+7Ch+arg_10]
0x970E34: mov     [esp+7Ch+var_10], eax
0x970E38: mov     eax, [edi+8]
0x970E3B: mov     edi, [esp+7Ch+arg_8]
0x970E42: push    ecx
0x970E43: mov     [esp+80h+var_8], edx
0x970E47: push    edi
0x970E48: lea     edx, [esp+84h+var_18]
0x970E4C: push    edx
0x970E4D: push    ebp
0x970E4E: mov     [esp+8Ch+var_4], eax
0x970E55: call    sub_96FCD0
0x970E5A: fstp    [esp+8Ch+arg_4]
0x970E61: fldz
0x970E63: mov     ebx, [esp+8Ch+arg_C]
0x970E6A: lea     eax, [esp+8Ch+var_68]
0x970E6E: fstp    dword ptr [ebx]
0x970E70: push    eax
0x970E71: lea     ecx, [esp+90h+var_6C]
0x970E75: push    ecx
0x970E76: push    esi
0x970E77: push    ebp
0x970E78: call    sub_976B10
0x970E7D: fstp    [esp+9Ch+arg_0]
0x970E84: fld     [esp+9Ch+arg_0]
0x970E8B: add     esp, 20h
0x970E8E: fld     [esp+7Ch+arg_4]
0x970E95: fcomp   st(1)
0x970E97: fnstsw  ax
0x970E99: test    ah, 41h
0x970E9C: jnz     loc_9726C8
0x970EA2: mov     edx, [esp+7Ch+arg_10]
0x970EA9: fstp    [esp+7Ch+arg_4]
0x970EB0: fldz
0x970EB2: fstp    dword ptr [edi]
0x970EB4: fld     [esp+7Ch+var_6C]
0x970EB8: pop     edi
0x970EB9: fstp    dword ptr [ebx]
0x970EBB: pop     esi
0x970EBC: fld     [esp+74h+var_68]
0x970EC0: pop     ebp
0x970EC1: fstp    dword ptr [edx]
0x970EC3: pop     ebx
0x970EC4: fld     [esp+6Ch+arg_4]
0x970EC8: add     esp, 6Ch
0x970ECB: retn
0x970ECC: mov     eax, [esi]
0x970ECE: mov     ecx, [esi+4]
0x970ED1: mov     edx, [esi+8]
0x970ED4: mov     [esp+7Ch+var_18], eax
0x970ED8: mov     eax, [edi]
0x970EDA: mov     [esp+7Ch+var_14], ecx
0x970EDE: mov     ecx, [edi+4]
0x970EE1: mov     [esp+7Ch+var_10], edx
0x970EE5: mov     edx, [edi+8]
0x970EE8: mov     [esp+7Ch+var_C], eax
0x970EEC: mov     eax, [esp+7Ch+arg_10]
0x970EF3: push    eax
0x970EF4: mov     [esp+80h+var_8], ecx
0x970EF8: mov     ecx, [esp+80h+arg_8]
0x970EFF: mov     [esp+80h+var_4], edx
0x970F03: push    ecx
0x970F04: lea     edx, [esp+84h+var_18]
0x970F08: push    edx
0x970F09: push    ebp
0x970F0A: call    sub_96FCD0
0x970F0F: fstp    [esp+8Ch+arg_4]
0x970F16: fldz
0x970F18: mov     eax, [esp+8Ch+arg_C]
0x970F1F: add     esp, 10h
0x970F22: fstp    dword ptr [eax]
0x970F24: push    edi
0x970F25: lea     ecx, [esp+80h+var_24]
0x970F29: push    ecx
0x970F2A: mov     ecx, esi
0x970F2C: call    sub_47D9B0
0x970F31: mov     edx, [eax]
0x970F33: mov     [esp+7Ch+var_18], edx
0x970F37: mov     ecx, [eax+4]
0x970F3A: mov     [esp+7Ch+var_14], ecx
0x970F3E: mov     edx, [eax+8]
0x970F41: mov     eax, [ebx]
0x970F43: mov     ecx, [ebx+4]
0x970F46: mov     [esp+7Ch+var_10], edx
0x970F4A: mov     edx, [ebx+8]
0x970F4D: mov     [esp+7Ch+var_C], eax
0x970F51: lea     eax, [esp+7Ch+var_6C]
0x970F55: push    eax
0x970F56: mov     [esp+80h+var_8], ecx
0x970F5A: lea     ecx, [esp+80h+var_64]
0x970F5E: mov     [esp+80h+var_4], edx
0x970F62: push    ecx
0x970F63: lea     edx, [esp+84h+var_18]
0x970F67: push    edx
0x970F68: push    ebp
0x970F69: call    sub_96FCD0
0x970F6E: fstp    [esp+8Ch+arg_0]
0x970F75: fld1
0x970F77: add     esp, 10h
0x970F7A: fst     [esp+7Ch+var_68]
0x970F7E: fld     [esp+7Ch+arg_0]
0x970F85: fld     [esp+7Ch+arg_4]
0x970F8C: fcomp   st(1)
0x970F8E: fnstsw  ax
0x970F90: test    ah, 41h
0x970F93: jnz     short loc_970FC1
0x970F95: mov     eax, [esp+7Ch+arg_8]
0x970F9C: fstp    [esp+7Ch+arg_4]
0x970FA3: fld     [esp+7Ch+var_64]
0x970FA7: mov     ecx, [esp+7Ch+arg_C]
0x970FAE: mov     edx, [esp+7Ch+arg_10]
0x970FB5: fstp    dword ptr [eax]
0x970FB7: fld     [esp+7Ch+var_6C]
0x970FBB: fstp    dword ptr [ecx]
0x970FBD: fstp    dword ptr [edx]
0x970FBF: jmp     short loc_970FC5
0x970FC1: fstp    st
0x970FC3: fstp    st
0x970FC5: lea     eax, [esp+7Ch+var_68]
0x970FC9: push    eax
0x970FCA: lea     ecx, [esp+80h+var_6C]
0x970FCE: push    ecx
0x970FCF: push    esi
0x970FD0: push    ebp
0x970FD1: call    sub_976B10
0x970FD6: fstp    [esp+8Ch+arg_0]
0x970FDD: fld     [esp+8Ch+arg_0]
0x970FE4: add     esp, 10h
0x970FE7: fld     [esp+7Ch+arg_4]
0x970FEE: fcomp   st(1)
0x970FF0: fnstsw  ax
0x970FF2: test    ah, 41h
0x970FF5: jnz     loc_9726C8
0x970FFB: mov     edx, [esp+7Ch+arg_8]
0x971002: fstp    [esp+7Ch+arg_4]
0x971009: fldz
0x97100B: mov     eax, [esp+7Ch+arg_C]
0x971012: mov     ecx, [esp+7Ch+arg_10]
0x971019: fstp    dword ptr [edx]
0x97101B: fld     [esp+7Ch+var_6C]
0x97101F: pop     edi
0x971020: fstp    dword ptr [eax]
0x971022: pop     esi
0x971023: fld     [esp+74h+var_68]
0x971027: pop     ebp
0x971028: fstp    dword ptr [ecx]
0x97102A: pop     ebx
0x97102B: fld     [esp+6Ch+arg_4]
0x97102F: add     esp, 6Ch
0x971032: retn
0x971033: fld1
0x971035: fcom    dword ptr [ecx]
0x971037: fnstsw  ax
0x971039: fxch    st(1)
0x97103B: fcomp   st(2)
0x97103D: test    ah, 1
0x971040: fnstsw  ax
0x971042: jnz     loc_9711CF
0x971048: test    ah, 41h
0x97104B: jnz     loc_971110
0x971051: mov     edx, [esi]
0x971053: fstp    st(1)
0x971055: mov     eax, [esi+4]
0x971058: fstp    st
0x97105A: mov     ecx, [esi+8]
0x97105D: mov     edi, [esp+7Ch+arg_8]
0x971064: mov     [esp+7Ch+var_18], edx
0x971068: mov     edx, [ebx]
0x97106A: mov     [esp+7Ch+var_14], eax
0x97106E: mov     eax, [ebx+4]
0x971071: mov     [esp+7Ch+var_10], ecx
0x971075: mov     ecx, [ebx+8]
0x971078: mov     ebx, [esp+7Ch+arg_C]
0x97107F: push    ebx
0x971080: mov     [esp+80h+var_C], edx
0x971084: push    edi
0x971085: lea     edx, [esp+84h+var_18]
0x971089: push    edx
0x97108A: push    ebp
0x97108B: mov     [esp+8Ch+var_8], eax
0x971092: mov     [esp+8Ch+var_4], ecx
0x971099: call    sub_96FCD0
0x97109E: fstp    [esp+8Ch+arg_4]
0x9710A5: fldz
0x9710A7: mov     eax, [esp+8Ch+arg_10]
0x9710AE: lea     ecx, [esp+8Ch+var_68]
0x9710B2: fstp    dword ptr [eax]
0x9710B4: push    ecx
0x9710B5: lea     edx, [esp+90h+var_6C]
0x9710B9: push    edx
0x9710BA: push    esi
0x9710BB: push    ebp
0x9710BC: call    sub_976B10
0x9710C1: fstp    [esp+9Ch+arg_0]
0x9710C8: fld     [esp+9Ch+arg_0]
0x9710CF: add     esp, 20h
0x9710D2: fld     [esp+7Ch+arg_4]
0x9710D9: fcomp   st(1)
0x9710DB: fnstsw  ax
0x9710DD: test    ah, 41h
0x9710E0: jnz     loc_9726C8
0x9710E6: mov     eax, [esp+7Ch+arg_10]
0x9710ED: fstp    [esp+7Ch+arg_4]
0x9710F4: fldz
0x9710F6: fstp    dword ptr [edi]
0x9710F8: fld     [esp+7Ch+var_6C]
0x9710FC: pop     edi
0x9710FD: fstp    dword ptr [ebx]
0x9710FF: pop     esi
0x971100: fld     [esp+74h+var_68]
0x971104: pop     ebp
0x971105: fstp    dword ptr [eax]
0x971107: pop     ebx
0x971108: fld     [esp+6Ch+arg_4]
0x97110C: add     esp, 6Ch
0x97110F: retn
0x971110: fcompp
0x971112: fnstsw  ax
0x971114: test    ah, 1
0x971117: jnz     short loc_971154
0x971119: mov     ecx, [esp+7Ch+arg_10]
0x971120: mov     edx, [esp+7Ch+arg_C]
0x971127: push    ecx
0x971128: push    edx
0x971129: push    esi
0x97112A: push    ebp
0x97112B: call    sub_976B10
0x971130: fstp    [esp+8Ch+arg_4]
0x971137: fldz
0x971139: mov     eax, [esp+8Ch+arg_8]
0x971140: add     esp, 10h
0x971143: fstp    dword ptr [eax]
0x971145: fld     [esp+7Ch+arg_4]
0x97114C: pop     edi
0x97114D: pop     esi
0x97114E: pop     ebp
0x97114F: pop     ebx
0x971150: add     esp, 6Ch
0x971153: retn
0x971154: push    edi
0x971155: lea     ecx, [esp+80h+var_24]
0x971159: push    ecx
0x97115A: mov     ecx, esi
0x97115C: call    sub_47D9B0
0x971161: mov     edx, [eax]
0x971163: mov     [esp+7Ch+var_18], edx
0x971167: mov     ecx, [eax+4]
0x97116A: mov     [esp+7Ch+var_14], ecx
0x97116E: mov     edx, [eax+8]
0x971171: mov     eax, [ebx]
0x971173: mov     ecx, [ebx+4]
0x971176: mov     [esp+7Ch+var_10], edx
0x97117A: mov     edx, [ebx+8]
0x97117D: mov     [esp+7Ch+var_C], eax
0x971181: mov     eax, [esp+7Ch+arg_C]
0x971188: push    eax
0x971189: mov     [esp+80h+var_8], ecx
0x97118D: mov     ecx, [esp+80h+arg_8]
0x971194: mov     [esp+80h+var_4], edx
0x971198: push    ecx
0x971199: lea     edx, [esp+84h+var_18]
0x97119D: push    edx
0x97119E: push    ebp
0x97119F: call    sub_96FCD0
0x9711A4: fstp    [esp+8Ch+arg_4]
0x9711AB: fld1
0x9711AD: mov     eax, [esp+8Ch+arg_10]
0x9711B4: lea     ecx, [esp+8Ch+var_68]
0x9711B8: fstp    dword ptr [eax]
0x9711BA: push    ecx
0x9711BB: lea     edx, [esp+90h+var_6C]
0x9711BF: push    edx
0x9711C0: push    esi
0x9711C1: push    ebp
0x9711C2: call    sub_976B10
0x9711C7: add     esp, 20h
0x9711CA: jmp     loc_9714BB
0x9711CF: test    ah, 41h
0x9711D2: push    ebx
0x9711D3: jnz     loc_97131F
0x9711D9: lea     eax, [esp+80h+var_24]
0x9711DD: fstp    st(1)
0x9711DF: push    eax
0x9711E0: fstp    st
0x9711E2: mov     ecx, esi
0x9711E4: call    sub_47D9B0
0x9711E9: mov     ecx, [eax]
0x9711EB: mov     [esp+7Ch+var_18], ecx
0x9711EF: mov     edx, [eax+4]
0x9711F2: mov     ecx, [edi]
0x9711F4: mov     [esp+7Ch+var_14], edx
0x9711F8: mov     eax, [eax+8]
0x9711FB: mov     edx, [edi+4]
0x9711FE: mov     [esp+7Ch+var_10], eax
0x971202: mov     eax, [edi+8]
0x971205: mov     [esp+7Ch+var_C], ecx
0x971209: mov     ecx, [esp+7Ch+arg_10]
0x971210: push    ecx
0x971211: mov     [esp+80h+var_8], edx
0x971215: mov     edx, [esp+80h+arg_8]
0x97121C: mov     [esp+80h+var_4], eax
0x971220: push    edx
0x971221: lea     eax, [esp+84h+var_18]
0x971225: push    eax
0x971226: push    ebp
0x971227: call    sub_96FCD0
0x97122C: fstp    [esp+8Ch+arg_4]
0x971233: fld1
0x971235: mov     ecx, [esp+8Ch+arg_C]
0x97123C: fstp    dword ptr [ecx]
0x97123E: mov     edx, [esi]
0x971240: mov     eax, [esi+4]
0x971243: mov     ecx, [esi+8]
0x971246: mov     [esp+8Ch+var_18], edx
0x97124A: mov     edx, [ebx]
0x97124C: mov     [esp+8Ch+var_14], eax
0x971250: mov     eax, [ebx+4]
0x971253: mov     [esp+8Ch+var_10], ecx
0x971257: mov     ecx, [ebx+8]
0x97125A: mov     [esp+8Ch+var_C], edx
0x971261: lea     edx, [esp+8Ch+var_6C]
0x971265: push    edx
0x971266: mov     [esp+90h+var_8], eax
0x97126D: lea     eax, [esp+90h+var_64]
0x971271: mov     [esp+90h+var_4], ecx
0x971278: push    eax
0x971279: lea     ecx, [esp+94h+var_18]
0x97127D: push    ecx
0x97127E: push    ebp
0x97127F: call    sub_96FCD0
0x971284: fstp    [esp+9Ch+arg_0]
0x97128B: fldz
0x97128D: add     esp, 20h
0x971290: fst     [esp+7Ch+var_68]
0x971294: fld     [esp+7Ch+arg_0]
0x97129B: fld     [esp+7Ch+arg_4]
0x9712A2: fcomp   st(1)
0x9712A4: fnstsw  ax
0x9712A6: test    ah, 41h
0x9712A9: jnz     short loc_9712D7
0x9712AB: mov     edx, [esp+7Ch+arg_8]
0x9712B2: fstp    [esp+7Ch+arg_4]
0x9712B9: fld     [esp+7Ch+var_64]
0x9712BD: mov     eax, [esp+7Ch+arg_C]
0x9712C4: mov     ecx, [esp+7Ch+arg_10]
0x9712CB: fstp    dword ptr [edx]
0x9712CD: fld     [esp+7Ch+var_6C]
0x9712D1: fstp    dword ptr [eax]
0x9712D3: fstp    dword ptr [ecx]
0x9712D5: jmp     short loc_9712DB
0x9712D7: fstp    st
0x9712D9: fstp    st
0x9712DB: lea     edx, [esp+7Ch+var_68]
0x9712DF: push    edx
0x9712E0: lea     eax, [esp+80h+var_6C]
0x9712E4: push    eax
0x9712E5: push    esi
0x9712E6: push    ebp
0x9712E7: call    sub_976B10
0x9712EC: fstp    [esp+8Ch+arg_0]
0x9712F3: fld     [esp+8Ch+arg_0]
0x9712FA: add     esp, 10h
0x9712FD: fld     [esp+7Ch+arg_4]
0x971304: fcomp   st(1)
0x971306: fnstsw  ax
0x971308: test    ah, 41h
0x97130B: jnz     loc_9726C8
0x971311: fstp    [esp+7Ch+arg_4]
0x971318: fldz
0x97131A: jmp     loc_972238
0x97131F: fcompp
0x971321: fnstsw  ax
0x971323: test    ah, 1
0x971326: jnz     short loc_9713A2
0x971328: lea     ecx, [esp+80h+var_24]
0x97132C: push    ecx
0x97132D: mov     ecx, esi
0x97132F: call    sub_47D9B0
0x971334: mov     edx, [eax]
0x971336: mov     [esp+7Ch+var_18], edx
0x97133A: mov     ecx, [eax+4]
0x97133D: mov     [esp+7Ch+var_14], ecx
0x971341: mov     edx, [eax+8]
0x971344: mov     eax, [edi]
0x971346: mov     ecx, [edi+4]
0x971349: mov     [esp+7Ch+var_10], edx
0x97134D: mov     edx, [edi+8]
0x971350: mov     [esp+7Ch+var_C], eax
0x971354: mov     eax, [esp+7Ch+arg_10]
0x97135B: push    eax
0x97135C: mov     [esp+80h+var_8], ecx
0x971360: mov     ecx, [esp+80h+arg_8]
0x971367: mov     [esp+80h+var_4], edx
0x97136B: push    ecx
0x97136C: lea     edx, [esp+84h+var_18]
0x971370: push    edx
0x971371: push    ebp
0x971372: call    sub_96FCD0
0x971377: fstp    [esp+8Ch+arg_4]
0x97137E: fld1
0x971380: mov     eax, [esp+8Ch+arg_C]
0x971387: lea     ecx, [esp+8Ch+var_68]
0x97138B: fstp    dword ptr [eax]
0x97138D: push    ecx
0x97138E: lea     edx, [esp+90h+var_6C]
0x971392: push    edx
0x971393: push    esi
0x971394: push    ebp
0x971395: call    sub_976B10
0x97139A: add     esp, 20h
0x97139D: jmp     loc_9714BB
0x9713A2: lea     eax, [esp+80h+var_24]
0x9713A6: push    eax
0x9713A7: mov     ecx, esi
0x9713A9: call    sub_47D9B0
0x9713AE: mov     ecx, [eax]
0x9713B0: mov     [esp+7Ch+var_18], ecx
0x9713B4: mov     edx, [eax+4]
0x9713B7: mov     ecx, [edi]
0x9713B9: mov     [esp+7Ch+var_14], edx
0x9713BD: mov     eax, [eax+8]
0x9713C0: mov     edx, [edi+4]
0x9713C3: mov     [esp+7Ch+var_10], eax
0x9713C7: mov     eax, [edi+8]
0x9713CA: mov     [esp+7Ch+var_C], ecx
0x9713CE: mov     ecx, [esp+7Ch+arg_10]
0x9713D5: push    ecx
0x9713D6: mov     [esp+80h+var_8], edx
0x9713DA: mov     edx, [esp+80h+arg_8]
0x9713E1: mov     [esp+80h+var_4], eax
0x9713E5: push    edx
0x9713E6: lea     eax, [esp+84h+var_18]
0x9713EA: push    eax
0x9713EB: push    ebp
0x9713EC: call    sub_96FCD0
0x9713F1: fstp    [esp+8Ch+arg_4]
0x9713F8: fld1
0x9713FA: mov     ecx, [esp+8Ch+arg_C]
0x971401: add     esp, 10h
0x971404: fstp    dword ptr [ecx]
0x971406: push    edi
0x971407: lea     edx, [esp+80h+var_24]
0x97140B: push    edx
0x97140C: mov     ecx, esi
0x97140E: call    sub_47D9B0
0x971413: mov     ecx, [eax]
0x971415: mov     [esp+7Ch+var_18], ecx
0x971419: mov     edx, [eax+4]
0x97141C: mov     ecx, [ebx]
0x97141E: mov     [esp+7Ch+var_14], edx
0x971422: mov     eax, [eax+8]
0x971425: mov     edx, [ebx+4]
0x971428: mov     [esp+7Ch+var_10], eax
0x97142C: mov     eax, [ebx+8]
0x97142F: mov     [esp+7Ch+var_C], ecx
0x971433: lea     ecx, [esp+7Ch+var_6C]
0x971437: push    ecx
0x971438: mov     [esp+80h+var_8], edx
0x97143C: lea     edx, [esp+80h+var_64]
0x971440: mov     [esp+80h+var_4], eax
0x971444: push    edx
0x971445: lea     eax, [esp+84h+var_18]
0x971449: push    eax
0x97144A: push    ebp
0x97144B: call    sub_96FCD0
0x971450: fstp    [esp+8Ch+arg_0]
0x971457: fld1
0x971459: add     esp, 10h
0x97145C: fst     [esp+7Ch+var_68]
0x971460: fld     [esp+7Ch+arg_0]
0x971467: fld     [esp+7Ch+arg_4]
0x97146E: fcomp   st(1)
0x971470: fnstsw  ax
0x971472: test    ah, 41h
0x971475: jnz     short loc_9714A3
0x971477: mov     ecx, [esp+7Ch+arg_8]
0x97147E: fstp    [esp+7Ch+arg_4]
0x971485: fld     [esp+7Ch+var_64]
0x971489: mov     edx, [esp+7Ch+arg_C]
0x971490: mov     eax, [esp+7Ch+arg_10]
0x971497: fstp    dword ptr [ecx]
0x971499: fld     [esp+7Ch+var_6C]
0x97149D: fstp    dword ptr [edx]
0x97149F: fstp    dword ptr [eax]
0x9714A1: jmp     short loc_9714A7
0x9714A3: fstp    st
0x9714A5: fstp    st
0x9714A7: lea     ecx, [esp+7Ch+var_68]
0x9714AB: push    ecx
0x9714AC: lea     edx, [esp+80h+var_6C]
0x9714B0: push    edx
0x9714B1: push    esi
0x9714B2: push    ebp
0x9714B3: call    sub_976B10
0x9714B8: add     esp, 10h
0x9714BB: fstp    [esp+7Ch+arg_0]
0x9714C2: fld     [esp+7Ch+arg_0]
0x9714C9: fld     [esp+7Ch+arg_4]
0x9714D0: fcomp   st(1)
0x9714D2: fnstsw  ax
0x9714D4: test    ah, 41h
0x9714D7: jnz     loc_9726C8
0x9714DD: fstp    [esp+7Ch+arg_4]
0x9714E4: fldz
0x9714E6: jmp     loc_972131
0x9714EB: fld1
0x9714ED: fcom    dword ptr [edx]
0x9714EF: fnstsw  ax
0x9714F1: fxch    st(1)
0x9714F3: fcom    dword ptr [ecx]
0x9714F5: test    ah, 1
0x9714F8: fnstsw  ax
0x9714FA: jnz     loc_971B2A
0x971500: test    ah, 41h
0x971503: jnz     loc_9716E5
0x971509: fcomp   st(2)
0x97150B: fnstsw  ax
0x97150D: test    ah, 41h
0x971510: jnz     loc_971612
0x971516: mov     eax, [esi]
0x971518: fstp    st(1)
0x97151A: mov     ecx, [esi+4]
0x97151D: fstp    st
0x97151F: mov     edx, [esi+8]
0x971522: mov     [esp+7Ch+var_18], eax
0x971526: mov     eax, [edi]
0x971528: mov     [esp+7Ch+var_14], ecx
0x97152C: mov     ecx, [edi+4]
0x97152F: mov     [esp+7Ch+var_10], edx
0x971533: mov     edx, [edi+8]
0x971536: mov     [esp+7Ch+var_C], eax
0x97153A: mov     eax, [esp+7Ch+arg_10]
0x971541: push    eax
0x971542: mov     [esp+80h+var_8], ecx
0x971546: mov     ecx, [esp+80h+arg_8]
0x97154D: mov     [esp+80h+var_4], edx
0x971551: push    ecx
0x971552: lea     edx, [esp+84h+var_18]
0x971556: push    edx
0x971557: push    ebp
0x971558: call    sub_96FCD0
0x97155D: fstp    [esp+8Ch+arg_4]
0x971564: fldz
0x971566: mov     eax, [esp+8Ch+arg_C]
0x97156D: fstp    dword ptr [eax]
0x97156F: mov     ecx, [esi]
0x971571: mov     edx, [esi+4]
0x971574: mov     eax, [esi+8]
0x971577: mov     [esp+8Ch+var_18], ecx
0x97157B: mov     ecx, [ebx]
0x97157D: mov     [esp+8Ch+var_14], edx
0x971581: mov     edx, [ebx+4]
0x971584: mov     [esp+8Ch+var_10], eax
0x971588: mov     eax, [ebx+8]
0x97158B: mov     [esp+8Ch+var_C], ecx
0x971592: lea     ecx, [esp+8Ch+var_6C]
0x971596: push    ecx
0x971597: mov     [esp+90h+var_8], edx
0x97159E: lea     edx, [esp+90h+var_64]
0x9715A2: mov     [esp+90h+var_4], eax
0x9715A9: push    edx
0x9715AA: lea     eax, [esp+94h+var_18]
0x9715AE: push    eax
0x9715AF: push    ebp
0x9715B0: call    sub_96FCD0
0x9715B5: fstp    [esp+9Ch+arg_0]
0x9715BC: fld     [esp+9Ch+arg_0]
0x9715C3: add     esp, 20h
0x9715C6: fld     [esp+7Ch+arg_4]
0x9715CD: fcomp   st(1)
0x9715CF: fnstsw  ax
0x9715D1: test    ah, 41h
0x9715D4: jnz     loc_9726C8
0x9715DA: mov     ecx, [esp+7Ch+arg_8]
0x9715E1: fstp    [esp+7Ch+arg_4]
0x9715E8: fld     [esp+7Ch+var_64]
0x9715EC: mov     edx, [esp+7Ch+arg_C]
0x9715F3: mov     eax, [esp+7Ch+arg_10]
0x9715FA: fstp    dword ptr [ecx]
0x9715FC: fld     [esp+7Ch+var_6C]
0x971600: pop     edi
0x971601: fstp    dword ptr [edx]
0x971603: pop     esi
0x971604: fldz
0x971606: pop     ebp
0x971607: fstp    dword ptr [eax]
0x971609: pop     ebx
0x97160A: fld     [esp+6Ch+arg_4]
0x97160E: add     esp, 6Ch
0x971611: retn
0x971612: fcompp
0x971614: fnstsw  ax
0x971616: test    ah, 1
0x971619: jnz     short loc_971682
0x97161B: mov     ecx, [esi]
0x97161D: mov     edx, [esi+4]
0x971620: mov     eax, [esi+8]
0x971623: mov     [esp+7Ch+var_18], ecx
0x971627: mov     ecx, [edi]
0x971629: mov     [esp+7Ch+var_14], edx
0x97162D: mov     edx, [edi+4]
0x971630: mov     [esp+7Ch+var_10], eax
0x971634: mov     eax, [edi+8]
0x971637: mov     [esp+7Ch+var_C], ecx
0x97163B: mov     ecx, [esp+7Ch+arg_10]
0x971642: push    ecx
0x971643: mov     [esp+80h+var_8], edx
0x971647: mov     edx, [esp+80h+arg_8]
0x97164E: mov     [esp+80h+var_4], eax
0x971652: push    edx
0x971653: lea     eax, [esp+84h+var_18]
0x971657: push    eax
0x971658: push    ebp
0x971659: call    sub_96FCD0
0x97165E: fstp    [esp+8Ch+arg_4]
0x971665: fldz
0x971667: mov     ecx, [esp+8Ch+arg_C]
0x97166E: add     esp, 10h
0x971671: fstp    dword ptr [ecx]
0x971673: fld     [esp+7Ch+arg_4]
0x97167A: pop     edi
0x97167B: pop     esi
0x97167C: pop     ebp
0x97167D: pop     ebx
0x97167E: add     esp, 6Ch
0x971681: retn
0x971682: mov     edx, [esi]
0x971684: mov     eax, [esi+4]
0x971687: mov     ecx, [esi+8]
0x97168A: mov     [esp+7Ch+var_18], edx
0x97168E: mov     edx, [edi]
0x971690: mov     [esp+7Ch+var_14], eax
0x971694: mov     eax, [edi+4]
0x971697: mov     [esp+7Ch+var_10], ecx
0x97169B: mov     ecx, [edi+8]
0x97169E: mov     [esp+7Ch+var_C], edx
0x9716A2: mov     edx, [esp+7Ch+arg_10]
0x9716A9: push    edx
0x9716AA: mov     [esp+80h+var_8], eax
0x9716AE: mov     eax, [esp+80h+arg_8]
0x9716B5: mov     [esp+80h+var_4], ecx
0x9716B9: push    eax
0x9716BA: lea     ecx, [esp+84h+var_18]
0x9716BE: push    ecx
0x9716BF: push    ebp
0x9716C0: call    sub_96FCD0
0x9716C5: fstp    [esp+8Ch+arg_4]
0x9716CC: fldz
0x9716CE: mov     edx, [esp+8Ch+arg_C]
0x9716D5: add     esp, 10h
0x9716D8: fstp    dword ptr [edx]
0x9716DA: push    edi
0x9716DB: lea     eax, [esp+80h+var_24]
0x9716DF: push    eax
0x9716E0: jmp     loc_971A89
0x9716E5: fxch    st(1)
0x9716E7: fcom    dword ptr [ecx]
0x9716E9: fnstsw  ax
0x9716EB: fxch    st(1)
0x9716ED: fcomp   st(2)
0x9716EF: test    ah, 1
0x9716F2: fnstsw  ax
0x9716F4: jnz     loc_97189F
0x9716FA: test    ah, 41h
0x9716FD: jnz     short loc_97176A
0x9716FF: mov     ecx, [esi]
0x971701: fstp    st(1)
0x971703: mov     edx, [esi+4]
0x971706: fstp    st
0x971708: mov     eax, [esi+8]
0x97170B: mov     [esp+7Ch+var_18], ecx
0x97170F: mov     ecx, [ebx]
0x971711: mov     [esp+7Ch+var_14], edx
0x971715: mov     edx, [ebx+4]
0x971718: mov     [esp+7Ch+var_10], eax
0x97171C: mov     eax, [ebx+8]
0x97171F: mov     [esp+7Ch+var_C], ecx
0x971723: mov     ecx, [esp+7Ch+arg_C]
0x97172A: push    ecx
0x97172B: mov     [esp+80h+var_8], edx
0x97172F: mov     edx, [esp+80h+arg_8]
0x971736: mov     [esp+80h+var_4], eax
0x97173A: push    edx
0x97173B: lea     eax, [esp+84h+var_18]
0x97173F: push    eax
0x971740: push    ebp
0x971741: call    sub_96FCD0
0x971746: fstp    [esp+8Ch+arg_4]
0x97174D: fldz
0x97174F: mov     ecx, [esp+8Ch+arg_10]
0x971756: add     esp, 10h
0x971759: fstp    dword ptr [ecx]
0x97175B: fld     [esp+7Ch+arg_4]
0x971762: pop     edi
0x971763: pop     esi
0x971764: pop     ebp
0x971765: pop     ebx
0x971766: add     esp, 6Ch
0x971769: retn
0x97176A: fcompp
0x97176C: fnstsw  ax
0x97176E: test    ah, 1
0x971771: jnz     loc_97182B
0x971777: lea     edx, [esp+7Ch+var_24]
0x97177B: push    edx
0x97177C: mov     ecx, edx
0x97177E: call    sub_47D9E0
0x971783: mov     eax, [esp+7Ch+arg_8]
0x97178A: fld     dword ptr [eax]
0x97178C: mov     ecx, [esp+7Ch+arg_C]
0x971793: fld     [esp+7Ch+var_54]
0x971797: pop     edi
0x971798: fld     st
0x97179A: pop     esi
0x97179B: fmulp   st(2), st
0x97179D: pop     ebp
0x97179E: fld     dword ptr [ecx]
0x9717A0: pop     ebx
0x9717A1: fmul    [esp+6Ch+arg_0]
0x9717A5: faddp   st(2), st
0x9717A7: fld     [esp+6Ch+arg_4]
0x9717AB: fld     st
0x9717AD: fld     [esp+6Ch+var_50]
0x9717B1: fld     st
0x9717B3: fmulp   st(2), st
0x9717B5: fxch    st(4)
0x9717B7: faddp   st(1), st
0x9717B9: fld     [esp+6Ch+var_4C]
0x9717BD: fld     qword ptr ds:0A3D0C0h
0x9717C3: fmul    st(1), st
0x9717C5: fxch    st(2)
0x9717C7: faddp   st(1), st
0x9717C9: fmul    dword ptr [ecx]
0x9717CB: fld     dword ptr [eax]
0x9717CD: fmul    [esp+6Ch+var_48]
0x9717D1: fld     dword ptr [ecx]
0x9717D3: fmulp   st(5), st
0x9717D5: faddp   st(4), st
0x9717D7: fld     st(2)
0x9717D9: fmul    [esp+6Ch+var_64]
0x9717DD: faddp   st(4), st
0x9717DF: fld     dword ptr [esp+6Ch+var_44]
0x9717E3: fmul    st, st(2)
0x9717E5: faddp   st(4), st
0x9717E7: fld     dword ptr [eax]
0x9717E9: fmulp   st(4), st
0x9717EB: faddp   st(3), st
0x9717ED: fld     dword ptr [eax]
0x9717EF: fmul    [esp+6Ch+var_64]
0x9717F3: fld     dword ptr [ecx]
0x9717F5: fmulp   st(5), st
0x9717F7: faddp   st(4), st
0x9717F9: fld     st(1)
0x9717FB: fmul    [esp+6Ch+var_68]
0x9717FF: faddp   st(4), st
0x971801: fmul    [esp+6Ch+var_3C]
0x971805: faddp   st(3), st
0x971807: fmulp   st(2), st
0x971809: faddp   st(1), st
0x97180B: faddp   st(1), st
0x97180D: fstp    [esp+6Ch+arg_4]
0x971811: fld     [esp+6Ch+arg_4]
0x971815: fabs
0x971817: fstp    [esp+6Ch+arg_4]
0x97181B: fld     [esp+6Ch+arg_4]
0x97181F: fstp    [esp+6Ch+arg_4]
0x971823: fld     [esp+6Ch+arg_4]
0x971827: add     esp, 6Ch
0x97182A: retn
0x97182B: push    edi
0x97182C: lea     eax, [esp+80h+var_24]
0x971830: push    eax
0x971831: mov     ecx, esi
0x971833: call    sub_47D9B0
0x971838: mov     ecx, [eax]
0x97183A: mov     [esp+7Ch+var_18], ecx
0x97183E: mov     edx, [eax+4]
0x971841: mov     ecx, [ebx]
0x971843: mov     [esp+7Ch+var_14], edx
0x971847: mov     eax, [eax+8]
0x97184A: mov     edx, [ebx+4]
0x97184D: mov     [esp+7Ch+var_10], eax
0x971851: mov     eax, [ebx+8]
0x971854: mov     [esp+7Ch+var_C], ecx
0x971858: mov     ecx, [esp+7Ch+arg_C]
0x97185F: push    ecx
0x971860: mov     [esp+80h+var_8], edx
0x971864: mov     edx, [esp+80h+arg_8]
0x97186B: mov     [esp+80h+var_4], eax
0x97186F: push    edx
0x971870: lea     eax, [esp+84h+var_18]
0x971874: push    eax
0x971875: push    ebp
0x971876: call    sub_96FCD0
0x97187B: fstp    [esp+8Ch+arg_4]
0x971882: fld1
0x971884: mov     ecx, [esp+8Ch+arg_10]
0x97188B: add     esp, 10h
0x97188E: fstp    dword ptr [ecx]
0x971890: fld     [esp+7Ch+arg_4]
0x971897: pop     edi
0x971898: pop     esi
0x971899: pop     ebp
0x97189A: pop     ebx
0x97189B: add     esp, 6Ch
0x97189E: retn
0x97189F: test    ah, 41h
0x9718A2: push    ebx
0x9718A3: lea     edx, [esp+80h+var_24]
0x9718A7: mov     ecx, esi
0x9718A9: push    edx
0x9718AA: jnz     loc_9719B1
0x9718B0: fstp    st(1)
0x9718B2: fstp    st
0x9718B4: call    sub_47D9B0
0x9718B9: mov     ecx, [eax]
0x9718BB: mov     [esp+7Ch+var_18], ecx
0x9718BF: mov     edx, [eax+4]
0x9718C2: mov     ecx, [edi]
0x9718C4: mov     [esp+7Ch+var_14], edx
0x9718C8: mov     eax, [eax+8]
0x9718CB: mov     edx, [edi+4]
0x9718CE: mov     [esp+7Ch+var_10], eax
0x9718D2: mov     eax, [edi+8]
0x9718D5: mov     [esp+7Ch+var_C], ecx
0x9718D9: mov     ecx, [esp+7Ch+arg_10]
0x9718E0: push    ecx
0x9718E1: mov     [esp+80h+var_8], edx
0x9718E5: mov     edx, [esp+80h+arg_8]
0x9718EC: mov     [esp+80h+var_4], eax
0x9718F0: push    edx
0x9718F1: lea     eax, [esp+84h+var_18]
0x9718F5: push    eax
0x9718F6: push    ebp
0x9718F7: call    sub_96FCD0
0x9718FC: fstp    [esp+8Ch+arg_4]
0x971903: fld1
0x971905: mov     ecx, [esp+8Ch+arg_C]
0x97190C: fstp    dword ptr [ecx]
0x97190E: mov     edx, [esi]
0x971910: mov     eax, [esi+4]
0x971913: mov     ecx, [esi+8]
0x971916: mov     [esp+8Ch+var_18], edx
0x97191A: mov     edx, [ebx]
0x97191C: mov     [esp+8Ch+var_14], eax
0x971920: mov     eax, [ebx+4]
0x971923: mov     [esp+8Ch+var_10], ecx
0x971927: mov     ecx, [ebx+8]
0x97192A: mov     [esp+8Ch+var_C], edx
0x971931: lea     edx, [esp+8Ch+var_6C]
0x971935: push    edx
0x971936: mov     [esp+90h+var_8], eax
0x97193D: lea     eax, [esp+90h+var_64]
0x971941: mov     [esp+90h+var_4], ecx
0x971948: push    eax
0x971949: lea     ecx, [esp+94h+var_18]
0x97194D: push    ecx
0x97194E: push    ebp
0x97194F: call    sub_96FCD0
0x971954: fstp    [esp+9Ch+arg_0]
0x97195B: fld     [esp+9Ch+arg_0]
0x971962: add     esp, 20h
0x971965: fld     [esp+7Ch+arg_4]
0x97196C: fcomp   st(1)
0x97196E: fnstsw  ax
0x971970: test    ah, 41h
0x971973: jnz     loc_9726C8
0x971979: mov     edx, [esp+7Ch+arg_8]
0x971980: fstp    [esp+7Ch+arg_4]
0x971987: fld     [esp+7Ch+var_64]
0x97198B: mov     eax, [esp+7Ch+arg_C]
0x971992: mov     ecx, [esp+7Ch+arg_10]
0x971999: fstp    dword ptr [edx]
0x97199B: fld     [esp+7Ch+var_6C]
0x97199F: pop     edi
0x9719A0: fstp    dword ptr [eax]
0x9719A2: pop     esi
0x9719A3: fldz
0x9719A5: pop     ebp
0x9719A6: fstp    dword ptr [ecx]
0x9719A8: pop     ebx
0x9719A9: fld     [esp+6Ch+arg_4]
0x9719AD: add     esp, 6Ch
0x9719B0: retn
0x9719B1: fcompp
0x9719B3: fnstsw  ax
0x9719B5: test    ah, 1
0x9719B8: jnz     short loc_971A26
0x9719BA: call    sub_47D9B0
0x9719BF: mov     ecx, [eax]
0x9719C1: mov     [esp+7Ch+var_18], ecx
0x9719C5: mov     edx, [eax+4]
0x9719C8: mov     ecx, [edi]
0x9719CA: mov     [esp+7Ch+var_14], edx
0x9719CE: mov     eax, [eax+8]
0x9719D1: mov     edx, [edi+4]
0x9719D4: mov     [esp+7Ch+var_10], eax
0x9719D8: mov     eax, [edi+8]
0x9719DB: mov     [esp+7Ch+var_C], ecx
0x9719DF: mov     ecx, [esp+7Ch+arg_10]
0x9719E6: push    ecx
0x9719E7: mov     [esp+80h+var_8], edx
0x9719EB: mov     edx, [esp+80h+arg_8]
0x9719F2: mov     [esp+80h+var_4], eax
0x9719F6: push    edx
0x9719F7: lea     eax, [esp+84h+var_18]
0x9719FB: push    eax
0x9719FC: push    ebp
0x9719FD: call    sub_96FCD0
0x971A02: fstp    [esp+8Ch+arg_4]
0x971A09: fld1
0x971A0B: mov     ecx, [esp+8Ch+arg_C]
0x971A12: add     esp, 10h
0x971A15: fstp    dword ptr [ecx]
0x971A17: fld     [esp+7Ch+arg_4]
0x971A1E: pop     edi
0x971A1F: pop     esi
0x971A20: pop     ebp
0x971A21: pop     ebx
0x971A22: add     esp, 6Ch
0x971A25: retn
0x971A26: call    sub_47D9B0
0x971A2B: mov     ecx, [eax]
0x971A2D: mov     [esp+7Ch+var_18], ecx
0x971A31: mov     edx, [eax+4]
0x971A34: mov     ecx, [edi]
0x971A36: mov     [esp+7Ch+var_14], edx
0x971A3A: mov     eax, [eax+8]
0x971A3D: mov     edx, [edi+4]
0x971A40: mov     [esp+7Ch+var_10], eax
0x971A44: mov     eax, [edi+8]
0x971A47: mov     [esp+7Ch+var_C], ecx
0x971A4B: mov     ecx, [esp+7Ch+arg_10]
0x971A52: push    ecx
0x971A53: mov     [esp+80h+var_8], edx
0x971A57: mov     edx, [esp+80h+arg_8]
0x971A5E: mov     [esp+80h+var_4], eax
0x971A62: push    edx
0x971A63: lea     eax, [esp+84h+var_18]
0x971A67: push    eax
0x971A68: push    ebp
0x971A69: call    sub_96FCD0
0x971A6E: fstp    [esp+8Ch+arg_4]
0x971A75: fld1
0x971A77: mov     ecx, [esp+8Ch+arg_C]
0x971A7E: add     esp, 10h
0x971A81: fstp    dword ptr [ecx]
0x971A83: push    edi
0x971A84: lea     edx, [esp+80h+var_24]
0x971A88: push    edx
0x971A89: mov     ecx, esi
0x971A8B: call    sub_47D9B0
0x971A90: mov     ecx, [eax]
0x971A92: mov     [esp+7Ch+var_18], ecx
0x971A96: mov     edx, [eax+4]
0x971A99: mov     ecx, [ebx]
0x971A9B: mov     [esp+7Ch+var_14], edx
0x971A9F: mov     eax, [eax+8]
0x971AA2: mov     edx, [ebx+4]
0x971AA5: mov     [esp+7Ch+var_10], eax
0x971AA9: mov     eax, [ebx+8]
0x971AAC: mov     [esp+7Ch+var_C], ecx
0x971AB0: lea     ecx, [esp+7Ch+var_6C]
0x971AB4: push    ecx
0x971AB5: mov     [esp+80h+var_8], edx
0x971AB9: lea     edx, [esp+80h+var_64]
0x971ABD: mov     [esp+80h+var_4], eax
0x971AC1: push    edx
0x971AC2: lea     eax, [esp+84h+var_18]
0x971AC6: push    eax
0x971AC7: push    ebp
0x971AC8: call    sub_96FCD0
0x971ACD: fstp    [esp+8Ch+arg_0]
0x971AD4: fld     [esp+8Ch+arg_0]
0x971ADB: add     esp, 10h
0x971ADE: fld     [esp+7Ch+arg_4]
0x971AE5: fcomp   st(1)
0x971AE7: fnstsw  ax
0x971AE9: test    ah, 41h
0x971AEC: jnz     loc_9726C8
0x971AF2: mov     ecx, [esp+7Ch+arg_8]
0x971AF9: fstp    [esp+7Ch+arg_4]
0x971B00: fld     [esp+7Ch+var_64]
0x971B04: mov     edx, [esp+7Ch+arg_C]
0x971B0B: mov     eax, [esp+7Ch+arg_10]
0x971B12: fstp    dword ptr [ecx]
0x971B14: fld     [esp+7Ch+var_6C]
0x971B18: pop     edi
0x971B19: fstp    dword ptr [edx]
0x971B1B: pop     esi
0x971B1C: fld1
0x971B1E: pop     ebp
0x971B1F: fstp    dword ptr [eax]
0x971B21: pop     ebx
0x971B22: fld     [esp+6Ch+arg_4]
0x971B26: add     esp, 6Ch
0x971B29: retn
0x971B2A: test    ah, 41h
0x971B2D: jnz     loc_971DF2
0x971B33: fcomp   st(2)
0x971B35: fnstsw  ax
0x971B37: test    ah, 41h
0x971B3A: jnz     loc_971C3C
0x971B40: mov     ecx, [esi]
0x971B42: fstp    st(1)
0x971B44: mov     edx, [esi+4]
0x971B47: fstp    st
0x971B49: mov     eax, [esi+8]
0x971B4C: mov     [esp+7Ch+var_18], ecx
0x971B50: mov     ecx, [edi]
0x971B52: mov     [esp+7Ch+var_14], edx
0x971B56: mov     edx, [edi+4]
0x971B59: mov     [esp+7Ch+var_10], eax
0x971B5D: mov     eax, [edi+8]
0x971B60: mov     [esp+7Ch+var_C], ecx
0x971B64: mov     ecx, [esp+7Ch+arg_10]
0x971B6B: push    ecx
0x971B6C: mov     [esp+80h+var_8], edx
0x971B70: mov     edx, [esp+80h+arg_8]
0x971B77: mov     [esp+80h+var_4], eax
0x971B7B: push    edx
0x971B7C: lea     eax, [esp+84h+var_18]
0x971B80: push    eax
0x971B81: push    ebp
0x971B82: call    sub_96FCD0
0x971B87: fstp    [esp+8Ch+arg_4]
0x971B8E: fldz
0x971B90: mov     ecx, [esp+8Ch+arg_C]
0x971B97: fstp    dword ptr [ecx]
0x971B99: mov     edx, [esi]
0x971B9B: mov     eax, [esi+4]
0x971B9E: mov     ecx, [esi+8]
0x971BA1: mov     [esp+8Ch+var_18], edx
0x971BA5: mov     edx, [ebx]
0x971BA7: mov     [esp+8Ch+var_14], eax
0x971BAB: mov     eax, [ebx+4]
0x971BAE: mov     [esp+8Ch+var_10], ecx
0x971BB2: mov     ecx, [ebx+8]
0x971BB5: mov     [esp+8Ch+var_C], edx
0x971BBC: lea     edx, [esp+8Ch+var_6C]
0x971BC0: push    edx
0x971BC1: mov     [esp+90h+var_8], eax
0x971BC8: lea     eax, [esp+90h+var_64]
0x971BCC: mov     [esp+90h+var_4], ecx
0x971BD3: push    eax
0x971BD4: lea     ecx, [esp+94h+var_18]
0x971BD8: push    ecx
0x971BD9: push    ebp
0x971BDA: call    sub_96FCD0
0x971BDF: fstp    [esp+9Ch+arg_0]
0x971BE6: fldz
0x971BE8: add     esp, 20h
0x971BEB: fst     [esp+7Ch+var_68]
0x971BEF: fld     [esp+7Ch+arg_0]
0x971BF6: fld     [esp+7Ch+arg_4]
0x971BFD: fcomp   st(1)
0x971BFF: fnstsw  ax
0x971C01: test    ah, 41h
0x971C04: jnz     short loc_971C33
0x971C06: mov     edx, [esp+7Ch+arg_8]
0x971C0D: fstp    [esp+7Ch+arg_4]
0x971C14: fld     [esp+7Ch+var_64]
0x971C18: mov     eax, [esp+7Ch+arg_C]
0x971C1F: mov     ecx, [esp+7Ch+arg_10]
0x971C26: fstp    dword ptr [edx]
0x971C28: fld     [esp+7Ch+var_6C]
0x971C2C: fstp    dword ptr [eax]
0x971C2E: jmp     loc_9721CF
0x971C33: fstp    st
0x971C35: fstp    st
0x971C37: jmp     loc_9721D1
0x971C3C: fcompp
0x971C3E: fnstsw  ax
0x971C40: test    ah, 1
0x971C43: jnz     loc_971D3F
0x971C49: mov     ecx, [esi]
0x971C4B: mov     edx, [esi+4]
0x971C4E: mov     eax, [esi+8]
0x971C51: mov     [esp+7Ch+var_18], ecx
0x971C55: mov     ecx, [edi]
0x971C57: mov     [esp+7Ch+var_14], edx
0x971C5B: mov     edx, [edi+4]
0x971C5E: mov     [esp+7Ch+var_C], ecx
0x971C62: mov     ecx, [esp+7Ch+arg_10]
0x971C69: mov     [esp+7Ch+var_10], eax
0x971C6D: mov     eax, [edi+8]
0x971C70: mov     edi, [esp+7Ch+arg_8]
0x971C77: push    ecx
0x971C78: mov     [esp+80h+var_8], edx
0x971C7C: push    edi
0x971C7D: lea     edx, [esp+84h+var_18]
0x971C81: push    edx
0x971C82: push    ebp
0x971C83: mov     [esp+8Ch+var_4], eax
0x971C8A: call    sub_96FCD0
0x971C8F: fstp    [esp+8Ch+arg_4]
0x971C96: fldz
0x971C98: mov     ebx, [esp+8Ch+arg_C]
0x971C9F: lea     eax, [esp+8Ch+var_68]
0x971CA3: fstp    dword ptr [ebx]
0x971CA5: push    eax
0x971CA6: lea     ecx, [esp+90h+var_6C]
0x971CAA: push    ecx
0x971CAB: push    esi
0x971CAC: push    ebp
0x971CAD: call    sub_976B10
0x971CB2: fstp    st
0x971CB4: add     esp, 20h
0x971CB7: lea     eax, [ebp+0Ch]
0x971CBA: push    eax
0x971CBB: lea     edx, [esp+80h+var_24]
0x971CBF: push    edx
0x971CC0: mov     ecx, ebp
0x971CC2: call    sub_47D9B0
0x971CC7: mov     ecx, [eax]
0x971CC9: mov     dword ptr [esp+7Ch+var_30], ecx
0x971CCD: mov     edx, [eax+4]
0x971CD0: mov     dword ptr [esp+7Ch+var_30+4], edx
0x971CD4: mov     eax, [eax+8]
0x971CD7: lea     ecx, [esp+7Ch+var_68]
0x971CDB: push    ecx
0x971CDC: lea     edx, [esp+80h+var_6C]
0x971CE0: push    edx
0x971CE1: mov     [esp+84h+var_28], eax
0x971CE5: lea     eax, [esp+84h+var_30]
0x971CE9: push    esi
0x971CEA: push    eax
0x971CEB: call    sub_976B10
0x971CF0: fstp    [esp+8Ch+arg_0]
0x971CF7: fld     [esp+8Ch+arg_0]
0x971CFE: add     esp, 10h
0x971D01: fld     [esp+7Ch+arg_4]
0x971D08: fcomp   st(1)
0x971D0A: fnstsw  ax
0x971D0C: test    ah, 41h
0x971D0F: jnz     loc_9726C8
0x971D15: mov     ecx, [esp+7Ch+arg_10]
0x971D1C: fstp    [esp+7Ch+arg_4]
0x971D23: fld1
0x971D25: fstp    dword ptr [edi]
0x971D27: fld     [esp+7Ch+var_6C]
0x971D2B: pop     edi
0x971D2C: fstp    dword ptr [ebx]
0x971D2E: pop     esi
0x971D2F: fld     [esp+74h+var_68]
0x971D33: pop     ebp
0x971D34: fstp    dword ptr [ecx]
0x971D36: pop     ebx
0x971D37: fld     [esp+6Ch+arg_4]
0x971D3B: add     esp, 6Ch
0x971D3E: retn
0x971D3F: mov     edx, [esi]
0x971D41: mov     eax, [esi+4]
0x971D44: mov     ecx, [esi+8]
0x971D47: mov     [esp+7Ch+var_18], edx
0x971D4B: mov     edx, [edi]
0x971D4D: mov     [esp+7Ch+var_14], eax
0x971D51: mov     eax, [edi+4]
0x971D54: mov     [esp+7Ch+var_10], ecx
0x971D58: mov     ecx, [edi+8]
0x971D5B: mov     [esp+7Ch+var_C], edx
0x971D5F: mov     edx, [esp+7Ch+arg_10]
0x971D66: push    edx
0x971D67: mov     [esp+80h+var_8], eax
0x971D6B: mov     eax, [esp+80h+arg_8]
0x971D72: mov     [esp+80h+var_4], ecx
0x971D76: push    eax
0x971D77: lea     ecx, [esp+84h+var_18]
0x971D7B: push    ecx
0x971D7C: push    ebp
0x971D7D: call    sub_96FCD0
0x971D82: fstp    [esp+8Ch+arg_4]
0x971D89: fldz
0x971D8B: mov     edx, [esp+8Ch+arg_C]
0x971D92: add     esp, 10h
0x971D95: fstp    dword ptr [edx]
0x971D97: push    edi
0x971D98: lea     eax, [esp+80h+var_24]
0x971D9C: push    eax
0x971D9D: mov     ecx, esi
0x971D9F: call    sub_47D9B0
0x971DA4: mov     ecx, [eax]
0x971DA6: mov     [esp+7Ch+var_18], ecx
0x971DAA: mov     edx, [eax+4]
0x971DAD: mov     ecx, [ebx]
0x971DAF: mov     [esp+7Ch+var_14], edx
0x971DB3: mov     eax, [eax+8]
0x971DB6: mov     edx, [ebx+4]
0x971DB9: mov     [esp+7Ch+var_10], eax
0x971DBD: mov     eax, [ebx+8]
0x971DC0: mov     [esp+7Ch+var_C], ecx
0x971DC4: lea     ecx, [esp+7Ch+var_6C]
0x971DC8: push    ecx
0x971DC9: mov     [esp+80h+var_8], edx
0x971DCD: lea     edx, [esp+80h+var_64]
0x971DD1: mov     [esp+80h+var_4], eax
0x971DD5: push    edx
0x971DD6: lea     eax, [esp+84h+var_18]
0x971DDA: push    eax
0x971DDB: push    ebp
0x971DDC: call    sub_96FCD0
0x971DE1: fstp    [esp+8Ch+arg_0]
0x971DE8: fld1
0x971DEA: add     esp, 10h
0x971DED: jmp     loc_97207F
0x971DF2: fxch    st(1)
0x971DF4: fcom    dword ptr [ecx]
0x971DF6: fnstsw  ax
0x971DF8: fxch    st(1)
0x971DFA: fcomp   st(2)
0x971DFC: test    ah, 1
0x971DFF: fnstsw  ax
0x971E01: jnz     loc_971FBE
0x971E07: test    ah, 41h
0x971E0A: jnz     loc_971EFA
0x971E10: mov     eax, [esi]
0x971E12: fstp    st(1)
0x971E14: mov     ecx, [esi+4]
0x971E17: fstp    st
0x971E19: mov     edx, [esi+8]
0x971E1C: mov     edi, [esp+7Ch+arg_8]
0x971E23: mov     [esp+7Ch+var_18], eax
0x971E27: mov     eax, [ebx]
0x971E29: mov     [esp+7Ch+var_14], ecx
0x971E2D: mov     ecx, [ebx+4]
0x971E30: mov     [esp+7Ch+var_10], edx
0x971E34: mov     edx, [ebx+8]
0x971E37: mov     ebx, [esp+7Ch+arg_C]
0x971E3E: push    ebx
0x971E3F: mov     [esp+80h+var_C], eax
0x971E43: push    edi
0x971E44: lea     eax, [esp+84h+var_18]
0x971E48: push    eax
0x971E49: push    ebp
0x971E4A: mov     [esp+8Ch+var_8], ecx
0x971E51: mov     [esp+8Ch+var_4], edx
0x971E58: call    sub_96FCD0
0x971E5D: fstp    [esp+8Ch+arg_4]
0x971E64: fldz
0x971E66: mov     ecx, [esp+8Ch+arg_10]
0x971E6D: add     esp, 10h
0x971E70: fstp    dword ptr [ecx]
0x971E72: lea     eax, [ebp+0Ch]
0x971E75: push    eax
0x971E76: lea     edx, [esp+80h+var_24]
0x971E7A: push    edx
0x971E7B: mov     ecx, ebp
0x971E7D: call    sub_47D9B0
0x971E82: mov     ecx, [eax]
0x971E84: mov     dword ptr [esp+7Ch+var_30], ecx
0x971E88: mov     edx, [eax+4]
0x971E8B: mov     dword ptr [esp+7Ch+var_30+4], edx
0x971E8F: mov     eax, [eax+8]
0x971E92: lea     ecx, [esp+7Ch+var_68]
0x971E96: push    ecx
0x971E97: lea     edx, [esp+80h+var_6C]
0x971E9B: push    edx
0x971E9C: mov     [esp+84h+var_28], eax
0x971EA0: lea     eax, [esp+84h+var_30]
0x971EA4: push    esi
0x971EA5: push    eax
0x971EA6: call    sub_976B10
0x971EAB: fstp    [esp+8Ch+arg_0]
0x971EB2: fld     [esp+8Ch+arg_0]
0x971EB9: add     esp, 10h
0x971EBC: fld     [esp+7Ch+arg_4]
0x971EC3: fcomp   st(1)
0x971EC5: fnstsw  ax
0x971EC7: test    ah, 41h
0x971ECA: jnz     loc_9726C8
0x971ED0: mov     ecx, [esp+7Ch+arg_10]
0x971ED7: fstp    [esp+7Ch+arg_4]
0x971EDE: fld1
0x971EE0: fstp    dword ptr [edi]
0x971EE2: fld     [esp+7Ch+var_6C]
0x971EE6: pop     edi
0x971EE7: fstp    dword ptr [ebx]
0x971EE9: pop     esi
0x971EEA: fld     [esp+74h+var_68]
0x971EEE: pop     ebp
0x971EEF: fstp    dword ptr [ecx]
0x971EF1: pop     ebx
0x971EF2: fld     [esp+6Ch+arg_4]
0x971EF6: add     esp, 6Ch
0x971EF9: retn
0x971EFA: fcompp
0x971EFC: lea     edx, [esp+7Ch+var_24]
0x971F00: fnstsw  ax
0x971F02: test    ah, 1
0x971F05: jnz     short loc_971F66
0x971F07: lea     eax, [ebp+0Ch]
0x971F0A: push    eax
0x971F0B: push    edx
0x971F0C: mov     ecx, ebp
0x971F0E: call    sub_47D9B0
0x971F13: mov     ecx, [eax]
0x971F15: mov     dword ptr [esp+7Ch+var_30], ecx
0x971F19: mov     edx, [eax+4]
0x971F1C: mov     ecx, [esp+7Ch+arg_10]
0x971F23: mov     dword ptr [esp+7Ch+var_30+4], edx
0x971F27: mov     eax, [eax+8]
0x971F2A: mov     edx, [esp+7Ch+arg_C]
0x971F31: push    ecx
0x971F32: push    edx
0x971F33: mov     [esp+84h+var_28], eax
0x971F37: lea     eax, [esp+84h+var_30]
0x971F3B: push    esi
0x971F3C: push    eax
0x971F3D: call    sub_976B10
0x971F42: fstp    [esp+8Ch+arg_4]
0x971F49: fld1
0x971F4B: mov     ecx, [esp+8Ch+arg_8]
0x971F52: add     esp, 10h
0x971F55: fstp    dword ptr [ecx]
0x971F57: fld     [esp+7Ch+arg_4]
0x971F5E: pop     edi
0x971F5F: pop     esi
0x971F60: pop     ebp
0x971F61: pop     ebx
0x971F62: add     esp, 6Ch
0x971F65: retn
0x971F66: push    edi
0x971F67: push    edx
0x971F68: mov     ecx, esi
0x971F6A: call    sub_47D9B0
0x971F6F: mov     ecx, [eax]
0x971F71: mov     [esp+7Ch+var_18], ecx
0x971F75: mov     edx, [eax+4]
0x971F78: mov     ecx, [ebx]
0x971F7A: mov     [esp+7Ch+var_14], edx
0x971F7E: mov     eax, [eax+8]
0x971F81: mov     edx, [ebx+4]
0x971F84: mov     [esp+7Ch+var_10], eax
0x971F88: mov     eax, [ebx+8]
0x971F8B: mov     [esp+7Ch+var_C], ecx
0x971F8F: mov     ecx, [esp+7Ch+arg_C]
0x971F96: push    ecx
0x971F97: mov     [esp+80h+var_8], edx
0x971F9B: mov     edx, [esp+80h+arg_8]
0x971FA2: mov     [esp+80h+var_4], eax
0x971FA6: push    edx
0x971FA7: lea     eax, [esp+84h+var_18]
0x971FAB: push    eax
0x971FAC: push    ebp
0x971FAD: call    sub_96FCD0
0x971FB2: mov     ecx, [esp+8Ch+arg_10]
0x971FB9: jmp     loc_9721C3
0x971FBE: test    ah, 41h
0x971FC1: push    ebx
0x971FC2: jnz     loc_972160
0x971FC8: lea     ecx, [esp+80h+var_24]
0x971FCC: fstp    st(1)
0x971FCE: push    ecx
0x971FCF: fstp    st
0x971FD1: mov     ecx, esi
0x971FD3: call    sub_47D9B0
0x971FD8: mov     edx, [eax]
0x971FDA: mov     [esp+7Ch+var_18], edx
0x971FDE: mov     ecx, [eax+4]
0x971FE1: mov     [esp+7Ch+var_14], ecx
0x971FE5: mov     edx, [eax+8]
0x971FE8: mov     eax, [edi]
0x971FEA: mov     ecx, [edi+4]
0x971FED: mov     [esp+7Ch+var_10], edx
0x971FF1: mov     edx, [edi+8]
0x971FF4: mov     [esp+7Ch+var_C], eax
0x971FF8: mov     eax, [esp+7Ch+arg_10]
0x971FFF: push    eax
0x972000: mov     [esp+80h+var_8], ecx
0x972004: mov     ecx, [esp+80h+arg_8]
0x97200B: mov     [esp+80h+var_4], edx
0x97200F: push    ecx
0x972010: lea     edx, [esp+84h+var_18]
0x972014: push    edx
0x972015: push    ebp
0x972016: call    sub_96FCD0
0x97201B: fstp    [esp+8Ch+arg_4]
0x972022: fld1
0x972024: mov     eax, [esp+8Ch+arg_C]
0x97202B: fstp    dword ptr [eax]
0x97202D: mov     ecx, [esi]
0x97202F: mov     edx, [esi+4]
0x972032: mov     eax, [esi+8]
0x972035: mov     [esp+8Ch+var_18], ecx
0x972039: mov     ecx, [ebx]
0x97203B: mov     [esp+8Ch+var_14], edx
0x97203F: mov     edx, [ebx+4]
0x972042: mov     [esp+8Ch+var_10], eax
0x972046: mov     eax, [ebx+8]
0x972049: mov     [esp+8Ch+var_C], ecx
0x972050: lea     ecx, [esp+8Ch+var_6C]
0x972054: push    ecx
0x972055: mov     [esp+90h+var_8], edx
0x97205C: lea     edx, [esp+90h+var_64]
0x972060: mov     [esp+90h+var_4], eax
0x972067: push    edx
0x972068: lea     eax, [esp+94h+var_18]
0x97206C: push    eax
0x97206D: push    ebp
0x97206E: call    sub_96FCD0
0x972073: fstp    [esp+9Ch+arg_0]
0x97207A: fldz
0x97207C: add     esp, 20h
0x97207F: fst     [esp+7Ch+var_68]
0x972083: fld     [esp+7Ch+arg_0]
0x97208A: fld     [esp+7Ch+arg_4]
0x972091: fcomp   st(1)
0x972093: fnstsw  ax
0x972095: test    ah, 41h
0x972098: jnz     short loc_9720C6
0x97209A: mov     ecx, [esp+7Ch+arg_8]
0x9720A1: fstp    [esp+7Ch+arg_4]
0x9720A8: fld     [esp+7Ch+var_64]
0x9720AC: mov     edx, [esp+7Ch+arg_C]
0x9720B3: mov     eax, [esp+7Ch+arg_10]
0x9720BA: fstp    dword ptr [ecx]
0x9720BC: fld     [esp+7Ch+var_6C]
0x9720C0: fstp    dword ptr [edx]
0x9720C2: fstp    dword ptr [eax]
0x9720C4: jmp     short loc_9720CA
0x9720C6: fstp    st
0x9720C8: fstp    st
0x9720CA: lea     eax, [ebp+0Ch]
0x9720CD: push    eax
0x9720CE: lea     ecx, [esp+80h+var_24]
0x9720D2: push    ecx
0x9720D3: mov     ecx, ebp
0x9720D5: call    sub_47D9B0
0x9720DA: mov     edx, [eax]
0x9720DC: mov     dword ptr [esp+7Ch+var_30], edx
0x9720E0: mov     ecx, [eax+4]
0x9720E3: mov     dword ptr [esp+7Ch+var_30+4], ecx
0x9720E7: mov     edx, [eax+8]
0x9720EA: lea     eax, [esp+7Ch+var_68]
0x9720EE: push    eax
0x9720EF: lea     ecx, [esp+80h+var_6C]
0x9720F3: push    ecx
0x9720F4: mov     [esp+84h+var_28], edx
0x9720F8: lea     edx, [esp+84h+var_30]
0x9720FC: push    esi
0x9720FD: push    edx
0x9720FE: call    sub_976B10
0x972103: fstp    [esp+8Ch+arg_0]
0x97210A: fld     [esp+8Ch+arg_0]
0x972111: add     esp, 10h
0x972114: fld     [esp+7Ch+arg_4]
0x97211B: fcomp   st(1)
0x97211D: fnstsw  ax
0x97211F: test    ah, 41h
0x972122: jnz     loc_9726C8
0x972128: fstp    [esp+7Ch+arg_4]
0x97212F: fld1
0x972131: mov     eax, [esp+7Ch+arg_8]
0x972138: mov     ecx, [esp+7Ch+arg_C]
0x97213F: fstp    dword ptr [eax]
0x972141: fld     [esp+7Ch+var_6C]
0x972145: mov     edx, [esp+7Ch+arg_10]
0x97214C: pop     edi
0x97214D: fstp    dword ptr [ecx]
0x97214F: fld     [esp+78h+var_68]
0x972153: pop     esi
0x972154: pop     ebp
0x972155: fstp    dword ptr [edx]
0x972157: fld     [esp+70h+arg_4]
0x97215B: pop     ebx
0x97215C: add     esp, 6Ch
0x97215F: retn
0x972160: fcompp
0x972162: fnstsw  ax
0x972164: test    ah, 1
0x972167: jnz     loc_972267
0x97216D: lea     eax, [esp+80h+var_24]
0x972171: push    eax
0x972172: mov     ecx, esi
0x972174: call    sub_47D9B0
0x972179: mov     ecx, [eax]
0x97217B: mov     [esp+7Ch+var_18], ecx
0x97217F: mov     edx, [eax+4]
0x972182: mov     ecx, [edi]
0x972184: mov     [esp+7Ch+var_14], edx
0x972188: mov     eax, [eax+8]
0x97218B: mov     edx, [edi+4]
0x97218E: mov     [esp+7Ch+var_10], eax
0x972192: mov     eax, [edi+8]
0x972195: mov     [esp+7Ch+var_C], ecx
0x972199: mov     ecx, [esp+7Ch+arg_10]
0x9721A0: push    ecx
0x9721A1: mov     [esp+80h+var_8], edx
0x9721A5: mov     edx, [esp+80h+arg_8]
0x9721AC: mov     [esp+80h+var_4], eax
0x9721B0: push    edx
0x9721B1: lea     eax, [esp+84h+var_18]
0x9721B5: push    eax
0x9721B6: push    ebp
0x9721B7: call    sub_96FCD0
0x9721BC: mov     ecx, [esp+8Ch+arg_C]
0x9721C3: fstp    [esp+8Ch+arg_4]
0x9721CA: add     esp, 10h
0x9721CD: fld1
0x9721CF: fstp    dword ptr [ecx]
0x9721D1: lea     eax, [ebp+0Ch]
0x9721D4: push    eax
0x9721D5: lea     edx, [esp+80h+var_24]
0x9721D9: push    edx
0x9721DA: mov     ecx, ebp
0x9721DC: call    sub_47D9B0
0x9721E1: mov     ecx, [eax]
0x9721E3: mov     dword ptr [esp+7Ch+var_30], ecx
0x9721E7: mov     edx, [eax+4]
0x9721EA: mov     dword ptr [esp+7Ch+var_30+4], edx
0x9721EE: mov     eax, [eax+8]
0x9721F1: lea     ecx, [esp+7Ch+var_68]
0x9721F5: push    ecx
0x9721F6: lea     edx, [esp+80h+var_6C]
0x9721FA: push    edx
0x9721FB: mov     [esp+84h+var_28], eax
0x9721FF: lea     eax, [esp+84h+var_30]
0x972203: push    esi
0x972204: push    eax
0x972205: call    sub_976B10
0x97220A: fstp    [esp+8Ch+arg_0]
0x972211: fld     [esp+8Ch+arg_0]
0x972218: add     esp, 10h
0x97221B: fld     [esp+7Ch+arg_4]
0x972222: fcomp   st(1)
0x972224: fnstsw  ax
0x972226: test    ah, 41h
0x972229: jnz     loc_9726C8
0x97222F: fstp    [esp+7Ch+arg_4]
0x972236: fld1
0x972238: mov     ecx, [esp+7Ch+arg_8]
0x97223F: mov     edx, [esp+7Ch+arg_C]
0x972246: fstp    dword ptr [ecx]
0x972248: fld     [esp+7Ch+var_6C]
0x97224C: mov     eax, [esp+7Ch+arg_10]
0x972253: pop     edi
0x972254: fstp    dword ptr [edx]
0x972256: fld     [esp+78h+var_68]
0x97225A: pop     esi
0x97225B: pop     ebp
0x97225C: fstp    dword ptr [eax]
0x97225E: fld     [esp+70h+arg_4]
0x972262: pop     ebx
0x972263: add     esp, 6Ch
0x972266: retn
0x972267: lea     ecx, [esp+80h+var_24]
0x97226B: push    ecx
0x97226C: mov     ecx, esi
0x97226E: call    sub_47D9B0
0x972273: mov     edx, [eax]
0x972275: mov     [esp+7Ch+var_18], edx
0x972279: mov     ecx, [eax+4]
0x97227C: mov     [esp+7Ch+var_14], ecx
0x972280: mov     edx, [eax+8]
0x972283: mov     eax, [edi]
0x972285: mov     ecx, [edi+4]
0x972288: mov     [esp+7Ch+var_10], edx
0x97228C: mov     edx, [edi+8]
0x97228F: mov     [esp+7Ch+var_C], eax
0x972293: mov     eax, [esp+7Ch+arg_10]
0x97229A: push    eax
0x97229B: mov     [esp+80h+var_8], ecx
0x97229F: mov     ecx, [esp+80h+arg_8]
0x9722A6: mov     [esp+80h+var_4], edx
0x9722AA: push    ecx
0x9722AB: lea     edx, [esp+84h+var_18]
0x9722AF: push    edx
0x9722B0: push    ebp
0x9722B1: call    sub_96FCD0
0x9722B6: fstp    [esp+8Ch+arg_4]
0x9722BD: fld1
0x9722BF: mov     eax, [esp+8Ch+arg_C]
0x9722C6: add     esp, 10h
0x9722C9: fstp    dword ptr [eax]
0x9722CB: push    edi
0x9722CC: lea     ecx, [esp+80h+var_24]
0x9722D0: push    ecx
0x9722D1: mov     ecx, esi
0x9722D3: call    sub_47D9B0
0x9722D8: mov     edx, [eax]
0x9722DA: mov     [esp+7Ch+var_18], edx
0x9722DE: mov     ecx, [eax+4]
0x9722E1: mov     [esp+7Ch+var_14], ecx
0x9722E5: mov     edx, [eax+8]
0x9722E8: mov     eax, [ebx]
0x9722EA: mov     ecx, [ebx+4]
0x9722ED: mov     [esp+7Ch+var_10], edx
0x9722F1: mov     edx, [ebx+8]
0x9722F4: mov     [esp+7Ch+var_C], eax
0x9722F8: lea     eax, [esp+7Ch+var_6C]
0x9722FC: push    eax
0x9722FD: mov     [esp+80h+var_8], ecx
0x972301: lea     ecx, [esp+80h+var_64]
0x972305: mov     [esp+80h+var_4], edx
0x972309: push    ecx
0x97230A: lea     edx, [esp+84h+var_18]
0x97230E: push    edx
0x97230F: push    ebp
0x972310: call    sub_96FCD0
0x972315: fstp    [esp+8Ch+arg_0]
0x97231C: fld1
0x97231E: add     esp, 10h
0x972321: fst     [esp+7Ch+var_68]
0x972325: fld     [esp+7Ch+arg_0]
0x97232C: fld     [esp+7Ch+arg_4]
0x972333: fcomp   st(1)
0x972335: fnstsw  ax
0x972337: test    ah, 41h
0x97233A: jnz     short loc_972374
0x97233C: mov     eax, [esp+7Ch+arg_8]
0x972343: fstp    [esp+7Ch+arg_4]
0x97234A: fld     [esp+7Ch+var_64]
0x97234E: mov     ecx, [esp+7Ch+arg_C]
0x972355: mov     edx, [esp+7Ch+arg_10]
0x97235C: fstp    dword ptr [eax]
0x97235E: fld     [esp+7Ch+var_6C]
0x972362: lea     eax, [ebp+0Ch]
0x972365: push    eax
0x972366: fstp    dword ptr [ecx]
0x972368: lea     eax, [esp+80h+var_24]
0x97236C: fstp    dword ptr [edx]
0x97236E: push    eax
0x97236F: jmp     loc_9721DA
0x972374: lea     eax, [ebp+0Ch]
0x972377: fstp    st
0x972379: push    eax
0x97237A: fstp    st
0x97237C: lea     eax, [esp+80h+var_24]
0x972380: push    eax
0x972381: jmp     loc_9721DA
0x972386: fstp    st(3)
0x972388: fstp    st(3)
0x97238A: fstp    st(2)
0x97238C: fstp    st(2)
0x97238E: fstp    st
0x972390: fstp    st
0x972392: mov     ecx, [esi]
0x972394: mov     edx, [esi+4]
0x972397: mov     eax, [esi+8]
0x97239A: mov     [esp+7Ch+var_18], ecx
0x97239E: mov     ecx, [ebx]
0x9723A0: mov     [esp+7Ch+var_14], edx
0x9723A4: mov     edx, [ebx+4]
0x9723A7: mov     [esp+7Ch+var_10], eax
0x9723AB: mov     eax, [ebx+8]
0x9723AE: mov     [esp+7Ch+var_C], ecx
0x9723B2: mov     ecx, [esp+7Ch+arg_C]
0x9723B9: push    ecx
0x9723BA: mov     [esp+80h+var_8], edx
0x9723BE: mov     edx, [esp+80h+arg_8]
0x9723C5: mov     [esp+80h+var_4], eax
0x9723C9: push    edx
0x9723CA: lea     eax, [esp+84h+var_18]
0x9723CE: push    eax
0x9723CF: push    ebp
0x9723D0: call    sub_96FCD0
0x9723D5: fstp    [esp+8Ch+arg_4]
0x9723DC: fldz
0x9723DE: mov     ecx, [esp+8Ch+arg_10]
0x9723E5: fstp    dword ptr [ecx]
0x9723E7: mov     edx, [edi]
0x9723E9: mov     eax, [edi+4]
0x9723EC: mov     ecx, [edi+8]
0x9723EF: mov     [esp+8Ch+var_C], edx
0x9723F6: lea     edx, [esp+8Ch+var_68]
0x9723FA: push    edx
0x9723FB: mov     [esp+90h+var_8], eax
0x972402: lea     eax, [esp+90h+var_64]
0x972406: mov     [esp+90h+var_4], ecx
0x97240D: push    eax
0x97240E: lea     ecx, [esp+94h+var_18]
0x972412: push    ecx
0x972413: push    ebp
0x972414: call    sub_96FCD0
0x972419: fstp    [esp+9Ch+arg_0]
0x972420: fldz
0x972422: add     esp, 20h
0x972425: fst     [esp+7Ch+var_6C]
0x972429: fld     [esp+7Ch+arg_0]
0x972430: fld     [esp+7Ch+arg_4]
0x972437: fcomp   st(1)
0x972439: fnstsw  ax
0x97243B: test    ah, 41h
0x97243E: jnz     short loc_97246C
0x972440: mov     edx, [esp+7Ch+arg_8]
0x972447: fstp    [esp+7Ch+arg_4]
0x97244E: fld     [esp+7Ch+var_64]
0x972452: mov     eax, [esp+7Ch+arg_C]
0x972459: mov     ecx, [esp+7Ch+arg_10]
0x972460: fstp    dword ptr [edx]
0x972462: fstp    dword ptr [eax]
0x972464: fld     [esp+7Ch+var_68]
0x972468: fstp    dword ptr [ecx]
0x97246A: jmp     short loc_972470
0x97246C: fstp    st(1)
0x97246E: fstp    st
0x972470: fld     dword ptr [edi]
0x972472: fadd    dword ptr [esi]
0x972474: fstp    [esp+7Ch+var_24]
0x972478: mov     edx, [esp+7Ch+var_24]
0x97247C: fld     dword ptr [edi+4]
0x97247F: mov     [esp+7Ch+var_18], edx
0x972483: fadd    dword ptr [esi+4]
0x972486: mov     edx, [ebx]
0x972488: mov     [esp+7Ch+var_C], edx
0x97248C: lea     edx, [esp+7Ch+var_6C]
0x972490: fstp    [esp+7Ch+var_20]
0x972494: mov     eax, [esp+7Ch+var_20]
0x972498: fld     dword ptr [edi+8]
0x97249B: mov     [esp+7Ch+var_14], eax
0x97249F: fadd    dword ptr [esi+8]
0x9724A2: mov     eax, [ebx+4]
0x9724A5: push    edx
0x9724A6: mov     [esp+80h+var_8], eax
0x9724AA: fstp    [esp+80h+var_1C]
0x9724AE: mov     ecx, [esp+80h+var_1C]
0x9724B2: mov     [esp+80h+var_10], ecx
0x9724B6: mov     ecx, [ebx+8]
0x9724B9: lea     eax, [esp+80h+var_64]
0x9724BD: mov     [esp+80h+var_4], ecx
0x9724C1: push    eax
0x9724C2: lea     ecx, [esp+84h+var_18]
0x9724C6: push    ecx
0x9724C7: push    ebp
0x9724C8: call    sub_96FCD0
0x9724CD: fstp    [esp+8Ch+arg_0]
0x9724D4: fld1
0x9724D6: add     esp, 10h
0x9724D9: fst     [esp+7Ch+var_68]
0x9724DD: fld     [esp+7Ch+arg_0]
0x9724E4: fld     [esp+7Ch+arg_4]
0x9724EB: fcomp   st(1)
0x9724ED: fnstsw  ax
0x9724EF: test    ah, 41h
0x9724F2: jnz     short loc_972520
0x9724F4: mov     edx, [esp+7Ch+arg_8]
0x9724FB: fstp    [esp+7Ch+arg_4]
0x972502: fld     [esp+7Ch+var_64]
0x972506: mov     eax, [esp+7Ch+arg_C]
0x97250D: mov     ecx, [esp+7Ch+arg_10]
0x972514: fstp    dword ptr [edx]
0x972516: fld     [esp+7Ch+var_6C]
0x97251A: fstp    dword ptr [eax]
0x97251C: fstp    dword ptr [ecx]
0x97251E: jmp     short loc_972524
0x972520: fstp    st
0x972522: fstp    st
0x972524: fld     dword ptr [ebx]
0x972526: fadd    dword ptr [esi]
0x972528: fstp    [esp+7Ch+var_24]
0x97252C: mov     edx, [esp+7Ch+var_24]
0x972530: fld     dword ptr [ebx+4]
0x972533: mov     [esp+7Ch+var_18], edx
0x972537: fadd    dword ptr [esi+4]
0x97253A: mov     edx, [edi]
0x97253C: mov     [esp+7Ch+var_C], edx
0x972540: lea     edx, [esp+7Ch+var_68]
0x972544: fstp    [esp+7Ch+var_20]
0x972548: mov     eax, [esp+7Ch+var_20]
0x97254C: fld     dword ptr [ebx+8]
0x97254F: mov     [esp+7Ch+var_14], eax
0x972553: fadd    dword ptr [esi+8]
0x972556: mov     eax, [edi+4]
0x972559: push    edx
0x97255A: mov     [esp+80h+var_8], eax
0x97255E: fstp    [esp+80h+var_1C]
0x972562: mov     ecx, [esp+80h+var_1C]
0x972566: mov     [esp+80h+var_10], ecx
0x97256A: mov     ecx, [edi+8]
0x97256D: lea     eax, [esp+80h+var_64]
0x972571: mov     [esp+80h+var_4], ecx
0x972575: push    eax
0x972576: lea     ecx, [esp+84h+var_18]
0x97257A: push    ecx
0x97257B: push    ebp
0x97257C: call    sub_96FCD0
0x972581: fstp    [esp+8Ch+arg_0]
0x972588: fld1
0x97258A: mov     ebx, [esp+8Ch+arg_8]
0x972591: mov     edi, [esp+8Ch+arg_C]
0x972598: fst     [esp+8Ch+var_6C]
0x97259C: fld     [esp+8Ch+arg_0]
0x9725A3: add     esp, 10h
0x9725A6: fld     [esp+7Ch+arg_4]
0x9725AD: fcomp   st(1)
0x9725AF: fnstsw  ax
0x9725B1: test    ah, 41h
0x9725B4: jnz     short loc_9725D4
0x9725B6: mov     edx, [esp+7Ch+arg_10]
0x9725BD: fstp    [esp+7Ch+arg_4]
0x9725C4: fld     [esp+7Ch+var_64]
0x9725C8: fstp    dword ptr [ebx]
0x9725CA: fstp    dword ptr [edi]
0x9725CC: fld     [esp+7Ch+var_68]
0x9725D0: fstp    dword ptr [edx]
0x9725D2: jmp     short loc_9725D8
0x9725D4: fstp    st
0x9725D6: fstp    st
0x9725D8: lea     eax, [esp+7Ch+var_68]
0x9725DC: push    eax
0x9725DD: lea     ecx, [esp+80h+var_6C]
0x9725E1: push    ecx
0x9725E2: push    esi
0x9725E3: push    ebp
0x9725E4: call    sub_976B10
0x9725E9: fstp    [esp+8Ch+arg_0]
0x9725F0: fldz
0x9725F2: add     esp, 10h
0x9725F5: fst     [esp+7Ch+var_64]
0x9725F9: fld     [esp+7Ch+arg_0]
0x972600: fld     [esp+7Ch+arg_4]
0x972607: fcomp   st(1)
0x972609: fnstsw  ax
0x97260B: test    ah, 41h
0x97260E: jnz     short loc_97262E
0x972610: mov     edx, [esp+7Ch+arg_10]
0x972617: fstp    [esp+7Ch+arg_4]
0x97261E: fstp    dword ptr [ebx]
0x972620: fld     [esp+7Ch+var_6C]
0x972624: fstp    dword ptr [edi]
0x972626: fld     [esp+7Ch+var_68]
0x97262A: fstp    dword ptr [edx]
0x97262C: jmp     short loc_972632
0x97262E: fstp    st
0x972630: fstp    st
0x972632: fld     dword ptr [ebp+0]
0x972635: fadd    dword ptr [ebp+0Ch]
0x972638: fstp    [esp+7Ch+var_24]
0x97263C: mov     eax, [esp+7Ch+var_24]
0x972640: fld     dword ptr [ebp+10h]
0x972643: mov     dword ptr [esp+7Ch+var_30], eax
0x972647: fadd    dword ptr [ebp+4]
0x97264A: lea     eax, [esp+7Ch+var_68]
0x97264E: push    eax
0x97264F: fstp    [esp+80h+var_20]
0x972653: mov     ecx, [esp+80h+var_20]
0x972657: fld     dword ptr [ebp+14h]
0x97265A: mov     dword ptr [esp+80h+var_30+4], ecx
0x97265E: fadd    dword ptr [ebp+8]
0x972661: lea     ecx, [esp+80h+var_6C]
0x972665: push    ecx
0x972666: push    esi
0x972667: fstp    [esp+88h+var_1C]
0x97266B: mov     edx, [esp+88h+var_1C]
0x97266F: mov     [esp+88h+var_28], edx
0x972673: lea     edx, [esp+88h+var_30]
0x972677: push    edx
0x972678: call    sub_976B10
0x97267D: fstp    [esp+8Ch+arg_0]
0x972684: fld     [esp+8Ch+arg_0]
0x97268B: add     esp, 10h
0x97268E: fld     [esp+7Ch+arg_4]
0x972695: fcomp   st(1)
0x972697: fnstsw  ax
0x972699: test    ah, 41h
0x97269C: jnz     short loc_9726C8
0x97269E: mov     eax, [esp+7Ch+arg_10]
0x9726A5: fstp    [esp+7Ch+arg_4]
0x9726AC: fld1
0x9726AE: fstp    dword ptr [ebx]
0x9726B0: fld     [esp+7Ch+var_6C]
0x9726B4: fstp    dword ptr [edi]
0x9726B6: fld     [esp+7Ch+var_68]
0x9726BA: pop     edi
0x9726BB: pop     esi
0x9726BC: fstp    dword ptr [eax]
0x9726BE: fld     [esp+74h+arg_4]
0x9726C2: pop     ebp
0x9726C3: pop     ebx
0x9726C4: add     esp, 6Ch
0x9726C7: retn
0x9726C8: pop     edi
0x9726C9: fstp    st
0x9726CB: fld     [esp+78h+arg_4]
0x9726D2: pop     esi
0x9726D3: pop     ebp
0x9726D4: pop     ebx
0x9726D5: add     esp, 6Ch
0x9726D8: retn
