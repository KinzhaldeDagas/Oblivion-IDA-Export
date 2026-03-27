0x71DB00: mov     eax, [esp+arg_14]
0x71DB04: cmp     dword ptr [eax+4], 0FF00h
0x71DB0B: jnz     locret_71DBC0
0x71DB11: mov     eax, [eax]
0x71DB13: cmp     eax, 0FF0000h
0x71DB18: push    ebp
0x71DB19: push    esi
0x71DB1A: push    edi
0x71DB1B: jnz     short loc_71DB6B
0x71DB1D: mov     eax, [esp+0Ch+arg_4]
0x71DB21: test    eax, eax
0x71DB23: jbe     loc_71DBBD
0x71DB29: mov     edi, [esp+0Ch+arg_0]
0x71DB2D: mov     ecx, [esp+0Ch+arg_18]
0x71DB31: mov     ebp, eax
0x71DB33: mov     eax, [esp+0Ch+arg_C]
0x71DB37: test    edi, edi
0x71DB39: jbe     short loc_71DB62
0x71DB3B: mov     esi, edi
0x71DB3D: lea     ecx, [ecx+0]
0x71DB40: movzx   edx, byte ptr [ecx+2]
0x71DB44: mov     [eax], dl
0x71DB46: movzx   edx, byte ptr [ecx+1]
0x71DB4A: add     eax, 1
0x71DB4D: mov     [eax], dl
0x71DB4F: movzx   edx, byte ptr [ecx]
0x71DB52: add     eax, 1
0x71DB55: mov     [eax], dl
0x71DB57: add     eax, 1
0x71DB5A: add     ecx, 4
0x71DB5D: sub     esi, 1
0x71DB60: jnz     short loc_71DB40
0x71DB62: sub     ebp, 1
0x71DB65: jnz     short loc_71DB37
0x71DB67: pop     edi
0x71DB68: pop     esi
0x71DB69: pop     ebp
0x71DB6A: retn
0x71DB6B: cmp     eax, 0FFh
0x71DB70: jnz     short loc_71DBBD
0x71DB72: mov     eax, [esp+0Ch+arg_4]
0x71DB76: test    eax, eax
0x71DB78: jbe     short loc_71DBBD
0x71DB7A: mov     edi, [esp+0Ch+arg_0]
0x71DB7E: mov     ecx, [esp+0Ch+arg_18]
0x71DB82: mov     ebp, eax
0x71DB84: mov     eax, [esp+0Ch+arg_C]
0x71DB88: test    edi, edi
0x71DB8A: jbe     short loc_71DBB8
0x71DB8C: mov     esi, edi
0x71DB8E: mov     edi, edi
0x71DB90: movzx   edx, byte ptr [ecx]
0x71DB93: mov     [eax], dl
0x71DB95: movzx   edx, byte ptr [ecx+1]
0x71DB99: add     ecx, 1
0x71DB9C: add     eax, 1
0x71DB9F: mov     [eax], dl
0x71DBA1: movzx   edx, byte ptr [ecx+1]
0x71DBA5: add     ecx, 1
0x71DBA8: add     eax, 1
0x71DBAB: mov     [eax], dl
0x71DBAD: add     eax, 1
0x71DBB0: add     ecx, 2
0x71DBB3: sub     esi, 1
0x71DBB6: jnz     short loc_71DB90
0x71DBB8: sub     ebp, 1
0x71DBBB: jnz     short loc_71DB88
0x71DBBD: pop     edi
0x71DBBE: pop     esi
0x71DBBF: pop     ebp
0x71DBC0: retn
