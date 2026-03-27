0x46D4D0: push    esi
0x46D4D1: mov     esi, ecx
0x46D4D3: mov     eax, [esi+14h]
0x46D4D6: test    eax, eax
0x46D4D8: jz      short loc_46D4EA
0x46D4DA: push    eax
0x46D4DB: call    FormHeapFree
0x46D4E0: add     esp, 4
0x46D4E3: mov     dword ptr [esi+14h], 0
0x46D4EA: mov     byte ptr [esi+10h], 0
0x46D4EE: pop     esi
0x46D4EF: retn
