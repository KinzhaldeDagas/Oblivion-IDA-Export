0x42BB90: movzx   edx, word ptr [ecx+0Ah]
0x42BB94: mov     eax, [esp+arg_0]
0x42BB98: cmp     eax, edx
0x42BB9A: jb      short loc_42BBBC
0x42BB9C: lea     edx, [eax+1]
0x42BB9F: mov     [ecx+0Ah], dx
0x42BBA3: mov     edx, [esp+arg_4]
0x42BBA7: cmp     dword ptr [edx], 0
0x42BBAA: jz      short loc_42BBED
0x42BBAC: add     word ptr [ecx+0Ch], 1
0x42BBB1: mov     ecx, [ecx+4]
0x42BBB4: mov     edx, [edx]
0x42BBB6: mov     [ecx+eax*4], edx
0x42BBB9: retn    8
0x42BBBC: mov     edx, [esp+arg_4]
0x42BBC0: cmp     dword ptr [edx], 0
0x42BBC3: push    esi
0x42BBC4: mov     esi, [ecx+4]
0x42BBC7: jz      short loc_42BBE0
0x42BBC9: cmp     dword ptr [esi+eax*4], 0
0x42BBCD: jnz     short loc_42BBEC
0x42BBCF: add     word ptr [ecx+0Ch], 1
0x42BBD4: mov     ecx, [ecx+4]
0x42BBD7: mov     edx, [edx]
0x42BBD9: pop     esi
0x42BBDA: mov     [ecx+eax*4], edx
0x42BBDD: retn    8
0x42BBE0: cmp     dword ptr [esi+eax*4], 0
0x42BBE4: jz      short loc_42BBEC
0x42BBE6: add     word ptr [ecx+0Ch], 0FFFFh
0x42BBEC: pop     esi
0x42BBED: mov     ecx, [ecx+4]
0x42BBF0: mov     edx, [edx]
0x42BBF2: mov     [ecx+eax*4], edx
0x42BBF5: retn    8
