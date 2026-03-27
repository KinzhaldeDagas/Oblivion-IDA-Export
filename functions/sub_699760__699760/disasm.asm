0x699760: push    ebp
0x699761: mov     ebp, esp
0x699763: and     esp, 0FFFFFFF0h
0x699766: sub     esp, 38h
0x699769: mov     eax, ds:0B30AACh
0x69976E: xor     eax, esp
0x699770: mov     [esp+38h+var_4], eax
0x699774: push    esi
0x699775: mov     esi, [ebp+arg_0]
0x699778: mov     eax, [esi+50h]
0x69977B: push    edi
0x69977C: mov     edi, [ebp+arg_10]
0x69977F: add     eax, 60h ; '`'
0x699782: push    eax
0x699783: lea     ecx, [esp+44h+var_2C]
0x699787: push    ecx
0x699788: call    sub_43F3E0
0x69978D: fld     [esp+48h+var_2C]
0x699791: fsub    [ebp+arg_4]
0x699794: add     esp, 4
0x699797: lea     ecx, [esp+44h+var_20]
0x69979B: fstp    dword ptr [esp+44h+var_20]
0x69979F: fld     [esp+44h+var_28]
0x6997A3: fsub    [ebp+arg_8]
0x6997A6: fstp    dword ptr [esp+44h+var_20+4]
0x6997AA: fld     [esp+44h+var_24]
0x6997AE: fsub    [ebp+arg_C]
0x6997B1: fstp    dword ptr [esp+44h+var_20+8]
0x6997B5: fldz
0x6997B7: fstp    [esp+44h+var_44]; float
0x6997BA: push    0; int
0x6997BC: push    0; int
0x6997BE: call    sub_43F350
0x6997C3: push    ecx
0x6997C4: mov     ecx, edi
0x6997C6: fstp    [esp+50h+var_50]; float
0x6997C9: call    EffectItem_GetArea
0x6997CE: mov     [esp+50h+var_30], eax
0x6997D2: fild    [esp+50h+var_30]
0x6997D6: fmul    dword ptr ds:0B37DB8h
0x6997DC: call    Double_To_SInt32
0x6997E1: fld     [ebp+arg_14]
0x6997E4: push    eax; int
0x6997E5: call    Double_To_SInt32
0x6997EA: push    eax; int
0x6997EB: call    Calc_MagicExplosionSize?
0x6997F0: fstp    [esp+58h+var_30]
0x6997F4: fldz
0x6997F6: add     esp, 18h
0x6997F9: fld     [esp+40h+var_30]
0x6997FD: fcom    st(1)
0x6997FF: fnstsw  ax
0x699801: fstp    st(1)
0x699803: test    ah, 41h
0x699806: jnz     loc_6998E6
0x69980C: fld     dword ptr ds:0B37E98h
0x699812: fcom    st(1)
0x699814: fnstsw  ax
0x699816: test    ah, 5
0x699819: jp      short loc_699827
0x69981B: fstp    st(1)
0x69981D: fstp    [esp+40h+var_30]
0x699821: fld     [esp+40h+var_30]
0x699825: jmp     short loc_699829
0x699827: fstp    st
0x699829: fmul    dword ptr ds:0B37EC8h
0x69982F: mov     ecx, [esi+50h]
0x699832: fstp    [esp+40h+var_30]
0x699836: fld     dword ptr [esp+40h+var_20+8]
0x69983A: fadd    qword ptr ds:0A2FAA0h
0x699840: fstp    dword ptr [esp+40h+var_20+8]
0x699844: fld     dword ptr [esp+40h+var_20]
0x699848: fld     [esp+40h+var_30]
0x69984C: fld     st
0x69984E: fmulp   st(2), st
0x699850: fxch    st(1)
0x699852: fstp    [esp+40h+var_2C]
0x699856: fld     dword ptr [esp+40h+var_20+4]
0x69985A: fmul    st, st(1)
0x69985C: fstp    [esp+40h+var_28]
0x699860: fmul    dword ptr [esp+40h+var_20+8]
0x699864: fstp    [esp+40h+var_24]
0x699868: fld     [esp+40h+var_2C]
0x69986C: fld     qword ptr ds:0A39088h
0x699872: fmul    st(1), st
0x699874: fxch    st(1)
0x699876: fstp    dword ptr [esp+40h+var_20]
0x69987A: fld     [esp+40h+var_28]
0x69987E: fmul    st, st(1)
0x699880: fstp    dword ptr [esp+40h+var_20+4]
0x699884: fmul    [esp+40h+var_24]
0x699888: fstp    dword ptr [esp+40h+var_20+8]
0x69988C: call    sub_89DA90
0x699891: fstp    [esp+40h+var_30]
0x699895: xorps   xmm0, xmm0
0x699898: movss   xmm1, [esp+40h+var_30]
0x69989E: movss   xmm0, xmm1
0x6998A2: movaps  xmm1, xmm0
0x6998A5: shufps  xmm1, xmm0, 0
0x6998A9: movaps  xmm0, [esp+40h+var_20]
0x6998AE: mulps   xmm1, xmm0
0x6998B1: mov     ecx, esi
0x6998B3: movaps  [esp+40h+var_20], xmm1
0x6998B8: call    sub_8A6410
0x6998BD: mov     ecx, esi
0x6998BF: call    sub_8A6410
0x6998C4: mov     ecx, [esi+50h]
0x6998C7: mov     edx, [ecx]
0x6998C9: mov     edx, [edx+5Ch]
0x6998CC: lea     eax, [esp+40h+var_20]
0x6998D0: push    eax
0x6998D1: call    edx
0x6998D3: pop     edi
0x6998D4: pop     esi
0x6998D5: mov     ecx, [esp+38h+var_4]
0x6998D9: xor     ecx, esp
0x6998DB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6998E0: mov     esp, ebp
0x6998E2: pop     ebp
0x6998E3: retn    18h
0x6998E6: mov     ecx, [esp+40h+var_4]
0x6998EA: fstp    st
0x6998EC: pop     edi
0x6998ED: pop     esi
0x6998EE: xor     ecx, esp
0x6998F0: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6998F5: mov     esp, ebp
0x6998F7: pop     ebp
0x6998F8: retn    18h
