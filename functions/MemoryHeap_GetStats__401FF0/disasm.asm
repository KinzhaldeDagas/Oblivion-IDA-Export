0x401FF0: sub     esp, 20h
0x401FF3: push    esi
0x401FF4: mov     esi, [esp+24h+arg_0]
0x401FF8: push    edi
0x401FF9: push    54h ; 'T'
0x401FFB: push    0
0x401FFD: push    esi
0x401FFE: mov     edi, ecx
0x402000: call    __memset
0x402005: add     esp, 0Ch
0x402008: push    offset aMemoryheapGets; lpCriticalSection
0x40200D: mov     ecx, offset HeapCriticalSection
0x402012: call    NiEnterCriticalSection
0x402017: cmp     [esp+28h+arg_4], 0
0x40201C: jz      short loc_402079
0x40201E: mov     ecx, [edi+20h]
0x402021: test    ecx, ecx
0x402023: jz      short loc_402070
0x402025: push    ebp
0x402026: mov     ebp, [edi+24h]
0x402029: mov     edx, 1
0x40202E: push    ebx
0x40202F: nop
0x402030: mov     eax, [ecx+4]
0x402033: mov     ebx, eax
0x402035: shr     ebx, 1Eh
0x402038: and     eax, 0FFFFFFFh
0x40203D: test    dl, bl
0x40203F: lea     ebx, [eax+8]
0x402042: jz      short loc_402054
0x402044: add     [esi+24h], ebx
0x402047: cmp     eax, [esi+2Ch]
0x40204A: jle     short loc_40204F
0x40204C: mov     [esi+2Ch], eax
0x40204F: add     [esi+10h], edx
0x402052: jmp     short loc_40205F
0x402054: add     [esi+28h], ebx
0x402057: cmp     eax, [esi+30h]
0x40205A: jle     short loc_40205F
0x40205C: mov     [esi+30h], eax
0x40205F: add     [esi+0Ch], edx
0x402062: cmp     ecx, ebp
0x402064: jz      short loc_40206E
0x402066: lea     ecx, [ecx+eax+8]
0x40206A: test    ecx, ecx
0x40206C: jnz     short loc_402030
0x40206E: pop     ebx
0x40206F: pop     ebp
0x402070: mov     dword ptr [esi+3Ch], 0
0x402077: jmp     short loc_402085
0x402079: mov     eax, [edi+28h]
0x40207C: mov     ecx, [edi+1Ch]
0x40207F: mov     [esi+10h], eax
0x402082: mov     [esi+0Ch], ecx
0x402085: mov     eax, [esi+0Ch]
0x402088: mov     edx, [edi+2Ch]
0x40208B: mov     ecx, [edi+0Ch]
0x40208E: add     eax, eax
0x402090: add     eax, eax
0x402092: mov     [esi+14h], edx
0x402095: mov     edx, [edi+10h]
0x402098: add     eax, eax
0x40209A: mov     [esi], ecx
0x40209C: mov     ecx, [edi+4Ch]
0x40209F: mov     [esi+34h], eax
0x4020A2: mov     eax, [edi+14h]
0x4020A5: mov     [esi+4], edx
0x4020A8: mov     edx, [edi+50h]
0x4020AB: mov     [esi+1Ch], ecx
0x4020AE: mov     ecx, [edi+30h]
0x4020B1: mov     [esi+8], eax
0x4020B4: mov     eax, [edi+48h]
0x4020B7: mov     [esi+20h], edx
0x4020BA: lea     edx, ds:80h[ecx*8]
0x4020C1: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x4020C6: mov     [esi+18h], eax
0x4020C9: mov     [esi+38h], edx
0x4020CC: call    NiLeaveCriticalSection_0
0x4020D1: lea     eax, [esp+28h+Buffer]
0x4020D5: push    eax; lpBuffer
0x4020D6: call    ds:GlobalMemoryStatus
0x4020DC: mov     ecx, [esp+28h+Buffer.dwAvailPhys]
0x4020E0: cmp     ecx, [edi+54h]
0x4020E3: jnb     short loc_4020E8
0x4020E5: mov     [edi+54h], ecx
0x4020E8: mov     eax, [esp+28h+Buffer.dwTotalPhys]
0x4020EC: mov     edx, eax
0x4020EE: mov     [esi+44h], eax
0x4020F1: sub     eax, [edi+54h]
0x4020F4: sub     edx, ecx
0x4020F6: cmp     byte ptr [edi+16Ch], 0
0x4020FD: mov     [esi+40h], edx
0x402100: mov     [esi+48h], eax
0x402103: jnz     short loc_40215C
0x402105: xor     eax, eax
0x402107: jmp     short loc_402110
0x402109: align 10h
0x402110: mov     ecx, g_HeapPoolsBySize[eax]
0x402116: test    ecx, ecx
0x402118: jz      short loc_402126
0x40211A: mov     ecx, [ecx+118h]
0x402120: shl     ecx, 0Ch
0x402123: add     [esi+4Ch], ecx
0x402126: mov     ecx, dword_B33084[eax]
0x40212C: test    ecx, ecx
0x40212E: jz      short loc_40213C
0x402130: mov     edx, [ecx+118h]
0x402136: shl     edx, 0Ch
0x402139: add     [esi+4Ch], edx
0x40213C: mov     ecx, dword_B33088[eax]
0x402142: test    ecx, ecx
0x402144: jz      short loc_402152
0x402146: mov     ecx, [ecx+118h]
0x40214C: shl     ecx, 0Ch
0x40214F: add     [esi+4Ch], ecx
0x402152: add     eax, 0Ch
0x402155: cmp     eax, 204h
0x40215A: jb      short loc_402110
0x40215C: pop     edi
0x40215D: mov     eax, esi
0x40215F: pop     esi
0x402160: add     esp, 20h
0x402163: retn    8
