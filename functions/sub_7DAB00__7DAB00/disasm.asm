0x7DAB00: mov     eax, [esp+Size]
0x7DAB04: test    eax, eax
0x7DAB06: push    esi
0x7DAB07: mov     esi, ecx
0x7DAB09: push    edi
0x7DAB0A: mov     [esi+100h], eax
0x7DAB10: jz      short loc_7DAB39
0x7DAB12: mov     edi, [esp+8+Src]
0x7DAB16: test    edi, edi
0x7DAB18: jz      short loc_7DAB39
0x7DAB1A: push    eax; Size
0x7DAB1B: call    FormHeapAlloc
0x7DAB20: mov     ecx, [esi+100h]
0x7DAB26: push    ecx; Size
0x7DAB27: push    edi; Src
0x7DAB28: push    eax; Dst
0x7DAB29: mov     [esi+104h], eax
0x7DAB2F: call    _memcpy
0x7DAB34: add     esp, 10h
0x7DAB37: jmp     short loc_7DAB43
0x7DAB39: mov     dword ptr [esi+104h], 0
0x7DAB43: push    100h
0x7DAB48: push    0
0x7DAB4A: push    esi
0x7DAB4B: call    __memset
0x7DAB50: mov     eax, [esp+14h+arg_0]
0x7DAB54: add     esp, 0Ch
0x7DAB57: test    eax, eax
0x7DAB59: jz      short loc_7DAB6C
0x7DAB5B: mov     edx, esi
0x7DAB5D: sub     edx, eax
0x7DAB5F: nop
0x7DAB60: mov     cl, [eax]
0x7DAB62: mov     [edx+eax], cl
0x7DAB65: add     eax, 1
0x7DAB68: test    cl, cl
0x7DAB6A: jnz     short loc_7DAB60
0x7DAB6C: pop     edi
0x7DAB6D: mov     eax, esi
0x7DAB6F: pop     esi
0x7DAB70: retn    0Ch
