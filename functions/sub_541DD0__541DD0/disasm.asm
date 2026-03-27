0x541DD0: sub     esp, 30h
0x541DD3: push    ebp
0x541DD4: push    esi
0x541DD5: mov     esi, ecx
0x541DD7: test    byte ptr [esi+0FCh], 4
0x541DDE: push    edi
0x541DDF: jbe     loc_541F77
0x541DE5: call    sub_4994C0
0x541DEA: mov     edi, eax
0x541DEC: xor     ebp, ebp
0x541DEE: cmp     edi, ebp
0x541DF0: jz      loc_541F77
0x541DF6: fld     dword ptr [edi+60h]
0x541DF9: push    ebx
0x541DFA: fstp    dword ptr [esi+0C8h]
0x541E00: fld     dword ptr [edi+64h]
0x541E03: fstp    dword ptr [esi+0CCh]
0x541E09: mov     eax, ds:0B333CCh
0x541E0E: cmp     [eax+0B6h], bp
0x541E15: ja      short loc_541E1B
0x541E17: xor     ebx, ebx
0x541E19: jmp     short loc_541E23
0x541E1B: mov     eax, [eax+0B0h]
0x541E21: mov     ebx, [eax]
0x541E23: mov     ecx, ds:0B333C4h; this
0x541E29: call    TESObjectREFR_GetParentCell
0x541E2E: mov     ecx, eax
0x541E30: call    TESObjectCELL_GetWaterHeight
0x541E35: fsub    dword ptr [ebx+90h]
0x541E3B: fmul    dword ptr ds:0B36670h
0x541E41: fstp    [esp+40h+var_30]
0x541E45: fld1
0x541E47: fld     [esp+40h+var_30]
0x541E4B: fcom    st(1)
0x541E4D: fnstsw  ax
0x541E4F: test    ah, 41h
0x541E52: jnz     short loc_541E60
0x541E54: fstp    st
0x541E56: fstp    [esp+40h+var_30]
0x541E5A: fld     [esp+40h+var_30]
0x541E5E: jmp     short loc_541E62
0x541E60: fstp    st(1)
0x541E62: mov     ecx, [edi+68h]
0x541E65: fld     st
0x541E67: fld1
0x541E69: mov     edx, [edi+6Ch]
0x541E6C: fsubrp  st(1), st
0x541E6E: push    ecx
0x541E6F: lea     eax, [esp+44h+var_20]
0x541E73: mov     [esp+44h+var_20], ecx
0x541E77: lea     edi, [esi+48h]
0x541E7A: fstp    [esp+44h+var_10]
0x541E7E: mov     ecx, esi
0x541E80: mov     [esp+44h+var_1C], edx
0x541E84: fstp    [esp+44h+var_C]
0x541E88: mov     [esp+44h+var_18], ebp
0x541E8C: fldz
0x541E8E: mov     [esp+44h+var_14], ebp
0x541E92: fst     [esp+44h+var_8]
0x541E96: fst     [esp+44h+var_4]
0x541E9A: fstp    [esp+44h+var_44]; float
0x541E9D: push    eax; int
0x541E9E: push    edi; int
0x541E9F: call    sub_5400E0
0x541EA4: mov     eax, [esi+0DCh]
0x541EAA: cmp     eax, 3
0x541EAD: jz      short loc_541EB8
0x541EAF: cmp     eax, 2
0x541EB2: jnz     loc_541F63
0x541EB8: fld     dword ptr [edi]
0x541EBA: fmul    dword ptr [esi+6Ch]
0x541EBD: fstp    dword ptr [edi]
0x541EBF: fld     dword ptr [esi+70h]
0x541EC2: fmul    dword ptr [edi+4]
0x541EC5: fstp    dword ptr [edi+4]
0x541EC8: fld     dword ptr [esi+74h]
0x541ECB: fmul    dword ptr [edi+8]
0x541ECE: fstp    dword ptr [edi+8]
0x541ED1: fld     dword ptr ds:0A3D65Ch
0x541ED7: fcomp   [esp+40h+var_30]
0x541EDB: fnstsw  ax
0x541EDD: test    ah, 5
0x541EE0: jp      short loc_541EE6
0x541EE2: mov     bl, 1
0x541EE4: jmp     short loc_541EE8
0x541EE6: xor     bl, bl
0x541EE8: test    bl, bl
0x541EEA: mov     ecx, [esi+2Ch]
0x541EED: mov     eax, [ecx+0Ch]
0x541EF0: mov     ebp, 0FFFEh
0x541EF5: mov     edi, 1
0x541EFA: jz      short loc_541F02
0x541EFC: or      [eax+18h], di
0x541F00: jmp     short loc_541F06
0x541F02: and     [eax+18h], bp
0x541F06: test    bl, bl
0x541F08: mov     edx, [esi+2Ch]
0x541F0B: mov     eax, [edx+8]
0x541F0E: jz      short loc_541F16
0x541F10: or      [eax+18h], di
0x541F14: jmp     short loc_541F1A
0x541F16: and     [eax+18h], bp
0x541F1A: mov     ecx, [esi+20h]
0x541F1D: call    sub_452A60
0x541F22: test    bl, bl
0x541F24: jz      short loc_541F2C
0x541F26: or      [eax+18h], di
0x541F2A: jmp     short loc_541F30
0x541F2C: and     [eax+18h], bp
0x541F30: test    bl, bl
0x541F32: mov     eax, [esi+28h]
0x541F35: mov     eax, [eax+8]
0x541F38: jz      short loc_541F40
0x541F3A: or      [eax+18h], di
0x541F3E: jmp     short loc_541F44
0x541F40: and     [eax+18h], bp
0x541F44: test    bl, bl
0x541F46: mov     ecx, [esi+28h]
0x541F49: mov     eax, [ecx+0Ch]
0x541F4C: jz      short loc_541F54
0x541F4E: or      [eax+18h], di
0x541F52: jmp     short loc_541F58
0x541F54: and     [eax+18h], bp
0x541F58: test    bl, bl
0x541F5A: mov     esi, [esi+4]
0x541F5D: jz      short loc_541F6B
0x541F5F: or      [esi+18h], di
0x541F63: pop     ebx
0x541F64: pop     edi
0x541F65: pop     esi
0x541F66: pop     ebp
0x541F67: add     esp, 30h
0x541F6A: retn
0x541F6B: and     [esi+18h], bp
0x541F6F: pop     ebx
0x541F70: pop     edi
0x541F71: pop     esi
0x541F72: pop     ebp
0x541F73: add     esp, 30h
0x541F76: retn
0x541F77: cmp     dword ptr [esi+10h], 0
0x541F7B: jz      loc_54211C
0x541F81: mov     eax, [esi+0DCh]
0x541F87: cmp     eax, 3
0x541F8A: jz      short loc_541F95
0x541F8C: cmp     eax, 2
0x541F8F: jnz     loc_54211C
0x541F95: mov     ecx, esi
0x541F97: call    sub_53FC10
0x541F9C: fstp    [esp+3Ch+var_2C]
0x541FA0: mov     ecx, esi
0x541FA2: call    sub_499180
0x541FA7: fstp    [esp+3Ch+var_30]
0x541FAB: mov     ecx, esi
0x541FAD: call    sub_4991C0
0x541FB2: fstp    [esp+3Ch+var_28]
0x541FB6: mov     ecx, esi
0x541FB8: call    sub_53FC90
0x541FBD: fstp    [esp+3Ch+var_24]
0x541FC1: fld     [esp+3Ch+var_2C]
0x541FC5: fld     dword ptr [esi+0D0h]
0x541FCB: fcomp   st(1)
0x541FCD: fnstsw  ax
0x541FCF: fld     [esp+3Ch+var_30]
0x541FD3: test    ah, 41h
0x541FD6: jnz     short loc_541FF7
0x541FD8: fld     dword ptr [esi+0D0h]
0x541FDE: fcomp   st(1)
0x541FE0: fnstsw  ax
0x541FE2: test    ah, 5
0x541FE5: jp      short loc_541FF7
0x541FE7: fld     dword ptr [esi+0D0h]
0x541FED: fsub    st, st(2)
0x541FEF: fxch    st(1)
0x541FF1: fsubrp  st(2), st
0x541FF3: fdivrp  st(1), st
0x541FF5: jmp     short loc_54205B
0x541FF7: fstp    st(1)
0x541FF9: fld     dword ptr [esi+0D0h]
0x541FFF: fcompp
0x542001: fnstsw  ax
0x542003: fld     [esp+3Ch+var_28]
0x542007: test    ah, 1
0x54200A: jnz     short loc_542021
0x54200C: fld     dword ptr [esi+0D0h]
0x542012: fcomp   st(1)
0x542014: fnstsw  ax
0x542016: test    ah, 41h
0x542019: jp      short loc_542021
0x54201B: fstp    st
0x54201D: fld1
0x54201F: jmp     short loc_54205B
0x542021: fld     dword ptr [esi+0D0h]
0x542027: fcomp   st(1)
0x542029: fnstsw  ax
0x54202B: test    ah, 41h
0x54202E: jnz     short loc_542057
0x542030: fld     dword ptr [esi+0D0h]
0x542036: fld     [esp+3Ch+var_24]
0x54203A: fcom    st(1)
0x54203C: fnstsw  ax
0x54203E: fstp    st(1)
0x542040: test    ah, 41h
0x542043: jnz     short loc_542055
0x542045: fld     st
0x542047: fsub    dword ptr [esi+0D0h]
0x54204D: fxch    st(1)
0x54204F: fsubrp  st(2), st
0x542051: fdivrp  st(1), st
0x542053: jmp     short loc_54205B
0x542055: fstp    st
0x542057: fstp    st
0x542059: fldz
0x54205B: mov     eax, [esi+10h]
0x54205E: fstp    [esp+3Ch+var_30]
0x542062: fld     [esp+3Ch+var_30]
0x542066: fld     st
0x542068: fld1
0x54206A: fld     st
0x54206C: fsubrp  st(2), st
0x54206E: fxch    st(1)
0x542070: fstp    [esp+3Ch+var_24]
0x542074: fld     dword ptr [eax+60h]
0x542077: fld     [esp+3Ch+var_24]
0x54207B: fld     st
0x54207D: fmulp   st(2), st
0x54207F: fld     dword ptr [eax+58h]
0x542082: fmul    st, st(4)
0x542084: faddp   st(2), st
0x542086: fxch    st(1)
0x542088: fstp    dword ptr [esi+0C8h]
0x54208E: fld     dword ptr [eax+64h]
0x542091: fmul    st, st(1)
0x542093: fld     dword ptr [eax+5Ch]
0x542096: mov     eax, [esi+14h]
0x542099: test    eax, eax
0x54209B: fmul    st, st(4)
0x54209D: faddp   st(1), st
0x54209F: fstp    dword ptr [esi+0CCh]
0x5420A5: jz      loc_5421E6
0x5420AB: fld     dword ptr [esi+0D8h]
0x5420B1: fmul    dword ptr [esi+0C8h]
0x5420B7: fstp    [esp+3Ch+var_24]
0x5420BB: fld     [esp+3Ch+var_24]
0x5420BF: fst     dword ptr [esi+0C8h]
0x5420C5: fld     dword ptr [esi+0D8h]
0x5420CB: fsubp   st(3), st
0x5420CD: fld     dword ptr [eax+60h]
0x5420D0: fmul    st, st(2)
0x5420D2: fld     dword ptr [eax+58h]
0x5420D5: fmul    st, st(5)
0x5420D7: faddp   st(1), st
0x5420D9: fmul    st, st(3)
0x5420DB: faddp   st(1), st
0x5420DD: fstp    dword ptr [esi+0C8h]
0x5420E3: fld     dword ptr [esi+0D8h]
0x5420E9: fmul    dword ptr [esi+0CCh]
0x5420EF: fstp    [esp+3Ch+var_24]
0x5420F3: fld     [esp+3Ch+var_24]
0x5420F7: fst     dword ptr [esi+0CCh]
0x5420FD: fld     dword ptr [eax+64h]
0x542100: fmulp   st(2), st
0x542102: fld     dword ptr [eax+5Ch]
0x542105: fmulp   st(4), st
0x542107: fxch    st(1)
0x542109: faddp   st(3), st
0x54210B: fxch    st(2)
0x54210D: fmulp   st(1), st
0x54210F: faddp   st(1), st
0x542111: fstp    dword ptr [esi+0CCh]
0x542117: jmp     loc_5421EC
0x54211C: cmp     dword ptr [esi+0DCh], 1
0x542123: jnz     loc_5421D2
0x542129: mov     eax, ds:0B333A0h
0x54212E: test    eax, eax
0x542130: jz      loc_5421D2
0x542136: mov     ecx, [eax+34h]
0x542139: test    ecx, ecx
0x54213B: jz      loc_5421D2
0x542141: call    sub_4C9A40
0x542146: fstp    [esp+3Ch+var_30]
0x54214A: fldz
0x54214C: fld     [esp+3Ch+var_30]
0x542150: fcom    st(1)
0x542152: fnstsw  ax
0x542154: fstp    st(1)
0x542156: test    ah, 41h
0x542159: fld     dword ptr ds:0A3F4F0h
0x54215F: jnp     short loc_5421A2
0x542161: fcom    st(1)
0x542163: fnstsw  ax
0x542165: fstp    st(1)
0x542167: test    ah, 5
0x54216A: jnp     short loc_5421A4
0x54216C: fstp    st
0x54216E: mov     edx, ds:0B333A0h
0x542174: mov     ecx, [edx+34h]
0x542177: call    sub_4C9A20
0x54217C: fstp    [esp+3Ch+var_2C]
0x542180: fldz
0x542182: fld     [esp+3Ch+var_2C]
0x542186: fcom    st(1)
0x542188: fnstsw  ax
0x54218A: fstp    st(1)
0x54218C: test    ah, 41h
0x54218F: jnp     short loc_5421AA
0x542191: fld     [esp+3Ch+var_30]
0x542195: fcom    st(1)
0x542197: fnstsw  ax
0x542199: test    ah, 5
0x54219C: jp      short loc_5421C2
0x54219E: fstp    st(1)
0x5421A0: jmp     short loc_5421B0
0x5421A2: fstp    st(1)
0x5421A4: fstp    [esp+3Ch+var_30]
0x5421A8: jmp     short loc_54216E
0x5421AA: fstp    st
0x5421AC: fld     [esp+3Ch+var_30]
0x5421B0: fld     qword ptr ds:0A56EA0h
0x5421B6: fmul    st, st(1)
0x5421B8: fstp    [esp+3Ch+var_2C]
0x5421BC: fld     [esp+3Ch+var_2C]
0x5421C0: fxch    st(1)
0x5421C2: fxch    st(1)
0x5421C4: fstp    dword ptr [esi+0C8h]
0x5421CA: fstp    dword ptr [esi+0CCh]
0x5421D0: jmp     short loc_5421EC
0x5421D2: fld     dword ptr ds:0A3F4F0h
0x5421D8: fst     dword ptr [esi+0C8h]
0x5421DE: fstp    dword ptr [esi+0CCh]
0x5421E4: jmp     short loc_5421EC
0x5421E6: fstp    st(2)
0x5421E8: fstp    st
0x5421EA: fstp    st
0x5421EC: call    sub_4E9F40
0x5421F1: test    al, al
0x5421F3: jnz     loc_541F64
0x5421F9: mov     ecx, ds:0B333CCh; this
0x5421FF: call    GetFarPlane
0x542204: fstp    [esp+3Ch+var_24]
0x542208: fld     dword ptr ds:0B03134h
0x54220E: pop     edi
0x54220F: fstp    [esp+38h+var_28]
0x542213: fld     dword ptr [esi+0C8h]
0x542219: fld     dword ptr [esi+0CCh]
0x54221F: fld     [esp+38h+var_24]
0x542223: fld     st
0x542225: fsubp   st(2), st
0x542227: fld     dword ptr [esi+0CCh]
0x54222D: fld     [esp+38h+var_28]
0x542231: fld     st
0x542233: fsubp   st(2), st
0x542235: fxch    st(3)
0x542237: fdivrp  st(1), st
0x542239: fstp    [esp+38h+var_24]
0x54223D: fld     [esp+38h+var_24]
0x542241: fld     st(3)
0x542243: fsubrp  st(3), st
0x542245: fmulp   st(2), st
0x542247: fxch    st(2)
0x542249: fsubrp  st(1), st
0x54224B: fstp    dword ptr [esi+0C8h]
0x542251: fstp    dword ptr [esi+0CCh]
0x542257: pop     esi
0x542258: pop     ebp
0x542259: add     esp, 30h
0x54225C: retn
