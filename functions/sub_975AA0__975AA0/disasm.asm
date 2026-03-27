0x975AA0: sub     esp, 1Ch
0x975AA3: push    ebx
0x975AA4: mov     ebx, [esp+20h+arg_0]
0x975AA8: fld     dword ptr [ebx]
0x975AAA: push    ebp
0x975AAB: mov     ebp, [esp+24h+arg_4]
0x975AAF: fsub    dword ptr [ebp+0]
0x975AB2: push    edi
0x975AB3: xor     ecx, ecx
0x975AB5: mov     edx, 1
0x975ABA: fstp    [esp+28h+var_C]
0x975ABE: fld     dword ptr [ebx+4]
0x975AC1: fsub    dword ptr [ebp+4]
0x975AC4: fstp    [esp+28h+var_8]
0x975AC8: fld     dword ptr [ebx+8]
0x975ACB: fsub    dword ptr [ebp+8]
0x975ACE: fstp    [esp+28h+var_4]
0x975AD2: fld     [esp+28h+var_8]
0x975AD6: fld     [esp+28h+var_C]
0x975ADA: fld     [esp+28h+var_4]
0x975ADE: fld     dword ptr [ebp+10h]
0x975AE1: fmul    st, st(3)
0x975AE3: fld     dword ptr [ebp+0Ch]
0x975AE6: fmul    st, st(3)
0x975AE8: faddp   st(1), st
0x975AEA: fld     dword ptr [ebp+14h]
0x975AED: fmul    st, st(2)
0x975AEF: faddp   st(1), st
0x975AF1: fstp    [esp+28h+var_18]
0x975AF5: fld     dword ptr [ebp+1Ch]
0x975AF8: fmul    st, st(3)
0x975AFA: fld     dword ptr [ebp+18h]
0x975AFD: fmul    st, st(3)
0x975AFF: faddp   st(1), st
0x975B01: fld     dword ptr [ebp+20h]
0x975B04: fmul    st, st(2)
0x975B06: faddp   st(1), st
0x975B08: fstp    [esp+28h+var_14]
0x975B0C: fld     dword ptr [ebp+28h]
0x975B0F: fmulp   st(3), st
0x975B11: fld     dword ptr [ebp+24h]
0x975B14: fmulp   st(2), st
0x975B16: fxch    st(2)
0x975B18: faddp   st(1), st
0x975B1A: fld     dword ptr [ebp+2Ch]
0x975B1D: fmulp   st(2), st
0x975B1F: faddp   st(1), st
0x975B21: fstp    [esp+28h+var_10]
0x975B25: fld     dword ptr [ebp+10h]
0x975B28: fmul    dword ptr [ebx+10h]
0x975B2B: fld     dword ptr [ebp+0Ch]
0x975B2E: fmul    dword ptr [ebx+0Ch]
0x975B31: faddp   st(1), st
0x975B33: fld     dword ptr [ebp+14h]
0x975B36: fmul    dword ptr [ebx+14h]
0x975B39: faddp   st(1), st
0x975B3B: fstp    [esp+28h+var_C]
0x975B3F: fld     dword ptr [ebp+1Ch]
0x975B42: fmul    dword ptr [ebx+10h]
0x975B45: fld     dword ptr [ebp+18h]
0x975B48: fmul    dword ptr [ebx+0Ch]
0x975B4B: faddp   st(1), st
0x975B4D: fld     dword ptr [ebp+20h]
0x975B50: fmul    dword ptr [ebx+14h]
0x975B53: faddp   st(1), st
0x975B55: fstp    [esp+28h+var_8]
0x975B59: fld     dword ptr [ebp+28h]
0x975B5C: fmul    dword ptr [ebx+10h]
0x975B5F: fld     dword ptr [ebp+24h]
0x975B62: fmul    dword ptr [ebx+0Ch]
0x975B65: faddp   st(1), st
0x975B67: fld     dword ptr [ebp+2Ch]
0x975B6A: fmul    dword ptr [ebx+14h]
0x975B6D: faddp   st(1), st
0x975B6F: fstp    [esp+28h+var_4]
0x975B73: fldz
0x975B75: fcom    [esp+ecx*4+28h+var_C]
0x975B79: fnstsw  ax
0x975B7B: test    ah, 41h
0x975B7E: jnz     short loc_975B9A
0x975B80: fld     [esp+ecx*4+28h+var_18]
0x975B84: mov     byte ptr [esp+ecx+28h+arg_4], dl
0x975B88: fchs
0x975B8A: fstp    [esp+ecx*4+28h+var_18]
0x975B8E: fld     [esp+ecx*4+28h+var_C]
0x975B92: fchs
0x975B94: fstp    [esp+ecx*4+28h+var_C]
0x975B98: jmp     short loc_975B9F
0x975B9A: mov     byte ptr [esp+ecx+28h+arg_4], 0
0x975B9F: add     ecx, edx
0x975BA1: cmp     ecx, 3
0x975BA4: jl      short loc_975B75
0x975BA6: mov     edi, [esp+28h+arg_8]
0x975BAA: fst     [esp+28h+var_1C]
0x975BAE: fst     dword ptr [edi]
0x975BB0: push    esi
0x975BB1: fcom    [esp+2Ch+var_C]
0x975BB5: fnstsw  ax
0x975BB7: fcom    [esp+2Ch+var_8]
0x975BBB: test    ah, 5
0x975BBE: fnstsw  ax
0x975BC0: fcomp   [esp+2Ch+var_4]
0x975BC4: jp      loc_975C59
0x975BCA: test    ah, 5
0x975BCD: fnstsw  ax
0x975BCF: jp      short loc_975C1B
0x975BD1: test    ah, 5
0x975BD4: jp      short loc_975BF5
0x975BD6: lea     eax, [esp+2Ch+var_C]
0x975BDA: push    eax
0x975BDB: lea     ecx, [esp+30h+var_18]
0x975BDF: push    ecx
0x975BE0: lea     edx, [esp+34h+var_1C]
0x975BE4: mov     eax, edi
0x975BE6: mov     ecx, ebp
0x975BE8: call    sub_975580
0x975BED: add     esp, 8
0x975BF0: jmp     loc_975CD2
0x975BF5: lea     eax, [esp+2Ch+var_1C]
0x975BF9: push    eax
0x975BFA: push    edi
0x975BFB: push    2
0x975BFD: mov     ecx, edx
0x975BFF: push    ebp
0x975C00: lea     esi, [esp+3Ch+var_C]
0x975C04: lea     edi, [esp+3Ch+var_18]
0x975C08: xor     edx, edx
0x975C0A: call    sub_975690
0x975C0F: mov     edi, [esp+3Ch+arg_8]
0x975C13: add     esp, 10h
0x975C16: jmp     loc_975CD2
0x975C1B: test    ah, 5
0x975C1E: jp      short loc_975C48
0x975C20: lea     ecx, [esp+2Ch+var_1C]
0x975C24: push    ecx
0x975C25: push    edi
0x975C26: push    edx
0x975C27: push    ebp
0x975C28: lea     esi, [esp+3Ch+var_C]
0x975C2C: lea     edi, [esp+3Ch+var_18]
0x975C30: mov     ecx, 2
0x975C35: xor     edx, edx
0x975C37: call    sub_975690
0x975C3C: mov     edi, [esp+3Ch+arg_8]
0x975C40: add     esp, 10h
0x975C43: jmp     loc_975CD2
0x975C48: push    edi
0x975C49: lea     eax, [esp+30h+var_C]
0x975C4D: push    eax
0x975C4E: push    0
0x975C50: mov     edi, 2
0x975C55: mov     esi, edx
0x975C57: jmp     short loc_975CA8
0x975C59: test    ah, 5
0x975C5C: fnstsw  ax
0x975C5E: jp      short loc_975C97
0x975C60: test    ah, 5
0x975C63: jp      short loc_975C89
0x975C65: lea     ecx, [esp+2Ch+var_1C]
0x975C69: push    ecx
0x975C6A: push    edi
0x975C6B: push    0
0x975C6D: push    ebp
0x975C6E: lea     esi, [esp+3Ch+var_C]
0x975C72: lea     edi, [esp+3Ch+var_18]
0x975C76: mov     ecx, 2
0x975C7B: call    sub_975690
0x975C80: mov     edi, [esp+3Ch+arg_8]
0x975C84: add     esp, 10h
0x975C87: jmp     short loc_975CD2
0x975C89: push    edi
0x975C8A: lea     eax, [esp+30h+var_C]
0x975C8E: push    eax
0x975C8F: push    edx
0x975C90: mov     edi, 2
0x975C95: jmp     short loc_975CA6
0x975C97: test    ah, 5
0x975C9A: jp      short loc_975CC3
0x975C9C: push    edi
0x975C9D: lea     ecx, [esp+30h+var_C]
0x975CA1: push    ecx
0x975CA2: push    2
0x975CA4: mov     edi, edx
0x975CA6: xor     esi, esi
0x975CA8: push    ebp
0x975CA9: lea     ebx, [esp+3Ch+var_1C]
0x975CAD: lea     ecx, [esp+3Ch+var_18]
0x975CB1: call    sub_9758C0
0x975CB6: mov     ebx, [esp+3Ch+arg_0]
0x975CBA: mov     edi, [esp+3Ch+arg_8]
0x975CBE: add     esp, 10h
0x975CC1: jmp     short loc_975CD2
0x975CC3: lea     esi, [esp+2Ch+var_1C]
0x975CC7: lea     ecx, [esp+2Ch+var_18]
0x975CCB: mov     edx, ebp
0x975CCD: call    sub_9759A0
0x975CD2: fld     dword ptr [edi]
0x975CD4: pop     esi
0x975CD5: fcomp   qword ptr ds:0A2FC68h
0x975CDB: fnstsw  ax
0x975CDD: test    ah, 1
0x975CE0: jnz     loc_975D84
0x975CE6: fld1
0x975CE8: fcom    dword ptr [edi]
0x975CEA: fnstsw  ax
0x975CEC: test    ah, 1
0x975CEF: jnz     short loc_975D4E
0x975CF1: cmp     byte ptr [esp+28h+arg_4], 0
0x975CF6: fstp    st
0x975CF8: jz      short loc_975D04
0x975CFA: fld     [esp+28h+var_18]
0x975CFE: fchs
0x975D00: fstp    [esp+28h+var_18]
0x975D04: cmp     byte ptr [esp+28h+arg_4+1], 0
0x975D09: jz      short loc_975D15
0x975D0B: fld     [esp+28h+var_14]
0x975D0F: fchs
0x975D11: fstp    [esp+28h+var_14]
0x975D15: cmp     byte ptr [esp+28h+arg_4+2], 0
0x975D1A: jz      short loc_975D26
0x975D1C: fld     [esp+28h+var_10]
0x975D20: fchs
0x975D22: fstp    [esp+28h+var_10]
0x975D26: fld     [esp+28h+var_18]
0x975D2A: mov     edx, [esp+28h+arg_C]
0x975D2E: mov     eax, [esp+28h+arg_10]
0x975D32: fstp    dword ptr [edx]
0x975D34: fld     [esp+28h+var_14]
0x975D38: mov     ecx, [esp+28h+arg_14]
0x975D3C: fstp    dword ptr [eax]
0x975D3E: pop     edi
0x975D3F: fld     [esp+24h+var_10]
0x975D43: pop     ebp
0x975D44: fstp    dword ptr [ecx]
0x975D46: pop     ebx
0x975D47: fld     [esp+1Ch+var_1C]
0x975D4A: add     esp, 1Ch
0x975D4D: retn
0x975D4E: mov     edx, [esp+28h+arg_14]
0x975D52: fstp    dword ptr [edi]
0x975D54: fld     dword ptr [ebx]
0x975D56: mov     eax, [esp+28h+arg_10]
0x975D5A: fadd    dword ptr [ebx+0Ch]
0x975D5D: mov     ecx, [esp+28h+arg_C]
0x975D61: push    edx
0x975D62: push    eax
0x975D63: fstp    [esp+30h+var_C]
0x975D67: push    ecx
0x975D68: fld     dword ptr [ebx+10h]
0x975D6B: push    ebp
0x975D6C: fadd    dword ptr [ebx+4]
0x975D6F: lea     edx, [esp+38h+var_C]
0x975D73: push    edx
0x975D74: fstp    [esp+3Ch+var_8]
0x975D78: fld     dword ptr [ebx+14h]
0x975D7B: fadd    dword ptr [ebx+8]
0x975D7E: fstp    [esp+3Ch+var_4]
0x975D82: jmp     short loc_975D99
0x975D84: mov     eax, [esp+28h+arg_14]
0x975D88: fldz
0x975D8A: mov     ecx, [esp+28h+arg_10]
0x975D8E: fstp    dword ptr [edi]
0x975D90: mov     edx, [esp+28h+arg_C]
0x975D94: push    eax
0x975D95: push    ecx
0x975D96: push    edx
0x975D97: push    ebp
0x975D98: push    ebx
0x975D99: call    sub_974C80
0x975D9E: fstp    [esp+3Ch+var_1C]
0x975DA2: fld     [esp+3Ch+var_1C]
0x975DA6: add     esp, 14h
0x975DA9: pop     edi
0x975DAA: pop     ebp
0x975DAB: pop     ebx
0x975DAC: add     esp, 1Ch
0x975DAF: retn
