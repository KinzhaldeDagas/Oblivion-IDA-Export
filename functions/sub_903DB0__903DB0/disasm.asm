0x903DB0: mov     eax, [esp+arg_8]
0x903DB4: mov     edx, [esp+arg_0]
0x903DB8: push    esi
0x903DB9: mov     esi, ecx
0x903DBB: mov     [esi+8], eax
0x903DBE: mov     word ptr [esi+6], 1
0x903DC4: mov     dword ptr [esi], offset off_A9BD10
0x903DCA: mov     ecx, [edx+0Ch]
0x903DCD: test    ecx, ecx
0x903DCF: push    edi
0x903DD0: mov     eax, edx
0x903DD2: jz      short loc_903DDD
0x903DD4: mov     eax, ecx
0x903DD6: mov     ecx, [eax+0Ch]
0x903DD9: test    ecx, ecx
0x903DDB: jnz     short loc_903DD4
0x903DDD: mov     edi, [esp+8+arg_4]
0x903DE1: mov     [esi+0Ch], eax
0x903DE4: mov     ecx, [edi+0Ch]
0x903DE7: test    ecx, ecx
0x903DE9: mov     eax, edi
0x903DEB: jz      short loc_903DF9
0x903DED: lea     ecx, [ecx+0]
0x903DF0: mov     eax, ecx
0x903DF2: mov     ecx, [eax+0Ch]
0x903DF5: test    ecx, ecx
0x903DF7: jnz     short loc_903DF0
0x903DF9: mov     [esi+10h], eax
0x903DFC: mov     ecx, [edx]
0x903DFE: mov     edx, [ecx]
0x903E00: call    dword ptr [edx+8]
0x903E03: mov     [esi+1Ch], eax
0x903E06: mov     ecx, [edi]
0x903E08: mov     eax, [ecx]
0x903E0A: call    dword ptr [eax+8]
0x903E0D: mov     [esi+20h], eax
0x903E10: pop     edi
0x903E11: mov     eax, esi
0x903E13: pop     esi
0x903E14: retn    0Ch
