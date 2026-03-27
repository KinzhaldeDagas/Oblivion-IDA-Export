0x4B2C80: mov     ecx, ds:0B08314h
0x4B2C86: xor     eax, eax
0x4B2C88: test    ecx, ecx
0x4B2C8A: jbe     short loc_4B2C9F
0x4B2C8C: mov     edx, ds:0B08318h
0x4B2C92: cmp     dword ptr [edx+eax*4], 0
0x4B2C96: jnz     short loc_4B2CBD
0x4B2C98: add     eax, 1
0x4B2C9B: cmp     eax, ecx
0x4B2C9D: jb      short loc_4B2C92
0x4B2C9F: xor     eax, eax
0x4B2CA1: test    eax, eax
0x4B2CA3: push    esi
0x4B2CA4: mov     esi, eax
0x4B2CA6: jz      short loc_4B2D19
0x4B2CA8: push    edi
0x4B2CA9: lea     esp, [esp+0]
0x4B2CB0: mov     eax, [esi]
0x4B2CB2: test    eax, eax
0x4B2CB4: mov     edi, [esi+8]
0x4B2CB7: jz      short loc_4B2CC2
0x4B2CB9: mov     esi, eax
0x4B2CBB: jmp     short loc_4B2D00
0x4B2CBD: mov     eax, [edx+eax*4]
0x4B2CC0: jmp     short loc_4B2CA1
0x4B2CC2: mov     eax, [esi+4]
0x4B2CC5: mov     edx, ds:0B08310h
0x4B2CCB: push    eax
0x4B2CCC: mov     eax, [edx+4]
0x4B2CCF: mov     ecx, offset off_B08310
0x4B2CD4: call    eax
0x4B2CD6: mov     ecx, ds:0B08314h
0x4B2CDC: add     eax, 1
0x4B2CDF: cmp     eax, ecx
0x4B2CE1: jnb     short loc_4B2CFE
0x4B2CE3: mov     edx, ds:0B08318h
0x4B2CE9: lea     esp, [esp+0]
0x4B2CF0: mov     esi, [edx+eax*4]
0x4B2CF3: test    esi, esi
0x4B2CF5: jnz     short loc_4B2D00
0x4B2CF7: add     eax, 1
0x4B2CFA: cmp     eax, ecx
0x4B2CFC: jb      short loc_4B2CF0
0x4B2CFE: xor     esi, esi
0x4B2D00: test    edi, edi
0x4B2D02: jz      short loc_4B2D14
0x4B2D04: mov     ecx, edi
0x4B2D06: call    sub_46D450
0x4B2D0B: push    edi
0x4B2D0C: call    FormHeapFree
0x4B2D11: add     esp, 4
0x4B2D14: test    esi, esi
0x4B2D16: jnz     short loc_4B2CB0
0x4B2D18: pop     edi
0x4B2D19: mov     ecx, offset off_B08310
0x4B2D1E: pop     esi
0x4B2D1F: jmp     NiTMap_Clear
