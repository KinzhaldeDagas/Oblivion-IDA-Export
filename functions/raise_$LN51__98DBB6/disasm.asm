0x98DBB6: cmp     [ebp-1Ch], eax
0x98DBB9: jz      short loc_98DBC2
0x98DBBB: push    eax
0x98DBBC: call    __lock
0x98DBC1: pop     ecx
0x98DBC2: xor     eax, eax
0x98DBC4: mov     [ebp-4], eax
0x98DBC7: cmp     ebx, 8
0x98DBCA: jz      short loc_98DBD6
0x98DBCC: cmp     ebx, 0Bh
0x98DBCF: jz      short loc_98DBD6
0x98DBD1: cmp     ebx, 4
0x98DBD4: jnz     short loc_98DBF1
0x98DBD6: mov     ecx, [edi+60h]
0x98DBD9: mov     [ebp-2Ch], ecx
0x98DBDC: mov     [edi+60h], eax
0x98DBDF: cmp     ebx, 8
0x98DBE2: jnz     short loc_98DC24
0x98DBE4: mov     ecx, [edi+64h]
0x98DBE7: mov     [ebp-30h], ecx
0x98DBEA: mov     dword ptr [edi+64h], 8Ch ; 'Œ'
0x98DBF1: cmp     ebx, 8
0x98DBF4: jnz     short loc_98DC24
0x98DBF6: mov     ecx, dword_B31340
0x98DBFC: mov     [ebp-24h], ecx
0x98DBFF: mov     ecx, dword_B31344
0x98DC05: mov     edx, dword_B31340
0x98DC0B: add     ecx, edx
0x98DC0D: cmp     [ebp-24h], ecx
0x98DC10: jge     short loc_98DC2B
0x98DC12: mov     ecx, [ebp-24h]
0x98DC15: imul    ecx, 0Ch
0x98DC18: mov     edx, [edi+5Ch]
0x98DC1B: mov     [ecx+edx+8], eax
0x98DC1F: inc     dword ptr [ebp-24h]
0x98DC22: jmp     short loc_98DBFF
0x98DC24: call    __encoded_null
0x98DC29: mov     [esi], eax
0x98DC2B: mov     dword ptr [ebp-4], 0FFFFFFFEh
0x98DC32: call    _raise___$LN37_0
