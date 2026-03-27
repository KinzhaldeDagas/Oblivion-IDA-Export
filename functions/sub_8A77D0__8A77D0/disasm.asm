0x8A77D0: push    esi
0x8A77D1: mov     esi, ecx
0x8A77D3: mov     ecx, [esi+14h]; lpCriticalSection
0x8A77D6: call    sub_8A7720
0x8A77DB: mov     edx, [esi+0Ch]
0x8A77DE: xor     eax, eax
0x8A77E0: test    edx, edx
0x8A77E2: jle     short loc_8A7815
0x8A77E4: mov     ecx, [esi+8]
0x8A77E7: push    edi
0x8A77E8: mov     edi, [esp+8+arg_0]
0x8A77EC: lea     esp, [esp+0]
0x8A77F0: cmp     [ecx], edi
0x8A77F2: jz      short loc_8A77FE
0x8A77F4: inc     eax
0x8A77F5: add     ecx, 4
0x8A77F8: cmp     eax, edx
0x8A77FA: jl      short loc_8A77F0
0x8A77FC: jmp     short loc_8A7814
0x8A77FE: test    eax, eax
0x8A7800: jl      short loc_8A7814
0x8A7802: mov     ecx, [esi+0Ch]
0x8A7805: dec     ecx
0x8A7806: mov     [esi+0Ch], ecx
0x8A7809: mov     edx, ecx
0x8A780B: mov     ecx, [esi+8]
0x8A780E: mov     edx, [ecx+edx*4]
0x8A7811: mov     [ecx+eax*4], edx
0x8A7814: pop     edi
0x8A7815: mov     eax, [esi+14h]
0x8A7818: pop     esi
0x8A7819: mov     [esp+arg_0], eax
0x8A781D: jmp     dword ptr ds:0A28074h
