0x5B2140: mov     eax, [esp+arg_0]
0x5B2144: test    eax, eax
0x5B2146: jz      short loc_5B2173
0x5B2148: mov     ecx, [eax+0Ch]
0x5B214B: mov     edx, [ecx+1Ch]
0x5B214E: mov     ecx, [edx+58h]
0x5B2151: shr     ecx, 8
0x5B2154: test    cl, 1
0x5B2157: jnz     short loc_5B2173
0x5B2159: fld     dword ptr [eax+18h]
0x5B215C: fabs
0x5B215E: fstp    [esp+arg_0]
0x5B2162: fld     [esp+arg_0]
0x5B2166: fstp    [esp+arg_0]
0x5B216A: fld     [esp+arg_0]
0x5B216E: jmp     Double_To_SInt32
0x5B2173: fld     dword ptr ds:0A30634h
0x5B2179: fstp    [esp+arg_0]
0x5B217D: fld     [esp+arg_0]
0x5B2181: jmp     Double_To_SInt32
