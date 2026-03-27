0x6A87AB: fldz
0x6A87AD: fcomp   dword ptr [esi+18h]
0x6A87B0: fnstsw  ax
0x6A87B2: test    ah, 41h
0x6A87B5: jnz     short ValueModifierEffect_Apply___Wrapup
0x6A87B7: mov     edx, [edi]
0x6A87B9: mov     eax, [edx+288h]
0x6A87BF: push    8
0x6A87C1: mov     ecx, edi
0x6A87C3: call    eax
0x6A87C5: fcomp   dword ptr ds:0A2F948h
0x6A87CB: fnstsw  ax
0x6A87CD: test    ah, 41h
0x6A87D0: jp      short ValueModifierEffect_Apply___Wrapup
0x6A87D2: mov     ecx, [esi+24h]; this
0x6A87D5: test    ecx, ecx
0x6A87D7: jz      short loc_6A87E0
0x6A87D9: call    MagicCaster_GetParentActor
0x6A87DE: jmp     short loc_6A87E2
0x6A87E0: xor     eax, eax
0x6A87E2: fldz
0x6A87E4: push    ecx
0x6A87E5: fstp    [esp+4+var_4]; int
0x6A87E8: mov     ecx, edi; int
0x6A87EA: push    eax; int
0x6A87EB: call    Actor_Kill
