0x864400: push    ebx
0x864401: push    esi
0x864402: mov     esi, [esp+8+arg_0]
0x864406: push    esi
0x864407: call    sub_7DA220
0x86440C: push    7
0x86440E: mov     ecx, esi
0x864410: mov     bl, al
0x864412: call    NiNode_GetNiPropertyByID
0x864417: test    eax, eax
0x864419: jz      short loc_864423
0x86441B: push    eax
0x86441C: mov     ecx, esi
0x86441E: call    sub_4A1220
0x864423: pop     esi
0x864424: mov     al, bl
0x864426: pop     ebx
0x864427: retn    4
