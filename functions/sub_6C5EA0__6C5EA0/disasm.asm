0x6C5EA0: push    ebx
0x6C5EA1: push    esi
0x6C5EA2: push    edi
0x6C5EA3: mov     esi, ecx
0x6C5EA5: mov     edi, [esi+0Ch]
0x6C5EA8: add     edi, edi
0x6C5EAA: push    edi; Size
0x6C5EAB: call    FormHeapAlloc
0x6C5EB0: push    edi
0x6C5EB1: mov     ebx, eax
0x6C5EB3: push    0
0x6C5EB5: push    ebx
0x6C5EB6: call    __memset
0x6C5EBB: mov     eax, [esi+0Ch]
0x6C5EBE: mov     ecx, [esi+8]
0x6C5EC1: push    eax; Size
0x6C5EC2: push    ecx; Src
0x6C5EC3: push    ebx; Dst
0x6C5EC4: call    _memcpy
0x6C5EC9: mov     edx, [esi+8]
0x6C5ECC: push    edx
0x6C5ECD: call    FormHeapFree
0x6C5ED2: add     esp, 20h
0x6C5ED5: mov     [esi+0Ch], edi
0x6C5ED8: pop     edi
0x6C5ED9: mov     [esi+8], ebx
0x6C5EDC: pop     esi
0x6C5EDD: pop     ebx
0x6C5EDE: retn
