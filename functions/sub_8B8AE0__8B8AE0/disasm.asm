0x8B8AE0: push    esi
0x8B8AE1: push    edi
0x8B8AE2: mov     edi, [esp+8+arg_0]
0x8B8AE6: cmp     dword ptr [edi+4], 1
0x8B8AEA: mov     esi, ecx
0x8B8AEC: jnz     short loc_8B8AF9
0x8B8AEE: mov     eax, [esp+8+arg_4]
0x8B8AF2: mov     ecx, [eax+4]
0x8B8AF5: test    ecx, ecx
0x8B8AF7: jz      short loc_8B8B00
0x8B8AF9: pop     edi
0x8B8AFA: xor     eax, eax
0x8B8AFC: pop     esi
0x8B8AFD: retn    8
0x8B8B00: mov     ecx, ds:0BA7D98h
0x8B8B06: mov     edx, [ecx]
0x8B8B08: push    26h ; '&'
0x8B8B0A: push    50h ; 'P'
0x8B8B0C: call    dword ptr [edx+10h]
0x8B8B0F: mov     word ptr [eax+4], 50h ; 'P'
0x8B8B15: mov     ecx, [edi]
0x8B8B17: mov     edx, [ecx]
0x8B8B19: push    edx
0x8B8B1A: mov     ecx, eax
0x8B8B1C: call    sub_8B8970
0x8B8B21: movaps  xmm0, xmmword ptr [esi+20h]
0x8B8B25: movaps  xmmword ptr [eax+20h], xmm0
0x8B8B29: movaps  xmm0, xmmword ptr [esi+30h]
0x8B8B2D: movaps  xmmword ptr [eax+30h], xmm0
0x8B8B31: mov     ecx, [esi+40h]
0x8B8B34: mov     [eax+40h], ecx
0x8B8B37: mov     edx, [esi+44h]
0x8B8B3A: mov     [eax+44h], edx
0x8B8B3D: mov     ecx, [esi+48h]
0x8B8B40: mov     [eax+48h], ecx
0x8B8B43: mov     edx, [esi+4Ch]
0x8B8B46: mov     [eax+4Ch], edx
0x8B8B49: mov     ecx, [esi+10h]
0x8B8B4C: pop     edi
0x8B8B4D: mov     [eax+10h], ecx
0x8B8B50: pop     esi
0x8B8B51: retn    8
