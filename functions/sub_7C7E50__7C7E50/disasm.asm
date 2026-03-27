0x7C7E50: push    esi
0x7C7E51: push    edi
0x7C7E52: mov     edi, ecx
0x7C7E54: mov     esi, [edi+0E8h]
0x7C7E5A: test    esi, esi
0x7C7E5C: jz      short loc_7C7E77
0x7C7E5E: mov     edi, edi
0x7C7E60: lea     eax, [esi+8]
0x7C7E63: mov     eax, [eax]
0x7C7E65: test    eax, eax
0x7C7E67: mov     esi, [esi]
0x7C7E69: jz      short loc_7C7E73
0x7C7E6B: push    eax
0x7C7E6C: mov     ecx, edi
0x7C7E6E: call    sub_7C77C0
0x7C7E73: test    esi, esi
0x7C7E75: jnz     short loc_7C7E60
0x7C7E77: lea     ecx, [edi+0E4h]
0x7C7E7D: call    NiTPointerList__FreeAllNodes
0x7C7E82: lea     ecx, [edi+0F4h]
0x7C7E88: call    NiTPointerList__FreeAllNodes
0x7C7E8D: mov     dword ptr [edi+108h], 0
0x7C7E97: mov     dword ptr [edi+10Ch], 0
0x7C7EA1: mov     ecx, edi
0x7C7EA3: pop     edi
0x7C7EA4: pop     esi
0x7C7EA5: jmp     sub_7C7880
