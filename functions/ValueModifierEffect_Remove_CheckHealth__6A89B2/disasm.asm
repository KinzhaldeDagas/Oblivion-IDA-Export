0x6A89B2: mov     eax, [edi]
0x6A89B4: mov     edx, [eax+284h]
0x6A89BA: push    8
0x6A89BC: mov     ecx, edi
0x6A89BE: call    edx
0x6A89C0: mov     [esp+arg_4], eax
0x6A89C4: fild    [esp+arg_4]
0x6A89C8: fstp    [esp+arg_4]
0x6A89CC: fldz
0x6A89CE: fld     [esp+arg_4]
0x6A89D2: fcom    st(1)
0x6A89D4: fnstsw  ax
0x6A89D6: fstp    st(1)
0x6A89D8: test    ah, 41h
0x6A89DB: jnz     short ValueModifierEffect_Remove___Done__
0x6A89DD: mov     eax, [edi]
0x6A89DF: fchs
0x6A89E1: mov     edx, [eax+2A4h]
0x6A89E7: push    0
0x6A89E9: push    ecx
0x6A89EA: fstp    [esp+8+var_8]
0x6A89ED: push    8
0x6A89EF: mov     ecx, edi
0x6A89F1: call    edx
0x6A89F3: pop     edi
0x6A89F4: pop     esi
0x6A89F5: pop     ecx
0x6A89F6: retn
