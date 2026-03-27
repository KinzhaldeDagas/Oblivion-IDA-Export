0x997725: push    esi
0x997726: push    edi
0x997727: xor     edi, edi
0x997729: cmp     dword_BABC14, edi
0x99772F: jnz     short loc_997736
0x997731: call    ___initmbctable
0x997736: mov     esi, dword_BABC04
0x99773C: test    esi, esi
0x99773E: jnz     short loc_997745
0x997740: mov     esi, offset EmptyString
0x997745: mov     al, [esi]
0x997747: cmp     al, 20h ; ' '
0x997749: ja      short loc_997753
0x99774B: test    al, al
0x99774D: jz      short loc_99777D
0x99774F: test    edi, edi
0x997751: jz      short loc_997777
0x997753: cmp     al, 22h ; '"'
0x997755: jnz     short loc_997760
0x997757: xor     ecx, ecx
0x997759: test    edi, edi
0x99775B: setz    cl
0x99775E: mov     edi, ecx
0x997760: movzx   eax, al
0x997763: push    eax; unsigned int
0x997764: call    __ismbblead
0x997769: test    eax, eax
0x99776B: pop     ecx
0x99776C: jz      short loc_99776F
0x99776E: inc     esi
0x99776F: inc     esi
0x997770: jmp     short loc_997745
0x997772: cmp     al, 20h ; ' '
0x997774: ja      short loc_99777D
0x997776: inc     esi
0x997777: mov     al, [esi]
0x997779: test    al, al
0x99777B: jnz     short loc_997772
0x99777D: pop     edi
0x99777E: mov     eax, esi
0x997780: pop     esi
0x997781: retn
