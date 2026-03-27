0x7A0B00: push    esi
0x7A0B01: mov     esi, [esp+4+arg_0]
0x7A0B05: mov     eax, [esi+4]
0x7A0B08: test    eax, eax
0x7A0B0A: jz      short loc_7A0B28
0x7A0B0C: mov     ecx, [esp+4+arg_0]
0x7A0B10: mov     edx, [esi+8]
0x7A0B13: push    ecx
0x7A0B14: push    esi
0x7A0B15: push    edx
0x7A0B16: push    eax
0x7A0B17: call    sub_79E150
0x7A0B1C: mov     eax, [esi+4]
0x7A0B1F: push    eax
0x7A0B20: call    FormHeapFree
0x7A0B25: add     esp, 14h
0x7A0B28: mov     dword ptr [esi+4], 0
0x7A0B2F: mov     dword ptr [esi+8], 0
0x7A0B36: mov     dword ptr [esi+0Ch], 0
0x7A0B3D: pop     esi
0x7A0B3E: retn    4
