0x794EB0: push    esi
0x794EB1: mov     esi, ecx
0x794EB3: mov     eax, [esi+4]
0x794EB6: test    eax, eax
0x794EB8: jz      short loc_794EC3
0x794EBA: push    eax
0x794EBB: call    FormHeapFree
0x794EC0: add     esp, 4
0x794EC3: mov     dword ptr [esi+4], 0
0x794ECA: mov     dword ptr [esi+8], 0
0x794ED1: mov     dword ptr [esi+0Ch], 0
0x794ED8: pop     esi
0x794ED9: retn
