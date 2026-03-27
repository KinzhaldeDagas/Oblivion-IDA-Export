0x64FFF0: push    ebx
0x64FFF1: mov     ebx, [esp+4+arg_0]
0x64FFF5: push    esi
0x64FFF6: push    edi
0x64FFF7: mov     edi, ecx
0x64FFF9: mov     esi, [edi+17Ch]
0x64FFFF: test    esi, esi
0x650001: jz      short loc_650017
0x650003: cmp     esi, ebx
0x650005: jz      short loc_65001D
0x650007: mov     ecx, esi; this
0x650009: call    DisposeActorAnimData
0x65000E: push    esi
0x65000F: call    FormHeapFree
0x650014: add     esp, 4
0x650017: mov     [edi+17Ch], ebx
0x65001D: pop     edi
0x65001E: pop     esi
0x65001F: pop     ebx
0x650020: retn    4
