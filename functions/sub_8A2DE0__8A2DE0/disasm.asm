0x8A2DE0: push    ebp
0x8A2DE1: mov     ebp, esp
0x8A2DE3: and     esp, 0FFFFFFF0h
0x8A2DE6: push    ecx
0x8A2DE7: push    ebx
0x8A2DE8: mov     ebx, [ebp+arg_0]
0x8A2DEB: push    esi
0x8A2DEC: push    edi
0x8A2DED: push    ebx
0x8A2DEE: mov     esi, ecx
0x8A2DF0: call    sub_89F580
0x8A2DF5: cmp     dword ptr [esi+8], 0
0x8A2DF9: jz      loc_8A2E9F
0x8A2DFF: mov     ecx, esi
0x8A2E01: call    sub_89F570
0x8A2E06: mov     ecx, [esi+8]
0x8A2E09: lea     eax, [ebx+20h]
0x8A2E0C: push    eax
0x8A2E0D: call    sub_8AA1A0
0x8A2E12: mov     ecx, esi
0x8A2E14: call    sub_89F570
0x8A2E19: mov     ecx, [esi+8]
0x8A2E1C: test    ecx, ecx
0x8A2E1E: jz      short loc_8A2E79
0x8A2E20: call    sub_8A98D0
0x8A2E25: mov     edi, eax
0x8A2E27: test    edi, edi
0x8A2E29: jz      short loc_8A2E79
0x8A2E2B: mov     ecx, edi
0x8A2E2D: call    sub_89DA90
0x8A2E32: fstp    dword ptr [ebx+0B0h]
0x8A2E38: movaps  xmm0, xmmword ptr [edi+90h]
0x8A2E3F: movaps  xmmword ptr [ebx+0A0h], xmm0
0x8A2E46: fld     dword ptr [edi+0C8h]
0x8A2E4C: fstp    dword ptr [ebx+0B4h]
0x8A2E52: lea     eax, [ebx+70h]
0x8A2E55: fld     dword ptr [edi+0CCh]
0x8A2E5B: push    eax
0x8A2E5C: fstp    dword ptr [ebx+0B8h]
0x8A2E62: mov     edx, [edi]
0x8A2E64: mov     edx, [edx+28h]
0x8A2E67: mov     ecx, edi
0x8A2E69: call    edx
0x8A2E6B: movaps  xmm0, xmmword ptr [edi+90h]
0x8A2E72: movaps  xmmword ptr [ebx+0A0h], xmm0
0x8A2E79: mov     eax, [esi+8]
0x8A2E7C: test    eax, eax
0x8A2E7E: jz      short loc_8A2E9F
0x8A2E80: add     eax, 14h
0x8A2E83: jz      short loc_8A2E9F
0x8A2E85: mov     ecx, esi
0x8A2E87: call    sub_4D6A70
0x8A2E8C: fstp    dword ptr [ebx+0C4h]
0x8A2E92: mov     ecx, esi
0x8A2E94: call    sub_8A2D20
0x8A2E99: fstp    dword ptr [ebx+0C8h]
0x8A2E9F: pop     edi
0x8A2EA0: pop     esi
0x8A2EA1: pop     ebx
0x8A2EA2: mov     esp, ebp
0x8A2EA4: pop     ebp
0x8A2EA5: retn    4
