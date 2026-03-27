0x933D80: push    esi
0x933D81: push    edi
0x933D82: mov     edi, ecx
0x933D84: lea     esi, [edi+4]
0x933D87: mov     dword ptr [edi], 0
0x933D8D: lea     eax, [esi+0Ch]
0x933D90: mov     [esi], eax
0x933D92: mov     dword ptr [esi+4], 0
0x933D99: mov     dword ptr [esi+8], 80000080h
0x933DA0: mov     eax, [esi+8]
0x933DA3: and     eax, 3FFFFFFFh
0x933DA8: jge     short loc_933DC2
0x933DAA: add     eax, eax
0x933DAC: xor     ecx, ecx
0x933DAE: test    eax, eax
0x933DB0: setle   cl
0x933DB3: push    8
0x933DB5: dec     ecx
0x933DB6: and     eax, ecx
0x933DB8: push    eax
0x933DB9: push    esi
0x933DBA: call    sub_8A6E40
0x933DBF: add     esp, 0Ch
0x933DC2: mov     eax, edi
0x933DC4: pop     edi
0x933DC5: mov     dword ptr [esi+4], 0
0x933DCC: pop     esi
0x933DCD: retn
