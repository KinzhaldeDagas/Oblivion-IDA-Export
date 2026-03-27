0xA16670: push    esi
0xA16671: mov     esi, menuRenderedTexture
0xA16677: test    esi, esi
0xA16679: jz      short loc_A16697
0xA1667B: lea     eax, [esi+4]
0xA1667E: push    eax; lpAddend
0xA1667F: call    ds:InterlockedDecrement
0xA16685: test    eax, eax
0xA16687: jnz     short loc_A16697
0xA16689: test    esi, esi
0xA1668B: jz      short loc_A16697
0xA1668D: mov     edx, [esi]
0xA1668F: mov     eax, [edx]
0xA16691: push    1
0xA16693: mov     ecx, esi
0xA16695: call    eax
0xA16697: pop     esi
0xA16698: retn
