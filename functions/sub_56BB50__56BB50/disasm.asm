0x56BB50: push    esi
0x56BB51: push    edi
0x56BB52: mov     edi, ecx
0x56BB54: mov     esi, [edi+0Ch]
0x56BB57: test    esi, esi
0x56BB59: jz      short loc_56BB7E
0x56BB5B: lea     eax, [esi+4]
0x56BB5E: push    eax; lpAddend
0x56BB5F: call    dword ptr ds:0A2807Ch
0x56BB65: test    eax, eax
0x56BB67: jnz     short loc_56BB77
0x56BB69: test    esi, esi
0x56BB6B: jz      short loc_56BB77
0x56BB6D: mov     edx, [esi]
0x56BB6F: mov     eax, [edx]
0x56BB71: push    1
0x56BB73: mov     ecx, esi
0x56BB75: call    eax
0x56BB77: mov     dword ptr [edi+0Ch], 0
0x56BB7E: push    edi
0x56BB7F: call    sub_56BAF0
0x56BB84: add     esp, 4
0x56BB87: pop     edi
0x56BB88: mov     al, 1
0x56BB8A: pop     esi
0x56BB8B: retn
