0x696460: sub     esp, 40h
0x696463: push    esi
0x696464: mov     esi, [esp+44h+arg_4]
0x696468: mov     eax, [esi+14h]
0x69646B: test    eax, eax
0x69646D: push    edi
0x69646E: mov     edi, [esi+4]
0x696471: jz      short loc_69648D
0x696473: mov     edx, [eax+88h]
0x696479: add     eax, 88h ; 'ˆ'
0x69647E: mov     [esi+8], edx
0x696481: mov     edx, [eax+4]
0x696484: mov     [esi+0Ch], edx
0x696487: mov     eax, [eax+8]
0x69648A: mov     [esi+10h], eax
0x69648D: mov     edx, [esi+8]
0x696490: mov     [edi+54h], edx
0x696493: mov     eax, [esi+0Ch]
0x696496: mov     [edi+58h], eax
0x696499: mov     edx, [esi+10h]
0x69649C: mov     [edi+5Ch], edx
0x69649F: mov     eax, [esi+18h]
0x6964A2: fld     dword ptr [eax+88h]
0x6964A8: add     eax, 88h ; 'ˆ'
0x6964AD: fsub    dword ptr [esi+8]
0x6964B0: mov     byte ptr [esp+48h+arg_4], 1
0x6964B5: fstp    [esp+48h+var_30]
0x6964B9: fld     dword ptr [eax+4]
0x6964BC: fsub    dword ptr [esi+0Ch]
0x6964BF: fstp    [esp+48h+var_2C]
0x6964C3: fld     dword ptr [eax+8]
0x6964C6: fsub    dword ptr [esi+10h]
0x6964C9: fstp    [esp+48h+var_28]
0x6964CD: fld     dword ptr [ecx+78h]
0x6964D0: fsub    dword ptr [ecx+0A0h]
0x6964D6: fld     dword ptr ds:0B381E8h
0x6964DC: fcompp
0x6964DE: fnstsw  ax
0x6964E0: test    ah, 5
0x6964E3: jnp     short loc_6964EA
0x6964E5: mov     byte ptr [esp+48h+arg_4], 0
0x6964EA: fld     [esp+48h+var_30]
0x6964EE: mov     eax, [esp+48h+arg_4]
0x6964F2: fld     [esp+48h+var_2C]
0x6964F6: push    eax; int
0x6964F7: fmul    st, st
0x6964F9: push    ecx
0x6964FA: fld     st(1)
0x6964FC: fmulp   st(2), st
0x6964FE: faddp   st(1), st
0x696500: fst     [esp+50h+var_40]
0x696504: fld     [esp+50h+var_28]
0x696508: fld     dword ptr [ecx+5Ch]
0x69650B: fstp    [esp+50h+var_50]; float
0x69650E: fmul    st, st
0x696510: faddp   st(1), st
0x696512: fstp    [esp+50h+arg_4]
0x696516: fld     [esp+50h+arg_4]
0x69651A: call    __CIsqrt
0x69651F: fstp    [esp+50h+arg_4]
0x696523: fld     [esp+50h+arg_4]
0x696527: mov     ecx, [esi]
0x696529: sub     esp, 8
0x69652C: fstp    [esp+58h+var_54]; float
0x696530: fld     [esp+58h+arg_0]
0x696534: fstp    [esp+58h+var_58]; float
0x696537: call    sub_7F3300
0x69653C: fld     [esp+48h+var_28]
0x696540: fstp    [esp+48h+var_38]
0x696544: fldz
0x696546: fmul    st, st
0x696548: fadd    [esp+48h+var_40]
0x69654C: fstp    [esp+48h+arg_4]
0x696550: fld     [esp+48h+arg_4]
0x696554: call    __CIsqrt
0x696559: fstp    [esp+48h+arg_4]
0x69655D: fld     [esp+48h+var_38]
0x696561: fld     [esp+48h+arg_4]
0x696565: call    sub_98598A
0x69656A: fstp    [esp+48h+arg_4]
0x69656E: fld     [esp+48h+arg_4]
0x696572: sub     esp, 8
0x696575: fchs
0x696577: fstp    [esp+50h+var_4C]; float
0x69657B: fldz
0x69657D: fstp    [esp+50h+var_50]; float
0x696580: fld     [esp+50h+var_30]
0x696584: fld     [esp+50h+var_2C]
0x696588: call    sub_98598A
0x69658D: fstp    [esp+50h+arg_4]
0x696591: fld     [esp+50h+arg_4]
0x696595: push    ecx
0x696596: lea     ecx, [esp+54h+var_24]
0x69659A: fstp    [esp+54h+var_54]; float
0x69659D: call    sub_7118E0
0x6965A2: add     edi, 30h ; '0'
0x6965A5: mov     ecx, 9
0x6965AA: lea     esi, [esp+48h+var_24]
0x6965AE: rep movsd
0x6965B0: pop     edi
0x6965B1: pop     esi
0x6965B2: add     esp, 40h
0x6965B5: retn    8
