0x47CFD0: push    esi; ArgList
0x47CFD1: mov     esi, ecx
0x47CFD3: cmp     dword ptr [esi+8], 0
0x47CFD7: jnz     short loc_47D04A
0x47CFD9: call    dword ptr ds:0A280C4h
0x47CFDF: mov     [esi+0Ch], eax
0x47CFE2: call    dword ptr ds:0A2808Ch
0x47CFE8: mov     [esi+14h], eax
0x47CFEB: lea     eax, [esi+10h]
0x47CFEE: push    eax; lpThreadId
0x47CFEF: push    0; dwCreationFlags
0x47CFF1: push    esi; lpParameter
0x47CFF2: push    offset BackgroundThread_Exit???????; lpStartAddress
0x47CFF7: push    0; dwStackSize
0x47CFF9: push    0; lpThreadAttributes
0x47CFFB: call    dword ptr ds:0A280F8h
0x47D001: test    eax, eax
0x47D003: mov     [esi+8], eax
0x47D006: jnz     short loc_47D015
0x47D008: push    offset aCouldNotCrea_1; Format
0x47D00D: call    PrintError
0x47D012: add     esp, 4
0x47D015: mov     ecx, [esi+4]
0x47D018: push    offset aResume_thread; lpCriticalSection
0x47D01D: call    NiEnterCriticalSection
0x47D022: cmp     byte ptr [esi+18h], 0
0x47D026: jnz     short loc_47D04C
0x47D028: mov     ecx, [esi+8]
0x47D02B: push    0FFFFFFFFh; nPriority
0x47D02D: push    ecx; hThread
0x47D02E: call    dword ptr ds:0A280ECh
0x47D034: mov     ecx, [esi+4]; lpCriticalSection
0x47D037: mov     byte ptr [esi+18h], 1
0x47D03B: call    NiLeaveCriticalSection_0
0x47D040: mov     edx, [esi+8]
0x47D043: push    edx; hThread
0x47D044: call    dword ptr ds:0A280F0h
0x47D04A: pop     esi
0x47D04B: retn
0x47D04C: mov     ecx, [esi+4]; lpCriticalSection
0x47D04F: pop     esi
0x47D050: jmp     NiLeaveCriticalSection_0
