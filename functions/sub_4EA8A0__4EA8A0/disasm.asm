0x4EA8A0: push    ebp
0x4EA8A1: mov     ebp, esp
0x4EA8A3: and     esp, 0FFFFFFF8h
0x4EA8A6: push    0FFFFFFFFh
0x4EA8A8: push    offset SEH_4EA8A0
0x4EA8AD: mov     eax, large fs:0
0x4EA8B3: push    eax
0x4EA8B4: sub     esp, 0E8h
0x4EA8BA: push    ebx
0x4EA8BB: push    esi
0x4EA8BC: push    edi
0x4EA8BD: mov     eax, ds:0B30AACh
0x4EA8C2: xor     eax, esp
0x4EA8C4: push    eax
0x4EA8C5: lea     eax, [esp+104h+var_C]
0x4EA8CC: mov     large fs:0, eax
0x4EA8D2: xor     edi, edi
0x4EA8D4: mov     [esp+104h+var_6C], edi
0x4EA8DB: movzx   eax, [ebp+arg_44]
0x4EA8DF: mov     [esp+104h+var_F0], eax
0x4EA8E3: mov     [esp+104h+var_4], edi
0x4EA8EA: fild    [esp+104h+var_F0]
0x4EA8EE: fmul    qword ptr ds:0A31C78h
0x4EA8F4: fstp    [esp+104h+var_F0]
0x4EA8F8: fld     [esp+104h+var_F0]
0x4EA8FC: call    __CIcos
0x4EA901: fstp    [esp+104h+var_F0]
0x4EA905: movzx   ecx, [ebp+arg_48]
0x4EA909: fld     [esp+104h+var_F0]
0x4EA90D: fstp    [esp+104h+var_80]
0x4EA914: mov     [esp+104h+var_F0], ecx
0x4EA918: fild    [esp+104h+var_F0]
0x4EA91C: fmul    qword ptr ds:0A31C78h
0x4EA922: fstp    [esp+104h+var_F0]
0x4EA926: fld     [esp+104h+var_F0]
0x4EA92A: call    __CIcos
0x4EA92F: fstp    [esp+104h+var_F0]
0x4EA933: mov     esi, [ebp+arg_C]
0x4EA936: fld     [esp+104h+var_F0]
0x4EA93A: cmp     esi, edi
0x4EA93C: fstp    [esp+104h+var_70]
0x4EA943: jnz     short loc_4EA95C
0x4EA945: push    523h
0x4EA94A: push    offset a__TesSharedT_0; "..\\TES Shared\\TESTerrainLODManager.cp"...
0x4EA94F: push    offset aTesterrainlodm; "TESTerrainLODManager::CreateGrass - NUL"...
0x4EA954: call    nullsub_return0_0arg
0x4EA959: add     esp, 0Ch
0x4EA95C: mov     ecx, esi
0x4EA95E: call    sub_4BF150
0x4EA963: test    al, al
0x4EA965: jz      loc_4EB0AE
0x4EA96B: mov     ecx, ds:0B35BF0h
0x4EA971: fnstcw  word ptr [esp+104h+var_EC]
0x4EA975: mov     ebx, [ebp+arg_28]
0x4EA978: shl     ecx, 8
0x4EA97B: mov     [esp+104h+var_F0], ecx
0x4EA97F: fild    [esp+104h+var_F0]
0x4EA983: movzx   eax, word ptr [esp+104h+var_EC]
0x4EA988: or      eax, 0C00h
0x4EA98D: mov     edi, [ebp+arg_2C]
0x4EA990: fstp    [esp+104h+var_F0]
0x4EA994: fld     [esp+104h+var_F0]
0x4EA998: mov     [esp+104h+var_F0], eax
0x4EA99C: fld     st
0x4EA99E: mov     eax, ecx
0x4EA9A0: fdiv    dword ptr [ebx+8]
0x4EA9A3: fldcw   word ptr [esp+104h+var_F0]
0x4EA9A7: fistp   [esp+104h+var_F0]
0x4EA9AB: mov     dx, word ptr [esp+104h+var_F0]
0x4EA9B0: movzx   esi, dx
0x4EA9B3: cdq
0x4EA9B4: fldcw   word ptr [esp+104h+var_EC]
0x4EA9B8: idiv    dword ptr ds:0B09B20h
0x4EA9BE: movzx   ecx, si
0x4EA9C1: mov     [esp+104h+var_BC], ecx
0x4EA9C5: cmp     ecx, eax
0x4EA9C7: mov     [esp+104h+var_F0], eax
0x4EA9CB: jle     short loc_4EA9F5
0x4EA9CD: fild    [esp+104h+var_F0]
0x4EA9D1: xor     ecx, ecx
0x4EA9D3: fidiv   [esp+104h+var_BC]
0x4EA9D7: fstp    [esp+104h+var_F0]
0x4EA9DB: fld     [esp+104h+var_F0]
0x4EA9DF: fld     dword ptr [edi+ecx*4]
0x4EA9E2: add     ecx, 1
0x4EA9E5: cmp     ecx, 9
0x4EA9E8: fdiv    st, st(1)
0x4EA9EA: fstp    dword ptr [edi+ecx*4-4]
0x4EA9EE: jl      short loc_4EA9DF
0x4EA9F0: fstp    st
0x4EA9F2: movzx   esi, ax
0x4EA9F5: movzx   ecx, si
0x4EA9F8: mov     [esp+104h+var_BC], ecx
0x4EA9FC: mov     eax, [ebp+arg_14]
0x4EA9FF: xor     edx, edx
0x4EAA01: cmp     ecx, edx
0x4EAA03: fild    [esp+104h+var_BC]
0x4EAA07: fld     qword ptr ds:0A30E48h
0x4EAA0D: mov     [esp+104h+var_AC], edx
0x4EAA11: mov     [esp+104h+var_B8], edx
0x4EAA15: fdiv    st, st(1)
0x4EAA17: fstp    [esp+104h+var_F0]
0x4EAA1B: fdivp   st(1), st
0x4EAA1D: fstp    [esp+104h+var_A4]
0x4EAA21: fld     dword ptr [eax+8]
0x4EAA24: fstp    [esp+104h+var_CC]
0x4EAA28: jle     loc_4EB0AE
0x4EAA2E: jmp     short loc_4EAA36
0x4EAA30: mov     ebx, [ebp+arg_28]
0x4EAA33: mov     eax, [ebp+arg_14]
0x4EAA36: fild    [esp+104h+var_B8]
0x4EAA3A: mov     [esp+104h+var_B4], 0
0x4EAA42: fstp    [esp+104h+var_DC]
0x4EAA46: fld     [esp+104h+var_DC]
0x4EAA4A: fld     st
0x4EAA4C: fmul    [esp+104h+var_A4]
0x4EAA50: fstp    [esp+104h+var_68]
0x4EAA57: fmul    [esp+104h+var_F0]
0x4EAA5B: fstp    [esp+104h+var_84]
0x4EAA62: jmp     short loc_4EAA6A
0x4EAA64: mov     ebx, [ebp+arg_28]
0x4EAA67: mov     eax, [ebp+arg_14]
0x4EAA6A: fld     dword ptr [eax]
0x4EAA6C: fadd    [esp+104h+var_68]
0x4EAA73: fstp    [esp+104h+a2]
0x4EAA77: fild    [esp+104h+var_B4]
0x4EAA7B: fstp    [esp+104h+var_DC]
0x4EAA7F: fld     [esp+104h+var_DC]
0x4EAA83: fld     st
0x4EAA85: fmul    [esp+104h+var_A4]
0x4EAA89: fadd    dword ptr [eax+4]
0x4EAA8C: fstp    [esp+104h+var_D0]
0x4EAA90: fmul    [esp+104h+var_F0]
0x4EAA94: fstp    [esp+104h+a3]
0x4EAA98: fld     [esp+104h+var_84]
0x4EAA9F: fstp    [esp+104h+var_EC]
0x4EAAA3: fld     [esp+104h+var_EC]
0x4EAAA7: fistp   [esp+104h+var_A8]; int
0x4EAAAB: fld     [esp+104h+a3]
0x4EAAAF: fistp   [esp+104h+var_B0]; int
0x4EAAB3: fld     [esp+104h+var_EC]
0x4EAAB7: fisub   [esp+104h+var_A8]
0x4EAABB: mov     esi, [esp+104h+var_B0]
0x4EAABF: mov     edx, [esp+104h+var_A8]
0x4EAAC3: lea     eax, [edx+esi*2]
0x4EAAC6: lea     ecx, [esi+eax]
0x4EAAC9: fstp    [esp+104h+var_EC]
0x4EAACD: fld     [esp+104h+a3]
0x4EAAD1: fisub   [esp+104h+var_B0]
0x4EAAD5: fstp    [esp+104h+a3]
0x4EAAD9: fld     dword ptr [edi+ecx*4]
0x4EAADC: fstp    dword ptr [esp+104h+var_E8]
0x4EAAE0: fld     [esp+104h+var_EC]
0x4EAAE4: fld     qword ptr ds:0A3D8E8h
0x4EAAEA: fcom    st(1)
0x4EAAEC: fnstsw  ax
0x4EAAEE: fld     [esp+104h+a3]
0x4EAAF2: test    ah, 5
0x4EAAF5: jp      short loc_4EAB3C
0x4EAAF7: cmp     edx, 2
0x4EAAFA: jge     short loc_4EAB02
0x4EAAFC: fld     dword ptr [edi+ecx*4+4]
0x4EAB00: jmp     short loc_4EAB05
0x4EAB02: fld     dword ptr [edi+ecx*4]
0x4EAB05: fstp    [esp+104h+a3]
0x4EAB09: fcom    st(1)
0x4EAB0B: fnstsw  ax
0x4EAB0D: test    ah, 41h
0x4EAB10: jnz     short loc_4EAB38
0x4EAB12: cmp     esi, 2
0x4EAB15: jge     short loc_4EAB28
0x4EAB17: cmp     edx, 2
0x4EAB1A: jge     short loc_4EAB22
0x4EAB1C: fld     dword ptr [edi+ecx*4+10h]
0x4EAB20: jmp     short loc_4EAB42
0x4EAB22: fld     dword ptr [edi+ecx*4+0Ch]
0x4EAB26: jmp     short loc_4EAB42
0x4EAB28: cmp     edx, 2
0x4EAB2B: jge     short loc_4EAB33
0x4EAB2D: fld     dword ptr [edi+ecx*4+4]
0x4EAB31: jmp     short loc_4EAB42
0x4EAB33: fld     dword ptr [edi+ecx*4]
0x4EAB36: jmp     short loc_4EAB42
0x4EAB38: fldz
0x4EAB3A: jmp     short loc_4EAB42
0x4EAB3C: fldz
0x4EAB3E: fst     [esp+104h+a3]
0x4EAB42: fstp    [esp+104h+var_EC]; float
0x4EAB46: fcom    st(1)
0x4EAB48: fnstsw  ax
0x4EAB4A: fstp    st(1)
0x4EAB4C: test    ah, 41h
0x4EAB4F: jnz     short loc_4EAB61
0x4EAB51: cmp     esi, 2
0x4EAB54: jge     short loc_4EAB5C
0x4EAB56: fld     dword ptr [edi+ecx*4+0Ch]
0x4EAB5A: jmp     short loc_4EAB63
0x4EAB5C: fld     dword ptr [edi+ecx*4]
0x4EAB5F: jmp     short loc_4EAB63
0x4EAB61: fldz
0x4EAB63: fstp    [esp+104h+var_DC]
0x4EAB67: fld     st(1)
0x4EAB69: fld1
0x4EAB6B: fld     st
0x4EAB6D: fsubrp  st(2), st
0x4EAB6F: fld     [esp+104h+a3]
0x4EAB73: fmul    st, st(4)
0x4EAB75: fld     dword ptr [esp+104h+var_E8]
0x4EAB79: fmul    st, st(3)
0x4EAB7B: faddp   st(1), st
0x4EAB7D: fld     st(3)
0x4EAB7F: fsubp   st(2), st
0x4EAB81: fmulp   st(1), st
0x4EAB83: fld     [esp+104h+var_EC]
0x4EAB87: fmulp   st(4), st
0x4EAB89: fld     [esp+104h+var_DC]
0x4EAB8D: fmulp   st(2), st
0x4EAB8F: fxch    st(3)
0x4EAB91: fnstcw  word ptr [esp+104h+var_EC]
0x4EAB95: movzx   eax, word ptr [esp+104h+var_EC]
0x4EAB9A: faddp   st(1), st
0x4EAB9C: or      eax, 0C00h
0x4EABA1: fmulp   st(1), st
0x4EABA3: faddp   st(1), st
0x4EABA5: fstp    dword ptr [esp+104h+var_E8]
0x4EABA9: fld     dword ptr [esp+104h+var_E8]
0x4EABAD: mov     dword ptr [esp+104h+var_E8], eax
0x4EABB1: fmul    qword ptr ds:0A47A50h
0x4EABB7: fldcw   word ptr [esp+104h+var_E8]
0x4EABBB: fistp   [esp+104h+var_E8]
0x4EABBF: mov     esi, dword ptr [esp+104h+var_E8]
0x4EABC3: test    esi, esi
0x4EABC5: fldcw   word ptr [esp+104h+var_EC]
0x4EABC9: jz      loc_4EB051
0x4EABCF: push    7FFFh
0x4EABD4: call    Rand3
0x4EABD9: add     esp, 4
0x4EABDC: cmp     eax, esi
0x4EABDE: jge     loc_4EB051
0x4EABE4: fldz
0x4EABE6: fstp    [esp+104h+a3]; int
0x4EABEA: call    Rand7
0x4EABEF: fstp    [esp+104h+var_DC]
0x4EABF3: fld     [esp+104h+var_DC]
0x4EABF7: fmul    dword ptr [ebx+8]
0x4EABFA: fadd    [esp+104h+a2]
0x4EABFE: fstp    [esp+104h+a2]
0x4EAC02: call    Rand7
0x4EAC07: fstp    [esp+104h+var_DC]; float
0x4EAC0B: fld     [esp+104h+var_DC]
0x4EAC0F: fmul    dword ptr [ebx+8]
0x4EAC12: fadd    [esp+104h+var_D0]
0x4EAC16: fstp    [esp+104h+var_D0]
0x4EAC1A: fld     [esp+104h+a2]
0x4EAC1E: fld     st
0x4EAC20: call    Double_To_SInt32
0x4EAC25: mov     dword ptr [esp+104h+var_E8], eax
0x4EAC29: fild    dword ptr [esp+104h+var_E8]
0x4EAC2D: fstp    dword ptr [esp+104h+var_E8]
0x4EAC31: fld     dword ptr [esp+104h+var_E8]
0x4EAC35: fld     st
0x4EAC37: fsubp   st(2), st
0x4EAC39: fldz
0x4EAC3B: fcom    st(2)
0x4EAC3D: fnstsw  ax
0x4EAC3F: fstp    st(2)
0x4EAC41: test    ah, 41h
0x4EAC44: jnp     short loc_4EAC4C
0x4EAC46: fsub    qword ptr ds:0A2F928h
0x4EAC4C: fstp    [esp+104h+a2]; float
0x4EAC50: fld     [esp+104h+var_D0]
0x4EAC54: fld     st
0x4EAC56: call    Double_To_SInt32
0x4EAC5B: mov     dword ptr [esp+104h+var_E8], eax
0x4EAC5F: fild    dword ptr [esp+104h+var_E8]
0x4EAC63: fstp    dword ptr [esp+104h+var_E8]; int
0x4EAC67: fld     dword ptr [esp+104h+var_E8]
0x4EAC6B: fld     st
0x4EAC6D: fsubp   st(2), st
0x4EAC6F: fxch    st(1)
0x4EAC71: fcomp   st(2)
0x4EAC73: fnstsw  ax
0x4EAC75: fstp    st(1)
0x4EAC77: test    ah, 1
0x4EAC7A: jz      short loc_4EAC82
0x4EAC7C: fsub    qword ptr ds:0A2F928h
0x4EAC82: push    0
0x4EAC84: fstp    [esp+108h+var_D0]; float
0x4EAC88: fldz
0x4EAC8A: lea     ecx, [esp+108h+a2]
0x4EAC8E: push    ecx
0x4EAC8F: fstp    [esp+10Ch+var_CC]; float
0x4EAC93: mov     ecx, [ebp+arg_C]
0x4EAC96: lea     edx, [esp+10Ch+var_60]
0x4EAC9D: push    edx
0x4EAC9E: call    sub_4C3030
0x4EACA3: mov     bl, al
0x4EACA5: lea     eax, [esp+104h+a3]
0x4EACA9: push    eax; a3
0x4EACAA: lea     ecx, [esp+108h+a2]
0x4EACAE: push    ecx; a2
0x4EACAF: mov     ecx, ds:0B333A0h; this
0x4EACB5: call    GetTerrainHeight
0x4EACBA: fld     [esp+104h+a3]
0x4EACBE: mov     eax, [ebp+arg_3C]
0x4EACC1: cmp     eax, 5; switch 6 cases
0x4EACC4: ja      def_4EACCA
0x4EACCA: jmp     ds:jpt_4EACCA[eax*4]; switch jump
0x4EACD1: movzx   edx, [ebp+arg_38]; jumptable 004EACCA case 0
0x4EACD5: fld     [ebp+arg_40]
0x4EACD8: mov     dword ptr [esp+104h+var_E8], edx; int
0x4EACDC: fild    dword ptr [esp+104h+var_E8]
0x4EACE0: fsubp   st(1), st
0x4EACE2: fcomp   st(1)
0x4EACE4: fnstsw  ax
0x4EACE6: test    ah, 41h
0x4EACE9: jz      loc_4EB04F
0x4EACEF: jmp     def_4EACCA
0x4EACF4: fld     [ebp+arg_40]; jumptable 004EACCA case 1
0x4EACF7: fcom    st(1)
0x4EACF9: fnstsw  ax
0x4EACFB: test    ah, 41h
0x4EACFE: jz      loc_4EB04D
0x4EAD04: movzx   eax, [ebp+arg_38]
0x4EAD08: mov     dword ptr [esp+104h+var_E8], eax; int
0x4EAD0C: fild    dword ptr [esp+104h+var_E8]
0x4EAD10: faddp   st(1), st
0x4EAD12: fcomp   st(1)
0x4EAD14: fnstsw  ax
0x4EAD16: test    ah, 5
0x4EAD19: jp      def_4EACCA
0x4EAD1F: jmp     loc_4EB04F
0x4EAD24: movzx   ecx, [ebp+arg_38]; jumptable 004EACCA case 2
0x4EAD28: fld     [ebp+arg_40]
0x4EAD2B: mov     dword ptr [esp+104h+var_E8], ecx; int
0x4EAD2F: fild    dword ptr [esp+104h+var_E8]
0x4EAD33: fsubp   st(1), st
0x4EAD35: fcomp   st(1)
0x4EAD37: fnstsw  ax
0x4EAD39: test    ah, 5
0x4EAD3C: jnp     loc_4EB04F
0x4EAD42: jmp     def_4EACCA
0x4EAD47: fld     [ebp+arg_40]; jumptable 004EACCA case 3
0x4EAD4A: fcom    st(1)
0x4EAD4C: fnstsw  ax
0x4EAD4E: test    ah, 5
0x4EAD51: jnp     loc_4EB04D
0x4EAD57: movzx   edx, [ebp+arg_38]
0x4EAD5B: mov     dword ptr [esp+104h+var_E8], edx; int
0x4EAD5F: fild    dword ptr [esp+104h+var_E8]
0x4EAD63: fsubp   st(1), st
0x4EAD65: fcomp   st(1)
0x4EAD67: fnstsw  ax
0x4EAD69: test    ah, 41h
0x4EAD6C: jnz     short def_4EACCA
0x4EAD6E: jmp     loc_4EB04F
0x4EAD73: movzx   eax, [ebp+arg_38]; jumptable 004EACCA case 4
0x4EAD77: mov     dword ptr [esp+104h+var_E8], eax; int
0x4EAD7B: fild    dword ptr [esp+104h+var_E8]
0x4EAD7F: fld     [ebp+arg_40]
0x4EAD82: fld     st
0x4EAD84: fadd    st, st(2)
0x4EAD86: fcomp   st(3)
0x4EAD88: fnstsw  ax
0x4EAD8A: test    ah, 41h
0x4EAD8D: jnz     short loc_4EADD1
0x4EAD8F: fsubrp  st(1), st
0x4EAD91: fcomp   st(1)
0x4EAD93: fnstsw  ax
0x4EAD95: test    ah, 5
0x4EAD98: jnp     loc_4EB04F
0x4EAD9E: jmp     short def_4EACCA
0x4EADA0: movzx   ecx, [ebp+arg_38]; jumptable 004EACCA case 5
0x4EADA4: mov     dword ptr [esp+104h+var_E8], ecx; int
0x4EADA8: fild    dword ptr [esp+104h+var_E8]
0x4EADAC: fld     [ebp+arg_40]
0x4EADAF: fld     st
0x4EADB1: fadd    st, st(2)
0x4EADB3: fcomp   st(3)
0x4EADB5: fnstsw  ax
0x4EADB7: test    ah, 5
0x4EADBA: jnp     loc_4EB04B
0x4EADC0: fsubrp  st(1), st
0x4EADC2: fcomp   st(1)
0x4EADC4: fnstsw  ax
0x4EADC6: test    ah, 41h
0x4EADC9: jz      loc_4EB04F
0x4EADCF: jmp     short def_4EACCA
0x4EADD1: fstp    st(1)
0x4EADD3: fstp    st
