0x997BE3: push    ebp
0x997BE4: mov     ebp, esp
0x997BE6: sub     esp, 10h
0x997BE9: mov     eax, ___security_cookie
0x997BEE: and     [ebp+SystemTimeAsFileTime.dwLowDateTime], 0
0x997BF2: and     [ebp+SystemTimeAsFileTime.dwHighDateTime], 0
0x997BF6: push    ebx
0x997BF7: push    edi
0x997BF8: mov     edi, 0BB40E64Eh
0x997BFD: cmp     eax, edi
0x997BFF: mov     ebx, 0FFFF0000h
0x997C04: jz      short loc_997C13
0x997C06: test    ebx, eax
0x997C08: jz      short loc_997C13
0x997C0A: not     eax
0x997C0C: mov     dword_B30AB0, eax
0x997C11: jmp     short loc_997C73
0x997C13: push    esi
0x997C14: lea     eax, [ebp+SystemTimeAsFileTime]
0x997C17: push    eax; lpSystemTimeAsFileTime
0x997C18: call    ds:GetSystemTimeAsFileTime
0x997C1E: mov     esi, [ebp+SystemTimeAsFileTime.dwHighDateTime]
0x997C21: xor     esi, [ebp+SystemTimeAsFileTime.dwLowDateTime]
0x997C24: call    ds:GetCurrentProcessId
0x997C2A: xor     esi, eax
0x997C2C: call    ds:GetCurrentThreadId
0x997C32: xor     esi, eax
0x997C34: call    ds:GetTickCount
0x997C3A: xor     esi, eax
0x997C3C: lea     eax, [ebp+PerformanceCount]
0x997C3F: push    eax; lpPerformanceCount
0x997C40: call    ds:QueryPerformanceCounter
0x997C46: mov     eax, dword ptr [ebp+PerformanceCount+4]
0x997C49: xor     eax, dword ptr [ebp+PerformanceCount]
0x997C4C: xor     esi, eax
0x997C4E: cmp     esi, edi
0x997C50: jnz     short loc_997C59
0x997C52: mov     esi, 0BB40E64Fh
0x997C57: jmp     short loc_997C64
0x997C59: test    ebx, esi
0x997C5B: jnz     short loc_997C64
0x997C5D: mov     eax, esi
0x997C5F: shl     eax, 10h
0x997C62: or      esi, eax
0x997C64: mov     ___security_cookie, esi
0x997C6A: not     esi
0x997C6C: mov     dword_B30AB0, esi
0x997C72: pop     esi
0x997C73: pop     edi
0x997C74: pop     ebx
0x997C75: leave
0x997C76: retn
