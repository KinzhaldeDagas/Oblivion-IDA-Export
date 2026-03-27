0x92AD10: mov     edx, [ecx+10h]
0x92AD13: mov     eax, [esp+arg_0]
0x92AD17: push    esi
0x92AD18: cmp     eax, [edx+18h]
0x92AD1B: jnb     short loc_92AD2C
0x92AD1D: mov     esi, [edx+14h]
0x92AD20: mov     eax, [esi+eax*4]
0x92AD23: mov     edx, [edx+8]
0x92AD26: mov     eax, [edx+eax*4+4]
0x92AD2A: jmp     short loc_92AD3A
0x92AD2C: mov     edx, [ecx+10h]
0x92AD2F: mov     esi, [edx+18h]
0x92AD32: mov     edx, [edx+20h]
0x92AD35: sub     eax, esi
0x92AD37: mov     eax, [edx+eax*4]
0x92AD3A: mov     ecx, [ecx+14h]
0x92AD3D: mov     edx, [ecx]
0x92AD3F: pop     esi
0x92AD40: mov     [esp+arg_0], eax
0x92AD44: jmp     dword ptr [edx+2Ch]
