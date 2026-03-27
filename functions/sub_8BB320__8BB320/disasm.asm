0x8BB320: push    esi
0x8BB321: mov     esi, ecx
0x8BB323: mov     eax, [esi+8]
0x8BB326: test    eax, eax
0x8BB328: jbe     short loc_8BB33A
0x8BB32A: mov     cl, [esi+0Ch]
0x8BB32D: test    cl, cl
0x8BB32F: jz      short loc_8BB33A
0x8BB331: push    eax; File
0x8BB332: call    _fclose
0x8BB337: add     esp, 4
0x8BB33A: mov     dword ptr [esi+8], 0
0x8BB341: pop     esi
0x8BB342: retn
