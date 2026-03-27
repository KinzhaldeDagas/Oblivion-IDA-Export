0x89D400: push    esi
0x89D401: push    edi
0x89D402: mov     edi, [esp+8+arg_0]
0x89D406: mov     esi, ecx
0x89D408: cmp     [esi+8], edi
0x89D40B: jz      short loc_89D424
0x89D40D: mov     eax, [esi]
0x89D40F: mov     edx, [eax+50h]
0x89D412: push    0
0x89D414: call    edx
0x89D416: mov     eax, [esi]
0x89D418: mov     edx, [eax+50h]
0x89D41B: push    1
0x89D41D: mov     ecx, esi
0x89D41F: mov     [esi+8], edi
0x89D422: call    edx
0x89D424: pop     edi
0x89D425: pop     esi
0x89D426: retn    4
