0x6D6870: push    esi
0x6D6871: push    edi
0x6D6872: mov     edi, [esp+8+arg_0]
0x6D6876: push    edi
0x6D6877: mov     esi, ecx
0x6D6879: call    sub_6EC2E0
0x6D687E: test    al, al
0x6D6880: jnz     short loc_6D6889
0x6D6882: pop     edi
0x6D6883: xor     al, al
0x6D6885: pop     esi
0x6D6886: retn    4
0x6D6889: lea     eax, [edi+0Ch]
0x6D688C: push    eax
0x6D688D: lea     ecx, [esi+0Ch]
0x6D6890: call    sub_6CE450
0x6D6895: test    al, al
0x6D6897: jz      short loc_6D6882
0x6D6899: mov     ecx, [esi+2Ch]
0x6D689C: test    ecx, ecx
0x6D689E: jz      short loc_6D68AA
0x6D68A0: cmp     dword ptr [edi+2Ch], 0
0x6D68A4: jz      short loc_6D6882
0x6D68A6: test    ecx, ecx
0x6D68A8: jnz     short loc_6D68B4
0x6D68AA: cmp     dword ptr [edi+2Ch], 0
0x6D68AE: jnz     short loc_6D6882
0x6D68B0: test    ecx, ecx
0x6D68B2: jz      short loc_6D68C3
0x6D68B4: mov     edi, [edi+2Ch]
0x6D68B7: mov     edx, [ecx]
0x6D68B9: mov     eax, [edx+2Ch]
0x6D68BC: push    edi
0x6D68BD: call    eax
0x6D68BF: test    al, al
0x6D68C1: jz      short loc_6D6882
0x6D68C3: pop     edi
0x6D68C4: mov     al, 1
0x6D68C6: pop     esi
0x6D68C7: retn    4
