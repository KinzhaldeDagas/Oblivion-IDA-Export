0x8B1EE0: fld     [esp+arg_4]
0x8B1EE4: fsub    [esp+arg_8]
0x8B1EE8: fabs
0x8B1EEA: fcomp   [esp+arg_C]
0x8B1EEE: fnstsw  ax
0x8B1EF0: test    ah, 5
0x8B1EF3: mov     eax, [esp+arg_0]
0x8B1EF7: jp      short loc_8B1EFE
0x8B1EF9: mov     cl, 1
0x8B1EFB: mov     [eax], cl
0x8B1EFD: retn
0x8B1EFE: xor     cl, cl
0x8B1F00: mov     [eax], cl
0x8B1F02: retn
