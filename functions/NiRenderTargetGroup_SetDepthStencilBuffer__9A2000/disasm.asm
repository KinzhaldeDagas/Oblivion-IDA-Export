0x9A2000: push    ebx
0x9A2001: push    esi
0x9A2002: push    edi
0x9A2003: mov     edi, ecx
0x9A2005: mov     eax, [edi]
0x9A2007: mov     edx, [eax+7Ch]
0x9A200A: push    0
0x9A200C: call    edx
0x9A200E: mov     esi, [edi+1Ch]
0x9A2011: mov     ebx, [esp+0Ch+arg_0]
0x9A2015: cmp     esi, ebx
0x9A2017: jz      short loc_9A204A
0x9A2019: test    esi, esi
0x9A201B: jz      short loc_9A2039
0x9A201D: lea     eax, [esi+4]
0x9A2020: push    eax; lpAddend
0x9A2021: call    ds:InterlockedDecrement
0x9A2027: test    eax, eax
0x9A2029: jnz     short loc_9A2039
0x9A202B: test    esi, esi
0x9A202D: jz      short loc_9A2039
0x9A202F: mov     edx, [esi]
0x9A2031: mov     eax, [edx]
0x9A2033: push    1
0x9A2035: mov     ecx, esi
0x9A2037: call    eax
0x9A2039: test    ebx, ebx
0x9A203B: mov     [edi+1Ch], ebx
0x9A203E: jz      short loc_9A204A
0x9A2040: add     ebx, 4
0x9A2043: push    ebx; lpAddend
0x9A2044: call    ds:InterlockedIncrement
0x9A204A: pop     edi
0x9A204B: pop     esi
0x9A204C: mov     al, 1
0x9A204E: pop     ebx
0x9A204F: retn    4
