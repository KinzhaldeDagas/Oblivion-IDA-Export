0x8BAC50: push    ebx
0x8BAC51: push    ebp
0x8BAC52: push    esi
0x8BAC53: push    edi
0x8BAC54: mov     edi, ecx
0x8BAC56: push    6; lMaximumCount
0x8BAC58: xor     ebx, ebx
0x8BAC5A: push    ebx; lInitialCount
0x8BAC5B: lea     ecx, [edi+0Ch]
0x8BAC5E: call    CreateSemaphore
0x8BAC63: lea     esi, [edi+14h]
0x8BAC66: mov     ebp, 6
0x8BAC6B: jmp     short loc_8BAC70
0x8BAC6D: align 10h
0x8BAC70: push    1; lMaximumCount
0x8BAC72: push    ebx; lInitialCount
0x8BAC73: lea     ecx, [esi+10h]
0x8BAC76: call    CreateSemaphore
0x8BAC7B: mov     [esi+14h], ebx
0x8BAC7E: mov     [esi+18h], ebx
0x8BAC81: mov     [esi+24h], ebx
0x8BAC84: mov     [esi+1Ch], ebx
0x8BAC87: mov     [esi+20h], ebx
0x8BAC8A: mov     [esi+0Ch], bl
0x8BAC8D: mov     dword ptr [esi+8], 0FFFFFFFFh
0x8BAC94: mov     [esi+4], ebx
0x8BAC97: mov     [esi], ebx
0x8BAC99: add     esi, 28h ; '('
0x8BAC9C: dec     ebp
0x8BAC9D: jnz     short loc_8BAC70
0x8BAC9F: mov     [edi+104h], ebx
0x8BACA5: mov     [edi+10h], bl
0x8BACA8: mov     [edi], ebx
0x8BACAA: mov     dword ptr [edi+4], 3C888889h
0x8BACB1: mov     eax, edi
0x8BACB3: pop     edi
0x8BACB4: pop     esi
0x8BACB5: pop     ebp
0x8BACB6: pop     ebx
0x8BACB7: retn
