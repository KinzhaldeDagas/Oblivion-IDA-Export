0x683C20: push    esi
0x683C21: mov     esi, ecx
0x683C23: cmp     dword ptr [esi+38h], 0
0x683C27: jnz     short loc_683C2F
0x683C29: cmp     dword ptr [esi+34h], 0
0x683C2D: jz      short loc_683C61
0x683C2F: mov     eax, [esi+34h]
0x683C32: push    eax
0x683C33: call    FormHeapFree
0x683C38: mov     eax, [esi+38h]
0x683C3B: add     esp, 4
0x683C3E: test    eax, eax
0x683C40: jz      short loc_683C58
0x683C42: mov     ecx, [eax+4]
0x683C45: mov     [esi+38h], ecx
0x683C48: mov     edx, [eax]
0x683C4A: push    eax
0x683C4B: mov     [esi+34h], edx
0x683C4E: call    FormHeapFree
0x683C53: add     esp, 4
0x683C56: jmp     short loc_683C23
0x683C58: mov     dword ptr [esi+34h], 0
0x683C5F: jmp     short loc_683C23
0x683C61: pop     esi
0x683C62: retn
