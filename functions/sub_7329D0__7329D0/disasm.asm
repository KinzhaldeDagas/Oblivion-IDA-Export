0x7329D0: mov     eax, [esp+Size]
0x7329D4: test    eax, eax
0x7329D6: push    esi
0x7329D7: mov     esi, ecx
0x7329D9: mov     [esi], eax
0x7329DB: jz      short loc_7329F9
0x7329DD: push    eax; Size
0x7329DE: call    FormHeapAlloc
0x7329E3: mov     [esi+4], eax
0x7329E6: mov     [esi+8], eax
0x7329E9: add     esp, 4
0x7329EC: mov     dword ptr [esi+0Ch], 0
0x7329F3: mov     eax, esi
0x7329F5: pop     esi
0x7329F6: retn    4
0x7329F9: mov     dword ptr [esi+4], 0
0x732A00: mov     eax, [esi+4]
0x732A03: mov     [esi+8], eax
0x732A06: mov     dword ptr [esi+0Ch], 0
0x732A0D: mov     eax, esi
0x732A0F: pop     esi
0x732A10: retn    4
