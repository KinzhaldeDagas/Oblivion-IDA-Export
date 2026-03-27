0x996352: dec     dword ptr [ebp+4]
0x996355: cmp     dword ptr [ebp-4], 0FFFFFFFFh
0x996359: mov     edi, esi
0x99635B: jz      short loc_99636A
0x99635D: push    dword ptr [ebp-14h]; File
0x996360: push    dword ptr [ebp-4]; Ch
0x996363: call    __ungetc_nolock
0x996368: pop     ecx
0x996369: pop     ecx
0x99636A: cmp     dword ptr [ebp-2Ch], 0
0x99636E: jz      short loc_99637E
0x996370: mov     eax, [ebp-0Ch]
0x996373: dec     dword ptr [ebp-0Ch]
0x996376: test    eax, eax
0x996378: jz      loc_996637
0x99637E: mov     edx, [ebp-14h]
0x996381: inc     dword ptr [ebp+4]
0x996384: call    __inc
0x996389: cmp     eax, 0FFFFFFFFh
0x99638C: mov     [ebp-4], eax
0x99638F: jz      loc_996624
0x996395: cmp     ebx, 63h ; 'c'
0x996398: jz      short loc_9963E3
0x99639A: cmp     ebx, 73h ; 's'
0x99639D: jnz     short loc_9963B2
0x99639F: cmp     eax, 9
0x9963A2: jl      short loc_9963AD
0x9963A4: cmp     eax, 0Dh
0x9963A7: jle     loc_996624
0x9963AD: cmp     eax, 20h ; ' '
0x9963B0: jnz     short loc_9963E3
0x9963B2: cmp     ebx, 7Bh ; '{'
0x9963B5: jnz     loc_996624
0x9963BB: movsx   ebx, byte ptr [ebp-18h]
0x9963BF: xor     edx, edx
0x9963C1: mov     ecx, eax
0x9963C3: and     ecx, 7
0x9963C6: inc     edx
0x9963C7: shl     edx, cl
0x9963C9: mov     ecx, eax
0x9963CB: sar     ecx, 3
0x9963CE: movsx   ecx, byte ptr [ebp+ecx+168h]
0x9963D6: xor     ecx, ebx
0x9963D8: test    ecx, edx
0x9963DA: mov     ebx, [ebp-20h]
0x9963DD: jz      loc_996624
0x9963E3: cmp     byte ptr [ebp-0Dh], 0
0x9963E7: jnz     loc_99661E
0x9963ED: cmp     byte ptr [ebp-16h], 0
0x9963F1: jz      loc_996613
0x9963F7: mov     [ebp-50h], al
0x9963FA: movzx   eax, al
0x9963FD: push    eax; C
0x9963FE: call    _isleadbyte
0x996403: test    eax, eax
0x996405: pop     ecx
0x996406: jz      short loc_996416
0x996408: mov     edx, [ebp-14h]
0x99640B: inc     dword ptr [ebp+4]
0x99640E: call    __inc
0x996413: mov     [ebp-4Fh], al
0x996416: lea     eax, [ebp-6Ch]
0x996419: push    eax; Locale
0x99641A: mov     eax, [ebp-6Ch]
0x99641D: mov     dword ptr [ebp-5Ch], 3Fh ; '?'
0x996424: push    dword ptr [eax+0ACh]; SrcSizeInBytes
0x99642A: lea     eax, [ebp-50h]
0x99642D: push    eax; SrcCh
0x99642E: lea     eax, [ebp-5Ch]
0x996431: push    eax; DstCh
0x996432: call    __mbtowc_l
0x996437: mov     ax, [ebp-5Ch]
0x99643B: add     esp, 10h
0x99643E: mov     [esi], ax
0x996441: inc     esi
0x996442: inc     esi
0x996443: jmp     loc_996616
