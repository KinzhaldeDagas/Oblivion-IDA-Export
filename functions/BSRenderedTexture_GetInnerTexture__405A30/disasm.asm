0x405A30: push    ecx
0x405A31: xor     edx, edx
0x405A33: test    ecx, ecx
0x405A35: push    esi
0x405A36: push    edi
0x405A37: mov     [esp+0Ch+var_4], edx
0x405A3B: jz      short loc_405A46
0x405A3D: mov     esi, [esp+0Ch+var_4]
0x405A41: lea     eax, [ecx+BSRenderedTexture.members.RenderedTexture]
0x405A44: jmp     short loc_405A55
0x405A46: xor     esi, esi
0x405A48: mov     [esp+0Ch+var_4], esi
0x405A4C: lea     eax, [esp+0Ch+var_4]
0x405A50: mov     edx, 1
0x405A55: test    dl, 1
0x405A58: mov     edi, [eax+BSRenderedTexture.vtbl]
0x405A5A: jz      short loc_405A78
0x405A5C: test    esi, esi
0x405A5E: jz      short loc_405A78
0x405A60: lea     eax, [esi+4]
0x405A63: push    eax; lpAddend
0x405A64: call    ds:InterlockedDecrement
0x405A6A: test    eax, eax
0x405A6C: jnz     short loc_405A78
0x405A6E: mov     edx, [esi]
0x405A70: mov     eax, [edx]
0x405A72: push    1
0x405A74: mov     ecx, esi
0x405A76: call    eax
0x405A78: mov     eax, edi
0x405A7A: pop     edi
0x405A7B: pop     esi
0x405A7C: pop     ecx
0x405A7D: retn
