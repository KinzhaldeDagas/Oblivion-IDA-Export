0xA16520: push    esi
0xA16521: mov     esi, g_worldScenegraph
0xA16527: test    esi, esi
0xA16529: jz      short loc_A16547
0xA1652B: lea     eax, [esi+4]
0xA1652E: push    eax; lpAddend
0xA1652F: call    ds:InterlockedDecrement
0xA16535: test    eax, eax
0xA16537: jnz     short loc_A16547
0xA16539: test    esi, esi
0xA1653B: jz      short loc_A16547
0xA1653D: mov     edx, [esi]
0xA1653F: mov     eax, [edx]
0xA16541: push    1
0xA16543: mov     ecx, esi
0xA16545: call    eax
0xA16547: pop     esi
0xA16548: retn
