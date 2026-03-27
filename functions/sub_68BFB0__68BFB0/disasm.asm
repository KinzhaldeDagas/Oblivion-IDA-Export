0x68BFB0: mov     eax, [esp+arg_0]
0x68BFB4: push    ebx
0x68BFB5: push    esi
0x68BFB6: push    edi
0x68BFB7: mov     edi, ecx
0x68BFB9: mov     ecx, [esp+0Ch+arg_4]
0x68BFBD: mov     dword ptr [eax], 0
0x68BFC3: mov     dword ptr [ecx], 0
0x68BFC9: mov     esi, [edi]
0x68BFCB: xor     ebx, ebx
0x68BFCD: test    esi, esi
0x68BFCF: jz      short loc_68BFF0
0x68BFD1: push    ebp
0x68BFD2: mov     ebp, [edi+4]
0x68BFD5: mov     ecx, esi
0x68BFD7: call    NiDX92DBufferData__GetSurfaceData
0x68BFDC: cmp     eax, ebp
0x68BFDE: jz      short loc_68BFEF
0x68BFE0: mov     ecx, esi
0x68BFE2: mov     ebx, esi
0x68BFE4: call    NiDX92DBufferData__GetSurfaceData
0x68BFE9: mov     esi, eax
0x68BFEB: test    esi, esi
0x68BFED: jnz     short loc_68BFD2
0x68BFEF: pop     ebp
0x68BFF0: xor     al, al
0x68BFF2: test    esi, esi
0x68BFF4: jz      short loc_68C004
0x68BFF6: mov     edx, [esp+0Ch+arg_0]
0x68BFFA: mov     eax, [esp+0Ch+arg_4]
0x68BFFE: mov     [edx], ebx
0x68C000: mov     [eax], esi
0x68C002: mov     al, 1
0x68C004: pop     edi
0x68C005: pop     esi
0x68C006: pop     ebx
0x68C007: retn    8
