0x4A6AF0: mov     ecx, [esp+arg_0]
0x4A6AF4: sub     esp, 0Ch
0x4A6AF7: test    ecx, ecx
0x4A6AF9: push    esi
0x4A6AFA: push    edi
0x4A6AFB: jz      short loc_4A6B7B
0x4A6AFD: mov     edx, [esp+14h+arg_4]
0x4A6B01: test    edx, edx
0x4A6B03: jz      short loc_4A6B7B
0x4A6B05: mov     esi, [esp+14h+arg_8]
0x4A6B09: test    esi, esi
0x4A6B0B: jz      short loc_4A6B7B
0x4A6B0D: mov     edi, [esp+14h+arg_C]
0x4A6B11: test    edi, edi
0x4A6B13: jz      short loc_4A6B7B
0x4A6B15: fld     dword ptr [edx]
0x4A6B17: fsub    dword ptr [ecx]
0x4A6B19: fstp    [esp+14h+arg_0]
0x4A6B1D: fld     dword ptr [esi]
0x4A6B1F: fsub    dword ptr [edi]
0x4A6B21: fstp    [esp+14h+var_8]
0x4A6B25: fldz
0x4A6B27: fld     [esp+14h+arg_0]
0x4A6B2B: fcom    st(1)
0x4A6B2D: fnstsw  ax
0x4A6B2F: test    ah, 5
0x4A6B32: jp      short loc_4A6B3E
0x4A6B34: fld     dword ptr [ecx]
0x4A6B36: fstp    [esp+14h+arg_0]
0x4A6B3A: fld     dword ptr [edx]
0x4A6B3C: jmp     short loc_4A6B46
0x4A6B3E: fld     dword ptr [edx]
0x4A6B40: fstp    [esp+14h+arg_0]
0x4A6B44: fld     dword ptr [ecx]
0x4A6B46: fstp    [esp+14h+var_C]
0x4A6B4A: fld     [esp+14h+var_8]
0x4A6B4E: fcom    st(2)
0x4A6B50: fnstsw  ax
0x4A6B52: fld     [esp+14h+arg_0]
0x4A6B56: test    ah, 41h
0x4A6B59: jnz     short loc_4A6B83
0x4A6B5B: fld     dword ptr [edi]
0x4A6B5D: fcompp
0x4A6B5F: fnstsw  ax
0x4A6B61: test    ah, 41h
0x4A6B64: jz      short loc_4A6B75
0x4A6B66: fld     dword ptr [esi]
0x4A6B68: fld     [esp+14h+var_C]
0x4A6B6C: fcompp
0x4A6B6E: fnstsw  ax
0x4A6B70: test    ah, 41h
0x4A6B73: jnz     short loc_4A6B9D
0x4A6B75: fstp    st(2)
0x4A6B77: fstp    st
0x4A6B79: fstp    st
0x4A6B7B: pop     edi
0x4A6B7C: xor     al, al
0x4A6B7E: pop     esi
0x4A6B7F: add     esp, 0Ch
0x4A6B82: retn
0x4A6B83: fld     dword ptr [esi]
0x4A6B85: fcompp
0x4A6B87: fnstsw  ax
0x4A6B89: test    ah, 41h
0x4A6B8C: jz      short loc_4A6B75
0x4A6B8E: fld     dword ptr [edi]
0x4A6B90: fld     [esp+14h+var_C]
0x4A6B94: fcompp
0x4A6B96: fnstsw  ax
0x4A6B98: test    ah, 41h
0x4A6B9B: jz      short loc_4A6B75
0x4A6B9D: fld     dword ptr [edx+4]
0x4A6BA0: fsub    dword ptr [ecx+4]
0x4A6BA3: fstp    [esp+14h+arg_0]
0x4A6BA7: fld     dword ptr [esi+4]
0x4A6BAA: fsub    dword ptr [edi+4]
0x4A6BAD: fstp    [esp+14h+var_8]
0x4A6BB1: fld     [esp+14h+arg_0]
0x4A6BB5: fcom    st(3)
0x4A6BB7: fnstsw  ax
0x4A6BB9: test    ah, 5
0x4A6BBC: jp      short loc_4A6BCA
0x4A6BBE: fld     dword ptr [ecx+4]
0x4A6BC1: fstp    [esp+14h+arg_0]
0x4A6BC5: fld     dword ptr [edx+4]
0x4A6BC8: jmp     short loc_4A6BD4
0x4A6BCA: fld     dword ptr [edx+4]
0x4A6BCD: fstp    [esp+14h+arg_0]
0x4A6BD1: fld     dword ptr [ecx+4]
0x4A6BD4: fstp    [esp+14h+var_C]
0x4A6BD8: fld     [esp+14h+var_8]
0x4A6BDC: fcom    st(4)
0x4A6BDE: fnstsw  ax
0x4A6BE0: fld     [esp+14h+arg_0]
0x4A6BE4: test    ah, 41h
0x4A6BE7: jnz     short loc_4A6C17
0x4A6BE9: fld     dword ptr [edi+4]
0x4A6BEC: fcompp
0x4A6BEE: fnstsw  ax
0x4A6BF0: test    ah, 41h
0x4A6BF3: jz      short loc_4A6C05
0x4A6BF5: fld     dword ptr [esi+4]
0x4A6BF8: fld     [esp+14h+var_C]
0x4A6BFC: fcompp
0x4A6BFE: fnstsw  ax
0x4A6C00: test    ah, 41h
0x4A6C03: jnz     short loc_4A6C33
0x4A6C05: fstp    st(4)
0x4A6C07: pop     edi
0x4A6C08: fstp    st(3)
0x4A6C0A: xor     al, al
0x4A6C0C: fstp    st(2)
0x4A6C0E: pop     esi
0x4A6C0F: fstp    st
0x4A6C11: fstp    st
0x4A6C13: add     esp, 0Ch
0x4A6C16: retn
0x4A6C17: fld     dword ptr [esi+4]
0x4A6C1A: fcompp
0x4A6C1C: fnstsw  ax
0x4A6C1E: test    ah, 41h
0x4A6C21: jz      short loc_4A6C05
0x4A6C23: fld     dword ptr [edi+4]
0x4A6C26: fld     [esp+14h+var_C]
0x4A6C2A: fcompp
0x4A6C2C: fnstsw  ax
0x4A6C2E: test    ah, 41h
0x4A6C31: jz      short loc_4A6C05
0x4A6C33: fld     dword ptr [ecx]
0x4A6C35: fsub    dword ptr [esi]
0x4A6C37: fstp    [esp+14h+var_8]
0x4A6C3B: fld     dword ptr [ecx+4]
0x4A6C3E: fsub    dword ptr [esi+4]
0x4A6C41: fstp    [esp+14h+arg_0]
0x4A6C45: fld     st(1)
0x4A6C47: fmul    st, st(3)
0x4A6C49: fld     st(1)
0x4A6C4B: fmul    st, st(5)
0x4A6C4D: fsubp   st(1), st
0x4A6C4F: fstp    [esp+14h+var_4]
0x4A6C53: fld     [esp+14h+arg_0]
0x4A6C57: fld     st
0x4A6C59: fmulp   st(5), st
0x4A6C5B: fld     [esp+14h+var_8]
0x4A6C5F: fld     st
0x4A6C61: fmulp   st(4), st
0x4A6C63: fxch    st(5)
0x4A6C65: fsubrp  st(3), st
0x4A6C67: fxch    st(2)
0x4A6C69: fstp    [esp+14h+var_C]
0x4A6C6D: fmulp   st(3), st
0x4A6C6F: fmulp   st(1), st
0x4A6C71: fsubp   st(1), st
0x4A6C73: fstp    [esp+14h+arg_0]
0x4A6C77: fld     st
0x4A6C79: fld     [esp+14h+var_4]
0x4A6C7D: fucom   st(1)
0x4A6C7F: fnstsw  ax
0x4A6C81: fstp    st(1)
0x4A6C83: test    ah, 44h
0x4A6C86: jp      short loc_4A6C94
0x4A6C88: fstp    st(1)
0x4A6C8A: pop     edi
0x4A6C8B: fstp    st
0x4A6C8D: mov     al, 1
0x4A6C8F: pop     esi
0x4A6C90: add     esp, 0Ch
0x4A6C93: retn
0x4A6C94: fcom    st(1)
0x4A6C96: fnstsw  ax
0x4A6C98: fld     [esp+14h+arg_0]
0x4A6C9C: fcom    st(2)
0x4A6C9E: test    ah, 41h
0x4A6CA1: fnstsw  ax
0x4A6CA3: jnz     short loc_4A6CE3
0x4A6CA5: test    ah, 5
0x4A6CA8: jnp     loc_4A6B75
0x4A6CAE: fcomp   st(1)
0x4A6CB0: fnstsw  ax
0x4A6CB2: test    ah, 41h
0x4A6CB5: jz      short loc_4A6CD7
0x4A6CB7: fld     [esp+14h+var_C]
0x4A6CBB: fcom    st(2)
0x4A6CBD: fnstsw  ax
0x4A6CBF: fstp    st(2)
0x4A6CC1: test    ah, 5
0x4A6CC4: jnp     short loc_4A6CD7
0x4A6CC6: fcompp
0x4A6CC8: fnstsw  ax
0x4A6CCA: test    ah, 5
0x4A6CCD: jp      short loc_4A6D11
0x4A6CCF: pop     edi
0x4A6CD0: xor     al, al
0x4A6CD2: pop     esi
0x4A6CD3: add     esp, 0Ch
0x4A6CD6: retn
0x4A6CD7: fstp    st(1)
0x4A6CD9: pop     edi
0x4A6CDA: fstp    st
0x4A6CDC: xor     al, al
0x4A6CDE: pop     esi
0x4A6CDF: add     esp, 0Ch
0x4A6CE2: retn
0x4A6CE3: test    ah, 41h
0x4A6CE6: jz      loc_4A6B75
0x4A6CEC: fcomp   st(1)
0x4A6CEE: fnstsw  ax
0x4A6CF0: test    ah, 5
0x4A6CF3: jnp     short loc_4A6CD7
0x4A6CF5: fld     [esp+14h+var_C]
0x4A6CF9: fcom    st(2)
0x4A6CFB: fnstsw  ax
0x4A6CFD: fstp    st(2)
0x4A6CFF: test    ah, 41h
0x4A6D02: jz      short loc_4A6CD7
0x4A6D04: fcompp
0x4A6D06: fnstsw  ax
0x4A6D08: test    ah, 41h
0x4A6D0B: jz      loc_4A6B7B
0x4A6D11: pop     edi
0x4A6D12: mov     al, 1
0x4A6D14: pop     esi
0x4A6D15: add     esp, 0Ch
0x4A6D18: retn
