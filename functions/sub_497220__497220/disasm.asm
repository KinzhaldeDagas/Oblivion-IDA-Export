0x497220: push    esi
0x497221: mov     esi, ecx
0x497223: mov     eax, [esi+4]
0x497226: push    eax
0x497227: call    FormHeapFree
0x49722C: add     esp, 4
0x49722F: mov     byte ptr [esi], 0
0x497232: mov     dword ptr [esi+4], 0
0x497239: pop     esi
0x49723A: retn
