0x583CF0: mov     eax, ds:0B3A6E0h
0x583CF5: mov     ecx, [eax+130h]
0x583CFB: mov     eax, [ecx+10h]
0x583CFE: test    eax, eax
0x583D00: jz      short locret_583D11
0x583D02: mov     ecx, [esp+arg_0]
0x583D06: cmp     [eax], ecx
0x583D08: jz      short loc_583D12
0x583D0A: mov     eax, [eax+10h]
0x583D0D: test    eax, eax
0x583D0F: jnz     short loc_583D06
0x583D11: retn
0x583D12: mov     ecx, [eax+10h]
0x583D15: test    ecx, ecx
0x583D17: mov     edx, [eax+0Ch]
0x583D1A: mov     [edx+10h], ecx
0x583D1D: jz      short loc_583D25
0x583D1F: mov     edx, [eax+0Ch]
0x583D22: mov     [ecx+0Ch], edx
0x583D25: cmp     dword ptr [eax+10h], 0
0x583D29: jnz     short loc_583D3D
0x583D2B: mov     ecx, ds:0B3A6E0h
0x583D31: mov     edx, [ecx+130h]
0x583D37: mov     ecx, [eax+0Ch]
0x583D3A: mov     [edx+0Ch], ecx
0x583D3D: mov     [esp+arg_0], eax
0x583D41: jmp     FormHeapFree
