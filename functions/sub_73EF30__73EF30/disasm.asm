0x73EF30: push    esi
0x73EF31: mov     esi, ecx
0x73EF33: mov     eax, [esi+4Ch]
0x73EF36: push    eax
0x73EF37: call    FormHeapFree
0x73EF3C: mov     ecx, [esp+8+arg_0]
0x73EF40: add     esp, 4
0x73EF43: mov     [esi+4Ch], ecx
0x73EF46: pop     esi
0x73EF47: retn    4
