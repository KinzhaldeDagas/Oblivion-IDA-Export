0x431D10: push    esi
0x431D11: push    edi
0x431D12: mov     edi, [esp+8+arg_0]
0x431D16: mov     eax, [edi+10h]
0x431D19: mov     esi, ecx
0x431D1B: mov     ecx, [edi+14h]
0x431D1E: mov     edx, [esi]
0x431D20: push    ecx
0x431D21: push    eax
0x431D22: mov     eax, [edx+10h]
0x431D25: mov     ecx, esi
0x431D27: call    eax
0x431D29: test    al, al
0x431D2B: jz      short loc_431D52
0x431D2D: mov     eax, [edi+10h]
0x431D30: mov     edi, [edi+14h]
0x431D33: mov     edx, [esi]
0x431D35: push    edi
0x431D36: push    eax
0x431D37: mov     eax, [edx+1Ch]
0x431D3A: mov     ecx, esi
0x431D3C: call    eax
0x431D3E: mov     ecx, [esi+2Ch]
0x431D41: lea     edx, [ecx+eax*4]
0x431D44: push    edx; lpAddend
0x431D45: call    ds:InterlockedDecrement
0x431D4B: pop     edi
0x431D4C: mov     al, 1
0x431D4E: pop     esi
0x431D4F: retn    4
0x431D52: pop     edi
0x431D53: xor     al, al
0x431D55: pop     esi
0x431D56: retn    4
