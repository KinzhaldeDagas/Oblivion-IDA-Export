0x691DA0: sub     esp, 0Ch
0x691DA3: push    esi
0x691DA4: push    edi
0x691DA5: mov     edi, ecx
0x691DA7: mov     ecx, [edi+20h]; this
0x691DAA: test    ecx, ecx
0x691DAC: jz      short loc_691DB7
0x691DAE: call    MagicTarget_GetParentActor
0x691DB3: mov     esi, eax
0x691DB5: jmp     short loc_691DB9
0x691DB7: xor     esi, esi
0x691DB9: mov     ecx, edi
0x691DBB: call    ValueModifierEffect_Apply
0x691DC0: test    esi, esi
0x691DC2: jz      loc_691EC4
0x691DC8: cmp     byte ptr ds:0B42F3Eh, 0
0x691DCF: jz      loc_691ECA
0x691DD5: cmp     byte ptr ds:0B42E84h, 0
0x691DDC: jz      loc_691ECA
0x691DE2: cmp     dword ptr ds:0B42F48h, 2
0x691DE9: jl      loc_691ECA
0x691DEF: mov     eax, [esi]
0x691DF1: mov     edx, [eax+288h]
0x691DF7: push    2Fh ; '/'
0x691DF9: mov     ecx, esi
0x691DFB: call    edx
0x691DFD: fcomp   dword ptr ds:0A2FAA8h
0x691E03: fnstsw  ax
0x691E05: test    ah, 44h
0x691E08: jp      loc_691ECA
0x691E0E: mov     eax, [esi]
0x691E10: fld1
0x691E12: mov     edx, [eax+324h]
0x691E18: push    ecx
0x691E19: mov     ecx, esi
0x691E1B: fstp    [esp+18h+var_18]
0x691E1E: call    edx
0x691E20: mov     eax, [esi]
0x691E22: mov     edx, [eax+288h]
0x691E28: push    2Eh ; '.'
0x691E2A: mov     ecx, esi
0x691E2C: call    edx
0x691E2E: fdiv    qword ptr ds:0A309F0h
0x691E34: fstp    [esp+14h+var_C]
0x691E38: fld     [esp+14h+var_C]
0x691E3C: fcom    qword ptr ds:0A2FC68h
0x691E42: fnstsw  ax
0x691E44: test    ah, 5
0x691E47: jp      short loc_691E4D
0x691E49: fstp    st
0x691E4B: fldz
0x691E4D: fstp    [esp+14h+var_C]
0x691E51: fld     [esp+14h+var_C]
0x691E55: fcom    qword ptr ds:0A2F928h
0x691E5B: fnstsw  ax
0x691E5D: test    ah, 41h
0x691E60: jnz     short loc_691E66
0x691E62: fstp    st
0x691E64: fld1
0x691E66: fstp    [esp+14h+var_C]
0x691E6A: call    Magic_GetChameleonMinRefraction
0x691E6F: fstp    [esp+14h+var_4]
0x691E73: call    Magic_GetChameleonMaxRefraction
0x691E78: fstp    [esp+14h+var_8]
0x691E7C: mov     eax, [esi]
0x691E7E: fld     [esp+14h+var_C]
0x691E82: mov     edx, [eax+270h]
0x691E88: fld1
0x691E8A: push    ecx
0x691E8B: fld     st
0x691E8D: mov     ecx, esi
0x691E8F: fsubrp  st(2), st
0x691E91: fxch    st(1)
0x691E93: fstp    [esp+18h+var_C]
0x691E97: fld     [esp+18h+var_C]
0x691E9B: fldz
0x691E9D: fsub    st(1), st
0x691E9F: fsubp   st(2), st
0x691EA1: fdivrp  st(1), st
0x691EA3: fld     [esp+18h+var_8]
0x691EA7: fld     [esp+18h+var_4]
0x691EAB: fld     st
0x691EAD: fsubp   st(2), st
0x691EAF: fxch    st(2)
0x691EB1: fmulp   st(1), st
0x691EB3: faddp   st(1), st
0x691EB5: fstp    [esp+18h+var_4]
0x691EB9: fld     [esp+18h+var_4]
0x691EBD: fstp    [esp+18h+var_18]
0x691EC0: push    1
0x691EC2: call    edx
0x691EC4: pop     edi
0x691EC5: pop     esi
0x691EC6: add     esp, 0Ch
0x691EC9: retn
0x691ECA: pop     edi
0x691ECB: mov     ecx, esi; a1
0x691ECD: pop     esi
0x691ECE: add     esp, 0Ch
0x691ED1: jmp     sub_5EE1B0
