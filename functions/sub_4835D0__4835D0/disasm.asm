0x4835D0: push    esi
0x4835D1: mov     esi, [esp+4+arg_4]
0x4835D5: test    esi, esi
0x4835D7: jz      short loc_4835FB
0x4835D9: mov     ecx, esi
0x4835DB: call    TESWorldSpace_GetParentWorldpsace
0x4835E0: test    eax, eax
0x4835E2: jz      short loc_4835EB
0x4835E4: mov     byte ptr ds:0B34420h, 1
0x4835EB: mov     ecx, esi
0x4835ED: call    TESWorldSpace_GetParentWorldpsace
0x4835F2: test    eax, eax
0x4835F4: jnz     short loc_4835FB
0x4835F6: mov     ds:0B34420h, al
0x4835FB: pop     esi
0x4835FC: retn
