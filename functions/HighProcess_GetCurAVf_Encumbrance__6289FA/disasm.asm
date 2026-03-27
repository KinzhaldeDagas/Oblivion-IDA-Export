0x6289FA: jnz     short HighProcess_GetCurAVf?___Paralyzed
0x6289FC: fldz
0x6289FE: fcomp   dword ptr [esi+294h]
0x628A04: fnstsw  ax
0x628A06: test    ah, 41h
0x628A09: jnz     short loc_628A24
0x628A0B: mov     eax, [esp+arg_C]
0x628A0F: mov     ecx, [esp+arg_4]
0x628A13: push    eax
0x628A14: push    0Bh
0x628A16: push    ecx
0x628A17: mov     ecx, esi
0x628A19: call    MiddleProcess_GetAVfCur
0x628A1E: fstp    dword ptr [esi+294h]
0x628A24: fld     dword ptr [esi+294h]
0x628A2A: pop     esi
0x628A2B: retn    0Ch
