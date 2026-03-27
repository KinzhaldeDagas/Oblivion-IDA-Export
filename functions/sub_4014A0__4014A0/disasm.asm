0x4014A0: mov     eax, OSGlobals
0x4014A5: push    ebx
0x4014A6: push    esi
0x4014A7: push    edi
0x4014A8: mov     edi, [esp+0Ch+arg_0]
0x4014AC: mov     dword_B32B08, edi
0x4014B2: mov     esi, [eax+10h]
0x4014B5: call    ds:GetCurrentThreadId
0x4014BB: cmp     esi, eax
0x4014BD: setz    al
0x4014C0: cmp     dword_B32B04, 0
0x4014C7: jnz     short loc_4014D0
0x4014C9: mov     byte_B32B01, 1
0x4014D0: xor     bl, bl
0x4014D2: test    al, al
0x4014D4: jnz     short loc_4014E7
0x4014D6: cmp     byte_B350D5, al
0x4014DC: jz      short loc_4014E7
0x4014DE: call    nullsub_returnTrue_0arg
0x4014E3: test    al, al
0x4014E5: jz      short loc_4014F3
0x4014E7: push    3
0x4014E9: call    nullsub_returnTrue_0arg
0x4014EE: add     esp, 4
0x4014F1: mov     bl, al
0x4014F3: push    offset aMemoryheapMemo
0x4014F8: mov     ecx, offset stru_B32C00
0x4014FD: call    NiEnterCriticalSection
0x401502: mov     eax, dword_B02184
0x401507: test    eax, eax
0x401509: mov     byte_B32B00, 1
0x401510: jz      short loc_40152C
0x401512: mov     ecx, dword_B32B04
0x401518: push    ecx
0x401519: push    edi
0x40151A: push    0
0x40151C: call    eax ; dword_B02184
0x40151E: add     esp, 0Ch
0x401521: pop     edi
0x401522: mov     dword_B32B04, eax
0x401527: pop     esi
0x401528: mov     al, bl
0x40152A: pop     ebx
0x40152B: retn
0x40152C: pop     edi
0x40152D: pop     esi
0x40152E: mov     al, bl
0x401530: mov     dword_B32B04, 0
0x40153A: pop     ebx
0x40153B: retn
