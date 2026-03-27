0x552E50: push    ecx
0x552E51: push    esi
0x552E52: mov     esi, ecx
0x552E54: mov     eax, [esi+4]
0x552E57: test    eax, eax
0x552E59: jz      short loc_552E77
0x552E5B: mov     ecx, [esp+8+var_4]
0x552E5F: mov     edx, [esi+8]
0x552E62: push    ecx
0x552E63: push    esi
0x552E64: push    edx
0x552E65: push    eax
0x552E66: call    sub_5522B0
0x552E6B: mov     eax, [esi+4]
0x552E6E: push    eax
0x552E6F: call    FormHeapFree
0x552E74: add     esp, 14h
0x552E77: mov     dword ptr [esi+4], 0
0x552E7E: mov     dword ptr [esi+8], 0
0x552E85: mov     dword ptr [esi+0Ch], 0
0x552E8C: pop     esi
0x552E8D: pop     ecx
0x552E8E: retn
