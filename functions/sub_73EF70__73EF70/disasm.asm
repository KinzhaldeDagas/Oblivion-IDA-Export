0x73EF70: push    esi
0x73EF71: mov     esi, ecx
0x73EF73: mov     eax, [esi+54h]
0x73EF76: push    eax
0x73EF77: call    FormHeapFree
0x73EF7C: mov     ecx, [esp+8+arg_0]
0x73EF80: add     esp, 4
0x73EF83: mov     [esi+54h], ecx
0x73EF86: pop     esi
0x73EF87: retn    4
