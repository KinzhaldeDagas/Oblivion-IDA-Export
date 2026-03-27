0x51FB00: push    esi
0x51FB01: push    edi
0x51FB02: mov     esi, ecx
0x51FB04: cmp     dword ptr [esi+40h], 0
0x51FB08: jnz     short loc_51FB10
0x51FB0A: cmp     dword ptr [esi+3Ch], 0
0x51FB0E: jz      short loc_51FB4D
0x51FB10: mov     edi, [esi+3Ch]
0x51FB13: test    edi, edi
0x51FB15: jz      short loc_51FB27
0x51FB17: mov     ecx, edi
0x51FB19: call    sub_51F2D0
0x51FB1E: push    edi
0x51FB1F: call    FormHeapFree
0x51FB24: add     esp, 4
0x51FB27: mov     eax, [esi+40h]
0x51FB2A: test    eax, eax
0x51FB2C: jz      short loc_51FB44
0x51FB2E: mov     ecx, [eax+4]
0x51FB31: mov     [esi+40h], ecx
0x51FB34: mov     edx, [eax]
0x51FB36: push    eax
0x51FB37: mov     [esi+3Ch], edx
0x51FB3A: call    FormHeapFree
0x51FB3F: add     esp, 4
0x51FB42: jmp     short loc_51FB04
0x51FB44: mov     dword ptr [esi+3Ch], 0
0x51FB4B: jmp     short loc_51FB04
0x51FB4D: pop     edi
0x51FB4E: pop     esi
0x51FB4F: retn
