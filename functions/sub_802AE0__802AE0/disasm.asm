0x802AE0: sub     esp, 30h
0x802AE3: fld     dword ptr ds:0A9372Ch
0x802AE9: push    ebx
0x802AEA: mov     edx, ecx
0x802AEC: fstp    [esp+34h+var_30]
0x802AF0: movzx   eax, word ptr [edx+0Eh]
0x802AF4: test    ax, ax
0x802AF7: push    ebp
0x802AF8: push    esi
0x802AF9: push    edi
0x802AFA: mov     [esp+40h+var_2C], edx
0x802AFE: jnz     short loc_802B06
0x802B00: fldz
0x802B02: fstp    [esp+40h+var_30]
0x802B06: fld     [esp+40h+var_30]
0x802B0A: movzx   eax, ax
0x802B0D: test    eax, eax
0x802B0F: fst     [esp+40h+var_1C]
0x802B13: fst     [esp+40h+var_18]
0x802B17: fst     [esp+40h+var_14]
0x802B1B: fchs
0x802B1D: fstp    [esp+40h+var_30]
0x802B21: fld     [esp+40h+var_30]
0x802B25: fst     [esp+40h+var_28]
0x802B29: fst     [esp+40h+var_24]
0x802B2D: fstp    [esp+40h+var_20]
0x802B31: jle     loc_802BE4
0x802B37: mov     ecx, [edx+10h]
0x802B3A: fld     dword ptr ds:0A6D2D8h
0x802B40: mov     esi, eax
0x802B42: fcom    dword ptr [ecx+8]
0x802B45: fnstsw  ax
0x802B47: test    ah, 5
0x802B4A: jp      loc_802BD6
0x802B50: fld     [esp+40h+var_1C]
0x802B54: fld     dword ptr [ecx]
0x802B56: fcompp
0x802B58: fnstsw  ax
0x802B5A: test    ah, 41h
0x802B5D: jz      short loc_802B65
0x802B5F: fld     dword ptr [ecx]
0x802B61: fstp    [esp+40h+var_1C]
0x802B65: fld     [esp+40h+var_28]
0x802B69: fld     dword ptr [ecx]
0x802B6B: fcompp
0x802B6D: fnstsw  ax
0x802B6F: test    ah, 5
0x802B72: jnp     short loc_802B7A
0x802B74: fld     dword ptr [ecx]
0x802B76: fstp    [esp+40h+var_28]
0x802B7A: fld     [esp+40h+var_18]
0x802B7E: fld     dword ptr [ecx+4]
0x802B81: fcompp
0x802B83: fnstsw  ax
0x802B85: test    ah, 41h
0x802B88: jz      short loc_802B91
0x802B8A: fld     dword ptr [ecx+4]
0x802B8D: fstp    [esp+40h+var_18]
0x802B91: fld     [esp+40h+var_24]
0x802B95: fld     dword ptr [ecx+4]
0x802B98: fcompp
0x802B9A: fnstsw  ax
0x802B9C: test    ah, 5
0x802B9F: jnp     short loc_802BA8
0x802BA1: fld     dword ptr [ecx+4]
0x802BA4: fstp    [esp+40h+var_24]
0x802BA8: fld     [esp+40h+var_14]
0x802BAC: fld     dword ptr [ecx+8]
0x802BAF: fcompp
0x802BB1: fnstsw  ax
0x802BB3: test    ah, 41h
0x802BB6: jz      short loc_802BBF
0x802BB8: fld     dword ptr [ecx+8]
0x802BBB: fstp    [esp+40h+var_14]
0x802BBF: fld     [esp+40h+var_20]
0x802BC3: fld     dword ptr [ecx+8]
0x802BC6: fcompp
0x802BC8: fnstsw  ax
0x802BCA: test    ah, 5
0x802BCD: jnp     short loc_802BD6
0x802BCF: fld     dword ptr [ecx+8]
0x802BD2: fstp    [esp+40h+var_20]
0x802BD6: add     ecx, 10h
0x802BD9: sub     esi, 1
0x802BDC: jnz     loc_802B42
0x802BE2: fstp    st
0x802BE4: mov     edi, [edx+4]
0x802BE7: test    edi, edi
0x802BE9: jz      loc_802D9E
0x802BEF: mov     esi, [edx]
0x802BF1: test    esi, esi
0x802BF3: jz      loc_802D9E
0x802BF9: fld     [esp+40h+var_28]
0x802BFD: fld     st
0x802BFF: fld     [esp+40h+var_1C]
0x802C03: fld     st
0x802C05: fsubp   st(2), st
0x802C07: fxch    st(1)
0x802C09: fstp    [esp+40h+var_10]
0x802C0D: fld     [esp+40h+var_24]
0x802C11: fld     st
0x802C13: fld     [esp+40h+var_18]
0x802C17: fld     st
0x802C19: fsubp   st(2), st
0x802C1B: fxch    st(1)
0x802C1D: fstp    [esp+40h+var_C]
0x802C21: fld     [esp+40h+var_20]
0x802C25: fld     st
0x802C27: fld     [esp+40h+var_14]
0x802C2B: fld     st
0x802C2D: fsubp   st(2), st
0x802C2F: fxch    st(1)
0x802C31: fstp    [esp+40h+var_8]
0x802C35: fld     [esp+40h+var_10]
0x802C39: fld     qword ptr ds:0A2FAA0h
0x802C3F: fmul    st(1), st
0x802C41: fxch    st(1)
0x802C43: fstp    [esp+40h+var_28]
0x802C47: fld     [esp+40h+var_C]
0x802C4B: fmul    st, st(1)
0x802C4D: fstp    [esp+40h+var_24]
0x802C51: fmul    [esp+40h+var_8]
0x802C55: fstp    [esp+40h+var_20]
0x802C59: fld     [esp+40h+var_28]
0x802C5D: faddp   st(5), st
0x802C5F: fxch    st(4)
0x802C61: fstp    [esp+40h+var_1C]
0x802C65: mov     ebx, [esp+40h+var_1C]
0x802C69: fld     [esp+40h+var_24]
0x802C6D: faddp   st(2), st
0x802C6F: fxch    st(1)
0x802C71: fstp    [esp+40h+var_18]
0x802C75: mov     ebp, [esp+40h+var_18]
0x802C79: fld     [esp+40h+var_20]
0x802C7D: faddp   st(3), st
0x802C7F: fxch    st(2)
0x802C81: fstp    [esp+40h+var_14]
0x802C85: fld     [esp+40h+var_1C]
0x802C89: fsubp   st(3), st
0x802C8B: fxch    st(2)
0x802C8D: fstp    [esp+40h+var_10]
0x802C91: fld     [esp+40h+var_18]
0x802C95: fsubp   st(2), st
0x802C97: fxch    st(1)
0x802C99: fstp    [esp+40h+var_C]
0x802C9D: fsub    [esp+40h+var_14]
0x802CA1: fstp    [esp+40h+var_8]
0x802CA5: fld     [esp+40h+var_C]
0x802CA9: fld     [esp+40h+var_10]
0x802CAD: fld     [esp+40h+var_8]
0x802CB1: fld     st(1)
0x802CB3: fmulp   st(2), st
0x802CB5: fld     st(2)
0x802CB7: fmulp   st(3), st
0x802CB9: fxch    st(1)
0x802CBB: faddp   st(2), st
0x802CBD: fmul    st, st
0x802CBF: faddp   st(1), st
0x802CC1: fstp    [esp+40h+var_30]
0x802CC5: fld     [esp+40h+var_30]
0x802CC9: call    __CIsqrt
0x802CCE: fstp    [esp+40h+var_30]
0x802CD2: fld     [esp+40h+var_30]
0x802CD6: mov     eax, [esi]
0x802CD8: fadd    dword ptr [edi+28h]
0x802CDB: mov     edx, [eax+4]
0x802CDE: mov     ecx, esi
0x802CE0: fstp    [esp+40h+var_4]
0x802CE4: call    edx
0x802CE6: test    eax, eax
0x802CE8: jz      short loc_802CFE
0x802CEA: lea     ebx, [ebx+0]
0x802CF0: cmp     eax, offset unk_B47878
0x802CF5: jz      short loc_802D4B
0x802CF7: mov     eax, [eax+4]
0x802CFA: test    eax, eax
0x802CFC: jnz     short loc_802CF0
0x802CFE: xor     al, al
0x802D00: neg     al
0x802D02: sbb     eax, eax
0x802D04: and     eax, esi
0x802D06: mov     esi, eax
0x802D08: jz      short loc_802D4F
0x802D0A: mov     ecx, [esp+40h+var_14]
0x802D0E: mov     edx, [esi]
0x802D10: mov     edx, [edx+9Ch]
0x802D16: sub     esp, 10h
0x802D19: mov     eax, esp
0x802D1B: mov     [eax], ebx
0x802D1D: mov     [eax+4], ebp
0x802D20: mov     [eax+8], ecx
0x802D23: mov     ecx, [esp+50h+var_4]
0x802D27: mov     [eax+0Ch], ecx
0x802D2A: mov     ecx, esi
0x802D2C: call    edx
0x802D2E: mov     ecx, [esp+40h+var_2C]
0x802D32: movzx   edx, word ptr [ecx+0Eh]
0x802D36: mov     eax, [esi]
0x802D38: mov     eax, [eax+0A0h]
0x802D3E: push    edx
0x802D3F: mov     ecx, esi
0x802D41: call    eax
0x802D43: pop     edi
0x802D44: pop     esi
0x802D45: pop     ebp
0x802D46: pop     ebx
0x802D47: add     esp, 30h
0x802D4A: retn
0x802D4B: mov     al, 1
0x802D4D: jmp     short loc_802D00
0x802D4F: mov     edi, [esp+40h+var_2C]
0x802D53: mov     eax, [edi]
0x802D55: push    eax
0x802D56: push    offset unk_B4786C
0x802D5B: call    NiRTTI_Cast
0x802D60: mov     esi, eax
0x802D62: add     esp, 8
0x802D65: test    esi, esi
0x802D67: jz      short loc_802D9E
0x802D69: mov     ecx, [esp+40h+var_14]
0x802D6D: mov     edx, [esi]
0x802D6F: mov     edx, [edx+9Ch]
0x802D75: sub     esp, 10h
0x802D78: mov     eax, esp
0x802D7A: mov     [eax], ebx
0x802D7C: mov     [eax+4], ebp
0x802D7F: mov     [eax+8], ecx
0x802D82: mov     ecx, [esp+50h+var_4]
0x802D86: mov     [eax+0Ch], ecx
0x802D89: mov     ecx, esi
0x802D8B: call    edx
0x802D8D: movzx   ecx, word ptr [edi+0Eh]
0x802D91: mov     eax, [esi]
0x802D93: mov     edx, [eax+0A0h]
0x802D99: push    ecx
0x802D9A: mov     ecx, esi
0x802D9C: call    edx
0x802D9E: pop     edi
0x802D9F: pop     esi
0x802DA0: pop     ebp
0x802DA1: pop     ebx
0x802DA2: add     esp, 30h
0x802DA5: retn
