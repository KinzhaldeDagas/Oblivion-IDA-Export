0x6D3AA0: mov     eax, [ecx+2Ch]
0x6D3AA3: test    eax, eax
0x6D3AA5: jz      short loc_6D3AC9
0x6D3AA7: movzx   ecx, word ptr [eax+0Ah]
0x6D3AAB: mov     edx, [esp+arg_0]
0x6D3AAF: mov     [edx], ecx
0x6D3AB1: mov     ecx, [eax+14h]
0x6D3AB4: mov     edx, [esp+arg_4]
0x6D3AB8: mov     [edx], ecx
0x6D3ABA: mov     cl, [eax+1Dh]
0x6D3ABD: mov     edx, [esp+arg_8]
0x6D3AC1: mov     [edx], cl
0x6D3AC3: mov     eax, [eax+24h]
0x6D3AC6: retn    0Ch
0x6D3AC9: mov     eax, [esp+arg_0]
0x6D3ACD: mov     ecx, [esp+arg_4]
0x6D3AD1: mov     edx, [esp+arg_8]
0x6D3AD5: mov     dword ptr [eax], 0
0x6D3ADB: mov     dword ptr [ecx], 0
0x6D3AE1: mov     byte ptr [edx], 0
0x6D3AE4: xor     eax, eax
0x6D3AE6: retn    0Ch
