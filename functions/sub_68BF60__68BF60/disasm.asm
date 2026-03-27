0x68BF60: push    ebx
0x68BF61: mov     ebx, [esp+4+arg_4]
0x68BF65: mov     dword ptr [ebx], 0
0x68BF6B: mov     ecx, [ecx]
0x68BF6D: push    esi
0x68BF6E: xor     esi, esi
0x68BF70: test    ecx, ecx
0x68BF72: jz      short loc_68BF92
0x68BF74: push    edi
0x68BF75: mov     edi, [esp+0Ch+arg_0]
0x68BF79: lea     esp, [esp+0]
0x68BF80: cmp     ecx, edi
0x68BF82: jz      short loc_68BF91
0x68BF84: mov     esi, ecx
0x68BF86: call    NiDX92DBufferData__GetSurfaceData
0x68BF8B: mov     ecx, eax
0x68BF8D: test    ecx, ecx
0x68BF8F: jnz     short loc_68BF80
0x68BF91: pop     edi
0x68BF92: xor     al, al
0x68BF94: test    ecx, ecx
0x68BF96: jz      short loc_68BF9C
0x68BF98: mov     [ebx], esi
0x68BF9A: mov     al, 1
0x68BF9C: pop     esi
0x68BF9D: pop     ebx
0x68BF9E: retn    8
