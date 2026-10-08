0x782FE0: mov     edx, [esp+boolCount]; Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetVertexShaderConstantB (device vtable slot +0x188).
0x782FE4: mov     eax, [ecx+0FF8h]
0x782FEA: mov     ecx, [eax]
0x782FEC: push    edx
0x782FED: mov     edx, [esp+4+constantData]
0x782FF1: push    edx
0x782FF2: mov     edx, [esp+8+startRegister]
0x782FF6: push    edx
0x782FF7: push    eax
0x782FF8: mov     eax, [ecx+188h]
0x782FFE: call    eax
0x783000: xor     ecx, ecx
0x783002: test    eax, eax
0x783004: setnl   cl
0x783007: mov     al, cl
0x783009: retn    10h
