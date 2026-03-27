0x76DC50: push    esi
0x76DC51: mov     esi, ecx
0x76DC53: mov     eax, [esi+0Ch]
0x76DC56: test    eax, eax
0x76DC58: jz      short loc_76DC69
0x76DC5A: mov     ecx, [eax]
0x76DC5C: mov     edx, [ecx+8]
0x76DC5F: push    eax
0x76DC60: call    edx
0x76DC62: mov     dword ptr [esi+0Ch], 0
0x76DC69: mov     eax, [esi+10h]
0x76DC6C: push    eax
0x76DC6D: call    FormHeapFree
0x76DC72: mov     eax, [esi+4Ch]
0x76DC75: add     esp, 4
0x76DC78: test    eax, eax
0x76DC7A: mov     dword ptr [esi+10h], 0
0x76DC81: jz      short loc_76DC92
0x76DC83: mov     ecx, [eax]
0x76DC85: mov     edx, [ecx+8]
0x76DC88: push    eax
0x76DC89: call    edx
0x76DC8B: mov     dword ptr [esi+4Ch], 0
0x76DC92: pop     esi
0x76DC93: retn
