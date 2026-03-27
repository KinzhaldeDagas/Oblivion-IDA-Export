0x894C70: push    ebp
0x894C71: mov     ebp, esp
0x894C73: and     esp, 0FFFFFFF0h
0x894C76: sub     esp, 3Ch
0x894C79: mov     eax, ds:0B30AACh
0x894C7E: xor     eax, esp
0x894C80: mov     [esp+3Ch+var_4], eax
0x894C84: push    esi
0x894C85: mov     esi, ecx
0x894C87: cmp     dword ptr [esi+3ACh], 2
0x894C8E: jnz     loc_894E6C
0x894C94: mov     eax, [esi+374h]
0x894C9A: push    eax
0x894C9B: push    offset dword_BA7FD8
0x894CA0: call    NiRTTI_Cast
0x894CA5: mov     edx, eax
0x894CA7: add     esp, 8
0x894CAA: test    edx, edx
0x894CAC: jz      loc_894DE7
0x894CB2: mov     eax, [esi+1F4h]
0x894CB8: shr     eax, 14h
0x894CBB: test    al, 1
0x894CBD: jz      short loc_894CC8
0x894CBF: fld     dword ptr ds:0A2FE7Ch
0x894CC5: fstp    [ebp+arg_0]
0x894CC8: mov     ecx, [edx+8]
0x894CCB: test    ecx, ecx
0x894CCD: jz      short loc_894CD4
0x894CCF: fld     dword ptr [ecx+0Ch]
0x894CD2: jmp     short loc_894CDA
0x894CD4: fld     dword ptr ds:0B2EFC4h
0x894CDA: fstp    [esp+40h+var_34]
0x894CDE: fld     [esp+40h+var_34]
0x894CE2: fstp    [esp+40h+var_38]
0x894CE6: fld     [ebp+arg_0]
0x894CE9: fmul    qword ptr ds:0A3F3F0h
0x894CEF: fstp    [esp+40h+var_34]
0x894CF3: fld     [esp+40h+var_38]
0x894CF7: fld     dword ptr [esi+3A8h]
0x894CFD: fcomp   st(1)
0x894CFF: fnstsw  ax
0x894D01: test    ah, 5
0x894D04: jp      short loc_894D49
0x894D06: fld     st
0x894D08: fld     [esp+40h+var_34]
0x894D0C: fld     st
0x894D0E: fsubp   st(2), st
0x894D10: fxch    st(1)
0x894D12: fstp    [esp+40h+var_38]
0x894D16: fld     [esp+40h+var_38]
0x894D1A: fld     dword ptr [esi+3A8h]
0x894D20: fcomp   st(1)
0x894D22: fnstsw  ax
0x894D24: test    ah, 1
0x894D27: jnz     short loc_894D3F
0x894D29: fstp    st(1)
0x894D2B: fstp    st
0x894D2D: fsubr   dword ptr [esi+3A8h]
0x894D33: fstp    [esp+40h+var_34]
0x894D37: fld     dword ptr [esi+3A8h]
0x894D3D: jmp     short loc_894D68
0x894D3F: fstp    st(2)
0x894D41: fchs
0x894D43: fstp    [esp+40h+var_34]
0x894D47: jmp     short loc_894D68
0x894D49: fld     [esp+40h+var_34]
0x894D4D: fadd    st, st(1)
0x894D4F: fstp    [esp+40h+var_38]
0x894D53: fld     [esp+40h+var_38]
0x894D57: fld     dword ptr [esi+3A8h]
0x894D5D: fcomp   st(1)
0x894D5F: fnstsw  ax
0x894D61: test    ah, 41h
0x894D64: jnp     short loc_894D2B
0x894D66: fstp    st(1)
0x894D68: test    ecx, ecx
0x894D6A: fstp    [esp+40h+var_38]
0x894D6E: lea     eax, [ecx+10h]
0x894D71: jnz     short loc_894D78
0x894D73: mov     eax, offset stru_BA7A40
0x894D78: test    ecx, ecx
0x894D7A: movaps  xmm0, xmmword ptr [eax]
0x894D7D: movaps  [esp+40h+var_30], xmm0
0x894D82: lea     eax, [ecx+20h]
0x894D85: jnz     short loc_894D8C
0x894D87: mov     eax, offset stru_BA7A40
0x894D8C: test    ecx, ecx
0x894D8E: fld     dword ptr [esp+40h+var_30+8]
0x894D92: fld     [esp+40h+var_34]
0x894D96: movaps  xmm0, xmmword ptr [eax]
0x894D99: fld     st
0x894D9B: movaps  [esp+40h+var_20], xmm0
0x894DA0: fsubp   st(2), st
0x894DA2: fxch    st(1)
0x894DA4: fstp    dword ptr [esp+40h+var_30+8]
0x894DA8: fadd    dword ptr [esp+40h+var_20+8]
0x894DAC: fstp    dword ptr [esp+40h+var_20+8]
0x894DB0: jz      short loc_894DC1
0x894DB2: movaps  xmm0, [esp+40h+var_30]
0x894DB7: fld     dword ptr [ecx+0Ch]
0x894DBA: movaps  xmmword ptr [ecx+10h], xmm0
0x894DBE: fstp    dword ptr [ecx+1Ch]
0x894DC1: mov     eax, [edx+8]
0x894DC4: test    eax, eax
0x894DC6: jz      short loc_894DD7
0x894DC8: movaps  xmm0, [esp+40h+var_20]
0x894DCD: fld     dword ptr [eax+0Ch]
0x894DD0: movaps  xmmword ptr [eax+20h], xmm0
0x894DD4: fstp    dword ptr [eax+2Ch]
0x894DD7: mov     eax, [edx+8]
0x894DDA: test    eax, eax
0x894DDC: jz      short loc_894DF1
0x894DDE: fld     [esp+40h+var_38]
0x894DE2: fstp    dword ptr [eax+0Ch]
0x894DE5: jmp     short loc_894DF1
0x894DE7: fld     dword ptr [esi+3A8h]
0x894DED: fstp    [esp+40h+var_38]
0x894DF1: fld     [esp+40h+var_38]
0x894DF5: fld     st
0x894DF7: fld     dword ptr [esi+3A8h]
0x894DFD: fucompp
0x894DFF: fnstsw  ax
0x894E01: test    ah, 44h
0x894E04: jp      short loc_894E6A
0x894E06: fld     dword ptr [esi+3A0h]
0x894E0C: fucompp
0x894E0E: fnstsw  ax
0x894E10: test    ah, 44h
0x894E13: jp      short loc_894E4E
0x894E15: mov     eax, [esi+370h]
0x894E1B: cmp     eax, 2
0x894E1E: jz      short loc_894E32
0x894E20: push    eax
0x894E21: mov     ecx, esi
0x894E23: call    sub_894940
0x894E28: mov     dword ptr [esi+370h], 2
0x894E32: mov     dword ptr [esi+3ACh], 0
0x894E3C: pop     esi
0x894E3D: mov     ecx, [esp+3Ch+var_4]
0x894E41: xor     ecx, esp
0x894E43: call    @__security_check_cookie@4; __security_check_cookie(x)
0x894E48: mov     esp, ebp
0x894E4A: pop     ebp
0x894E4B: retn    4
0x894E4E: mov     dword ptr [esi+3ACh], 1
0x894E58: pop     esi
0x894E59: mov     ecx, [esp+3Ch+var_4]
0x894E5D: xor     ecx, esp
0x894E5F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x894E64: mov     esp, ebp
0x894E66: pop     ebp
0x894E67: retn    4
0x894E6A: fstp    st
0x894E6C: mov     ecx, [esp+40h+var_4]
0x894E70: pop     esi
0x894E71: xor     ecx, esp
0x894E73: call    @__security_check_cookie@4; __security_check_cookie(x)
0x894E78: mov     esp, ebp
0x894E7A: pop     ebp
0x894E7B: retn    4
