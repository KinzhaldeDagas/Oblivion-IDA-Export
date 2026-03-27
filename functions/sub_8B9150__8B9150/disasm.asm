0x8B9150: push    ebp
0x8B9151: mov     ebp, esp
0x8B9153: and     esp, 0FFFFFFF0h
0x8B9156: sub     esp, 78h
0x8B9159: mov     eax, ds:0B30AACh
0x8B915E: xor     eax, esp
0x8B9160: mov     [esp+78h+var_4], eax
0x8B9164: push    esi
0x8B9165: mov     esi, ecx
0x8B9167: test    esi, esi
0x8B9169: push    edi
0x8B916A: mov     edi, [ebp+arg_0]
0x8B916D: jz      loc_8B929C
0x8B9173: cmp     dword ptr [esi+8], 0
0x8B9177: jz      loc_8B929C
0x8B917D: mov     eax, [esi]
0x8B917F: mov     edx, [eax+90h]
0x8B9185: lea     ecx, [esp+80h+var_50]
0x8B9189: push    ecx
0x8B918A: mov     ecx, esi
0x8B918C: call    edx
0x8B918E: fld     dword ptr [esp+80h+var_50+0Ch]
0x8B9192: movaps  xmm1, xmmword ptr [esi+30h]
0x8B9196: fld     st
0x8B9198: fld     qword ptr ds:0A3D0C0h
0x8B919E: xorps   xmm0, xmm0
0x8B91A1: fmul    st(1), st
0x8B91A3: movaps  [esp+80h+anonymous_0], xmm1
0x8B91A8: fxch    st(2)
0x8B91AA: push    edi
0x8B91AB: mov     ecx, esi
0x8B91AD: fmul    st, st(1)
0x8B91AF: fsub    qword ptr ds:0A2F928h
0x8B91B5: fstp    dword ptr [esp+84h+var_74]
0x8B91B9: movss   xmm2, dword ptr [esp+84h+var_74]
0x8B91BF: fldz
0x8B91C1: movss   xmm0, xmm2
0x8B91C5: movaps  [esp+84h+anonymous_2], xmm0
0x8B91CA: movaps  xmm0, [esp+84h+var_50]
0x8B91CF: movaps  [esp+84h+var_64+4], xmm0
0x8B91D4: fstp    [esp+84h+var_54]
0x8B91D8: movaps  xmm0, [esp+84h+var_64+4]
0x8B91DD: mulps   xmm0, xmm1
0x8B91E0: movaps  xmm1, xmm0
0x8B91E3: shufps  xmm1, xmm0, 55h ; 'U'
0x8B91E7: addss   xmm1, xmm0
0x8B91EB: movaps  xmm2, xmm0
0x8B91EE: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B91F2: addss   xmm2, xmm1
0x8B91F6: movss   dword ptr [esp+84h+var_74+4], xmm2
0x8B91FC: fld     dword ptr [esp+84h+var_74+4]
0x8B9200: fmulp   st(2), st
0x8B9202: xorps   xmm0, xmm0
0x8B9205: fxch    st(1)
0x8B9207: fstp    dword ptr [esp+84h+var_74]
0x8B920B: movss   xmm1, dword ptr [esp+84h+var_74]
0x8B9211: movss   xmm0, xmm1
0x8B9215: fstp    dword ptr [esp+84h+var_74]
0x8B9219: movss   xmm1, dword ptr [esp+84h+var_74]
0x8B921F: movaps  [esp+84h+anonymous_1], xmm0
0x8B9224: xorps   xmm0, xmm0
0x8B9227: movss   xmm0, xmm1
0x8B922B: movaps  [esp+84h+var_74+4], xmm0
0x8B9230: call    sub_8A2ED0
0x8B9235: movaps  xmm1, [esp+80h+var_64+4]
0x8B923A: movaps  xmm0, [esp+80h+anonymous_0]
0x8B923F: movaps  xmm2, xmm0
0x8B9242: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x8B9246: movaps  xmm3, xmm1
0x8B9249: shufps  xmm3, xmm1, 0C9h ; 'É'
0x8B924D: mulps   xmm3, xmm2
0x8B9250: movaps  xmm4, xmm0
0x8B9253: shufps  xmm4, xmm0, 0C9h ; 'É'
0x8B9257: movaps  xmm2, xmm1
0x8B925A: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8B925E: mulps   xmm2, xmm4
0x8B9261: subps   xmm3, xmm2
0x8B9264: movaps  xmm2, [esp+80h+var_74+4]
0x8B9269: shufps  xmm2, xmm2, 0
0x8B926D: mulps   xmm3, xmm2
0x8B9270: movaps  xmm2, [esp+80h+anonymous_1]
0x8B9275: movaps  xmm4, xmm2
0x8B9278: shufps  xmm4, xmm2, 0
0x8B927C: mulps   xmm4, xmm1
0x8B927F: movaps  xmm1, [esp+80h+anonymous_2]
0x8B9284: movaps  xmm2, xmm1
0x8B9287: shufps  xmm2, xmm1, 0
0x8B928B: mulps   xmm2, xmm0
0x8B928E: movaps  xmm0, xmmword ptr [edi]
0x8B9291: addps   xmm4, xmm2
0x8B9294: addps   xmm3, xmm4
0x8B9297: subps   xmm0, xmm3
0x8B929A: jmp     short loc_8B92A3
0x8B929C: movaps  xmm0, xmmword ptr ds:0BA7A40h
0x8B92A3: mov     ecx, [esp+80h+var_4]
0x8B92A7: mov     eax, edi
0x8B92A9: movaps  xmmword ptr [edi], xmm0
0x8B92AC: pop     edi
0x8B92AD: pop     esi
0x8B92AE: xor     ecx, esp
0x8B92B0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B92B5: mov     esp, ebp
0x8B92B7: pop     ebp
0x8B92B8: retn    4
