0x6B7520: xor     eax, eax
0x6B7522: test    ecx, ecx
0x6B7524: push    esi; ArgList
0x6B7525: jz      short loc_6B7548
0x6B7527: mov     esi, [esp+4+arg_0]
0x6B752B: jmp     short loc_6B7530
0x6B752D: align 10h
0x6B7530: mov     edx, [ecx+4]
0x6B7533: test    edx, edx
0x6B7535: jnz     short loc_6B753B
0x6B7537: cmp     [ecx], edx
0x6B7539: jz      short loc_6B7548
0x6B753B: cmp     esi, [ecx]
0x6B753D: jz      short loc_6B7558
0x6B753F: mov     ecx, edx
0x6B7541: add     eax, 1
0x6B7544: test    ecx, ecx
0x6B7546: jnz     short loc_6B7530
0x6B7548: push    offset aWhenTryingTo_5; "When trying to get a dialogue item inde"...
0x6B754D: call    PrintError
0x6B7552: add     esp, 4
0x6B7555: xor     ax, ax
0x6B7558: pop     esi
0x6B7559: retn    4
