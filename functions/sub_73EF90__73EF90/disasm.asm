0x73EF90: push    esi
0x73EF91: mov     esi, ecx
0x73EF93: mov     eax, [esi+58h]
0x73EF96: push    eax
0x73EF97: call    FormHeapFree
0x73EF9C: mov     ecx, [esp+8+arg_0]
0x73EFA0: add     esp, 4
0x73EFA3: mov     [esi+58h], ecx
0x73EFA6: pop     esi
0x73EFA7: retn    4
