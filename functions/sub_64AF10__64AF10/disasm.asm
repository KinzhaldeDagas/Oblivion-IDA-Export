0x64AF10: push    esi
0x64AF11: push    edi
0x64AF12: mov     edi, ecx
0x64AF14: mov     esi, [edi+0F0h]
0x64AF1A: test    esi, esi
0x64AF1C: jz      short loc_64AF3F
0x64AF1E: mov     ecx, esi
0x64AF20: call    ContainerEntryExtraData_DestroyDataTable
0x64AF25: push    esi
0x64AF26: call    FormHeapFree
0x64AF2B: mov     eax, [esp+0Ch+arg_0]
0x64AF2F: add     esp, 4
0x64AF32: mov     [edi+0F0h], eax
0x64AF38: pop     edi
0x64AF39: mov     al, 1
0x64AF3B: pop     esi
0x64AF3C: retn    4
0x64AF3F: mov     ecx, [esp+8+arg_0]
0x64AF43: mov     [edi+0F0h], ecx
0x64AF49: pop     edi
0x64AF4A: mov     al, 1
0x64AF4C: pop     esi
0x64AF4D: retn    4
