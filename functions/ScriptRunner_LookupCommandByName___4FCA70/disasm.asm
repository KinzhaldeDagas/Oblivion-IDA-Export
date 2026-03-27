0x4FCA70: push    ebx
0x4FCA71: push    esi
0x4FCA72: push    edi
0x4FCA73: mov     edi, [esp+0Ch+Str2]
0x4FCA77: xor     ebx, ebx
0x4FCA79: mov     esi, offset off_B0A2CC
0x4FCA7E: mov     edi, edi
0x4FCA80: mov     eax, [esi-4]
0x4FCA83: push    edi; Str2
0x4FCA84: push    eax; Str1
0x4FCA85: call    __strcmp
0x4FCA8A: add     esp, 8
0x4FCA8D: test    eax, eax
0x4FCA8F: jz      loc_4FCB2B
0x4FCA95: mov     ecx, [esi]
0x4FCA97: push    edi; Str2
0x4FCA98: push    ecx; Str1
0x4FCA99: call    __strcmp
0x4FCA9E: add     esp, 8
0x4FCAA1: test    eax, eax
0x4FCAA3: jz      loc_4FCB2B
0x4FCAA9: add     esi, 28h ; '('
0x4FCAAC: add     ebx, 1
0x4FCAAF: cmp     esi, offset byte_B0A54C
0x4FCAB5: jl      short loc_4FCA80
0x4FCAB7: xor     ebx, ebx
0x4FCAB9: mov     esi, offset Script_CommandList?.shortName
0x4FCABE: mov     edi, edi
0x4FCAC0: mov     ecx, [esi-4]
0x4FCAC3: push    ecx; Str2
0x4FCAC4: push    edi; Str1
0x4FCAC5: call    __strcmp
0x4FCACA: add     esp, 8
0x4FCACD: test    eax, eax
0x4FCACF: jz      short loc_4FCB48
0x4FCAD1: mov     edx, [esi]
0x4FCAD3: push    edx; Str2
0x4FCAD4: push    edi; Str1
0x4FCAD5: call    __strcmp
0x4FCADA: add     esp, 8
0x4FCADD: test    eax, eax
0x4FCADF: jz      short loc_4FCB48
0x4FCAE1: add     esi, 28h ; '('
0x4FCAE4: add     ebx, 1
0x4FCAE7: cmp     esi, (offset Script_CommandList?.shortName+39A8h)
0x4FCAED: jl      short loc_4FCAC0
0x4FCAEF: xor     ebx, ebx
0x4FCAF1: mov     esi, offset Script_ConsoleCommandList.shortName
0x4FCAF6: mov     edx, [esi-4]
0x4FCAF9: push    edx; Str2
0x4FCAFA: push    edi; Str1
0x4FCAFB: call    __strcmp
0x4FCB00: add     esp, 8
0x4FCB03: test    eax, eax
0x4FCB05: jz      short loc_4FCB65
0x4FCB07: mov     eax, [esi]
0x4FCB09: push    eax; Str2
0x4FCB0A: push    edi; Str1
0x4FCB0B: call    __strcmp
0x4FCB10: add     esp, 8
0x4FCB13: test    eax, eax
0x4FCB15: jz      short loc_4FCB65
0x4FCB17: add     esi, 28h ; '('
0x4FCB1A: add     ebx, 1
0x4FCB1D: cmp     esi, offset off_B0C89C
0x4FCB23: jl      short loc_4FCAF6
0x4FCB25: pop     edi
0x4FCB26: pop     esi
0x4FCB27: xor     al, al
0x4FCB29: pop     ebx
0x4FCB2A: retn
0x4FCB2B: lea     edx, [ebx+ebx*4]
0x4FCB2E: mov     byte ptr [edi+204h], 58h ; 'X'
0x4FCB35: mov     eax, ds:0B0A2D0h[edx*8]
0x4FCB3C: mov     [edi+208h], eax
0x4FCB42: pop     edi
0x4FCB43: pop     esi
0x4FCB44: mov     al, 1
0x4FCB46: pop     ebx
0x4FCB47: retn
0x4FCB48: lea     eax, [ebx+ebx*4]
0x4FCB4B: mov     byte ptr [edi+204h], 58h ; 'X'
0x4FCB52: mov     ecx, ds:0B0C8C8h[eax*8]
0x4FCB59: mov     [edi+208h], ecx
0x4FCB5F: pop     edi
0x4FCB60: pop     esi
0x4FCB61: mov     al, 1
0x4FCB63: pop     ebx
0x4FCB64: retn
0x4FCB65: lea     ecx, [ebx+ebx*4]
0x4FCB68: mov     byte ptr [edi+204h], 58h ; 'X'
0x4FCB6F: mov     edx, ds:0B0B428h[ecx*8]
0x4FCB76: mov     [edi+208h], edx
0x4FCB7C: pop     edi
0x4FCB7D: pop     esi
0x4FCB7E: mov     al, 1
0x4FCB80: pop     ebx
0x4FCB81: retn
