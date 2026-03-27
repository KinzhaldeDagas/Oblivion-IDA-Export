0x5E0DD0: push    esi
0x5E0DD1: mov     esi, ecx
0x5E0DD3: cmp     dword ptr [esi+58h], 0
0x5E0DD7: jz      short loc_5E0DFB
0x5E0DD9: mov     eax, [esi+58h]
0x5E0DDC: mov     ecx, eax
0x5E0DDE: mov     edx, [ecx]
0x5E0DE0: push    edi
0x5E0DE1: mov     edi, [eax]
0x5E0DE3: mov     eax, [edx+4CCh]
0x5E0DE9: call    eax
0x5E0DEB: mov     ecx, [esi+58h]
0x5E0DEE: mov     edx, [edi+1D8h]
0x5E0DF4: push    eax
0x5E0DF5: push    esi
0x5E0DF6: call    edx
0x5E0DF8: pop     edi
0x5E0DF9: pop     esi
0x5E0DFA: retn
0x5E0DFB: fld     dword ptr ds:0A3D8F0h
0x5E0E01: pop     esi
0x5E0E02: retn
