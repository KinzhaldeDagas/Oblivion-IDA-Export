0x782C60: push    esi
0x782C61: push    edi
0x782C62: mov     esi, ecx
0x782C64: xor     edi, edi
0x782C66: push    offset NiRefObject_objcount; lpAddend
0x782C6B: mov     dword ptr [esi], offset ??_7NiRefObject@@6B@; const NiRefObject::`vftable'
0x782C71: mov     [esi+4], edi
0x782C74: call    dword ptr ds:0A28078h
0x782C7A: mov     eax, [esp+8+arg_0]
0x782C7E: push    eax
0x782C7F: mov     ecx, esi
0x782C81: mov     dword ptr [esi], offset ??_7NiD3DShaderProgram@@6B@; const NiD3DShaderProgram::`vftable'
0x782C87: mov     [esi+8], edi
0x782C8A: mov     [esi+0Ch], edi
0x782C8D: mov     [esi+10h], edi
0x782C90: mov     [esi+14h], edi
0x782C93: mov     [esi+18h], edi
0x782C96: mov     [esi+1Ch], edi
0x782C99: mov     [esi+20h], edi
0x782C9C: mov     [esi+24h], edi
0x782C9F: call    sub_782BF0
0x782CA4: pop     edi
0x782CA5: mov     eax, esi
0x782CA7: pop     esi
0x782CA8: retn    4
