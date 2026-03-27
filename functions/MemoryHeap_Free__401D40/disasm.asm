0x401D40: push    esi
0x401D41: push    edi
0x401D42: mov     edi, [esp+8+arg_0]
0x401D46: test    edi, edi
0x401D48: mov     esi, ecx
0x401D4A: jz      loc_401E0E
0x401D50: mov     ecx, [esi+0Ch]
0x401D53: test    ecx, ecx
0x401D55: jnz     short loc_401D66
0x401D57: mov     eax, [esi]
0x401D59: mov     edx, [eax+14h]
0x401D5C: push    edi
0x401D5D: mov     ecx, esi
0x401D5F: call    edx
0x401D61: pop     edi
0x401D62: pop     esi
0x401D63: retn    4
0x401D66: mov     eax, [esi+18h]
0x401D69: cmp     edi, eax
0x401D6B: push    ebx
0x401D6C: jb      short loc_401D78
0x401D6E: add     eax, ecx
0x401D70: cmp     edi, eax
0x401D72: jnb     short loc_401D78
0x401D74: mov     bl, 1
0x401D76: jmp     short loc_401D7A
0x401D78: xor     bl, bl
0x401D7A: cmp     byte ptr [esi+16Dh], 0
0x401D81: jnz     short loc_401D92
0x401D83: push    offset aMemoryheapFree; lpCriticalSection
0x401D88: mov     ecx, offset HeapCriticalSection
0x401D8D: call    NiEnterCriticalSection
0x401D92: test    bl, bl
0x401D94: jnz     short loc_401DE7
0x401D96: cmp     [esi+16Ch], bl
0x401D9C: jnz     short loc_401DC4
0x401D9E: mov     eax, edi
0x401DA0: shr     eax, 18h
0x401DA3: mov     ebx, g_HeapPoolByAddress[eax*4]
0x401DAA: test    ebx, ebx
0x401DAC: jz      short loc_401DC4
0x401DAE: push    edi
0x401DAF: mov     ecx, ebx
0x401DB1: call    sub_4011B0
0x401DB6: test    al, al
0x401DB8: jz      short loc_401DC4
0x401DBA: push    edi
0x401DBB: mov     ecx, ebx
0x401DBD: call    MemoryPool_Free
0x401DC2: jmp     short loc_401DFA
0x401DC4: mov     edx, [esi]
0x401DC6: mov     eax, [edx+1Ch]
0x401DC9: push    edi
0x401DCA: mov     ecx, esi
0x401DCC: call    eax
0x401DCE: mov     edx, [esi]
0x401DD0: mov     ebx, eax
0x401DD2: mov     eax, [edx+14h]
0x401DD5: push    edi
0x401DD6: mov     ecx, esi
0x401DD8: call    eax
0x401DDA: mov     edx, [esi]
0x401DDC: mov     eax, [edx]
0x401DDE: neg     ebx
0x401DE0: push    ebx
0x401DE1: mov     ecx, esi
0x401DE3: call    eax
0x401DE5: jmp     short loc_401DFA
0x401DE7: add     edi, 0FFFFFFF8h
0x401DEA: push    edi
0x401DEB: mov     ecx, esi
0x401DED: call    sub_4015F0
0x401DF2: push    edi
0x401DF3: mov     ecx, esi
0x401DF5: call    sub_401A30
0x401DFA: cmp     byte ptr [esi+16Dh], 0
0x401E01: jnz     short loc_401E0D
0x401E03: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x401E08: call    NiLeaveCriticalSection_0
0x401E0D: pop     ebx
0x401E0E: pop     edi
0x401E0F: pop     esi
0x401E10: retn    4
