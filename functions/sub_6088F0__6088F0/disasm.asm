0x6088F0: push    ebp
0x6088F1: mov     ebp, esp
0x6088F3: and     esp, 0FFFFFFF0h
0x6088F6: sub     esp, 38h
0x6088F9: mov     eax, ds:0B30AACh
0x6088FE: xor     eax, esp
0x608900: mov     [esp+38h+var_4], eax
0x608904: push    esi
0x608905: mov     esi, [ebp+arg_18]
0x608908: test    esi, esi
0x60890A: push    edi
0x60890B: mov     edi, ecx
0x60890D: jz      loc_608ABF
0x608913: cmp     byte ptr [edi+97h], 0
0x60891A: jnz     loc_608ABF
0x608920: mov     eax, [esi]
0x608922: mov     edx, [eax+58h]
0x608925: mov     ecx, esi
0x608927: call    edx
0x608929: test    eax, eax
0x60892B: jz      loc_608AB8
0x608931: mov     eax, [esi+8]
0x608934: fld     dword ptr [edi+6Ch]
0x608937: test    eax, eax
0x608939: fstp    [esp+40h+var_38]
0x60893D: jz      short loc_608949
0x60893F: add     eax, 14h
0x608942: jz      short loc_608949
0x608944: mov     eax, [eax+1Ch]
0x608947: jmp     short loc_60894B
0x608949: xor     eax, eax
0x60894B: and     eax, 3Fh
0x60894E: sub     eax, 8
0x608951: jz      short loc_608988
0x608953: sub     eax, 2
0x608956: jz      short loc_608976
0x608958: sub     eax, 4
0x60895B: jz      short loc_608964
0x60895D: mov     ecx, offset flt_B370E8
0x608962: jmp     short loc_60898D
0x608964: mov     ecx, offset unk_B37100
0x608969: call    GameSetting_GetSafeFloatPointer
0x60896E: fld     dword ptr [eax]
0x608970: fmul    [esp+40h+var_38]
0x608974: jmp     short loc_608998
0x608976: mov     ecx, offset flt_B370F0
0x60897B: call    GameSetting_GetSafeFloatPointer
0x608980: fld     dword ptr [eax]
0x608982: fmul    [esp+40h+var_38]
0x608986: jmp     short loc_608998
0x608988: mov     ecx, offset unk_B370F8
0x60898D: call    GameSetting_GetSafeFloatPointer
0x608992: fld     [esp+40h+var_38]
0x608996: fmul    dword ptr [eax]
0x608998: mov     eax, [esi+8]
0x60899B: fstp    [esp+40h+var_38]
0x60899F: test    eax, eax
0x6089A1: jz      short loc_6089AD
0x6089A3: mov     ecx, [eax+50h]
0x6089A6: call    sub_89DA90
0x6089AB: jmp     short loc_6089AF
0x6089AD: fldz
0x6089AF: fstp    [esp+40h+var_34]
0x6089B3: fld     [esp+40h+var_34]
0x6089B7: fld     dword ptr ds:0B37108h
0x6089BD: fcom    st(1)
0x6089BF: fnstsw  ax
0x6089C1: test    ah, 41h
0x6089C4: jnz     short loc_6089D2
0x6089C6: fdivp   st(1), st
0x6089C8: fmul    [esp+40h+var_38]
0x6089CC: fstp    [esp+40h+var_38]
0x6089D0: jmp     short loc_6089D6
0x6089D2: fstp    st(1)
0x6089D4: fstp    st
0x6089D6: fld     dword ptr ds:0B370E0h
0x6089DC: movss   xmm4, dword ptr ds:0A46C30h
0x6089E4: fmul    [esp+40h+var_38]
0x6089E8: mov     esi, [esi+8]
0x6089EB: xorps   xmm3, xmm3
0x6089EE: movss   xmm3, xmm4
0x6089F2: fstp    [esp+40h+var_38]
0x6089F6: movss   xmm4, dword ptr ds:0A3D65Ch
0x6089FE: fld     [ebp+arg_C]
0x608A01: mov     ecx, esi
0x608A03: fld     qword ptr ds:0A39088h
0x608A09: fmul    st(1), st
0x608A0B: fxch    st(1)
0x608A0D: fstp    dword ptr [esp+40h+var_30]
0x608A11: fld     [ebp+arg_10]
0x608A14: fmul    st, st(1)
0x608A16: fstp    dword ptr [esp+40h+var_30+4]
0x608A1A: fld     [ebp+arg_14]
0x608A1D: fmul    st, st(1)
0x608A1F: fstp    dword ptr [esp+40h+var_30+8]
0x608A23: movaps  xmm2, [esp+40h+var_30]
0x608A28: fld     [ebp+arg_0]
0x608A2B: movaps  xmm0, xmm2
0x608A2E: mulps   xmm0, xmm2
0x608A31: fmul    st, st(1)
0x608A33: movaps  xmm1, xmm0
0x608A36: shufps  xmm1, xmm0, 55h ; 'U'
0x608A3A: addss   xmm1, xmm0
0x608A3E: fstp    [esp+40h+var_20]
0x608A42: fld     [ebp+arg_4]
0x608A45: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x608A49: addss   xmm0, xmm1
0x608A4D: fmul    st, st(1)
0x608A4F: movaps  xmm1, xmm0
0x608A52: rsqrtss xmm1, xmm1
0x608A56: mulss   xmm0, xmm1
0x608A5A: fstp    [esp+40h+var_1C]
0x608A5E: mulss   xmm0, xmm1
0x608A62: fmul    [ebp+arg_8]
0x608A65: subss   xmm3, xmm0
0x608A69: xorps   xmm0, xmm0
0x608A6C: movss   xmm0, xmm4
0x608A70: mulss   xmm0, xmm1
0x608A74: fstp    [esp+40h+var_18]
0x608A78: mulss   xmm0, xmm3
0x608A7C: movss   xmm3, [esp+40h+var_38]
0x608A82: xorps   xmm1, xmm1
0x608A85: movss   xmm1, xmm3
0x608A89: movaps  xmm3, xmm0
0x608A8C: shufps  xmm3, xmm0, 0
0x608A90: mulps   xmm3, xmm2
0x608A93: shufps  xmm1, xmm1, 0
0x608A97: mulps   xmm3, xmm1
0x608A9A: movaps  [esp+40h+var_30], xmm3
0x608A9F: call    sub_8A6410
0x608AA4: mov     ecx, [esi+50h]
0x608AA7: mov     eax, [ecx]
0x608AA9: mov     eax, [eax+60h]
0x608AAC: lea     edx, [esp+40h+var_20]
0x608AB0: push    edx
0x608AB1: lea     edx, [esp+44h+var_30]
0x608AB5: push    edx
0x608AB6: call    eax
0x608AB8: mov     byte ptr [edi+97h], 1
0x608ABF: mov     ecx, [esp+40h+var_4]
0x608AC3: pop     edi
0x608AC4: pop     esi
0x608AC5: xor     ecx, esp
0x608AC7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x608ACC: mov     esp, ebp
0x608ACE: pop     ebp
0x608ACF: retn    1Ch
