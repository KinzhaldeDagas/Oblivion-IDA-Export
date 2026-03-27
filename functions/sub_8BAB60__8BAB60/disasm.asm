0x8BAB60: push    ebx
0x8BAB61: push    ebp
0x8BAB62: mov     ebx, ecx
0x8BAB64: mov     al, [ebx+10h]
0x8BAB67: test    al, al
0x8BAB69: push    esi; dwMilliseconds
0x8BAB6A: push    edi; hHandle
0x8BAB6B: jz      short loc_8BAB96
0x8BAB6D: mov     eax, [ebx+104h]
0x8BAB73: xor     esi, esi
0x8BAB75: test    eax, eax
0x8BAB77: jle     short loc_8BAB92
0x8BAB79: lea     edi, [ebx+0Ch]
0x8BAB7C: lea     esp, [esp+0]
0x8BAB80: mov     ecx, edi
0x8BAB82: call    WaitForSingleObject_0
0x8BAB87: mov     eax, [ebx+104h]
0x8BAB8D: inc     esi
0x8BAB8E: cmp     esi, eax
0x8BAB90: jl      short loc_8BAB80
0x8BAB92: mov     byte ptr [ebx+10h], 0
0x8BAB96: mov     eax, [ebx+104h]
0x8BAB9C: xor     ebp, ebp
0x8BAB9E: test    eax, eax
0x8BABA0: jle     short loc_8BABDC
0x8BABA2: lea     esi, [ebx+30h]
0x8BABA5: mov     eax, [esi]
0x8BABA7: test    eax, eax
0x8BABA9: jz      short loc_8BABC8
0x8BABAB: mov     edi, [esi+4]
0x8BABAE: sub     edi, eax
0x8BABB0: push    edi
0x8BABB1: push    eax
0x8BABB2: mov     eax, [esi-8]
0x8BABB5: push    eax
0x8BABB6: call    sub_8B1890
0x8BABBB: mov     ecx, [esi-8]
0x8BABBE: add     esp, 0Ch
0x8BABC1: add     ecx, edi
0x8BABC3: mov     [esi-4], ecx
0x8BABC6: jmp     short loc_8BABCE
0x8BABC8: mov     edx, [esi-8]
0x8BABCB: mov     [esi-4], edx
0x8BABCE: mov     eax, [ebx+104h]
0x8BABD4: inc     ebp
0x8BABD5: add     esi, 28h ; '('
0x8BABD8: cmp     ebp, eax
0x8BABDA: jl      short loc_8BABA5
0x8BABDC: pop     edi
0x8BABDD: pop     esi
0x8BABDE: pop     ebp
0x8BABDF: pop     ebx
0x8BABE0: retn
