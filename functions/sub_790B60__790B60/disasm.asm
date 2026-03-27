0x790B60: push    esi
0x790B61: mov     esi, [esp+4+arg_4]
0x790B65: test    esi, esi
0x790B67: push    edi
0x790B68: mov     edi, [esp+8+arg_0]
0x790B6C: mov     eax, esi
0x790B6E: mov     ecx, edi
0x790B70: jbe     short loc_790B86
0x790B72: mov     edx, [esp+8+arg_8]
0x790B76: push    ebx
0x790B77: mov     ebx, [edx]
0x790B79: mov     [ecx], ebx
0x790B7B: sub     eax, 1
0x790B7E: add     ecx, 4
0x790B81: test    eax, eax
0x790B83: ja      short loc_790B77
0x790B85: pop     ebx
0x790B86: lea     eax, [edi+esi*4]
0x790B89: pop     edi
0x790B8A: pop     esi
0x790B8B: retn    0Ch
