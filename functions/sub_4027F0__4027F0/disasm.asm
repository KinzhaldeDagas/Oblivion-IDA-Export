0x4027F0: push    ebx
0x4027F1: mov     bl, [esp+4+arg_0]
0x4027F5: test    bl, 2
0x4027F8: push    esi
0x4027F9: push    edi
0x4027FA: mov     edi, ecx
0x4027FC: jz      short loc_402828
0x4027FE: mov     eax, [edi-4]
0x402801: push    offset sub_7016A0; void (__thiscall *)(void *)
0x402806: lea     esi, [edi-4]
0x402809: push    eax; int
0x40280A: push    4; unsigned int
0x40280C: push    edi; void *
0x40280D: call    $LN21
0x402812: test    bl, 1
0x402815: jz      short loc_402820
0x402817: push    esi
0x402818: call    FormHeapFree
0x40281D: add     esp, 4
0x402820: pop     edi
0x402821: mov     eax, esi
0x402823: pop     esi
0x402824: pop     ebx
0x402825: retn    4
0x402828: mov     esi, [edi]
0x40282A: test    esi, esi
0x40282C: jz      short loc_40284A
0x40282E: lea     ecx, [esi+4]
0x402831: push    ecx; lpAddend
0x402832: call    ds:InterlockedDecrement
0x402838: test    eax, eax
0x40283A: jnz     short loc_40284A
0x40283C: test    esi, esi
0x40283E: jz      short loc_40284A
0x402840: mov     edx, [esi]
0x402842: mov     eax, [edx]
0x402844: push    1
0x402846: mov     ecx, esi
0x402848: call    eax
0x40284A: test    bl, 1
0x40284D: jz      short loc_402858
0x40284F: push    edi
0x402850: call    FormHeapFree
0x402855: add     esp, 4
0x402858: mov     eax, edi
0x40285A: pop     edi
0x40285B: pop     esi
0x40285C: pop     ebx
0x40285D: retn    4
