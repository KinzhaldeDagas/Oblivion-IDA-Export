0x77DEE0: push    ebx
0x77DEE1: mov     ebx, [esp+4+arg_4]
0x77DEE5: push    edi
0x77DEE6: mov     edi, [esp+8+arg_0]
0x77DEEA: cmp     ebx, [edi+1Ch]
0x77DEED: jnb     short loc_77DF29
0x77DEEF: mov     eax, [edi+24h]
0x77DEF2: push    esi
0x77DEF3: mov     esi, [eax+ebx*4]
0x77DEF6: test    esi, esi
0x77DEF8: jz      short loc_77DF28
0x77DEFA: mov     eax, [esi+8]
0x77DEFD: test    eax, eax
0x77DEFF: jz      short loc_77DF09
0x77DF01: mov     ecx, [eax]
0x77DF03: mov     edx, [ecx+8]
0x77DF06: push    eax
0x77DF07: call    edx
0x77DF09: cmp     ebx, [edi+1Ch]
0x77DF0C: jnb     short loc_77DF18
0x77DF0E: mov     eax, [edi+24h]
0x77DF11: mov     dword ptr [eax+ebx*4], 0
0x77DF18: push    esi
0x77DF19: mov     dword ptr [esi+8], 0
0x77DF20: call    FormHeapFree
0x77DF25: add     esp, 4
0x77DF28: pop     esi
0x77DF29: pop     edi
0x77DF2A: pop     ebx
0x77DF2B: retn    8
