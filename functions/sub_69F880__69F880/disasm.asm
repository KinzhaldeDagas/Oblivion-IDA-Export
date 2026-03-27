0x69F880: push    ebp
0x69F881: mov     ebp, esp
0x69F883: and     esp, 0FFFFFFF0h
0x69F886: sub     esp, 3Ch
0x69F889: mov     eax, ds:0B30AACh
0x69F88E: xor     eax, esp
0x69F890: mov     [esp+3Ch+var_4], eax
0x69F894: push    esi
0x69F895: mov     esi, [ebp+arg_18]
0x69F898: test    esi, esi
0x69F89A: jz      loc_69FA2D
0x69F8A0: mov     eax, [esi]
0x69F8A2: mov     edx, [eax+58h]
0x69F8A5: mov     ecx, esi
0x69F8A7: call    edx
0x69F8A9: test    eax, eax
0x69F8AB: jz      loc_69FA2D
0x69F8B1: mov     eax, [esi+8]
0x69F8B4: test    eax, eax
0x69F8B6: jz      short loc_69F8C2
0x69F8B8: add     eax, 14h
0x69F8BB: jz      short loc_69F8C2
0x69F8BD: mov     eax, [eax+1Ch]
0x69F8C0: jmp     short loc_69F8C4
0x69F8C2: xor     eax, eax
0x69F8C4: and     eax, 3Fh
0x69F8C7: add     eax, 0FFFFFFFEh; switch 13 cases
0x69F8CA: cmp     eax, 0Ch
0x69F8CD: ja      short def_69F8D6; jumptable 0069F8D6 default case, cases 3-7,9,11-13
0x69F8CF: movzx   eax, ds:byte_69FA50[eax]
0x69F8D6: jmp     ds:jpt_69F8D6[eax*4]; switch jump
0x69F8DD: mov     ecx, offset unk_B37100; jumptable 0069F8D6 case 14
0x69F8E2: call    GameSetting_GetSafeFloatPointer
0x69F8E7: fld     dword ptr [eax]
0x69F8E9: jmp     short loc_69F907
0x69F8EB: mov     ecx, offset unk_B370F8; jumptable 0069F8D6 case 8
0x69F8F0: call    GameSetting_GetSafeFloatPointer
0x69F8F5: fld     dword ptr [eax]
0x69F8F7: jmp     short loc_69F907
0x69F8F9: fld     dword ptr ds:0B370F0h; jumptable 0069F8D6 cases 2,10
0x69F8FF: jmp     short loc_69F907
0x69F901: fld     dword ptr ds:0B370E8h; jumptable 0069F8D6 default case, cases 3-7,9,11-13
0x69F907: fmul    qword ptr ds:0A764A8h
0x69F90D: mov     eax, [esi+8]
0x69F910: test    eax, eax
0x69F912: fstp    [esp+40h+var_38]
0x69F916: jz      short loc_69F922
0x69F918: mov     ecx, [eax+50h]
0x69F91B: call    sub_89DA90
0x69F920: jmp     short loc_69F924
0x69F922: fldz
0x69F924: fstp    [esp+40h+var_34]
0x69F928: fld     [esp+40h+var_34]
0x69F92C: fld     dword ptr ds:0B37108h
0x69F932: fcom    st(1)
0x69F934: fnstsw  ax
0x69F936: test    ah, 41h
0x69F939: jnz     short loc_69F947
0x69F93B: fdivp   st(1), st
0x69F93D: fmul    [esp+40h+var_38]
0x69F941: fstp    [esp+40h+var_38]
0x69F945: jmp     short loc_69F94B
0x69F947: fstp    st(1)
0x69F949: fstp    st
0x69F94B: fld     dword ptr ds:0B370E0h
0x69F951: movss   xmm4, dword ptr ds:0A46C30h
0x69F959: fmul    [esp+40h+var_38]
0x69F95D: mov     esi, [esi+8]
0x69F960: xorps   xmm3, xmm3
0x69F963: movss   xmm3, xmm4
0x69F967: fstp    [esp+40h+var_38]
0x69F96B: movss   xmm4, dword ptr ds:0A3D65Ch
0x69F973: fld     [ebp+arg_C]
0x69F976: mov     ecx, esi
0x69F978: fld     qword ptr ds:0A39088h
0x69F97E: fmul    st(1), st
0x69F980: fxch    st(1)
0x69F982: fstp    dword ptr [esp+40h+var_30]
0x69F986: fld     [ebp+arg_10]
0x69F989: fmul    st, st(1)
0x69F98B: fstp    dword ptr [esp+40h+var_30+4]
0x69F98F: fld     [ebp+arg_14]
0x69F992: fmul    st, st(1)
0x69F994: fstp    dword ptr [esp+40h+var_30+8]
0x69F998: movaps  xmm2, [esp+40h+var_30]
0x69F99D: fld     [ebp+arg_0]
0x69F9A0: movaps  xmm0, xmm2
0x69F9A3: mulps   xmm0, xmm2
0x69F9A6: fmul    st, st(1)
0x69F9A8: movaps  xmm1, xmm0
0x69F9AB: shufps  xmm1, xmm0, 55h ; 'U'
0x69F9AF: addss   xmm1, xmm0
0x69F9B3: fstp    [esp+40h+var_20]
0x69F9B7: fld     [ebp+arg_4]
0x69F9BA: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x69F9BE: addss   xmm0, xmm1
0x69F9C2: fmul    st, st(1)
0x69F9C4: movaps  xmm1, xmm0
0x69F9C7: rsqrtss xmm1, xmm1
0x69F9CB: mulss   xmm0, xmm1
0x69F9CF: fstp    [esp+40h+var_1C]
0x69F9D3: mulss   xmm0, xmm1
0x69F9D7: fmul    [ebp+arg_8]
0x69F9DA: subss   xmm3, xmm0
0x69F9DE: xorps   xmm0, xmm0
0x69F9E1: movss   xmm0, xmm4
0x69F9E5: mulss   xmm0, xmm1
0x69F9E9: fstp    [esp+40h+var_18]
0x69F9ED: mulss   xmm0, xmm3
0x69F9F1: movss   xmm3, [esp+40h+var_38]
0x69F9F7: xorps   xmm1, xmm1
0x69F9FA: movss   xmm1, xmm3
0x69F9FE: movaps  xmm3, xmm0
0x69FA01: shufps  xmm3, xmm0, 0
0x69FA05: mulps   xmm3, xmm2
0x69FA08: shufps  xmm1, xmm1, 0
0x69FA0C: mulps   xmm3, xmm1
0x69FA0F: movaps  [esp+40h+var_30], xmm3
0x69FA14: call    sub_8A6410
0x69FA19: mov     ecx, [esi+50h]
0x69FA1C: mov     edx, [ecx]
0x69FA1E: mov     edx, [edx+60h]
0x69FA21: lea     eax, [esp+40h+var_20]
0x69FA25: push    eax
0x69FA26: lea     eax, [esp+44h+var_30]
0x69FA2A: push    eax
0x69FA2B: call    edx
0x69FA2D: mov     ecx, [esp+40h+var_4]
0x69FA31: pop     esi
0x69FA32: xor     ecx, esp
0x69FA34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x69FA39: mov     esp, ebp
0x69FA3B: pop     ebp
0x69FA3C: retn    1Ch
