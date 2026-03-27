0x8B3B50: sub     esp, 10h
0x8B3B53: push    esi
0x8B3B54: mov     esi, [esp+14h+arg_0]
0x8B3B58: push    esi
0x8B3B59: call    sub_8B3850
0x8B3B5E: fld     dword ptr [esi]
0x8B3B60: mov     edx, [esp+14h+arg_4]
0x8B3B64: fmul    dword ptr [edx]
0x8B3B66: mov     eax, [ecx+8]
0x8B3B69: fchs
0x8B3B6B: fld     dword ptr [esi+4]
0x8B3B6E: fmul    dword ptr [edx+4]
0x8B3B71: fsubp   st(1), st
0x8B3B73: fld     dword ptr [esi+8]
0x8B3B76: mov     esi, [ecx]
0x8B3B78: fmul    dword ptr [edx+8]
0x8B3B7B: fsubp   st(1), st
0x8B3B7D: fld     dword ptr ds:0A2F948h
0x8B3B83: fdiv    dword ptr [edx+eax*4]
0x8B3B86: mov     eax, [ecx+4]
0x8B3B89: lea     eax, [edx+eax*4]
0x8B3B8C: lea     edx, [edx+esi*4]
0x8B3B8F: fld     st
0x8B3B91: fmul    st, st(1)
0x8B3B93: fld     st
0x8B3B95: fmul    st, st(2)
0x8B3B97: fstp    [esp+14h+arg_4]
0x8B3B9B: fld     st(1)
0x8B3B9D: fmul    dword ptr [ecx+10h]
0x8B3BA0: fstp    dword ptr [ecx+34h]
0x8B3BA3: fld     st(1)
0x8B3BA5: fmul    dword ptr [ecx+14h]
0x8B3BA8: fstp    dword ptr [ecx+38h]
0x8B3BAB: fld     st(2)
0x8B3BAD: fmul    dword ptr [ecx+0Ch]
0x8B3BB0: fld     dword ptr [edx]
0x8B3BB2: fmul    dword ptr [ecx+10h]
0x8B3BB5: fld     dword ptr [ecx+14h]
0x8B3BB8: fmul    dword ptr [eax]
0x8B3BBA: faddp   st(1), st
0x8B3BBC: fadd    st, st(1)
0x8B3BBE: fmul    st, st(2)
0x8B3BC0: fchs
0x8B3BC2: fstp    dword ptr [ecx+3Ch]
0x8B3BC5: fld     st(2)
0x8B3BC7: fmul    dword ptr [ecx+18h]
0x8B3BCA: fstp    dword ptr [ecx+40h]
0x8B3BCD: fld     st(2)
0x8B3BCF: fmul    dword ptr [ecx+20h]
0x8B3BD2: fstp    dword ptr [ecx+44h]
0x8B3BD5: fld     dword ptr [edx]
0x8B3BD7: fld     dword ptr [eax]
0x8B3BD9: fld     dword ptr [edx]
0x8B3BDB: fmul    dword ptr [ecx+10h]
0x8B3BDE: fld     dword ptr [ecx+14h]
0x8B3BE1: fmul    dword ptr [eax]
0x8B3BE3: faddp   st(1), st
0x8B3BE5: fadd    st, st
0x8B3BE7: fadd    st, st(3)
0x8B3BE9: fmul    st, st(6)
0x8B3BEB: fld     dword ptr [edx]
0x8B3BED: fmul    dword ptr [eax]
0x8B3BEF: fmul    dword ptr [ecx+1Ch]
0x8B3BF2: fadd    st, st
0x8B3BF4: faddp   st(1), st
0x8B3BF6: fld     st(2)
0x8B3BF8: fmul    dword ptr [ecx+18h]
0x8B3BFB: fmul    st, st(3)
0x8B3BFD: faddp   st(1), st
0x8B3BFF: fld     st(1)
0x8B3C01: fmul    st, st(2)
0x8B3C03: fmul    dword ptr [ecx+20h]
0x8B3C06: faddp   st(1), st
0x8B3C08: fmul    [esp+14h+arg_4]
0x8B3C0C: fstp    dword ptr [ecx+48h]
0x8B3C0F: fstp    st
0x8B3C11: fstp    st
0x8B3C13: fld     st(2)
0x8B3C15: fmul    dword ptr [ecx+24h]
0x8B3C18: fstp    dword ptr [ecx+4Ch]
0x8B3C1B: fld     st(2)
0x8B3C1D: fmul    dword ptr [ecx+30h]
0x8B3C20: fstp    dword ptr [ecx+50h]
0x8B3C23: mov     esi, [edx]
0x8B3C25: fld     dword ptr [edx]
0x8B3C27: mov     [esp+14h+var_4], esi
0x8B3C2B: fld     dword ptr [edx]
0x8B3C2D: mov     esi, [eax]
0x8B3C2F: fmul    dword ptr [eax]
0x8B3C31: mov     [esp+14h+arg_0], esi
0x8B3C35: mov     [esp+14h+var_8], esi
0x8B3C39: mov     esi, [edx]
0x8B3C3B: fmul    dword ptr [ecx+1Ch]
0x8B3C3E: mov     [esp+14h+var_10], esi
0x8B3C42: mov     esi, [eax]
0x8B3C44: mov     [esp+14h+var_C], esi
0x8B3C48: fadd    st, st
0x8B3C4A: fld     [esp+14h+var_10]
0x8B3C4E: fmul    dword ptr [ecx+18h]
0x8B3C51: fmul    [esp+14h+var_10]
0x8B3C55: faddp   st(1), st
0x8B3C57: fld     [esp+14h+var_C]
0x8B3C5B: fmul    [esp+14h+var_C]
0x8B3C5F: fmul    dword ptr [ecx+20h]
0x8B3C62: faddp   st(1), st
0x8B3C64: fmul    dword ptr ds:0A46C30h
0x8B3C6A: fld     dword ptr [edx]
0x8B3C6C: fmul    dword ptr [ecx+10h]
0x8B3C6F: fld     dword ptr [ecx+14h]
0x8B3C72: fmul    dword ptr [eax]
0x8B3C74: faddp   st(1), st
0x8B3C76: fmul    dword ptr ds:0A46C30h
0x8B3C7C: fadd    st, st(3)
0x8B3C7E: fmul    st, st(6)
0x8B3C80: faddp   st(1), st
0x8B3C82: fmul    st, st(5)
0x8B3C84: fld     dword ptr [edx]
0x8B3C86: fmul    dword ptr [ecx+2Ch]
0x8B3C89: fmul    [esp+14h+var_8]
0x8B3C8D: fmul    [esp+14h+var_8]
0x8B3C91: fmul    dword ptr ds:0A46C30h
0x8B3C97: faddp   st(1), st
0x8B3C99: fld     [esp+14h+arg_0]
0x8B3C9D: fmul    dword ptr [ecx+30h]
0x8B3CA0: fmul    [esp+14h+arg_0]
0x8B3CA4: fmul    [esp+14h+arg_0]
0x8B3CA8: faddp   st(1), st
0x8B3CAA: fld     [esp+14h+var_4]
0x8B3CAE: fmul    dword ptr [ecx+28h]
0x8B3CB1: fmul    [esp+14h+var_4]
0x8B3CB5: fmul    dword ptr [eax]
0x8B3CB7: fmul    dword ptr ds:0A46C30h
0x8B3CBD: faddp   st(1), st
0x8B3CBF: fld     st(1)
0x8B3CC1: fmul    st, st(2)
0x8B3CC3: fmul    st, st(2)
0x8B3CC5: fmul    dword ptr [ecx+24h]
0x8B3CC8: faddp   st(1), st
0x8B3CCA: fld     [esp+14h+arg_4]
0x8B3CCE: fmul    st, st(5)
0x8B3CD0: fmulp   st(1), st
0x8B3CD2: fchs
0x8B3CD4: fstp    dword ptr [ecx+54h]
0x8B3CD7: fstp    st
0x8B3CD9: fstp    st
0x8B3CDB: fxch    st(1)
0x8B3CDD: fmul    dword ptr [ecx+28h]
0x8B3CE0: fstp    dword ptr [ecx+58h]
0x8B3CE3: fld     dword ptr [edx]
0x8B3CE5: fmul    dword ptr [ecx+2Ch]
0x8B3CE8: fld     dword ptr [ecx+30h]
0x8B3CEB: fmul    dword ptr [eax]
0x8B3CED: faddp   st(1), st
0x8B3CEF: fld     st(2)
0x8B3CF1: fmul    dword ptr [ecx+20h]
0x8B3CF4: pop     esi
0x8B3CF5: faddp   st(1), st
0x8B3CF7: fmul    st, st(1)
0x8B3CF9: fchs
0x8B3CFB: fstp    dword ptr [ecx+5Ch]
0x8B3CFE: fstp    st
0x8B3D00: fld     dword ptr [edx]
0x8B3D02: fld     dword ptr [eax]
0x8B3D04: fld     dword ptr [edx]
0x8B3D06: fmul    dword ptr [ecx+18h]
0x8B3D09: fld     dword ptr [eax]
0x8B3D0B: fmul    dword ptr [ecx+1Ch]
0x8B3D0E: faddp   st(1), st
0x8B3D10: fadd    st, st
0x8B3D12: fld     st(3)
0x8B3D14: fmul    dword ptr [ecx+10h]
0x8B3D17: faddp   st(1), st
0x8B3D19: fmul    st, st(3)
0x8B3D1B: fld     dword ptr [edx]
0x8B3D1D: fmul    dword ptr [ecx+28h]
0x8B3D20: fmul    dword ptr [eax]
0x8B3D22: fadd    st, st
0x8B3D24: faddp   st(1), st
0x8B3D26: fld     st(1)
0x8B3D28: fmul    dword ptr [ecx+2Ch]
0x8B3D2B: fmul    st, st(2)
0x8B3D2D: faddp   st(1), st
0x8B3D2F: fld     st(2)
0x8B3D31: fmul    st, st(3)
0x8B3D33: fmul    dword ptr [ecx+24h]
0x8B3D36: faddp   st(1), st
0x8B3D38: fmul    [esp+10h+arg_4]
0x8B3D3C: fstp    dword ptr [ecx+60h]
0x8B3D3F: fstp    st
0x8B3D41: fstp    st
0x8B3D43: fstp    st
0x8B3D45: add     esp, 10h
0x8B3D48: retn    8
