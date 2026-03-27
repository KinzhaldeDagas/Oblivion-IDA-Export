0x91E700: mov     ecx, ds:0BA7D98h
0x91E706: mov     eax, [ecx]
0x91E708: push    0Eh
0x91E70A: push    38h ; '8'
0x91E70C: call    dword ptr [eax+10h]
0x91E70F: mov     ecx, [esp+arg_0]
0x91E713: push    ecx
0x91E714: mov     ecx, eax
0x91E716: mov     word ptr [eax+4], 38h ; '8'
0x91E71C: call    sub_91E3F0
0x91E721: test    eax, eax
0x91E723: jz      short loc_91E729
0x91E725: add     eax, 8
0x91E728: retn
0x91E729: xor     eax, eax
0x91E72B: retn
