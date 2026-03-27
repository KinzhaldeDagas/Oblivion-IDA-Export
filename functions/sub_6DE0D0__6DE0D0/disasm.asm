0x6DE0D0: push    esi
0x6DE0D1: mov     esi, ecx
0x6DE0D3: mov     eax, [esi]
0x6DE0D5: push    eax
0x6DE0D6: call    FormHeapFree
0x6DE0DB: mov     ecx, [esi+4]
0x6DE0DE: push    ecx
0x6DE0DF: call    FormHeapFree
0x6DE0E4: mov     esi, [esi+8]
0x6DE0E7: add     esp, 8
0x6DE0EA: test    esi, esi
0x6DE0EC: jz      short loc_6DE10A
0x6DE0EE: lea     edx, [esi+4]
0x6DE0F1: push    edx; lpAddend
0x6DE0F2: call    dword ptr ds:0A2807Ch
0x6DE0F8: test    eax, eax
0x6DE0FA: jnz     short loc_6DE10A
0x6DE0FC: test    esi, esi
0x6DE0FE: jz      short loc_6DE10A
0x6DE100: mov     eax, [esi]
0x6DE102: mov     edx, [eax]
0x6DE104: push    1
0x6DE106: mov     ecx, esi
0x6DE108: call    edx
0x6DE10A: pop     esi
0x6DE10B: retn
