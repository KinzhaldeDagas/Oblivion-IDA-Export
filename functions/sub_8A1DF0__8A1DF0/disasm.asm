0x8A1DF0: push    ecx
0x8A1DF1: push    ebx
0x8A1DF2: push    esi
0x8A1DF3: mov     esi, ecx
0x8A1DF5: mov     eax, [esi]
0x8A1DF7: mov     edx, [eax+74h]
0x8A1DFA: push    edi
0x8A1DFB: lea     ecx, [esp+10h+var_1]
0x8A1DFF: push    ecx
0x8A1E00: mov     ecx, esi
0x8A1E02: call    edx
0x8A1E04: mov     ebx, [esp+10h+arg_0]
0x8A1E08: mov     edi, eax
0x8A1E0A: test    edi, edi
0x8A1E0C: jz      short loc_8A1E33
0x8A1E0E: mov     ecx, ebx
0x8A1E10: call    sub_7124A0
0x8A1E15: test    eax, eax
0x8A1E17: jz      short loc_8A1E2E
0x8A1E19: mov     eax, [eax+8]
0x8A1E1C: push    ebx
0x8A1E1D: mov     ecx, esi
0x8A1E1F: mov     [edi+4], eax
0x8A1E22: call    sub_8A2600
0x8A1E27: pop     edi
0x8A1E28: pop     esi
0x8A1E29: pop     ebx
0x8A1E2A: pop     ecx
0x8A1E2B: retn    4
0x8A1E2E: xor     eax, eax
0x8A1E30: mov     [edi+4], eax
0x8A1E33: push    ebx
0x8A1E34: mov     ecx, esi
0x8A1E36: call    sub_8A2600
0x8A1E3B: pop     edi
0x8A1E3C: pop     esi
0x8A1E3D: pop     ebx
0x8A1E3E: pop     ecx
0x8A1E3F: retn    4
