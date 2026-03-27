0x7AEC20: push    esi
0x7AEC21: mov     esi, ecx
0x7AEC23: mov     ecx, [esi]
0x7AEC25: push    edi
0x7AEC26: mov     edi, [esp+8+arg_0]
0x7AEC2A: cmp     ecx, edi
0x7AEC2C: jz      short loc_7AEC4E
0x7AEC2E: test    ecx, ecx
0x7AEC30: jz      short loc_7AEC3D
0x7AEC32: add     dword ptr [ecx+5Ch], 0FFFFFFFFh
0x7AEC36: jnz     short loc_7AEC3D
0x7AEC38: call    sub_772560
0x7AEC3D: test    edi, edi
0x7AEC3F: mov     [esi], edi
0x7AEC41: mov     eax, esi
0x7AEC43: jz      short loc_7AEC50
0x7AEC45: add     dword ptr [edi+5Ch], 1
0x7AEC49: pop     edi
0x7AEC4A: pop     esi
0x7AEC4B: retn    4
0x7AEC4E: mov     eax, esi
0x7AEC50: pop     edi
0x7AEC51: pop     esi
0x7AEC52: retn    4
