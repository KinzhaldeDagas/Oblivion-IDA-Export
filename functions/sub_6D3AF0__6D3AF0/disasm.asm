0x6D3AF0: mov     eax, [ecx+2Ch]
0x6D3AF3: test    eax, eax
0x6D3AF5: jz      short loc_6D3B19
0x6D3AF7: movzx   ecx, word ptr [eax+0Ch]
0x6D3AFB: mov     edx, [esp+arg_0]
0x6D3AFF: mov     [edx], ecx
0x6D3B01: mov     ecx, [eax+18h]
0x6D3B04: mov     edx, [esp+arg_4]
0x6D3B08: mov     [edx], ecx
0x6D3B0A: mov     cl, [eax+1Eh]
0x6D3B0D: mov     edx, [esp+arg_8]
0x6D3B11: mov     [edx], cl
0x6D3B13: mov     eax, [eax+28h]
0x6D3B16: retn    0Ch
0x6D3B19: mov     eax, [esp+arg_0]
0x6D3B1D: mov     ecx, [esp+arg_4]
0x6D3B21: mov     edx, [esp+arg_8]
0x6D3B25: mov     dword ptr [eax], 0
0x6D3B2B: mov     dword ptr [ecx], 0
0x6D3B31: mov     byte ptr [edx], 0
0x6D3B34: xor     eax, eax
0x6D3B36: retn    0Ch
