0x717A40: sub     esp, 7Ch
0x717A43: mov     eax, [esp+7Ch+a3]
0x717A4A: fld     dword ptr [eax]
0x717A4C: push    esi
0x717A4D: fstp    [esp+80h+var_5C]
0x717A51: push    edi
0x717A52: fld     dword ptr [eax+0Ch]
0x717A55: mov     edi, [esp+84h+a2]
0x717A5C: fstp    [esp+84h+var_58]
0x717A60: mov     edx, [eax+28h]
0x717A63: fld     dword ptr [eax+18h]
0x717A66: mov     esi, ecx
0x717A68: fstp    [esp+84h+var_54]
0x717A6C: mov     ecx, [eax+24h]
0x717A6F: fld     dword ptr [eax+4]
0x717A72: mov     [esp+84h+var_74], ecx
0x717A76: fstp    [esp+84h+var_44]
0x717A7A: mov     ecx, [eax+2Ch]
0x717A7D: fld     dword ptr [eax+10h]
0x717A80: mov     [esp+84h+var_70], edx
0x717A84: fstp    [esp+84h+var_40]
0x717A88: mov     [esp+84h+var_6C], ecx
0x717A8C: fld     dword ptr [eax+1Ch]
0x717A8F: lea     edx, [esp+84h+var_68]
0x717A93: fstp    [esp+84h+var_3C]
0x717A97: push    edx
0x717A98: fld     dword ptr [eax+8]
0x717A9B: lea     ecx, [esp+88h+var_10]
0x717A9F: fstp    [esp+88h+var_50]
0x717AA3: fld     dword ptr [eax+14h]
0x717AA6: fstp    [esp+88h+var_4C]
0x717AAA: fld     dword ptr [eax+20h]
0x717AAD: lea     eax, [esp+88h+var_5C]
0x717AB1: fstp    [esp+88h+var_48]
0x717AB5: push    eax
0x717AB6: fld     dword ptr [edi+10h]
0x717AB9: fstp    [esp+8Ch+var_78]
0x717ABD: fld     [esp+8Ch+var_5C]
0x717AC1: fld     [esp+8Ch+var_78]
0x717AC5: fld     st
0x717AC7: fmulp   st(2), st
0x717AC9: fxch    st(1)
0x717ACB: fstp    [esp+8Ch+var_38]
0x717ACF: fld     [esp+8Ch+var_58]
0x717AD3: fmul    st, st(1)
0x717AD5: fstp    [esp+8Ch+var_34]
0x717AD9: fmul    [esp+8Ch+var_54]
0x717ADD: fstp    [esp+8Ch+var_30]
0x717AE1: fld     [esp+8Ch+var_74]
0x717AE5: fadd    [esp+8Ch+var_38]
0x717AE9: fstp    [esp+8Ch+var_68]
0x717AED: fld     [esp+8Ch+var_70]
0x717AF1: fadd    [esp+8Ch+var_34]
0x717AF5: fstp    [esp+8Ch+var_64]
0x717AF9: fld     [esp+8Ch+var_6C]
0x717AFD: fadd    [esp+8Ch+var_30]
0x717B01: fstp    [esp+8Ch+var_60]
0x717B05: call    sub_716E00
0x717B0A: mov     ecx, [eax]
0x717B0C: mov     [esi], ecx
0x717B0E: mov     edx, [eax+4]
0x717B11: mov     [esi+4], edx
0x717B14: mov     ecx, [eax+8]
0x717B17: mov     [esi+8], ecx
0x717B1A: mov     edx, [eax+0Ch]
0x717B1D: mov     [esi+0Ch], edx
0x717B20: fld     dword ptr [edi+14h]
0x717B23: fstp    [esp+84h+var_78]
0x717B27: fld     [esp+84h+var_78]
0x717B2B: fld     st
0x717B2D: fld     [esp+84h+var_5C]
0x717B31: fld     st
0x717B33: fmulp   st(2), st
0x717B35: fxch    st(1)
0x717B37: fstp    [esp+84h+var_38]
0x717B3B: fld     [esp+84h+var_58]
0x717B3F: fld     st
0x717B41: fmul    st, st(3)
0x717B43: fstp    [esp+84h+var_34]
0x717B47: fld     [esp+84h+var_54]
0x717B4B: fld     st
0x717B4D: fmulp   st(4), st
0x717B4F: fxch    st(3)
0x717B51: fstp    [esp+84h+var_30]
0x717B55: fld     [esp+84h+var_38]
0x717B59: fadd    [esp+84h+var_74]
0x717B5D: fstp    [esp+84h+var_2C]
0x717B61: mov     eax, [esp+84h+var_2C]
0x717B65: fld     [esp+84h+var_34]
0x717B69: mov     [esp+84h+var_68], eax
0x717B6D: fadd    [esp+84h+var_70]
0x717B71: lea     eax, [esp+84h+var_68]
0x717B75: push    eax
0x717B76: fstp    [esp+88h+var_28]
0x717B7A: mov     ecx, [esp+88h+var_28]
0x717B7E: fld     [esp+88h+var_30]
0x717B82: mov     [esp+88h+var_64], ecx
0x717B86: fadd    [esp+88h+var_6C]
0x717B8A: lea     ecx, [esp+88h+var_10]
0x717B8E: push    ecx
0x717B8F: lea     ecx, [esp+8Ch+var_20]
0x717B93: fstp    [esp+8Ch+var_24]
0x717B97: mov     edx, [esp+8Ch+var_24]
0x717B9B: fxch    st(1)
0x717B9D: mov     [esp+8Ch+var_60], edx
0x717BA1: fchs
0x717BA3: fstp    [esp+8Ch+var_10]
0x717BA7: fchs
0x717BA9: fstp    [esp+8Ch+var_C]
0x717BB0: fchs
0x717BB2: fstp    [esp+8Ch+var_8]
0x717BB9: call    sub_716E00
0x717BBE: mov     edx, [eax]
0x717BC0: mov     [esi+10h], edx
0x717BC3: mov     ecx, [eax+4]
0x717BC6: mov     [esi+14h], ecx
0x717BC9: mov     edx, [eax+8]
0x717BCC: mov     [esi+18h], edx
0x717BCF: mov     eax, [eax+0Ch]
0x717BD2: mov     [esi+1Ch], eax
0x717BD5: cmp     byte ptr [edi+18h], 0
0x717BD9: jz      loc_717E47
0x717BDF: fld     dword ptr [edi]
0x717BE1: fstp    [esp+84h+var_78]
0x717BE5: fld     [esp+84h+var_50]
0x717BE9: fld     [esp+84h+var_78]
0x717BED: fld     st
0x717BEF: fmulp   st(2), st
0x717BF1: fxch    st(1)
0x717BF3: fstp    [esp+84h+var_2C]
0x717BF7: fld     [esp+84h+var_4C]
0x717BFB: fmul    st, st(1)
0x717BFD: fstp    [esp+84h+var_28]
0x717C01: fmul    [esp+84h+var_48]
0x717C05: fstp    [esp+84h+var_24]
0x717C09: fld     [esp+84h+var_2C]
0x717C0D: fadd    [esp+84h+var_74]
0x717C11: fstp    [esp+84h+var_38]
0x717C15: mov     ecx, [esp+84h+var_38]
0x717C19: fld     [esp+84h+var_28]
0x717C1D: mov     [esp+84h+var_68], ecx
0x717C21: fadd    [esp+84h+var_70]
0x717C25: lea     ecx, [esp+84h+var_68]
0x717C29: push    ecx
0x717C2A: lea     ecx, [esp+88h+var_10]
0x717C2E: fstp    [esp+88h+var_34]
0x717C32: mov     edx, [esp+88h+var_34]
0x717C36: fld     [esp+88h+var_24]
0x717C3A: mov     [esp+88h+var_64], edx
0x717C3E: fadd    [esp+88h+var_6C]
0x717C42: lea     edx, [esp+88h+var_50]
0x717C46: push    edx
0x717C47: fstp    [esp+8Ch+var_30]
0x717C4B: mov     eax, [esp+8Ch+var_30]
0x717C4F: mov     [esp+8Ch+var_60], eax
0x717C53: call    sub_716E00
0x717C58: mov     ecx, [eax]
0x717C5A: mov     [esi+20h], ecx
0x717C5D: mov     edx, [eax+4]
0x717C60: mov     [esi+24h], edx
0x717C63: mov     ecx, [eax+8]
0x717C66: mov     [esi+28h], ecx
0x717C69: mov     edx, [eax+0Ch]
0x717C6C: mov     [esi+2Ch], edx
0x717C6F: fld     dword ptr [edi+4]
0x717C72: fstp    [esp+84h+var_78]
0x717C76: fld     [esp+84h+var_78]
0x717C7A: fld     st
0x717C7C: fld     [esp+84h+var_50]
0x717C80: fld     st
0x717C82: fmulp   st(2), st
0x717C84: fxch    st(1)
0x717C86: fstp    [esp+84h+var_2C]
0x717C8A: fld     [esp+84h+var_4C]
0x717C8E: fld     st
0x717C90: fmul    st, st(3)
0x717C92: fstp    [esp+84h+var_28]
0x717C96: fld     [esp+84h+var_48]
0x717C9A: fld     st
0x717C9C: fmulp   st(4), st
0x717C9E: fxch    st(3)
0x717CA0: fstp    [esp+84h+var_24]
0x717CA4: fld     [esp+84h+var_2C]
0x717CA8: fadd    [esp+84h+var_74]
0x717CAC: fstp    [esp+84h+var_38]
0x717CB0: mov     eax, [esp+84h+var_38]
0x717CB4: fld     [esp+84h+var_28]
0x717CB8: mov     [esp+84h+var_68], eax
0x717CBC: fadd    [esp+84h+var_70]
0x717CC0: fstp    [esp+84h+var_34]
0x717CC4: mov     ecx, [esp+84h+var_34]
0x717CC8: fld     [esp+84h+var_24]
0x717CCC: mov     [esp+84h+var_64], ecx
0x717CD0: fadd    [esp+84h+var_6C]
0x717CD4: fstp    [esp+84h+var_30]
0x717CD8: mov     edx, [esp+84h+var_30]
0x717CDC: fxch    st(1)
0x717CDE: mov     [esp+84h+var_60], edx
0x717CE2: fchs
0x717CE4: fstp    [esp+84h+var_10]
0x717CE8: fchs
0x717CEA: fstp    [esp+84h+var_C]
0x717CEE: fchs
0x717CF0: lea     eax, [esp+84h+var_68]
0x717CF4: fstp    [esp+84h+var_8]
0x717CF8: push    eax
0x717CF9: lea     ecx, [esp+88h+var_10]
0x717CFD: push    ecx
0x717CFE: lea     ecx, [esp+8Ch+var_20]
0x717D02: call    sub_716E00
0x717D07: mov     edx, [eax]
0x717D09: mov     [esi+30h], edx
0x717D0C: mov     ecx, [eax+4]
0x717D0F: mov     [esi+34h], ecx
0x717D12: mov     edx, [eax+8]
0x717D15: mov     [esi+38h], edx
0x717D18: mov     eax, [eax+0Ch]
0x717D1B: mov     [esi+3Ch], eax
0x717D1E: fld     dword ptr [edi+8]
0x717D21: fstp    [esp+84h+var_78]
0x717D25: fld     [esp+84h+var_78]
0x717D29: fld     st
0x717D2B: fld     [esp+84h+var_44]
0x717D2F: fld     st
0x717D31: fmulp   st(2), st
0x717D33: fxch    st(1)
0x717D35: fstp    [esp+84h+var_2C]
0x717D39: fld     [esp+84h+var_40]
0x717D3D: fld     st
0x717D3F: fmul    st, st(3)
0x717D41: fstp    [esp+84h+var_28]
0x717D45: fld     [esp+84h+var_3C]
0x717D49: fld     st
0x717D4B: fmulp   st(4), st
0x717D4D: fxch    st(3)
0x717D4F: fstp    [esp+84h+var_24]
0x717D53: fld     [esp+84h+var_2C]
0x717D57: fadd    [esp+84h+var_74]
0x717D5B: fstp    [esp+84h+var_38]
0x717D5F: mov     ecx, [esp+84h+var_38]
0x717D63: fld     [esp+84h+var_28]
0x717D67: mov     [esp+84h+var_68], ecx
0x717D6B: fadd    [esp+84h+var_70]
0x717D6F: lea     ecx, [esp+84h+var_68]
0x717D73: push    ecx
0x717D74: lea     ecx, [esp+88h+var_20]
0x717D78: fstp    [esp+88h+var_34]
0x717D7C: mov     edx, [esp+88h+var_34]
0x717D80: fld     [esp+88h+var_24]
0x717D84: mov     [esp+88h+var_64], edx
0x717D88: fadd    [esp+88h+var_6C]
0x717D8C: lea     edx, [esp+88h+var_10]
0x717D90: push    edx
0x717D91: fstp    [esp+8Ch+var_30]
0x717D95: mov     eax, [esp+8Ch+var_30]
0x717D99: fxch    st(1)
0x717D9B: mov     [esp+8Ch+var_60], eax
0x717D9F: fchs
0x717DA1: fstp    [esp+8Ch+var_10]
0x717DA5: fchs
0x717DA7: fstp    [esp+8Ch+var_C]
0x717DAE: fchs
0x717DB0: fstp    [esp+8Ch+var_8]
0x717DB7: call    sub_716E00
0x717DBC: mov     ecx, [eax]
0x717DBE: mov     [esi+40h], ecx
0x717DC1: mov     edx, [eax+4]
0x717DC4: mov     [esi+44h], edx
0x717DC7: mov     ecx, [eax+8]
0x717DCA: mov     [esi+48h], ecx
0x717DCD: mov     edx, [eax+0Ch]
0x717DD0: mov     [esi+4Ch], edx
0x717DD3: fld     dword ptr [edi+0Ch]
0x717DD6: fstp    [esp+84h+var_78]
0x717DDA: fld     [esp+84h+var_44]
0x717DDE: fld     [esp+84h+var_78]
0x717DE2: fld     st
0x717DE4: fmulp   st(2), st
0x717DE6: fxch    st(1)
0x717DE8: fstp    [esp+84h+var_2C]
0x717DEC: fld     [esp+84h+var_40]
0x717DF0: fmul    st, st(1)
0x717DF2: fstp    [esp+84h+var_28]
0x717DF6: fmul    [esp+84h+var_3C]
0x717DFA: fstp    [esp+84h+var_24]
0x717DFE: fld     [esp+84h+var_2C]
0x717E02: fadd    [esp+84h+var_74]
0x717E06: fstp    [esp+84h+var_38]
0x717E0A: mov     eax, [esp+84h+var_38]
0x717E0E: fld     [esp+84h+var_28]
0x717E12: mov     [esp+84h+var_68], eax
0x717E16: fadd    [esp+84h+var_70]
0x717E1A: lea     eax, [esp+84h+var_68]
0x717E1E: fstp    [esp+84h+var_34]
0x717E22: mov     ecx, [esp+84h+var_34]
0x717E26: fld     [esp+84h+var_24]
0x717E2A: mov     [esp+84h+var_64], ecx
0x717E2E: fadd    [esp+84h+var_6C]
0x717E32: lea     ecx, [esp+84h+var_44]
0x717E36: fstp    [esp+84h+var_30]
0x717E3A: mov     edx, [esp+84h+var_30]
0x717E3E: mov     [esp+84h+var_60], edx
0x717E42: jmp     loc_7181CC
0x717E47: fld     dword ptr [edi]
0x717E49: fmul    st, st
0x717E4B: fstp    [esp+84h+var_78]
0x717E4F: fld     [esp+84h+var_78]
0x717E53: fadd    qword ptr ds:0A2F928h
0x717E59: fstp    [esp+84h+var_78]
0x717E5D: fld     [esp+84h+var_78]
0x717E61: call    __CIsqrt
0x717E66: fstp    [esp+84h+var_78]
0x717E6A: fld     [esp+84h+var_78]
0x717E6E: lea     ecx, [esp+84h+var_74]
0x717E72: fld1
0x717E74: push    ecx
0x717E75: fdivrp  st(1), st
0x717E77: lea     edx, [esp+88h+var_38]
0x717E7B: push    edx
0x717E7C: lea     ecx, [esp+8Ch+var_10]
0x717E80: fstp    [esp+8Ch+var_7C]
0x717E84: fld     dword ptr [edi]
0x717E86: fchs
0x717E88: fld     [esp+8Ch+var_7C]
0x717E8C: fld     st
0x717E8E: fmulp   st(2), st
0x717E90: fxch    st(1)
0x717E92: fstp    [esp+8Ch+var_7C]
0x717E96: fld     [esp+8Ch+var_50]
0x717E9A: fmul    st, st(1)
0x717E9C: fstp    [esp+8Ch+var_20]
0x717EA0: fld     [esp+8Ch+var_4C]
0x717EA4: fmul    st, st(1)
0x717EA6: fstp    [esp+8Ch+var_1C]
0x717EAA: fmul    [esp+8Ch+var_48]
0x717EAE: fstp    [esp+8Ch+var_18]
0x717EB2: fld     [esp+8Ch+var_5C]
0x717EB6: fld     [esp+8Ch+var_7C]
0x717EBA: fld     st
0x717EBC: fmulp   st(2), st
0x717EBE: fxch    st(1)
0x717EC0: fstp    [esp+8Ch+var_2C]
0x717EC4: fld     [esp+8Ch+var_58]
0x717EC8: fmul    st, st(1)
0x717ECA: fstp    [esp+8Ch+var_28]
0x717ECE: fmul    [esp+8Ch+var_54]
0x717ED2: fstp    [esp+8Ch+var_24]
0x717ED6: fld     [esp+8Ch+var_2C]
0x717EDA: fadd    [esp+8Ch+var_20]
0x717EDE: fstp    [esp+8Ch+var_38]
0x717EE2: fld     [esp+8Ch+var_28]
0x717EE6: fadd    [esp+8Ch+var_1C]
0x717EEA: fstp    [esp+8Ch+var_34]
0x717EEE: fld     [esp+8Ch+var_24]
0x717EF2: fadd    [esp+8Ch+var_18]
0x717EF6: fstp    [esp+8Ch+var_30]
0x717EFA: call    sub_716E00
0x717EFF: mov     ecx, [eax]
0x717F01: mov     [esi+20h], ecx
0x717F04: mov     edx, [eax+4]
0x717F07: mov     [esi+24h], edx
0x717F0A: mov     ecx, [eax+8]
0x717F0D: mov     [esi+28h], ecx
0x717F10: mov     edx, [eax+0Ch]
0x717F13: mov     [esi+2Ch], edx
0x717F16: fld     dword ptr [edi+4]
0x717F19: fmul    st, st
0x717F1B: fstp    [esp+84h+var_78]
0x717F1F: fld     [esp+84h+var_78]
0x717F23: fadd    qword ptr ds:0A2F928h
0x717F29: fstp    [esp+84h+var_78]
0x717F2D: fld     [esp+84h+var_78]
0x717F31: call    __CIsqrt
0x717F36: fstp    [esp+84h+var_78]
0x717F3A: fld     [esp+84h+var_78]
0x717F3E: fld1
0x717F40: fdivrp  st(1), st
0x717F42: fstp    [esp+84h+var_7C]
0x717F46: fld     dword ptr [edi+4]
0x717F49: fld     [esp+84h+var_7C]
0x717F4D: fld     st
0x717F4F: fmulp   st(2), st
0x717F51: fxch    st(1)
0x717F53: fstp    [esp+84h+var_7C]
0x717F57: fchs
0x717F59: fstp    [esp+84h+var_78]
0x717F5D: fld     [esp+84h+var_50]
0x717F61: fld     [esp+84h+var_78]
0x717F65: fld     st
0x717F67: fmulp   st(2), st
0x717F69: fxch    st(1)
0x717F6B: fstp    [esp+84h+var_2C]
0x717F6F: fld     [esp+84h+var_4C]
0x717F73: fmul    st, st(1)
0x717F75: fstp    [esp+84h+var_28]
0x717F79: fmul    [esp+84h+var_48]
0x717F7D: fstp    [esp+84h+var_24]
0x717F81: fld     [esp+84h+var_5C]
0x717F85: fld     [esp+84h+var_7C]
0x717F89: fld     st
0x717F8B: fmulp   st(2), st
0x717F8D: fxch    st(1)
0x717F8F: fstp    [esp+84h+var_20]
0x717F93: fld     [esp+84h+var_58]
0x717F97: fmul    st, st(1)
0x717F99: fstp    [esp+84h+var_1C]
0x717F9D: fmul    [esp+84h+var_54]
0x717FA1: fstp    [esp+84h+var_18]
0x717FA5: fld     [esp+84h+var_20]
0x717FA9: fadd    [esp+84h+var_2C]
0x717FAD: fstp    [esp+84h+var_10]
0x717FB1: mov     eax, [esp+84h+var_10]
0x717FB5: fld     [esp+84h+var_1C]
0x717FB9: mov     [esp+84h+var_38], eax
0x717FBD: fadd    [esp+84h+var_28]
0x717FC1: lea     eax, [esp+84h+var_74]
0x717FC5: push    eax
0x717FC6: fstp    [esp+88h+var_C]
0x717FCA: mov     ecx, [esp+88h+var_C]
0x717FCE: fld     [esp+88h+var_18]
0x717FD2: mov     [esp+88h+var_34], ecx
0x717FD6: fadd    [esp+88h+var_24]
0x717FDA: lea     ecx, [esp+88h+var_38]
0x717FDE: push    ecx
0x717FDF: lea     ecx, [esp+8Ch+var_10]
0x717FE3: fstp    [esp+8Ch+var_8]
0x717FEA: mov     edx, [esp+8Ch+var_8]
0x717FF1: mov     [esp+8Ch+var_30], edx
0x717FF5: call    sub_716E00
0x717FFA: mov     edx, [eax]
0x717FFC: mov     [esi+30h], edx
0x717FFF: mov     ecx, [eax+4]
0x718002: mov     [esi+34h], ecx
0x718005: mov     edx, [eax+8]
0x718008: mov     [esi+38h], edx
0x71800B: mov     eax, [eax+0Ch]
0x71800E: mov     [esi+3Ch], eax
0x718011: fld     dword ptr [edi+8]
0x718014: fmul    st, st
0x718016: fstp    [esp+84h+var_78]
0x71801A: fld     [esp+84h+var_78]
0x71801E: fadd    qword ptr ds:0A2F928h
0x718024: fstp    [esp+84h+var_78]
0x718028: fld     [esp+84h+var_78]
0x71802C: call    __CIsqrt
0x718031: fstp    [esp+84h+var_78]
0x718035: fld     [esp+84h+var_78]
0x718039: fld1
0x71803B: fdivrp  st(1), st
0x71803D: fstp    [esp+84h+var_7C]
0x718041: fld     [esp+84h+var_7C]
0x718045: fld     st
0x718047: fmul    dword ptr [edi+8]
0x71804A: fstp    [esp+84h+var_7C]
0x71804E: fchs
0x718050: fstp    [esp+84h+var_78]
0x718054: fld     [esp+84h+var_44]
0x718058: fld     [esp+84h+var_78]
0x71805C: fld     st
0x71805E: fmulp   st(2), st
0x718060: fxch    st(1)
0x718062: fstp    [esp+84h+var_20]
0x718066: fld     [esp+84h+var_40]
0x71806A: fmul    st, st(1)
0x71806C: fstp    [esp+84h+var_1C]
0x718070: fmul    [esp+84h+var_3C]
0x718074: fstp    [esp+84h+var_18]
0x718078: fld     [esp+84h+var_5C]
0x71807C: fld     [esp+84h+var_7C]
0x718080: fld     st
0x718082: fmulp   st(2), st
0x718084: fxch    st(1)
0x718086: fstp    [esp+84h+var_10]
0x71808A: fld     [esp+84h+var_58]
0x71808E: fmul    st, st(1)
0x718090: fstp    [esp+84h+var_C]
0x718094: fmul    [esp+84h+var_54]
0x718098: fstp    [esp+84h+var_8]
0x71809C: fld     [esp+84h+var_10]
0x7180A0: fadd    [esp+84h+var_20]
0x7180A4: fstp    [esp+84h+var_2C]
0x7180A8: mov     ecx, [esp+84h+var_2C]
0x7180AC: fld     [esp+84h+var_C]
0x7180B0: mov     [esp+84h+var_38], ecx
0x7180B4: fadd    [esp+84h+var_1C]
0x7180B8: lea     ecx, [esp+84h+var_74]
0x7180BC: push    ecx
0x7180BD: lea     ecx, [esp+88h+var_10]
0x7180C1: fstp    [esp+88h+var_28]
0x7180C5: mov     edx, [esp+88h+var_28]
0x7180C9: fld     [esp+88h+var_8]
0x7180D0: mov     [esp+88h+var_34], edx
0x7180D4: fadd    [esp+88h+var_18]
0x7180D8: lea     edx, [esp+88h+var_38]
0x7180DC: push    edx
0x7180DD: fstp    [esp+8Ch+var_24]
0x7180E1: mov     eax, [esp+8Ch+var_24]
0x7180E5: mov     [esp+8Ch+var_30], eax
0x7180E9: call    sub_716E00
0x7180EE: mov     ecx, [eax]
0x7180F0: mov     [esi+40h], ecx
0x7180F3: mov     edx, [eax+4]
0x7180F6: mov     [esi+44h], edx
0x7180F9: mov     ecx, [eax+8]
0x7180FC: mov     [esi+48h], ecx
0x7180FF: mov     edx, [eax+0Ch]
0x718102: mov     [esi+4Ch], edx
0x718105: fld     dword ptr [edi+0Ch]
0x718108: fmul    st, st
0x71810A: fstp    [esp+84h+var_78]
0x71810E: fld     [esp+84h+var_78]
0x718112: fadd    qword ptr ds:0A2F928h
0x718118: fstp    [esp+84h+var_78]
0x71811C: fld     [esp+84h+var_78]
0x718120: call    __CIsqrt
0x718125: fstp    [esp+84h+var_78]
0x718129: fld     [esp+84h+var_78]
0x71812D: fld1
0x71812F: fdivrp  st(1), st
0x718131: fstp    [esp+84h+var_7C]
0x718135: fld     dword ptr [edi+0Ch]
0x718138: fchs
0x71813A: fld     [esp+84h+var_7C]
0x71813E: fld     st
0x718140: fmulp   st(2), st
0x718142: fxch    st(1)
0x718144: fstp    [esp+84h+var_7C]
0x718148: fld     [esp+84h+var_44]
0x71814C: fmul    st, st(1)
0x71814E: fstp    [esp+84h+var_20]
0x718152: fld     [esp+84h+var_40]
0x718156: fmul    st, st(1)
0x718158: fstp    [esp+84h+var_1C]
0x71815C: fmul    [esp+84h+var_3C]
0x718160: fstp    [esp+84h+var_18]
0x718164: fld     [esp+84h+var_5C]
0x718168: fld     [esp+84h+var_7C]
0x71816C: fld     st
0x71816E: fmulp   st(2), st
0x718170: fxch    st(1)
0x718172: fstp    [esp+84h+var_10]
0x718176: fld     [esp+84h+var_58]
0x71817A: fmul    st, st(1)
0x71817C: fstp    [esp+84h+var_C]
0x718180: fmul    [esp+84h+var_54]
0x718184: fstp    [esp+84h+var_8]
0x718188: fld     [esp+84h+var_10]
0x71818C: fadd    [esp+84h+var_20]
0x718190: fstp    [esp+84h+var_2C]
0x718194: mov     eax, [esp+84h+var_2C]
0x718198: fld     [esp+84h+var_C]
0x71819C: mov     [esp+84h+var_38], eax
0x7181A0: fadd    [esp+84h+var_1C]
0x7181A4: lea     eax, [esp+84h+var_74]
0x7181A8: fstp    [esp+84h+var_28]
0x7181AC: mov     ecx, [esp+84h+var_28]
0x7181B0: fld     [esp+84h+var_8]
0x7181B4: mov     [esp+84h+var_34], ecx
0x7181B8: fadd    [esp+84h+var_18]
0x7181BC: lea     ecx, [esp+84h+var_38]
0x7181C0: fstp    [esp+84h+var_24]
0x7181C4: mov     edx, [esp+84h+var_24]
0x7181C8: mov     [esp+84h+var_30], edx
0x7181CC: push    eax
0x7181CD: push    ecx
0x7181CE: lea     ecx, [esp+8Ch+var_10]
0x7181D2: call    sub_716E00
0x7181D7: mov     edx, [eax]
0x7181D9: mov     [esi+50h], edx
0x7181DC: mov     ecx, [eax+4]
0x7181DF: mov     [esi+54h], ecx
0x7181E2: mov     edx, [eax+8]
0x7181E5: mov     [esi+58h], edx
0x7181E8: mov     eax, [eax+0Ch]
0x7181EB: pop     edi
0x7181EC: mov     [esi+5Ch], eax
0x7181EF: pop     esi
0x7181F0: add     esp, 7Ch
0x7181F3: retn    8
