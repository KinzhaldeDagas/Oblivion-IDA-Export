0x724AB0: push    esi
0x724AB1: push    edi
0x724AB2: mov     edi, [esp+8+arg_0]
0x724AB6: mov     esi, ecx
0x724AB8: cmp     edi, [esi+20h]
0x724ABB: jz      short loc_724B27
0x724ABD: test    edi, edi
0x724ABF: jnz     short loc_724AD8
0x724AC1: mov     eax, [esi+24h]
0x724AC4: push    eax
0x724AC5: call    FormHeapFree
0x724ACA: add     esp, 4
0x724ACD: mov     [esi+24h], edi
0x724AD0: mov     [esi+20h], edi
0x724AD3: pop     edi
0x724AD4: pop     esi
0x724AD5: retn    4
0x724AD8: xor     ecx, ecx
0x724ADA: mov     eax, edi
0x724ADC: mov     edx, 10h
0x724AE1: mul     edx
0x724AE3: seto    cl
0x724AE6: push    ebx
0x724AE7: neg     ecx
0x724AE9: or      ecx, eax
0x724AEB: push    ecx; Size
0x724AEC: call    FormHeapAlloc
0x724AF1: mov     ecx, [esi+24h]
0x724AF4: add     esp, 4
0x724AF7: test    ecx, ecx
0x724AF9: mov     ebx, eax
0x724AFB: jz      short loc_724B14
0x724AFD: mov     eax, [esi+20h]
0x724B00: cmp     eax, edi
0x724B02: jl      short loc_724B06
0x724B04: mov     eax, edi
0x724B06: shl     eax, 4
0x724B09: push    eax; Size
0x724B0A: push    ecx; Src
0x724B0B: push    ebx; Dst
0x724B0C: call    _memcpy
0x724B11: add     esp, 0Ch
0x724B14: mov     eax, [esi+24h]
0x724B17: push    eax
0x724B18: call    FormHeapFree
0x724B1D: add     esp, 4
0x724B20: mov     [esi+24h], ebx
0x724B23: mov     [esi+20h], edi
0x724B26: pop     ebx
0x724B27: pop     edi
0x724B28: pop     esi
0x724B29: retn    4
