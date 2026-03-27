0x64AE90: push    esi
0x64AE91: push    edi
0x64AE92: mov     edi, ecx
0x64AE94: mov     esi, [edi+0E8h]
0x64AE9A: test    esi, esi
0x64AE9C: jz      short loc_64AEBF
0x64AE9E: mov     ecx, esi
0x64AEA0: call    ContainerEntryExtraData_DestroyDataTable
0x64AEA5: push    esi
0x64AEA6: call    FormHeapFree
0x64AEAB: mov     eax, [esp+0Ch+arg_0]
0x64AEAF: add     esp, 4
0x64AEB2: mov     [edi+0E8h], eax
0x64AEB8: pop     edi
0x64AEB9: mov     al, 1
0x64AEBB: pop     esi
0x64AEBC: retn    4
0x64AEBF: mov     ecx, [esp+8+arg_0]
0x64AEC3: mov     [edi+0E8h], ecx
0x64AEC9: pop     edi
0x64AECA: mov     al, 1
0x64AECC: pop     esi
0x64AECD: retn    4
