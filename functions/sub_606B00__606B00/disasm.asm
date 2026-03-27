0x606B00: push    esi
0x606B01: mov     esi, [ecx+3Ch]
0x606B04: push    edi
0x606B05: mov     edi, [esp+8+arg_0]
0x606B09: test    edi, edi
0x606B0B: jz      short loc_606B48
0x606B0D: cmp     dword ptr [esi], 0
0x606B10: jz      short loc_606B46
0x606B12: push    8; Size
0x606B14: call    FormHeapAlloc
0x606B19: add     esp, 4
0x606B1C: test    eax, eax
0x606B1E: jz      short loc_606B3B
0x606B20: mov     ecx, [esi]
0x606B22: mov     [eax], ecx
0x606B24: mov     dword ptr [eax+4], 0
0x606B2B: mov     edx, [esi+4]
0x606B2E: mov     [eax+4], edx
0x606B31: mov     [esi], edi
0x606B33: pop     edi
0x606B34: mov     [esi+4], eax
0x606B37: pop     esi
0x606B38: retn    4
0x606B3B: mov     edx, [esi+4]
0x606B3E: xor     eax, eax
0x606B40: mov     [eax+4], edx
0x606B43: mov     [esi+4], eax
0x606B46: mov     [esi], edi
0x606B48: pop     edi
0x606B49: pop     esi
0x606B4A: retn    4
