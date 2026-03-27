0x46D4A0: push    esi
0x46D4A1: mov     esi, ecx
0x46D4A3: mov     eax, [esi+4]
0x46D4A6: push    eax
0x46D4A7: call    FormHeapFree
0x46D4AC: fldz
0x46D4AE: xor     eax, eax
0x46D4B0: mov     [esi+4], eax
0x46D4B3: mov     [esi+0Ah], ax
0x46D4B7: mov     [esi+8], ax
0x46D4BB: fstp    dword ptr [esi+0Ch]
0x46D4BE: add     esp, 4
0x46D4C1: pop     esi
0x46D4C2: retn
