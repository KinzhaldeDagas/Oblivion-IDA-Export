0x4B9C40: push    esi
0x4B9C41: mov     esi, [esp+4+arg_0]
0x4B9C45: mov     edx, offset aTexturesTreesB; "Textures\\Trees\\Billboards"
0x4B9C4A: mov     al, 54h ; 'T'
0x4B9C4C: sub     edx, esi
0x4B9C4E: mov     edi, edi
0x4B9C50: mov     [esi], al
0x4B9C52: mov     al, [edx+esi+1]
0x4B9C56: add     esi, 1
0x4B9C59: test    al, al
0x4B9C5B: jnz     short loc_4B9C50
0x4B9C5D: mov     eax, [ecx+24h]
0x4B9C60: mov     edx, [eax+14h]
0x4B9C63: add     ecx, 24h ; '$'
0x4B9C66: call    edx
0x4B9C68: mov     cl, [eax]
0x4B9C6A: cmp     cl, 2Eh ; '.'
0x4B9C6D: jz      short loc_4B9C83
0x4B9C6F: nop
0x4B9C70: test    cl, cl
0x4B9C72: jz      short loc_4B9C83
0x4B9C74: add     eax, 1
0x4B9C77: mov     [esi], cl
0x4B9C79: mov     cl, [eax]
0x4B9C7B: add     esi, 1
0x4B9C7E: cmp     cl, 2Eh ; '.'
0x4B9C81: jnz     short loc_4B9C70
0x4B9C83: cmp     byte ptr [eax], 2Eh ; '.'
0x4B9C86: jnz     short loc_4B9CA0
0x4B9C88: mov     byte ptr [esi], 2Eh ; '.'
0x4B9C8B: add     esi, 1
0x4B9C8E: mov     byte ptr [esi], 64h ; 'd'
0x4B9C91: add     esi, 1
0x4B9C94: mov     byte ptr [esi], 64h ; 'd'
0x4B9C97: add     esi, 1
0x4B9C9A: mov     byte ptr [esi], 73h ; 's'
0x4B9C9D: add     esi, 1
0x4B9CA0: mov     byte ptr [esi], 0
0x4B9CA3: pop     esi
0x4B9CA4: retn    4
