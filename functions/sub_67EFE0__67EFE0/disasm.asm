0x67EFE0: push    esi
0x67EFE1: push    edi
0x67EFE2: mov     edi, [esp+8+arg_0]
0x67EFE6: test    edi, edi
0x67EFE8: mov     esi, ecx
0x67EFEA: jz      short loc_67F022
0x67EFEC: mov     eax, [esi]
0x67EFEE: mov     edx, [eax+4]
0x67EFF1: call    edx
0x67EFF3: mov     [eax+8], edi
0x67EFF6: mov     dword ptr [eax+4], 0
0x67EFFD: mov     ecx, [esi+4]
0x67F000: mov     [eax], ecx
0x67F002: mov     ecx, [esi+4]
0x67F005: test    ecx, ecx
0x67F007: jz      short loc_67F018
0x67F009: mov     [ecx+4], eax
0x67F00C: add     dword ptr [esi+0Ch], 1
0x67F010: pop     edi
0x67F011: mov     [esi+4], eax
0x67F014: pop     esi
0x67F015: retn    4
0x67F018: add     dword ptr [esi+0Ch], 1
0x67F01C: mov     [esi+8], eax
0x67F01F: mov     [esi+4], eax
0x67F022: pop     edi
0x67F023: pop     esi
0x67F024: retn    4
