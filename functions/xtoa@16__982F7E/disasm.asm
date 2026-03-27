0x982F7E: cmp     [esp+arg_4], 0
0x982F83: jz      short loc_982F8B
0x982F85: mov     byte ptr [ecx], 2Dh ; '-'
0x982F88: inc     ecx
0x982F89: neg     eax
0x982F8B: push    esi
0x982F8C: mov     esi, ecx
0x982F8E: xor     edx, edx
0x982F90: div     [esp+4+arg_0]
0x982F94: cmp     edx, 9
0x982F97: jbe     short loc_982F9E
0x982F99: add     dl, 57h ; 'W'
0x982F9C: jmp     short loc_982FA1
0x982F9E: add     dl, 30h ; '0'
0x982FA1: mov     [ecx], dl
0x982FA3: inc     ecx
0x982FA4: test    eax, eax
0x982FA6: ja      short loc_982F8E
0x982FA8: mov     byte ptr [ecx], 0
0x982FAB: dec     ecx
0x982FAC: mov     dl, [esi]
0x982FAE: mov     al, [ecx]
0x982FB0: mov     [ecx], dl
0x982FB2: dec     ecx
0x982FB3: mov     [esi], al
0x982FB5: inc     esi
0x982FB6: cmp     esi, ecx
0x982FB8: jb      short loc_982FAC
0x982FBA: pop     esi
0x982FBB: retn    8
