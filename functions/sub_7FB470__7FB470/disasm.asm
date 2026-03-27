0x7FB470: push    ebx
0x7FB471: mov     ebx, [esp+4+arg_C]
0x7FB475: push    esi
0x7FB476: mov     esi, ecx
0x7FB478: mov     ecx, [ebx+18h]
0x7FB47B: test    ecx, ecx
0x7FB47D: push    edi
0x7FB47E: mov     edi, [ebx+8]
0x7FB481: jz      short loc_7FB49D
0x7FB483: mov     eax, [ecx]
0x7FB485: mov     edx, [eax+54h]
0x7FB488: call    edx
0x7FB48A: xor     ecx, ecx
0x7FB48C: cmp     eax, 0Ah
0x7FB48F: setz    cl
0x7FB492: mov     eax, ecx
0x7FB494: test    eax, eax
0x7FB496: jz      short loc_7FB49D
0x7FB498: mov     edx, [ebx+18h]
0x7FB49B: jmp     short loc_7FB49F
0x7FB49D: xor     edx, edx
0x7FB49F: mov     eax, ds:0B42E90h
0x7FB4A4: cmp     eax, 156h
0x7FB4A9: jl      short loc_7FB4B6
0x7FB4AB: cmp     eax, 15Ah
0x7FB4B0: jle     loc_7FB67D
0x7FB4B6: xor     cl, cl
0x7FB4B8: xor     bl, bl
0x7FB4BA: test    edi, edi
0x7FB4BC: push    ebp
0x7FB4BD: mov     ebp, ds:0B42EACh
0x7FB4C3: jz      loc_7FB5C3
0x7FB4C9: mov     ax, [edi+18h]
0x7FB4CD: fld1
0x7FB4CF: shr     ax, 9
0x7FB4D3: test    al, 1
0x7FB4D5: jz      short loc_7FB4EC
0x7FB4D7: test    dword ptr [edx+1Ch], 800h
0x7FB4DE: jbe     short loc_7FB4EA
0x7FB4E0: fcom    dword ptr [edx+20h]
0x7FB4E3: fnstsw  ax
0x7FB4E5: test    ah, 41h
0x7FB4E8: jnz     short loc_7FB4EC
0x7FB4EA: mov     bl, 1
0x7FB4EC: test    byte ptr [edi+18h], 1
0x7FB4F0: jz      short loc_7FB509
0x7FB4F2: fcomp   dword ptr [edx+20h]
0x7FB4F5: fnstsw  ax
0x7FB4F7: test    ah, 41h
0x7FB4FA: jz      short loc_7FB505
0x7FB4FC: test    dword ptr [edx+1Ch], 100h
0x7FB503: jbe     short loc_7FB50B
0x7FB505: mov     cl, 1
0x7FB507: jmp     short loc_7FB513
0x7FB509: fstp    st
0x7FB50B: test    bl, bl
0x7FB50D: jz      loc_7FB5BE
0x7FB513: cmp     bp, 5
0x7FB517: jz      loc_7FB5BE
0x7FB51D: test    cl, cl
0x7FB51F: mov     ecx, [esi+18h]
0x7FB522: mov     edx, [ecx]
0x7FB524: mov     eax, [edx+64h]
0x7FB527: push    0
0x7FB529: jz      short loc_7FB56A
0x7FB52B: push    1
0x7FB52D: push    1Bh
0x7FB52F: call    eax
0x7FB531: movzx   eax, byte ptr [edi+18h]
0x7FB535: mov     ecx, [esi+18h]
0x7FB538: mov     edx, [ecx]
0x7FB53A: mov     edx, [edx+64h]
0x7FB53D: shr     eax, 1
0x7FB53F: and     eax, 0Fh
0x7FB542: mov     eax, [ecx+eax*4+20h]
0x7FB546: push    0
0x7FB548: push    eax
0x7FB549: push    13h
0x7FB54B: call    edx
0x7FB54D: movzx   edx, word ptr [edi+18h]
0x7FB551: mov     ecx, [esi+18h]
0x7FB554: mov     eax, [ecx]
0x7FB556: mov     eax, [eax+64h]
0x7FB559: shr     edx, 5
0x7FB55C: and     edx, 0Fh
0x7FB55F: mov     edx, [ecx+edx*4+20h]
0x7FB563: push    0
0x7FB565: push    edx
0x7FB566: push    14h
0x7FB568: jmp     short loc_7FB56E
0x7FB56A: push    0
0x7FB56C: push    1Bh
0x7FB56E: call    eax
0x7FB570: test    bl, bl
0x7FB572: mov     ecx, [esi+18h]
0x7FB575: mov     edx, [ecx]
0x7FB577: mov     eax, [edx+64h]
0x7FB57A: push    0
0x7FB57C: jz      short loc_7FB5B5
0x7FB57E: push    1
0x7FB580: push    0Fh
0x7FB582: call    eax
0x7FB584: movzx   eax, word ptr [edi+18h]
0x7FB588: mov     ecx, [esi+18h]
0x7FB58B: mov     edx, [ecx]
0x7FB58D: mov     edx, [edx+64h]
0x7FB590: shr     eax, 0Ah
0x7FB593: and     eax, 7
0x7FB596: mov     eax, [ecx+eax*4+4Ch]
0x7FB59A: push    0
0x7FB59C: push    eax
0x7FB59D: push    19h
0x7FB59F: call    edx
0x7FB5A1: mov     ecx, [esi+18h]
0x7FB5A4: movzx   edx, byte ptr [edi+1Ah]
0x7FB5A8: mov     eax, [ecx]
0x7FB5AA: mov     eax, [eax+64h]
0x7FB5AD: push    0
0x7FB5AF: push    edx
0x7FB5B0: jmp     loc_7FB678
0x7FB5B5: push    0
0x7FB5B7: push    0Fh
0x7FB5B9: jmp     loc_7FB67A
0x7FB5BE: mov     eax, ds:0B42E90h
0x7FB5C3: cmp     eax, 14Eh
0x7FB5C8: jl      short loc_7FB5D1
0x7FB5CA: cmp     eax, 151h
0x7FB5CF: jle     short loc_7FB5FA
0x7FB5D1: cmp     bp, 5
0x7FB5D5: jz      short loc_7FB5FA
0x7FB5D7: mov     ecx, [esi+18h]
0x7FB5DA: mov     edx, [ecx]
0x7FB5DC: mov     eax, [edx+64h]
0x7FB5DF: push    0
0x7FB5E1: push    0
0x7FB5E3: push    0Fh
0x7FB5E5: call    eax
0x7FB5E7: mov     ecx, [esi+18h]
0x7FB5EA: mov     edx, [ecx]
0x7FB5EC: mov     eax, [edx+64h]
0x7FB5EF: push    0
0x7FB5F1: push    0
0x7FB5F3: push    1Bh
0x7FB5F5: jmp     loc_7FB67A
0x7FB5FA: mov     cx, [edi+18h]
0x7FB5FE: shr     cx, 9
0x7FB602: test    cl, 1
0x7FB605: jnz     short loc_7FB61B
0x7FB607: test    byte ptr [edi+18h], 1
0x7FB60B: jz      loc_7FB6A5
0x7FB611: cmp     bp, 5
0x7FB615: jnz     loc_7FB6AB
0x7FB61B: mov     ecx, [esi+18h]
0x7FB61E: mov     edx, [ecx]
0x7FB620: mov     eax, [edx+8]
0x7FB623: push    edi
0x7FB624: call    eax
0x7FB626: test    byte ptr [edi+18h], 1
0x7FB62A: jz      short loc_7FB67C
0x7FB62C: mov     ecx, [esi+18h]
0x7FB62F: mov     edx, [ecx]
0x7FB631: mov     eax, [edx+64h]
0x7FB634: push    0
0x7FB636: push    0
0x7FB638: push    1Bh
0x7FB63A: call    eax
0x7FB63C: mov     cx, [edi+18h]
0x7FB640: shr     cx, 9
0x7FB644: test    cl, 1
0x7FB647: jnz     short loc_7FB67C
0x7FB649: mov     ecx, [esi+18h]
0x7FB64C: mov     edx, [ecx]
0x7FB64E: mov     eax, [edx+64h]
0x7FB651: push    0
0x7FB653: push    1
0x7FB655: push    0Fh
0x7FB657: call    eax
0x7FB659: mov     ecx, [esi+18h]
0x7FB65C: mov     edx, [ecx]
0x7FB65E: mov     eax, [edx+64h]
0x7FB661: push    0
0x7FB663: push    5
0x7FB665: push    19h
0x7FB667: call    eax
0x7FB669: push    0
0x7FB66B: push    80h ; '€'
0x7FB670: mov     ecx, [esi+18h]
0x7FB673: mov     edx, [ecx]
0x7FB675: mov     eax, [edx+64h]
0x7FB678: push    18h
0x7FB67A: call    eax
0x7FB67C: pop     ebp
0x7FB67D: mov     ecx, [esi+18h]
0x7FB680: mov     edi, [esp+0Ch+arg_C]
0x7FB684: mov     edx, [ecx]
0x7FB686: mov     eax, [edi+1Ch]
0x7FB689: mov     edx, [edx+20h]
0x7FB68C: push    eax
0x7FB68D: call    edx
0x7FB68F: mov     ecx, [esi+18h]
0x7FB692: mov     eax, [ecx]
0x7FB694: mov     edx, [edi+28h]
0x7FB697: mov     eax, [eax+24h]
0x7FB69A: push    edx
0x7FB69B: call    eax
0x7FB69D: pop     edi
0x7FB69E: pop     esi
0x7FB69F: xor     eax, eax
0x7FB6A1: pop     ebx
0x7FB6A2: retn    1Ch
0x7FB6A5: cmp     bp, 5
0x7FB6A9: jz      short loc_7FB6D1
0x7FB6AB: mov     ecx, [esi+18h]
0x7FB6AE: mov     edx, [ecx]
0x7FB6B0: mov     eax, [edx+64h]
0x7FB6B3: push    0
0x7FB6B5: push    1
0x7FB6B7: push    0Fh
0x7FB6B9: call    eax
0x7FB6BB: mov     ecx, [esi+18h]
0x7FB6BE: mov     edx, [ecx]
0x7FB6C0: mov     eax, [edx+64h]
0x7FB6C3: push    0
0x7FB6C5: push    5
0x7FB6C7: push    19h
0x7FB6C9: call    eax
0x7FB6CB: push    0
0x7FB6CD: push    0
0x7FB6CF: jmp     short loc_7FB670
0x7FB6D1: mov     ecx, [esi+18h]
0x7FB6D4: mov     edx, [ecx]
0x7FB6D6: mov     eax, [edx+64h]
0x7FB6D9: push    0
0x7FB6DB: push    0
0x7FB6DD: push    0Fh
0x7FB6DF: jmp     short loc_7FB67A
