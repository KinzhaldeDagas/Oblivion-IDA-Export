0x42BDE0: mov     ecx, OBSE_g_FileFinder
0x42BDE6: test    ecx, ecx
0x42BDE8: jz      short loc_42BE06
0x42BDEA: mov     edx, [esp+arg_C]
0x42BDEE: mov     eax, [ecx]
0x42BDF0: mov     eax, [eax+4]
0x42BDF3: push    edx
0x42BDF4: mov     edx, [esp+4+arg_8]
0x42BDF8: push    edx
0x42BDF9: mov     edx, [esp+8+arg_4]
0x42BDFD: push    edx
0x42BDFE: mov     edx, [esp+0Ch+arg_0]
0x42BE02: push    edx
0x42BE03: call    eax
0x42BE05: retn
0x42BE06: xor     eax, eax
0x42BE08: retn
