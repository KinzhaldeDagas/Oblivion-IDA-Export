0x6C2710: fld1
0x6C2712: mov     ecx, [esp+arg_C]
0x6C2716: fcomp   [esp+arg_0]
0x6C271A: fnstsw  ax
0x6C271C: test    ah, 41h
0x6C271F: mov     eax, [esp+arg_4]
0x6C2723: jz      short loc_6C2729
0x6C2725: mov     eax, [esp+arg_8]
0x6C2729: mov     edx, [eax+4]
0x6C272C: mov     [ecx], edx
0x6C272E: mov     edx, [eax+8]
0x6C2731: mov     [ecx+4], edx
0x6C2734: mov     eax, [eax+0Ch]
0x6C2737: mov     [ecx+8], eax
0x6C273A: retn
