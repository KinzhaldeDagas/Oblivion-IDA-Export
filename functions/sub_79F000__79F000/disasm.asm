0x79F000: push    ecx
0x79F001: push    esi
0x79F002: mov     esi, ecx
0x79F004: mov     eax, [esi+4]
0x79F007: test    eax, eax
0x79F009: jz      short loc_79F027
0x79F00B: mov     ecx, [esp+8+var_4]
0x79F00F: mov     edx, [esi+8]
0x79F012: push    ecx
0x79F013: push    esi
0x79F014: push    edx
0x79F015: push    eax
0x79F016: call    sub_79E150
0x79F01B: mov     eax, [esi+4]
0x79F01E: push    eax
0x79F01F: call    FormHeapFree
0x79F024: add     esp, 14h
0x79F027: mov     dword ptr [esi+4], 0
0x79F02E: mov     dword ptr [esi+8], 0
0x79F035: mov     dword ptr [esi+0Ch], 0
0x79F03C: pop     esi
0x79F03D: pop     ecx
0x79F03E: retn
