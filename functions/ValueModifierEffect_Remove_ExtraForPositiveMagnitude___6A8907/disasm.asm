0x6A8907: fld     dword ptr [esi+18h]
0x6A890A: push    ecx
0x6A890B: fchs
0x6A890D: mov     ecx, esi
0x6A890F: fstp    [esp+4+var_4]; float
0x6A8912: call    ValueModifierEffect_GetEffectiveMagnitude
0x6A8917: fadd    dword ptr [esi+18h]
0x6A891A: mov     eax, [esi]
0x6A891C: mov     edx, [eax+44h]
0x6A891F: mov     ecx, esi
0x6A8921: fstp    [esp+4+arg_0]; float
0x6A8925: call    edx
0x6A8927: cmp     eax, 8
0x6A892A: jnz     short ValueModifierEffect_Remove___GetCasterActor
0x6A892C: mov     ecx, edi; this
0x6A892E: call    TESObjectREFR_GetHealth
0x6A8933: fld     [esp+arg_4]
0x6A8937: fld     st
0x6A8939: faddp   st(2), st
0x6A893B: fld     dword ptr [esi+18h]
0x6A893E: fld1
0x6A8940: fadd    st(1), st
0x6A8942: fxch    st(3)
0x6A8944: fcompp
0x6A8946: fnstsw  ax
0x6A8948: test    ah, 41h
0x6A894B: jp      short loc_6A8955
0x6A894D: faddp   st(1), st
0x6A894F: fstp    [esp+arg_4]; float
0x6A8953: jmp     short ValueModifierEffect_Remove___GetCasterActor
0x6A8955: fstp    st(1)
0x6A8957: fstp    st
