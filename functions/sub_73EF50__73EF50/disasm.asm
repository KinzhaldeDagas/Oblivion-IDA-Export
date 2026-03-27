0x73EF50: push    esi
0x73EF51: mov     esi, ecx
0x73EF53: mov     eax, [esi+50h]
0x73EF56: push    eax
0x73EF57: call    FormHeapFree
0x73EF5C: mov     ecx, [esp+8+arg_0]
0x73EF60: add     esp, 4
0x73EF63: mov     [esi+50h], ecx
0x73EF66: pop     esi
0x73EF67: retn    4
