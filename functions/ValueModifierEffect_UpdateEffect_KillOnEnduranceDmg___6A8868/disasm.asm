0x6A8868: fldz
0x6A886A: fcomp   dword ptr [esi+18h]
0x6A886D: fnstsw  ax
0x6A886F: test    ah, 41h
0x6A8872: jnz     short ValueModifierEffect_UpdateEffect___Done_
0x6A8874: mov     eax, [edi]
0x6A8876: mov     edx, [eax+288h]
0x6A887C: push    8
0x6A887E: mov     ecx, edi
0x6A8880: call    edx
0x6A8882: fcomp   dword ptr ds:0A2F948h
0x6A8888: fnstsw  ax
0x6A888A: test    ah, 41h
0x6A888D: jp      short ValueModifierEffect_UpdateEffect___Done_
0x6A888F: mov     ecx, [esi+24h]; this
0x6A8892: test    ecx, ecx
0x6A8894: jz      short loc_6A88AE
0x6A8896: call    MagicCaster_GetParentActor
0x6A889B: fldz
0x6A889D: push    ecx
0x6A889E: fstp    [esp+8+var_8]; int
0x6A88A1: push    eax; int
0x6A88A2: mov     ecx, edi; int
0x6A88A4: call    Actor_Kill
0x6A88A9: pop     edi
0x6A88AA: pop     esi
0x6A88AB: retn    4
0x6A88AE: fldz
0x6A88B0: push    ecx
0x6A88B1: xor     eax, eax
0x6A88B3: fstp    [esp+8+var_8]; int
0x6A88B6: push    eax; int
0x6A88B7: mov     ecx, edi; int
0x6A88B9: call    Actor_Kill
