0x800B30: mov     eax, ds:0B474ACh
0x800B35: test    eax, eax
0x800B37: jnz     short locret_800B62
0x800B39: cmp     [esp+arg_0], al
0x800B3D: jz      short locret_800B62
0x800B3F: mov     eax, ds:0B3F928h
0x800B44: mov     ecx, ds:0B42F50h; this
0x800B4A: push    14h; a3
0x800B4C: push    eax; a2
0x800B4D: call    BSTextureManager_GetDefaultRenderTarget
0x800B52: push    eax; a2
0x800B53: mov     ecx, offset dword_B474AC; this
0x800B58: call    NiSmartPointer_Set??
0x800B5D: mov     eax, ds:0B474ACh
0x800B62: retn
