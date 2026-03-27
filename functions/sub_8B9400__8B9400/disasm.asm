0x8B9400: push    ebp
0x8B9401: mov     ebp, esp
0x8B9403: and     esp, 0FFFFFFF0h
0x8B9406: sub     esp, 3Ch
0x8B9409: mov     eax, ds:0B30AACh
0x8B940E: xor     eax, esp
0x8B9410: mov     [esp+3Ch+var_4], eax
0x8B9414: mov     eax, [ebp+arg_4]
0x8B9417: fld     dword ptr [eax+0Ch]
0x8B941A: xorps   xmm3, xmm3
0x8B941D: fstp    [esp+3Ch+var_34]
0x8B9421: push    esi
0x8B9422: fld     [esp+40h+var_34]
0x8B9426: mov     esi, ecx
0x8B9428: movaps  xmm1, xmmword ptr [esi+30h]
0x8B942C: fld     st
0x8B942E: fld     qword ptr ds:0A3D0C0h
0x8B9434: mov     ecx, [ebp+arg_0]
0x8B9437: fmul    st(1), st
0x8B9439: movaps  xmm6, xmm1
0x8B943C: fxch    st(2)
0x8B943E: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x8B9442: movaps  xmm7, xmm1
0x8B9445: fmul    st, st(1)
0x8B9447: shufps  xmm7, xmm1, 0C9h ; 'É'
0x8B944B: fsub    qword ptr ds:0A2F928h
0x8B9451: fstp    [esp+40h+var_34]
0x8B9455: movss   xmm0, [esp+40h+var_34]
0x8B945B: fldz
0x8B945D: movss   xmm3, xmm0
0x8B9461: movaps  xmm0, xmmword ptr [eax]
0x8B9464: movaps  [esp+40h+var_30], xmm0
0x8B9469: fstp    dword ptr [esp+40h+var_30+0Ch]
0x8B946D: movaps  xmm2, [esp+40h+var_30]
0x8B9472: movaps  xmm0, xmm2
0x8B9475: mulps   xmm0, xmm1
0x8B9478: movaps  xmm4, xmm0
0x8B947B: shufps  xmm4, xmm0, 55h ; 'U'
0x8B947F: addss   xmm4, xmm0
0x8B9483: movaps  xmm5, xmm0
0x8B9486: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8B948A: addss   xmm5, xmm4
0x8B948E: movss   dword ptr [esp+40h+var_30], xmm5
0x8B9494: fld     dword ptr [esp+40h+var_30]
0x8B9498: fmulp   st(2), st
0x8B949A: xorps   xmm4, xmm4
0x8B949D: fxch    st(1)
0x8B949F: fstp    [esp+40h+var_34]
0x8B94A3: movss   xmm0, [esp+40h+var_34]
0x8B94A9: movss   xmm4, xmm0
0x8B94AD: fstp    [esp+40h+var_34]
0x8B94B1: movss   xmm5, [esp+40h+var_34]
0x8B94B7: xorps   xmm0, xmm0
0x8B94BA: movss   xmm0, xmm5
0x8B94BE: movaps  xmm5, xmm2
0x8B94C1: shufps  xmm5, xmm2, 0C9h ; 'É'
0x8B94C5: mulps   xmm5, xmm6
0x8B94C8: movaps  xmm6, xmm2
0x8B94CB: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x8B94CF: shufps  xmm0, xmm0, 0
0x8B94D3: mulps   xmm6, xmm7
0x8B94D6: subps   xmm5, xmm6
0x8B94D9: mulps   xmm5, xmm0
0x8B94DC: movaps  xmm0, xmm4
0x8B94DF: shufps  xmm0, xmm4, 0
0x8B94E3: mulps   xmm0, xmm2
0x8B94E6: movaps  xmm2, xmm3
0x8B94E9: shufps  xmm2, xmm3, 0
0x8B94ED: mulps   xmm2, xmm1
0x8B94F0: addps   xmm0, xmm2
0x8B94F3: addps   xmm5, xmm0
0x8B94F6: movaps  xmm0, xmmword ptr [ecx]
0x8B94F9: lea     ecx, [esi+20h]
0x8B94FC: push    ecx
0x8B94FD: addps   xmm5, xmm0
0x8B9500: push    eax
0x8B9501: lea     ecx, [esp+48h+var_30]
0x8B9505: movaps  [esp+48h+var_20], xmm5
0x8B950A: call    sub_889470
0x8B950F: lea     edx, [esp+40h+var_30]
0x8B9513: push    edx
0x8B9514: lea     eax, [esp+44h+var_20]
0x8B9518: push    eax
0x8B9519: mov     ecx, esi
0x8B951B: call    sub_8A2FB0
0x8B9520: mov     ecx, [esp+40h+var_4]
0x8B9524: pop     esi
0x8B9525: xor     ecx, esp
0x8B9527: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B952C: mov     esp, ebp
0x8B952E: pop     ebp
0x8B952F: retn    8
