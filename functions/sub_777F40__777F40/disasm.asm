0x777F40: push    esi
0x777F41: mov     esi, ecx
0x777F43: mov     eax, [esi+30h]
0x777F46: test    eax, eax
0x777F48: mov     dword ptr [esi+2Ch], 0
0x777F4F: jz      short loc_777F60
0x777F51: mov     ecx, [eax]
0x777F53: mov     edx, [ecx+8]
0x777F56: push    eax
0x777F57: call    edx
0x777F59: mov     dword ptr [esi+30h], 0
0x777F60: pop     esi
0x777F61: retn
