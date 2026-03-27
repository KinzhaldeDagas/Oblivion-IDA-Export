0x496DF0: push    ebx
0x496DF1: mov     ebx, [esp+4+arg_0]
0x496DF5: push    esi
0x496DF6: push    edi
0x496DF7: mov     edi, ecx
0x496DF9: mov     eax, [edi]
0x496DFB: mov     edx, [eax+4]
0x496DFE: push    ebx
0x496DFF: call    edx
0x496E01: mov     ecx, [edi+8]
0x496E04: mov     esi, [ecx+eax*4]
0x496E07: test    esi, esi
0x496E09: jz      short loc_496E28
0x496E0B: jmp     short loc_496E10
0x496E0D: align 10h
0x496E10: mov     eax, [esi+4]
0x496E13: mov     edx, [edi]
0x496E15: mov     edx, [edx+8]
0x496E18: push    eax
0x496E19: push    ebx
0x496E1A: mov     ecx, edi
0x496E1C: call    edx
0x496E1E: test    al, al
0x496E20: jnz     short loc_496E30
0x496E22: mov     esi, [esi]
0x496E24: test    esi, esi
0x496E26: jnz     short loc_496E10
0x496E28: pop     edi
0x496E29: pop     esi
0x496E2A: xor     al, al
0x496E2C: pop     ebx
0x496E2D: retn    8
0x496E30: mov     ecx, [esi+8]
0x496E33: mov     eax, [esp+0Ch+arg_4]
0x496E37: mov     [eax], ecx
0x496E39: mov     edx, [esi+0Ch]
0x496E3C: pop     edi
0x496E3D: pop     esi
0x496E3E: mov     [eax+4], edx
0x496E41: mov     al, 1
0x496E43: pop     ebx
0x496E44: retn    8
