0x4133E0: mov     edx, [ecx+1Ch]
0x4133E3: mov     edx, [edx+58h]
0x4133E6: shr     edx, 7
0x4133E9: xor     al, al
0x4133EB: test    dl, 1
0x4133EE: jnz     short locret_413406
0x4133F0: mov     edx, [esp+arg_0]
0x4133F4: test    edx, edx
0x4133F6: jl      short locret_413406
0x4133F8: fld     ds:flt_A30634
0x4133FE: mov     [ecx+0Ch], edx
0x413401: fstp    dword ptr [ecx+20h]
0x413404: mov     al, 1
0x413406: retn    4
