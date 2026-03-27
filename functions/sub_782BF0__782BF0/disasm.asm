0x782BF0: mov     eax, [esp+arg_0]
0x782BF4: test    eax, eax
0x782BF6: push    esi
0x782BF7: mov     esi, ecx
0x782BF9: mov     [esi+20h], eax
0x782BFC: jz      short loc_782C34
0x782BFE: push    edi
0x782BFF: mov     edi, [eax+280h]
0x782C05: mov     eax, [esi+1Ch]
0x782C08: test    eax, eax
0x782C0A: jz      short loc_782C14
0x782C0C: mov     ecx, [eax]
0x782C0E: mov     edx, [ecx+8]
0x782C11: push    eax
0x782C12: call    edx
0x782C14: test    edi, edi
0x782C16: mov     [esi+1Ch], edi
0x782C19: jz      short loc_782C23
0x782C1B: mov     eax, [edi]
0x782C1D: mov     ecx, [eax+4]
0x782C20: push    edi
0x782C21: call    ecx
0x782C23: mov     edx, [esi+20h]
0x782C26: mov     eax, [edx+8ACh]
0x782C2C: pop     edi
0x782C2D: mov     [esi+24h], eax
0x782C30: pop     esi
0x782C31: retn    4
0x782C34: mov     eax, [esi+1Ch]
0x782C37: test    eax, eax
0x782C39: mov     dword ptr [esi+24h], 0
0x782C40: jz      short loc_782C4A
0x782C42: mov     ecx, [eax]
0x782C44: mov     edx, [ecx+8]
0x782C47: push    eax
0x782C48: call    edx
0x782C4A: mov     dword ptr [esi+1Ch], 0
0x782C51: pop     esi
0x782C52: retn    4
