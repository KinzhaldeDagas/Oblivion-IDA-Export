0xA27760: push    esi
0xA27761: mov     esi, dword_B46014
0xA27767: test    esi, esi
0xA27769: jz      short loc_A27787
0xA2776B: lea     eax, [esi+4]
0xA2776E: push    eax; lpAddend
0xA2776F: call    ds:InterlockedDecrement
0xA27775: test    eax, eax
0xA27777: jnz     short loc_A27787
0xA27779: test    esi, esi
0xA2777B: jz      short loc_A27787
0xA2777D: mov     edx, [esi]
0xA2777F: mov     eax, [edx]
0xA27781: push    1
0xA27783: mov     ecx, esi
0xA27785: call    eax
0xA27787: pop     esi
0xA27788: retn
