0x8B08F0: push    ebp
0x8B08F1: mov     ebp, esp
0x8B08F3: and     esp, 0FFFFFFF0h
0x8B08F6: sub     esp, 64h
0x8B08F9: mov     eax, ds:0B30AACh
0x8B08FE: xor     eax, esp
0x8B0900: mov     [esp+64h+var_4], eax
0x8B0904: fldz
0x8B0906: mov     eax, [ebp+arg_0]
0x8B0909: fst     dword ptr [esp+64h+var_40]
0x8B090D: push    ebx
0x8B090E: fld1
0x8B0910: push    esi
0x8B0911: fstp    dword ptr [esp+6Ch+var_40+4]
0x8B0915: mov     esi, ecx
0x8B0917: mov     ecx, [eax]
0x8B0919: mov     eax, [eax+4]
0x8B091C: sub     eax, 1
0x8B091F: fstp    dword ptr [esp+6Ch+var_40+8]
0x8B0923: push    edi
0x8B0924: fld     dword ptr ds:0A97D8Ch
0x8B092A: mov     edi, [ebp+arg_4]
0x8B092D: fstp    dword ptr [esp+70h+var_40+0Ch]
0x8B0931: mov     [esp+70h+var_58], ecx
0x8B0935: mov     [esp+70h+var_48], eax
0x8B0939: js      loc_8B0B36
0x8B093F: nop
0x8B0940: movaps  xmm0, [esp+70h+var_40]
0x8B0945: mov     edx, [esp+70h+var_58]
0x8B0949: movaps  xmmword ptr [edi], xmm0
0x8B094C: movaps  xmm1, xmmword ptr [esi+30h]
0x8B0950: movaps  xmm0, xmmword ptr [edx]
0x8B0953: movaps  xmm2, xmm0
0x8B0956: mulps   xmm2, xmm1
0x8B0959: movaps  [esp+70h+var_30], xmm2
0x8B095E: movaps  xmm2, xmmword ptr [esi+40h]
0x8B0962: addps   xmm0, xmm2
0x8B0965: mulps   xmm0, xmm1
0x8B0968: movaps  xmm1, xmmword ptr ds:0A97DD0h
0x8B096F: addps   xmm0, xmm1
0x8B0972: movaps  [esp+70h+var_20], xmm0
0x8B0977: mov     eax, dword ptr [esp+70h+var_20]
0x8B097B: mov     ecx, dword ptr [esp+70h+var_20+8]
0x8B097F: shr     eax, 6
0x8B0982: shr     ecx, 6
0x8B0985: movzx   ebx, ax
0x8B0988: movzx   eax, cx
0x8B098B: mov     ecx, [esi+0Ch]
0x8B098E: sub     ecx, 1
0x8B0991: cmp     ebx, ecx
0x8B0993: mov     [esp+70h+var_60], ebx
0x8B0997: mov     [esp+70h+var_50], eax
0x8B099B: jge     loc_8B0B23
0x8B09A1: mov     edx, [esi+10h]
0x8B09A4: sub     edx, 1
0x8B09A7: cmp     eax, edx
0x8B09A9: jge     loc_8B0B23
0x8B09AF: fld     dword ptr [esp+70h+var_30]
0x8B09B3: lea     ecx, [ebx+1]
0x8B09B6: fisub   [esp+70h+var_60]
0x8B09BA: push    eax
0x8B09BB: mov     [esp+74h+var_64], ecx
0x8B09BF: push    ecx
0x8B09C0: mov     ecx, esi
0x8B09C2: fstp    [esp+78h+var_4C]
0x8B09C6: fld     dword ptr [esp+78h+var_30+8]
0x8B09CA: fisub   [esp+78h+var_50]
0x8B09CE: fstp    [esp+78h+var_54]
0x8B09D2: call    sub_8B0C30
0x8B09D7: mov     eax, [esp+70h+var_50]
0x8B09DB: fstp    [esp+70h+var_44]
0x8B09DF: add     eax, 1
0x8B09E2: push    eax
0x8B09E3: push    ebx
0x8B09E4: mov     ecx, esi
0x8B09E6: mov     [esp+78h+var_5C], eax
0x8B09EA: call    sub_8B0C30
0x8B09EF: fstp    [esp+70h+var_60]
0x8B09F3: fld     [esp+70h+var_54]
0x8B09F7: fadd    [esp+70h+var_4C]
0x8B09FB: fcomp   qword ptr ds:0A2F928h
0x8B0A01: fnstsw  ax
0x8B0A03: test    ah, 41h
0x8B0A06: jnz     short loc_8B0A5D
0x8B0A08: mov     eax, [esp+70h+var_5C]
0x8B0A0C: mov     ecx, [esp+70h+var_64]
0x8B0A10: push    eax
0x8B0A11: push    ecx
0x8B0A12: mov     ecx, esi
0x8B0A14: call    sub_8B0C30
0x8B0A19: fstp    [esp+70h+var_64]
0x8B0A1D: fld     [esp+70h+var_64]
0x8B0A21: fld     st
0x8B0A23: fsub    [esp+70h+var_60]
0x8B0A27: fstp    [esp+70h+var_5C]
0x8B0A2B: fld     [esp+70h+var_44]
0x8B0A2F: fld     st
0x8B0A31: fsubp   st(2), st
0x8B0A33: fxch    st(1)
0x8B0A35: fstp    [esp+70h+var_64]
0x8B0A39: fld     [esp+70h+var_64]
0x8B0A3D: fld     st
0x8B0A3F: fmul    [esp+70h+var_54]
0x8B0A43: faddp   st(2), st
0x8B0A45: fld     [esp+70h+var_4C]
0x8B0A49: fsub    qword ptr ds:0A2F928h
0x8B0A4F: fld     [esp+70h+var_5C]
0x8B0A53: fld     st
0x8B0A55: fmulp   st(2), st
0x8B0A57: fxch    st(3)
0x8B0A59: faddp   st(1), st
0x8B0A5B: jmp     short loc_8B0AA4
0x8B0A5D: mov     edx, [esp+70h+var_50]
0x8B0A61: push    edx
0x8B0A62: push    ebx
0x8B0A63: mov     ecx, esi
0x8B0A65: call    sub_8B0C30
0x8B0A6A: fstp    [esp+70h+var_64]
0x8B0A6E: fld     [esp+70h+var_44]
0x8B0A72: fld     [esp+70h+var_64]
0x8B0A76: fld     st
0x8B0A78: fsubp   st(2), st
0x8B0A7A: fxch    st(1)
0x8B0A7C: fstp    [esp+70h+var_5C]
0x8B0A80: fld     [esp+70h+var_60]
0x8B0A84: fsub    st, st(1)
0x8B0A86: fstp    [esp+70h+var_64]
0x8B0A8A: fld     [esp+70h+var_64]
0x8B0A8E: fld     st
0x8B0A90: fmul    [esp+70h+var_54]
0x8B0A94: faddp   st(2), st
0x8B0A96: fld     [esp+70h+var_5C]
0x8B0A9A: fld     st
0x8B0A9C: fmul    [esp+70h+var_4C]
0x8B0AA0: faddp   st(3), st
0x8B0AA2: fxch    st(2)
0x8B0AA4: fstp    [esp+70h+var_60]
0x8B0AA8: movss   xmm3, dword ptr ds:0A46C30h
0x8B0AB0: fxch    st(1)
0x8B0AB2: mov     eax, [esp+70h+var_58]
0x8B0AB6: fchs
0x8B0AB8: fstp    dword ptr [edi]
0x8B0ABA: fchs
0x8B0ABC: fstp    dword ptr [edi+8]
0x8B0ABF: movaps  xmm0, xmmword ptr [esi+30h]
0x8B0AC3: movaps  xmm1, xmmword ptr [edi]
0x8B0AC6: fld     dword ptr [esp+70h+var_30+4]
0x8B0ACA: fsub    [esp+70h+var_60]
0x8B0ACE: mulps   xmm1, xmm0
0x8B0AD1: movaps  xmm0, xmm1
0x8B0AD4: mulps   xmm0, xmm1
0x8B0AD7: movaps  xmm2, xmm0
0x8B0ADA: shufps  xmm2, xmm0, 55h ; 'U'
0x8B0ADE: addss   xmm2, xmm0
0x8B0AE2: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8B0AE6: addss   xmm0, xmm2
0x8B0AEA: movaps  xmm2, xmm0
0x8B0AED: rsqrtss xmm2, xmm2
0x8B0AF1: mulss   xmm0, xmm2
0x8B0AF5: mulss   xmm0, xmm2
0x8B0AF9: subss   xmm3, xmm0
0x8B0AFD: movss   xmm0, dword ptr ds:0A3D65Ch
0x8B0B05: mulss   xmm0, xmm2
0x8B0B09: mulss   xmm0, xmm3
0x8B0B0D: movaps  xmm2, xmm0
0x8B0B10: shufps  xmm2, xmm0, 0
0x8B0B14: mulps   xmm2, xmm1
0x8B0B17: movaps  xmmword ptr [edi], xmm2
0x8B0B1A: fmul    dword ptr [esi+24h]
0x8B0B1D: fsub    dword ptr [eax+0Ch]
0x8B0B20: fstp    dword ptr [edi+0Ch]
0x8B0B23: add     [esp+70h+var_58], 10h
0x8B0B28: add     edi, 10h
0x8B0B2B: sub     [esp+70h+var_48], 1
0x8B0B30: jns     loc_8B0940
0x8B0B36: mov     ecx, [esp+70h+var_4]
0x8B0B3A: pop     edi
0x8B0B3B: pop     esi
0x8B0B3C: pop     ebx
0x8B0B3D: xor     ecx, esp
0x8B0B3F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B0B44: mov     esp, ebp
0x8B0B46: pop     ebp
0x8B0B47: retn    8
