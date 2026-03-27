0x404D60: mov     eax, dword_B3F940
0x404D65: test    eax, eax
0x404D67: jz      short loc_404DC6
0x404D69: mov     ecx, [eax+198h]
0x404D6F: push    ebx
0x404D70: push    esi
0x404D71: push    edi
0x404D72: mov     edi, ds:WaitForSingleObject
0x404D78: lea     esi, [eax+190h]
0x404D7E: mov     eax, [esp+0Ch+dwMilliseconds]
0x404D82: push    eax; dwMilliseconds
0x404D83: push    ecx; hHandle
0x404D84: call    edi ; WaitForSingleObject
0x404D86: cmp     eax, 102h
0x404D8B: mov     ebx, ds:InterlockedDecrement
0x404D91: jz      short loc_404D9B
0x404D93: push    esi; lpAddend
0x404D94: call    ebx ; InterlockedDecrement
0x404D96: cmp     eax, 1
0x404D99: jnz     short loc_404DC3
0x404D9B: mov     esi, dword_B3F940
0x404DA1: mov     byte_B3F944, 1
0x404DA8: mov     edx, [esi+198h]
0x404DAE: add     esi, 190h
0x404DB4: push    0FFFFFFFFh; dwMilliseconds
0x404DB6: push    edx; hHandle
0x404DB7: call    edi ; WaitForSingleObject
0x404DB9: cmp     eax, 102h
0x404DBE: jz      short loc_404DC3
0x404DC0: push    esi; lpAddend
0x404DC1: call    ebx ; InterlockedDecrement
0x404DC3: pop     edi
0x404DC4: pop     esi
0x404DC5: pop     ebx
0x404DC6: xor     eax, eax
0x404DC8: retn
