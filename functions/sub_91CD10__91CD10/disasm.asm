0x91CD10: push    esi
0x91CD11: mov     esi, [ecx+0Ch]
0x91CD14: xor     eax, eax
0x91CD16: test    esi, esi
0x91CD18: jle     short loc_91CD60
0x91CD1A: mov     edx, [ecx+8]
0x91CD1D: push    edi
0x91CD1E: mov     edi, [esp+8+arg_0]
0x91CD22: push    ebx
0x91CD23: cmp     [edx], edi
0x91CD25: jz      short loc_91CD35
0x91CD27: inc     eax
0x91CD28: add     edx, 4
0x91CD2B: cmp     eax, esi
0x91CD2D: jl      short loc_91CD23
0x91CD2F: pop     ebx
0x91CD30: pop     edi
0x91CD31: pop     esi
0x91CD32: retn    4
0x91CD35: test    eax, eax
0x91CD37: jl      short loc_91CD5E
0x91CD39: mov     ebx, [ecx+0Ch]
0x91CD3C: mov     edx, [ecx+8]
0x91CD3F: dec     ebx
0x91CD40: mov     [ecx+0Ch], ebx
0x91CD43: mov     esi, ebx
0x91CD45: mov     esi, [edx+esi*4]
0x91CD48: mov     [edx+eax*4], esi
0x91CD4B: mov     edx, ds:0BA8448h
0x91CD51: mov     ecx, [ecx-10h]
0x91CD54: mov     eax, [ecx]
0x91CD56: push    edx
0x91CD57: add     edi, 14h
0x91CD5A: push    edi
0x91CD5B: call    dword ptr [eax+10h]
0x91CD5E: pop     ebx
0x91CD5F: pop     edi
0x91CD60: pop     esi
0x91CD61: retn    4
