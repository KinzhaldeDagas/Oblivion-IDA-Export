0x8A4DB0: push    ebx
0x8A4DB1: mov     ebx, ecx
0x8A4DB3: cmp     dword ptr [ebx+4], 0
0x8A4DB7: push    esi
0x8A4DB8: jz      short loc_8A4DFE
0x8A4DBA: push    ebp
0x8A4DBB: push    edi
0x8A4DBC: lea     esp, [esp+0]
0x8A4DC0: mov     edi, [ebx+4]
0x8A4DC3: test    edi, edi
0x8A4DC5: mov     ebp, [edi+4]
0x8A4DC8: jz      short loc_8A4DF5
0x8A4DCA: mov     esi, [edi]
0x8A4DCC: test    esi, esi
0x8A4DCE: jz      short loc_8A4DEC
0x8A4DD0: lea     eax, [esi+4]
0x8A4DD3: push    eax; lpAddend
0x8A4DD4: call    dword ptr ds:0A2807Ch
0x8A4DDA: test    eax, eax
0x8A4DDC: jnz     short loc_8A4DEC
0x8A4DDE: test    esi, esi
0x8A4DE0: jz      short loc_8A4DEC
0x8A4DE2: mov     edx, [esi]
0x8A4DE4: mov     eax, [edx]
0x8A4DE6: push    1
0x8A4DE8: mov     ecx, esi
0x8A4DEA: call    eax
0x8A4DEC: push    edi
0x8A4DED: call    FormHeapFree
0x8A4DF2: add     esp, 4
0x8A4DF5: test    ebp, ebp
0x8A4DF7: mov     [ebx+4], ebp
0x8A4DFA: jnz     short loc_8A4DC0
0x8A4DFC: pop     edi
0x8A4DFD: pop     ebp
0x8A4DFE: mov     esi, [ebx]
0x8A4E00: test    esi, esi
0x8A4E02: jz      short loc_8A4E26
0x8A4E04: lea     ecx, [esi+4]
0x8A4E07: push    ecx; lpAddend
0x8A4E08: call    dword ptr ds:0A2807Ch
0x8A4E0E: test    eax, eax
0x8A4E10: jnz     short loc_8A4E20
0x8A4E12: test    esi, esi
0x8A4E14: jz      short loc_8A4E20
0x8A4E16: mov     edx, [esi]
0x8A4E18: mov     eax, [edx]
0x8A4E1A: push    1
0x8A4E1C: mov     ecx, esi
0x8A4E1E: call    eax
0x8A4E20: mov     dword ptr [ebx], 0
0x8A4E26: pop     esi
0x8A4E27: pop     ebx
0x8A4E28: retn
