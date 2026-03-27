0x65C65A: mov     eax, [esi+4]
0x65C65D: mov     [ecx+4], eax
0x65C660: mov     edx, [esi]
0x65C662: push    esi
0x65C663: mov     [ecx], edx
0x65C665: call    FormHeapFree
0x65C66A: add     esp, 4
0x65C66D: pop     esi
0x65C66E: pop     edi
0x65C66F: retn    4
