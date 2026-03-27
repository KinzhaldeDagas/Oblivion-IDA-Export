0x4CA2A0: push    esi
0x4CA2A1: push    edi
0x4CA2A2: mov     edi, [esp+8+arg_0]
0x4CA2A6: cmp     dword ptr [edi+8], 0
0x4CA2AA: mov     esi, ecx
0x4CA2AC: jz      short loc_4CA2C0
0x4CA2AE: mov     eax, [esi]
0x4CA2B0: mov     edx, [eax+8]
0x4CA2B3: push    edi
0x4CA2B4: call    edx
0x4CA2B6: mov     eax, [esi]
0x4CA2B8: mov     edx, [eax+4]
0x4CA2BB: push    edi
0x4CA2BC: mov     ecx, esi
0x4CA2BE: call    edx
0x4CA2C0: pop     edi
0x4CA2C1: pop     esi
0x4CA2C2: retn    4
