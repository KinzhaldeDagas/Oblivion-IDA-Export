0x73EF10: push    esi
0x73EF11: mov     esi, ecx
0x73EF13: mov     eax, [esi+44h]
0x73EF16: push    eax
0x73EF17: call    FormHeapFree
0x73EF1C: mov     ecx, [esp+8+arg_0]
0x73EF20: add     esp, 4
0x73EF23: mov     [esi+44h], ecx
0x73EF26: pop     esi
0x73EF27: retn    4
