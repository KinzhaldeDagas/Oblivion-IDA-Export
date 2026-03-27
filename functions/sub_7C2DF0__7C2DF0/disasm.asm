0x7C2DF0: mov     eax, [esp+arg_4]
0x7C2DF4: push    ebx
0x7C2DF5: mov     ebx, [esp+4+arg_0]
0x7C2DF9: push    ebp
0x7C2DFA: push    esi
0x7C2DFB: push    edi
0x7C2DFC: push    eax
0x7C2DFD: push    ebx
0x7C2DFE: mov     esi, ecx
0x7C2E00: call    sub_7ECB10
0x7C2E05: mov     edi, [ebx+0A0h]
0x7C2E0B: cmp     edi, [esi+0A0h]
0x7C2E11: mov     ebp, ds:0A2807Ch
0x7C2E17: jz      short loc_7C2E4F
0x7C2E19: test    edi, edi
0x7C2E1B: jz      short loc_7C2E35
0x7C2E1D: lea     ecx, [edi+4]
0x7C2E20: push    ecx; lpAddend
0x7C2E21: call    ebp ; InterlockedDecrement
0x7C2E23: test    eax, eax
0x7C2E25: jnz     short loc_7C2E35
0x7C2E27: test    edi, edi
0x7C2E29: jz      short loc_7C2E35
0x7C2E2B: mov     edx, [edi]
0x7C2E2D: mov     eax, [edx]
0x7C2E2F: push    1
0x7C2E31: mov     ecx, edi
0x7C2E33: call    eax
0x7C2E35: mov     eax, [esi+0A0h]
0x7C2E3B: test    eax, eax
0x7C2E3D: mov     [ebx+0A0h], eax
0x7C2E43: jz      short loc_7C2E4F
0x7C2E45: add     eax, 4
0x7C2E48: push    eax; lpAddend
0x7C2E49: call    dword ptr ds:0A28078h
0x7C2E4F: mov     edi, [ebx+0A4h]
0x7C2E55: cmp     edi, [esi+0A4h]
0x7C2E5B: jz      short loc_7C2E93
0x7C2E5D: test    edi, edi
0x7C2E5F: jz      short loc_7C2E79
0x7C2E61: lea     ecx, [edi+4]
0x7C2E64: push    ecx; lpAddend
0x7C2E65: call    ebp ; InterlockedDecrement
0x7C2E67: test    eax, eax
0x7C2E69: jnz     short loc_7C2E79
0x7C2E6B: test    edi, edi
0x7C2E6D: jz      short loc_7C2E79
0x7C2E6F: mov     edx, [edi]
0x7C2E71: mov     eax, [edx]
0x7C2E73: push    1
0x7C2E75: mov     ecx, edi
0x7C2E77: call    eax
0x7C2E79: mov     eax, [esi+0A4h]
0x7C2E7F: test    eax, eax
0x7C2E81: mov     [ebx+0A4h], eax
0x7C2E87: jz      short loc_7C2E93
0x7C2E89: add     eax, 4
0x7C2E8C: push    eax; lpAddend
0x7C2E8D: call    dword ptr ds:0A28078h
0x7C2E93: mov     ecx, [esi+0A8h]
0x7C2E99: mov     [ebx+0A8h], ecx
0x7C2E9F: mov     edx, [esi+0ACh]
0x7C2EA5: pop     edi
0x7C2EA6: mov     [ebx+0ACh], edx
0x7C2EAC: mov     eax, [esi+9Ch]
0x7C2EB2: pop     esi
0x7C2EB3: pop     ebp
0x7C2EB4: mov     [ebx+9Ch], eax
0x7C2EBA: pop     ebx
0x7C2EBB: retn    8
