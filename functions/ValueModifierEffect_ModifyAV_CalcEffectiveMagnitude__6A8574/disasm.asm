0x6A8574: fldz
0x6A8576: fld     [esp+arg_10]
0x6A857A: fcom    st(1)
0x6A857C: fnstsw  ax
0x6A857E: fstp    st(1)
0x6A8580: test    ah, 5
0x6A8583: jp      short ValueModifierEffect_ModifyAV___ApplyMod
0x6A8585: mov     eax, [esi+38h]
0x6A8588: cmp     eax, 0Ah
0x6A858B: jz      short ValueModifierEffect_ModifyAV___ApplyMod
0x6A858D: mov     edx, [edi]
0x6A858F: fstp    st
0x6A8591: push    eax
0x6A8592: mov     eax, [edx+288h]
0x6A8598: mov     ecx, edi
0x6A859A: call    eax
0x6A859C: fld     [esp+arg_10]
0x6A85A0: fld     st
0x6A85A2: faddp   st(2), st
0x6A85A4: fxch    st(1)
0x6A85A6: fstp    [esp+arg_10]
0x6A85AA: fldz
0x6A85AC: fld     [esp+arg_10]
0x6A85B0: fcom    st(1)
0x6A85B2: fnstsw  ax
0x6A85B4: fstp    st(1)
0x6A85B6: test    ah, 5
0x6A85B9: jp      short loc_6A85C7
0x6A85BB: fsubp   st(1), st
0x6A85BD: fstp    [esp+arg_10]
0x6A85C1: fld     [esp+arg_10]
0x6A85C5: jmp     short ValueModifierEffect_ModifyAV___ApplyMod
0x6A85C7: fstp    st
