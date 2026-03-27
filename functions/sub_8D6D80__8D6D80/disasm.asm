0x8D6D80: push    ebx
0x8D6D81: mov     ebx, [esp+4+arg_0]
0x8D6D85: push    ebp
0x8D6D86: push    esi
0x8D6D87: mov     esi, [esp+0Ch+arg_8]
0x8D6D8B: push    edi
0x8D6D8C: mov     edi, [esp+10h+arg_4]
0x8D6D90: mov     dword ptr [esi+3034h], 7F7FFFFFh
0x8D6D9A: mov     dword ptr [esi+3040h], 0
0x8D6DA4: lea     ebp, [esi+30h]
0x8D6DA7: mov     [esi], ebp
0x8D6DA9: mov     eax, [edi]
0x8D6DAB: lea     ecx, [eax+1A50h]
0x8D6DB1: mov     [edi+28h], ecx
0x8D6DB4: movsx   edx, byte ptr [ebx+8]
0x8D6DB8: imul    edx, 3Ch ; '<'
0x8D6DBB: mov     al, [edx+eax+1A24h]
0x8D6DC2: push    esi
0x8D6DC3: push    edi
0x8D6DC4: push    ebx
0x8D6DC5: mov     [edi+0Ch], al
0x8D6DC8: call    sub_8E6D10
0x8D6DCD: mov     ecx, ds:0BA7D98h
0x8D6DD3: mov     edx, [ecx+14h]
0x8D6DD6: mov     eax, [ecx+28h]
0x8D6DD9: add     eax, edx
0x8D6DDB: mov     edx, [ecx+8]
0x8D6DDE: add     esp, 0Ch
0x8D6DE1: cmp     edx, eax
0x8D6DE3: jle     short loc_8D6DED
0x8D6DE5: sub     edx, eax
0x8D6DE7: mov     [esp+10h+arg_8], edx
0x8D6DEB: jnz     short loc_8D6DFA
0x8D6DED: mov     dword ptr [ecx+4], 1
0x8D6DF4: mov     ecx, ds:0BA7D98h
0x8D6DFA: cmp     dword ptr [ecx+4], 1
0x8D6DFE: jz      short loc_8D6E16
0x8D6E00: cmp     [esi], ebp
0x8D6E02: jz      short loc_8D6E16
0x8D6E04: mov     eax, [ebx+18h]
0x8D6E07: mov     ecx, [ebx+10h]
0x8D6E0A: mov     edx, [ecx]
0x8D6E0C: push    esi
0x8D6E0D: push    edi
0x8D6E0E: push    eax
0x8D6E0F: mov     eax, [ebx+14h]
0x8D6E12: push    eax
0x8D6E13: call    dword ptr [edx+14h]
0x8D6E16: pop     edi
0x8D6E17: pop     esi
0x8D6E18: pop     ebp
0x8D6E19: pop     ebx
0x8D6E1A: retn    0Ch
