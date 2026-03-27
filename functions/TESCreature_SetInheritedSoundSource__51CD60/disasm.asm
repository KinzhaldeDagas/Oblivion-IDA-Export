0x51CD60: push    esi
0x51CD61: mov     esi, ecx
0x51CD63: mov     eax, [esi+28h]
0x51CD66: shr     eax, 8
0x51CD69: test    al, 1
0x51CD6B: jz      short loc_51CDB1
0x51CD6D: push    ebx
0x51CD6E: mov     ebx, [esp+8+arg_0]
0x51CD72: test    ebx, ebx
0x51CD74: jz      short loc_51CDAC
0x51CD76: push    edi
0x51CD77: mov     edi, [esi+100h]
0x51CD7D: test    edi, edi
0x51CD7F: jz      short loc_51CD91
0x51CD81: mov     ecx, edi
0x51CD83: call    CreatureSoundArray_ClearAllSounds
0x51CD88: push    edi
0x51CD89: call    FormHeapFree
0x51CD8E: add     esp, 4
0x51CD91: mov     edx, [esi+24h]
0x51CD94: mov     eax, [edx+50h]
0x51CD97: and     dword ptr [esi+28h], 0FFFFFEFFh
0x51CD9E: lea     ecx, [esi+24h]
0x51CDA1: push    10h
0x51CDA3: call    eax
0x51CDA5: mov     [esi+100h], ebx
0x51CDAB: pop     edi
0x51CDAC: pop     ebx
0x51CDAD: pop     esi
0x51CDAE: retn    4
0x51CDB1: mov     ecx, [esp+4+arg_0]
0x51CDB5: mov     [esi+100h], ecx
0x51CDBB: pop     esi
0x51CDBC: retn    4
