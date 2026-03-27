0x6C23C0: fld1
0x6C23C2: fcomp   [esp+arg_0]
0x6C23C6: fnstsw  ax
0x6C23C8: test    ah, 41h
0x6C23CB: jnz     short loc_6C23DB
0x6C23CD: mov     eax, [esp+arg_4]
0x6C23D1: fld     dword ptr [eax+4]
0x6C23D4: mov     ecx, [esp+arg_C]
0x6C23D8: fstp    dword ptr [ecx]
0x6C23DA: retn
0x6C23DB: mov     edx, [esp+arg_8]
0x6C23DF: fld     dword ptr [edx+4]
0x6C23E2: mov     eax, [esp+arg_C]
0x6C23E6: fstp    dword ptr [eax]
0x6C23E8: retn
