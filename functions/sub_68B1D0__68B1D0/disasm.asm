0x68B1D0: push    ebx
0x68B1D1: mov     ebx, [esp+4+arg_0]
0x68B1D5: push    esi
0x68B1D6: mov     esi, ecx
0x68B1D8: mov     al, [esi+4]
0x68B1DB: movsx   ecx, al
0x68B1DE: cmp     ecx, ebx
0x68B1E0: jz      short loc_68B1FA
0x68B1E2: cmp     al, 1
0x68B1E4: jnz     short loc_68B1F1
0x68B1E6: mov     edx, [esi]
0x68B1E8: push    edx
0x68B1E9: call    FormHeapFree
0x68B1EE: add     esp, 4
0x68B1F1: mov     dword ptr [esi], 0
0x68B1F7: mov     [esi+4], bl
0x68B1FA: pop     esi
0x68B1FB: pop     ebx
0x68B1FC: retn    4
