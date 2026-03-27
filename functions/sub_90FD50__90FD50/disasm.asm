0x90FD50: push    esi
0x90FD51: push    edi
0x90FD52: mov     edi, [esp+8+arg_0]
0x90FD56: cmp     dword ptr [edi+4], 2
0x90FD5A: mov     esi, ecx
0x90FD5C: jnz     short loc_90FD69
0x90FD5E: mov     eax, [esp+8+arg_4]
0x90FD62: mov     ecx, [eax+4]
0x90FD65: test    ecx, ecx
0x90FD67: jz      short loc_90FD70
0x90FD69: pop     edi
0x90FD6A: xor     eax, eax
0x90FD6C: pop     esi
0x90FD6D: retn    8
0x90FD70: mov     ecx, ds:0BA7D98h
0x90FD76: mov     edx, [ecx]
0x90FD78: push    26h ; '&'
0x90FD7A: push    60h ; '`'
0x90FD7C: call    dword ptr [edx+10h]
0x90FD7F: mov     word ptr [eax+4], 60h ; '`'
0x90FD85: mov     edx, [esi+10h]
0x90FD88: mov     ecx, [edi]
0x90FD8A: push    edx
0x90FD8B: mov     edx, [ecx+4]
0x90FD8E: mov     ecx, [ecx]
0x90FD90: push    edx
0x90FD91: push    ecx
0x90FD92: mov     ecx, eax
0x90FD94: call    sub_90FA70
0x90FD99: movaps  xmm0, xmmword ptr [esi+30h]
0x90FD9D: movaps  xmmword ptr [eax+30h], xmm0
0x90FDA1: movaps  xmm0, xmmword ptr [esi+40h]
0x90FDA5: movaps  xmmword ptr [eax+40h], xmm0
0x90FDA9: mov     edx, [esi+50h]
0x90FDAC: mov     [eax+50h], edx
0x90FDAF: mov     ecx, [esi+54h]
0x90FDB2: mov     [eax+54h], ecx
0x90FDB5: mov     edx, [esi+58h]
0x90FDB8: mov     [eax+58h], edx
0x90FDBB: mov     cl, [esi+5Ch]
0x90FDBE: mov     [eax+5Ch], cl
0x90FDC1: mov     dl, [esi+5Dh]
0x90FDC4: pop     edi
0x90FDC5: mov     [eax+5Dh], dl
0x90FDC8: pop     esi
0x90FDC9: retn    8
