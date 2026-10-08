0x782D60: mov     edx, [esp+vector4Count]; Thin Direct3D9 render-state wrapper for IDirect3DDevice9::SetPixelShaderConstantF (device vtable slot +0x1B4).
0x782D64: mov     eax, [ecx+0FF8h]
0x782D6A: mov     ecx, [eax]
0x782D6C: push    edx
0x782D6D: mov     edx, [esp+4+constantData]
0x782D71: push    edx
0x782D72: mov     edx, [esp+8+startRegister]
0x782D76: push    edx
0x782D77: push    eax
0x782D78: mov     eax, [ecx+1B4h]
0x782D7E: call    eax
0x782D80: xor     ecx, ecx
0x782D82: test    eax, eax
0x782D84: setnl   cl
0x782D87: mov     al, cl
0x782D89: retn    10h
