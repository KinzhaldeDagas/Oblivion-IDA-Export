0x763FE0: push    ebx
0x763FE1: mov     ebx, ds:0A2806Ch
0x763FE7: push    ebp
0x763FE8: push    esi
0x763FE9: push    edi
0x763FEA: mov     edi, ecx
0x763FEC: lea     esi, [edi+80h]
0x763FF2: push    esi; lpCriticalSection
0x763FF3: call    ebx ; EnterCriticalSection
0x763FF5: mov     ebp, ds:0A2808Ch
0x763FFB: call    ebp ; GetCurrentThreadId
0x763FFD: mov     [esi+78h], eax
0x764000: mov     eax, 1
0x764005: add     [esi+7Ch], eax
0x764008: cmp     [edi+0FCh], eax
0x76400E: jnz     short loc_76401C
0x764010: mov     eax, [edi]
0x764012: mov     edx, [eax+128h]
0x764018: mov     ecx, edi
0x76401A: call    edx
0x76401C: lea     esi, [edi+100h]
0x764022: push    esi; lpCriticalSection
0x764023: call    ebx ; EnterCriticalSection
0x764025: call    ebp ; GetCurrentThreadId
0x764027: add     dword ptr [esi+7Ch], 1
0x76402B: pop     edi
0x76402C: mov     [esi+78h], eax
0x76402F: pop     esi
0x764030: pop     ebp
0x764031: pop     ebx
0x764032: retn
