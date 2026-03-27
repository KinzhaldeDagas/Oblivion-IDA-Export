0x926390: push    esi
0x926391: push    edi
0x926392: mov     esi, ecx
0x926394: push    1F40h; dwSpinCount
0x926399: push    esi; lpCriticalSection
0x92639A: call    dword ptr ds:0A2818Ch
0x9263A0: xor     edi, edi
0x9263A2: lea     eax, [esi+40h]
0x9263A5: add     eax, 14h
0x9263A8: mov     [eax-14h], edi
0x9263AB: mov     [eax-10h], edi
0x9263AE: mov     [eax-0Ch], edi
0x9263B1: mov     [eax-8], edi
0x9263B4: mov     [eax-4], edi
0x9263B7: push    3E8h; lMaximumCount
0x9263BC: push    edi; lInitialCount
0x9263BD: lea     ecx, [esi+70h]
0x9263C0: mov     [eax], edi
0x9263C2: mov     [eax+4], edi
0x9263C5: mov     [eax+8], edi
0x9263C8: mov     [eax+0Ch], edi
0x9263CB: mov     [eax+10h], edi
0x9263CE: call    CreateSemaphore
0x9263D3: mov     [esi+6Ch], edi
0x9263D6: mov     [esi+68h], edi
0x9263D9: pop     edi
0x9263DA: mov     eax, esi
0x9263DC: pop     esi
0x9263DD: retn
