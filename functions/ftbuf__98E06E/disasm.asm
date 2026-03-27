0x98E06E: cmp     [esp+arg_0], 0
0x98E073: jz      short locret_98E09C
0x98E075: push    esi
0x98E076: mov     esi, [esp+4+File]
0x98E07A: test    word ptr [esi+0Ch], 1000h
0x98E080: jz      short loc_98E09B
0x98E082: push    esi; File
0x98E083: call    __flush
0x98E088: and     dword ptr [esi+0Ch], 0FFFFEEFFh
0x98E08F: and     dword ptr [esi+18h], 0
0x98E093: and     dword ptr [esi], 0
0x98E096: and     dword ptr [esi+8], 0
0x98E09A: pop     ecx
0x98E09B: pop     esi
0x98E09C: retn
