0x708B00: mov     eax, [esp+arg_4]
0x708B04: push    esi
0x708B05: push    edi
0x708B06: mov     edi, [esp+8+arg_0]
0x708B0A: push    eax
0x708B0B: push    edi
0x708B0C: mov     esi, ecx
0x708B0E: call    sub_707E90
0x708B13: mov     ecx, [esi+0B4h]
0x708B19: mov     [edi+0B4h], ecx
0x708B1F: mov     edx, [esi+0B8h]
0x708B25: mov     [edi+0B8h], edx
0x708B2B: mov     al, [esi+0ACh]
0x708B31: mov     [edi+0ACh], al
0x708B37: pop     edi
0x708B38: pop     esi
0x708B39: retn    8
