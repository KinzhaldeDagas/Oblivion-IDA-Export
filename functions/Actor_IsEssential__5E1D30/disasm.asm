0x5E1D30: push    ebx
0x5E1D31: push    esi
0x5E1D32: mov     esi, ecx
0x5E1D34: mov     eax, [esi]
0x5E1D36: mov     edx, [eax+170h]
0x5E1D3C: push    edi
0x5E1D3D: xor     ebx, ebx
0x5E1D3F: call    edx
0x5E1D41: mov     edi, eax
0x5E1D43: test    edi, edi
0x5E1D45: jz      short loc_5E1D59
0x5E1D47: mov     eax, [esi]
0x5E1D49: mov     edx, [eax+190h]
0x5E1D4F: mov     ecx, esi
0x5E1D51: call    edx
0x5E1D53: test    al, al
0x5E1D55: jz      short loc_5E1D59
0x5E1D57: mov     ebx, edi
0x5E1D59: mov     eax, [ebx+28h]
0x5E1D5C: pop     edi
0x5E1D5D: shr     eax, 1
0x5E1D5F: pop     esi
0x5E1D60: and     al, 1
0x5E1D62: pop     ebx
0x5E1D63: retn
