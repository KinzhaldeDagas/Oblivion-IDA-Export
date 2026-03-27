0x722C00: mov     eax, [esp+a2]
0x722C04: test    eax, eax
0x722C06: push    edi
0x722C07: mov     edi, ecx
0x722C09: jz      short loc_722C1B
0x722C0B: push    eax; a2
0x722C0C: lea     ecx, [edi+0B0h]; this
0x722C12: call    NiSmartPointer_Set??
0x722C17: pop     edi
0x722C18: retn    4
0x722C1B: push    esi
0x722C1C: mov     esi, [edi+0B0h]
0x722C22: test    esi, esi
0x722C24: jz      short loc_722C4C
0x722C26: lea     eax, [esi+4]
0x722C29: push    eax; lpAddend
0x722C2A: call    dword ptr ds:0A2807Ch
0x722C30: test    eax, eax
0x722C32: jnz     short loc_722C42
0x722C34: test    esi, esi
0x722C36: jz      short loc_722C42
0x722C38: mov     edx, [esi]
0x722C3A: mov     eax, [edx]
0x722C3C: push    1
0x722C3E: mov     ecx, esi
0x722C40: call    eax
0x722C42: mov     dword ptr [edi+0B0h], 0
0x722C4C: pop     esi
0x722C4D: pop     edi
0x722C4E: retn    4
