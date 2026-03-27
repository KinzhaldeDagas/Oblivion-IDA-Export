0x8B92C0: push    ebp
0x8B92C1: mov     ebp, esp
0x8B92C3: and     esp, 0FFFFFFF0h
0x8B92C6: sub     esp, 48h
0x8B92C9: mov     eax, ds:0B30AACh
0x8B92CE: xor     eax, esp
0x8B92D0: mov     [esp+48h+var_4], eax
0x8B92D4: push    esi
0x8B92D5: mov     esi, ecx
0x8B92D7: test    esi, esi
0x8B92D9: push    edi
0x8B92DA: mov     edi, [ebp+arg_0]
0x8B92DD: jz      loc_8B93E9
0x8B92E3: cmp     dword ptr [esi+8], 0
0x8B92E7: jz      loc_8B93E9
0x8B92ED: mov     eax, [esi]
0x8B92EF: mov     edx, [eax+90h]
0x8B92F5: lea     ecx, [esp+50h+var_30]
0x8B92F9: push    ecx
0x8B92FA: mov     ecx, esi
0x8B92FC: call    edx
0x8B92FE: fld     dword ptr [esp+50h+var_30+0Ch]
0x8B9302: movaps  xmm1, xmmword ptr [esi+30h]
0x8B9306: fld     st
0x8B9308: fld     qword ptr ds:0A3D0C0h
0x8B930E: xorps   xmm3, xmm3
0x8B9311: fmul    st(1), st
0x8B9313: movaps  xmm6, xmm1
0x8B9316: fxch    st(2)
0x8B9318: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x8B931C: movaps  xmm7, xmm1
0x8B931F: fmul    st, st(1)
0x8B9321: shufps  xmm7, xmm1, 0C9h ; 'É'
0x8B9325: lea     eax, [esp+50h+anonymous_0]
0x8B9329: push    eax
0x8B932A: fsub    qword ptr ds:0A2F928h
0x8B9330: mov     ecx, esi
0x8B9332: fstp    dword ptr [esp+54h+var_44]
0x8B9336: movss   xmm0, dword ptr [esp+54h+var_44]
0x8B933C: fldz
0x8B933E: movss   xmm3, xmm0
0x8B9342: movaps  xmm0, [esp+54h+var_30]
0x8B9347: movaps  [esp+54h+var_44+4], xmm0
0x8B934C: fstp    [esp+54h+var_34]
0x8B9350: movaps  xmm2, [esp+54h+var_44+4]
0x8B9355: movaps  xmm0, xmm2
0x8B9358: mulps   xmm0, xmm1
0x8B935B: movaps  xmm4, xmm0
0x8B935E: shufps  xmm4, xmm0, 55h ; 'U'
0x8B9362: addss   xmm4, xmm0
0x8B9366: movaps  xmm5, xmm0
0x8B9369: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8B936D: addss   xmm5, xmm4
0x8B9371: movss   dword ptr [esp+54h+var_44+4], xmm5
0x8B9377: fld     dword ptr [esp+54h+var_44+4]
0x8B937B: fmulp   st(2), st
0x8B937D: xorps   xmm4, xmm4
0x8B9380: fxch    st(1)
0x8B9382: fstp    dword ptr [esp+54h+var_44]
0x8B9386: movss   xmm0, dword ptr [esp+54h+var_44]
0x8B938C: movss   xmm4, xmm0
0x8B9390: fstp    dword ptr [esp+54h+var_44]
0x8B9394: movss   xmm5, dword ptr [esp+54h+var_44]
0x8B939A: xorps   xmm0, xmm0
0x8B939D: movss   xmm0, xmm5
0x8B93A1: movaps  xmm5, xmm2
0x8B93A4: shufps  xmm5, xmm2, 0C9h ; 'É'
0x8B93A8: mulps   xmm5, xmm6
0x8B93AB: movaps  xmm6, xmm2
0x8B93AE: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x8B93B2: shufps  xmm0, xmm0, 0
0x8B93B6: mulps   xmm6, xmm7
0x8B93B9: subps   xmm5, xmm6
0x8B93BC: mulps   xmm5, xmm0
0x8B93BF: movaps  xmm0, xmm4
0x8B93C2: shufps  xmm0, xmm4, 0
0x8B93C6: mulps   xmm0, xmm2
0x8B93C9: movaps  xmm2, xmm3
0x8B93CC: shufps  xmm2, xmm3, 0
0x8B93D0: mulps   xmm2, xmm1
0x8B93D3: addps   xmm0, xmm2
0x8B93D6: addps   xmm5, xmm0
0x8B93D9: movaps  xmm0, xmmword ptr [edi]
0x8B93DC: addps   xmm5, xmm0
0x8B93DF: movaps  [esp+54h+anonymous_0], xmm5
0x8B93E4: call    sub_8A2F50
0x8B93E9: mov     ecx, [esp+50h+var_4]
0x8B93ED: pop     edi
0x8B93EE: pop     esi
0x8B93EF: xor     ecx, esp
0x8B93F1: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B93F6: mov     esp, ebp
0x8B93F8: pop     ebp
0x8B93F9: retn    4
