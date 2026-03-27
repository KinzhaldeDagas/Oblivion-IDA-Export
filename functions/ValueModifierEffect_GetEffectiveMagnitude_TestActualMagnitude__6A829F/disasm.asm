0x6A829F: mov     edx, [esi]
0x6A82A1: mov     eax, [edx+44h]
0x6A82A4: mov     ebx, [edi]
0x6A82A6: mov     ecx, esi
0x6A82A8: call    eax
0x6A82AA: mov     edx, [ebx+288h]
0x6A82B0: push    eax
0x6A82B1: mov     ecx, edi
0x6A82B3: call    edx
0x6A82B5: fld     [esp+4+arg_C]
0x6A82B9: fld     st
0x6A82BB: pop     edi
0x6A82BC: faddp   st(2), st
0x6A82BE: pop     ebx
0x6A82BF: fxch    st(1)
0x6A82C1: fstp    [esp-4+arg_C]
0x6A82C5: fldz
0x6A82C7: fld     [esp-4+arg_C]
0x6A82CB: fcom    st(1)
0x6A82CD: fnstsw  ax
0x6A82CF: fstp    st(1)
0x6A82D1: test    ah, 5
0x6A82D4: jp      short ValueModifierEffect_GetEffectiveMagnitude___ReturnSameMagnitude
