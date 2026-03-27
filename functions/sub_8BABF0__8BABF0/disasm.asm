0x8BABF0: push    ebx
0x8BABF1: push    ebp
0x8BABF2: push    esi; dwMilliseconds
0x8BABF3: push    edi; hHandle
0x8BABF4: mov     edi, ecx
0x8BABF6: call    sub_8BAB60
0x8BABFB: mov     eax, [edi+104h]
0x8BAC01: xor     ebp, ebp
0x8BAC03: test    eax, eax
0x8BAC05: jle     short loc_8BAC29
0x8BAC07: lea     esi, [edi+24h]
0x8BAC0A: mov     ebx, 1
0x8BAC0F: nop
0x8BAC10: push    ebx; lReleaseCount
0x8BAC11: mov     ecx, esi
0x8BAC13: mov     [esi-4], bl
0x8BAC16: call    ReleaseSemaphore_0
0x8BAC1B: mov     eax, [edi+104h]
0x8BAC21: inc     ebp
0x8BAC22: add     esi, 28h ; '('
0x8BAC25: cmp     ebp, eax
0x8BAC27: jl      short loc_8BAC10
0x8BAC29: mov     eax, [edi+104h]
0x8BAC2F: xor     esi, esi
0x8BAC31: test    eax, eax
0x8BAC33: jle     short loc_8BAC4A
0x8BAC35: lea     ebx, [edi+0Ch]
0x8BAC38: mov     ecx, ebx
0x8BAC3A: call    WaitForSingleObject_0
0x8BAC3F: mov     eax, [edi+104h]
0x8BAC45: inc     esi
0x8BAC46: cmp     esi, eax
0x8BAC48: jl      short loc_8BAC38
0x8BAC4A: pop     edi
0x8BAC4B: pop     esi
0x8BAC4C: pop     ebp
0x8BAC4D: pop     ebx
0x8BAC4E: retn
