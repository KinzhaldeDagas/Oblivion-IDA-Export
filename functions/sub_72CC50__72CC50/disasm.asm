0x72CC50: push    ebp
0x72CC51: mov     ebp, [esp+4+arg_0]
0x72CC55: push    esi
0x72CC56: mov     esi, ecx
0x72CC58: cmp     ebp, [esi+4]
0x72CC5B: jz      short loc_72CCB3
0x72CC5D: test    ebp, ebp
0x72CC5F: push    edi
0x72CC60: jbe     short loc_72CCA0
0x72CC62: xor     ecx, ecx
0x72CC64: mov     eax, ebp
0x72CC66: mov     edx, 8
0x72CC6B: mul     edx
0x72CC6D: seto    cl
0x72CC70: neg     ecx
0x72CC72: or      ecx, eax
0x72CC74: push    ecx; Size
0x72CC75: call    FormHeapAlloc
0x72CC7A: mov     edi, eax
0x72CC7C: xor     eax, eax
0x72CC7E: add     esp, 4
0x72CC81: cmp     [esi+8], eax
0x72CC84: jbe     short loc_72CCA2
0x72CC86: mov     ecx, [esi]
0x72CC88: mov     edx, [ecx+eax*8]
0x72CC8B: mov     [edi+eax*8], edx
0x72CC8E: mov     ecx, [ecx+eax*8+4]
0x72CC92: mov     [edi+eax*8+4], ecx
0x72CC96: add     eax, 1
0x72CC99: cmp     eax, [esi+8]
0x72CC9C: jb      short loc_72CC86
0x72CC9E: jmp     short loc_72CCA2
0x72CCA0: xor     edi, edi
0x72CCA2: mov     edx, [esi]
0x72CCA4: push    edx
0x72CCA5: call    FormHeapFree
0x72CCAA: add     esp, 4
0x72CCAD: mov     [esi], edi
0x72CCAF: mov     [esi+4], ebp
0x72CCB2: pop     edi
0x72CCB3: pop     esi
0x72CCB4: pop     ebp
0x72CCB5: retn    4
