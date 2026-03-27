0x8B0DA0: push    esi
0x8B0DA1: mov     esi, ecx
0x8B0DA3: mov     eax, [esi+8]
0x8B0DA6: mov     edx, [esi]
0x8B0DA8: lea     ecx, ds:8[eax*8]
0x8B0DAF: push    ecx
0x8B0DB0: push    0
0x8B0DB2: push    edx
0x8B0DB3: call    sub_8B18C0
0x8B0DB8: add     esp, 0Ch
0x8B0DBB: mov     dword ptr [esi+4], 0
0x8B0DC2: pop     esi
0x8B0DC3: retn
