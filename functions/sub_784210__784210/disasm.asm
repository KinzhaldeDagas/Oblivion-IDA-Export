0x784210: push    0FFFFFFFFh; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x784212: push    offset SEH_784210
0x784217: mov     eax, large fs:0
0x78421D: push    eax
0x78421E: push    ecx
0x78421F: push    ebx
0x784220: push    ebp
0x784221: push    esi
0x784222: push    edi
0x784223: mov     eax, ds:0B30AACh
0x784228: xor     eax, esp
0x78422A: push    eax
0x78422B: lea     eax, [esp+24h+var_C]
0x78422F: mov     large fs:0, eax
0x784235: mov     edi, ecx
0x784237: fldz
0x784239: mov     eax, [edi+40h]
0x78423C: test    eax, eax
0x78423E: fstp    [esp+24h+var_10]
0x784242: lea     esi, [edi+3Ch]
0x784245: jz      loc_78434E
0x78424B: mov     ecx, [esi+8]
0x78424E: sub     ecx, eax
0x784250: mov     eax, 2AAAAAABh
0x784255: imul    ecx
0x784257: sar     edx, 2
0x78425A: mov     eax, edx
0x78425C: shr     eax, 1Fh
0x78425F: add     eax, edx
0x784261: cmp     eax, 1F4h
0x784266: jnz     loc_78434E
0x78426C: fld     [esp+24h+percent]
0x784270: fld     qword ptr ds:0A8BA00h
0x784276: fmul    st, st(1)
0x784278: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x78427D: mov     ebx, eax
0x78427F: cmp     ebx, 1F3h
0x784285: mov     [esp+24h+percent], ebx
0x784289: mov     ecx, esi; this
0x78428B: jnz     short loc_78429A
0x78428D: push    eax; index
0x78428E: fstp    st
0x784290: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x784295: fld     dword ptr [eax+4]
0x784298: jmp     short loc_7842DD
0x78429A: fild    [esp+24h+percent]
0x78429E: lea     eax, [ebx+1]
0x7842A1: fld     qword ptr ds:0A8B9F8h
0x7842A7: push    eax; index
0x7842A8: fmul    st(1), st
0x7842AA: fxch    st(2)
0x7842AC: fsubrp  st(1), st
0x7842AE: fdivrp  st(1), st
0x7842B0: fstp    [esp+28h+var_10]
0x7842B4: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x7842B9: push    ebx; index
0x7842BA: mov     ecx, esi; this
0x7842BC: mov     ebp, eax
0x7842BE: call    OB_stVector_stVec_At_010201A0; Oblivion checked accessor for the compact 16-byte vector of 0x18-byte stVec elements. Validates index against (end-begin)/0x18 and returns begin + index*0x18.
0x7842C3: fld     dword ptr [eax+4]
0x7842C6: fstp    [esp+24h+percent]
0x7842CA: fld     dword ptr [ebp+4]
0x7842CD: fld     [esp+24h+percent]
0x7842D1: fld     st
0x7842D3: fsubp   st(2), st
0x7842D5: fld     [esp+24h+var_10]
0x7842D9: fmulp   st(2), st
0x7842DB: faddp   st(1), st
0x7842DD: fstp    [esp+24h+var_10]
0x7842E1: mov     eax, 1
0x7842E6: test    ds:0B42960h, al
0x7842EC: fld     dword ptr [edi+4]
0x7842EF: fsub    dword ptr [edi]
0x7842F1: fmul    [esp+24h+var_10]
0x7842F5: fadd    dword ptr [edi]
0x7842F7: fstp    [esp+24h+var_10]
0x7842FB: jnz     short loc_78432A
0x7842FD: or      ds:0B42960h, eax
0x784303: mov     ecx, offset stru_B4295D; this
0x784308: mov     [esp+24h+var_4], 0
0x784310: call    OB_stRandom_ctor_010201A0; Oblivion stRandom constructor. The class has no per-instance generator state; if the shared SIdvRandomImpl state is not initialized, it invokes Reseed(-1).
0x784315: push    offset sub_A26E10; void (__cdecl *)()
0x78431A: call    _atexit
0x78431F: add     esp, 4
0x784322: mov     [esp+24h+var_4], 0FFFFFFFFh
0x78432A: fld     dword ptr [edi+8]
0x78432D: sub     esp, 8
0x784330: fstp    [esp+2Ch+maxValue]; maxValue
0x784334: mov     ecx, offset stru_B4295D; this
0x784339: fld     dword ptr [edi+8]
0x78433C: fchs
0x78433E: fstp    [esp+2Ch+minValue]; minValue
0x784341: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x784346: fadd    [esp+24h+var_10]
0x78434A: fstp    [esp+24h+var_10]
0x78434E: fld     [esp+24h+var_10]
0x784352: mov     ecx, [esp+24h+var_C]
0x784356: mov     large fs:0, ecx
0x78435D: pop     ecx
0x78435E: pop     edi
0x78435F: pop     esi
0x784360: pop     ebp
0x784361: pop     ebx
0x784362: add     esp, 10h
0x784365: retn    4
0x9CAEB0: mov     eax, dword ptr unk_B42960
0x9CAEB5: and     eax, 0FFFFFFFEh
0x9CAEB8: mov     dword ptr unk_B42960, eax
0x9CAEBD: retn
0x9CAEBE: mov     edx, [esp+arg_4]
0x9CAEC2: lea     eax, [edx-14h]
0x9CAEC5: mov     ecx, [edx-18h]
0x9CAEC8: xor     ecx, eax
0x9CAECA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CAECF: mov     eax, offset stru_AF34E4
0x9CAED4: jmp     ___CxxFrameHandler3
