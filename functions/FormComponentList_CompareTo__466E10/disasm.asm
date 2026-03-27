0x466E10: push    ebx
0x466E11: mov     ebx, [esp+4+arg_0]
0x466E15: test    ebx, ebx
0x466E17: jnz     short loc_466E1F
0x466E19: mov     al, 1
0x466E1B: pop     ebx
0x466E1C: retn    4
0x466E1F: push    esi
0x466E20: push    edi
0x466E21: xor     edi, edi
0x466E23: mov     esi, ecx
0x466E25: sub     ebx, ecx
0x466E27: cmp     dword ptr [esi], 0
0x466E2A: jz      short loc_466E3D
0x466E2C: mov     ecx, [esi]
0x466E2E: mov     eax, [ecx]
0x466E30: mov     edx, [ebx+esi]
0x466E33: mov     eax, [eax+0Ch]
0x466E36: push    edx
0x466E37: call    eax
0x466E39: test    al, al
0x466E3B: jmp     short loc_466E41
0x466E3D: cmp     dword ptr [ebx+esi], 0
0x466E41: jnz     short loc_466E56
0x466E43: add     edi, 1
0x466E46: add     esi, 4
0x466E49: cmp     edi, 1Ah
0x466E4C: jl      short loc_466E27
0x466E4E: pop     edi
0x466E4F: pop     esi
0x466E50: xor     al, al
0x466E52: pop     ebx
0x466E53: retn    4
0x466E56: pop     edi
0x466E57: pop     esi
0x466E58: mov     al, 1
0x466E5A: pop     ebx
0x466E5B: retn    4
