0x8A1D00: push    ecx
0x8A1D01: push    ebx
0x8A1D02: push    ebp
0x8A1D03: mov     ebx, ecx
0x8A1D05: mov     eax, [ebx]
0x8A1D07: mov     edx, [eax+74h]
0x8A1D0A: push    edi
0x8A1D0B: lea     ecx, [esp+10h+var_1]
0x8A1D0F: push    ecx
0x8A1D10: mov     ecx, ebx
0x8A1D12: call    edx
0x8A1D14: mov     ebp, [esp+10h+arg_4]
0x8A1D18: mov     edi, eax
0x8A1D1A: test    edi, edi
0x8A1D1C: jz      short loc_8A1D95
0x8A1D1E: mov     eax, [edi+4]
0x8A1D21: test    eax, eax
0x8A1D23: push    esi
0x8A1D24: jz      short loc_8A1D2B
0x8A1D26: mov     esi, [eax+8]
0x8A1D29: jmp     short loc_8A1D2D
0x8A1D2B: xor     esi, esi
0x8A1D2D: fld     dword ptr [ebp+10h]
0x8A1D30: fstp    [esp+14h+arg_4]
0x8A1D34: fld1
0x8A1D36: fld     [esp+14h+arg_4]
0x8A1D3A: fucom   st(1)
0x8A1D3C: fnstsw  ax
0x8A1D3E: fstp    st(1)
0x8A1D40: test    ah, 44h
0x8A1D43: jnp     short loc_8A1D65
0x8A1D45: fld     dword ptr [edi+40h]
0x8A1D48: fmul    st, st(1)
0x8A1D4A: fstp    dword ptr [edi+40h]
0x8A1D4D: fld     st
0x8A1D4F: fmul    dword ptr [edi+44h]
0x8A1D52: fstp    dword ptr [edi+44h]
0x8A1D55: fld     dword ptr [edi+48h]
0x8A1D58: fmul    st, st(1)
0x8A1D5A: fstp    dword ptr [edi+48h]
0x8A1D5D: fmul    dword ptr [edi+4Ch]
0x8A1D60: fstp    dword ptr [edi+4Ch]
0x8A1D63: jmp     short loc_8A1D7C
0x8A1D65: test    esi, esi
0x8A1D67: fstp    st
0x8A1D69: jz      short loc_8A1D94
0x8A1D6B: mov     eax, [esi]
0x8A1D6D: mov     edx, [eax+8Ch]
0x8A1D73: push    ebp
0x8A1D74: mov     ecx, esi
0x8A1D76: call    edx
0x8A1D78: test    al, al
0x8A1D7A: jnz     short loc_8A1D94
0x8A1D7C: mov     eax, [esi]
0x8A1D7E: mov     edx, [eax+18h]
0x8A1D81: push    ebp
0x8A1D82: mov     ecx, esi
0x8A1D84: call    edx
0x8A1D86: test    eax, eax
0x8A1D88: jz      short loc_8A1D8F
0x8A1D8A: mov     eax, [eax+8]
0x8A1D8D: jmp     short loc_8A1D91
0x8A1D8F: xor     eax, eax
0x8A1D91: mov     [edi+4], eax
0x8A1D94: pop     esi
0x8A1D95: mov     eax, [esp+10h+arg_0]
0x8A1D99: push    ebp
0x8A1D9A: push    eax
0x8A1D9B: mov     ecx, ebx
0x8A1D9D: call    sub_8A2670
0x8A1DA2: pop     edi
0x8A1DA3: pop     ebp
0x8A1DA4: pop     ebx
0x8A1DA5: pop     ecx
0x8A1DA6: retn    8
