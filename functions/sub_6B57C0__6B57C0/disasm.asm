0x6B57C0: push    esi
0x6B57C1: push    900h; Size
0x6B57C6: mov     esi, ecx
0x6B57C8: call    FormHeapAlloc
0x6B57CD: mov     [esi+4], eax
0x6B57D0: add     esp, 4
0x6B57D3: mov     dword ptr [esi], 0
0x6B57D9: mov     eax, esi
0x6B57DB: pop     esi
0x6B57DC: retn
