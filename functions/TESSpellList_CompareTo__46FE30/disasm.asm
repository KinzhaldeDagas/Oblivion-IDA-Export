0x46FE30: mov     eax, [esp+arg_0]
0x46FE34: push    ebx
0x46FE35: push    0; int
0x46FE37: push    offset ??_R0?AVTESSpellList@@@8; struct TypeDescriptor *
0x46FE3C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46FE41: push    0; int
0x46FE43: push    eax; void *
0x46FE44: mov     ebx, ecx
0x46FE46: call    OblivionDynamicCast
0x46FE4B: add     esp, 14h
0x46FE4E: test    eax, eax
0x46FE50: jnz     short loc_46FE58
0x46FE52: mov     al, 1
0x46FE54: pop     ebx
0x46FE55: retn    4
0x46FE58: push    esi
0x46FE59: push    edi
0x46FE5A: lea     edx, [ebx+4]
0x46FE5D: xor     edi, edi
0x46FE5F: test    edx, edx
0x46FE61: jz      short loc_46FE8D
0x46FE63: mov     esi, [edx]
0x46FE65: test    esi, esi
0x46FE67: jz      short loc_46FE86
0x46FE69: lea     ecx, [eax+4]
0x46FE6C: test    ecx, ecx
0x46FE6E: jz      short loc_46FE7B
0x46FE70: cmp     [ecx], esi
0x46FE72: jz      short loc_46FE83
0x46FE74: mov     ecx, [ecx+4]
0x46FE77: test    ecx, ecx
0x46FE79: jnz     short loc_46FE70
0x46FE7B: pop     edi
0x46FE7C: pop     esi
0x46FE7D: mov     al, 1
0x46FE7F: pop     ebx
0x46FE80: retn    4
0x46FE83: add     edi, 1
0x46FE86: mov     edx, [edx+4]
0x46FE89: test    edx, edx
0x46FE8B: jnz     short loc_46FE63
0x46FE8D: lea     ecx, [eax+4]
0x46FE90: xor     edx, edx
0x46FE92: test    ecx, ecx
0x46FE94: jz      short loc_46FEA5
0x46FE96: cmp     dword ptr [ecx], 0
0x46FE99: jz      short loc_46FE9E
0x46FE9B: add     edx, 1
0x46FE9E: mov     ecx, [ecx+4]
0x46FEA1: test    ecx, ecx
0x46FEA3: jnz     short loc_46FE96
0x46FEA5: cmp     edx, edi
0x46FEA7: jnz     short loc_46FE7B
0x46FEA9: lea     edx, [ebx+0Ch]
0x46FEAC: xor     edi, edi
0x46FEAE: test    edx, edx
0x46FEB0: jz      short loc_46FEDD
0x46FEB2: mov     esi, [edx]
0x46FEB4: test    esi, esi
0x46FEB6: jz      short loc_46FED6
0x46FEB8: lea     ecx, [eax+0Ch]
0x46FEBB: test    ecx, ecx
0x46FEBD: jz      short loc_46FE7B
0x46FEBF: nop
0x46FEC0: cmp     [ecx], esi
0x46FEC2: jz      short loc_46FED3
0x46FEC4: mov     ecx, [ecx+4]
0x46FEC7: test    ecx, ecx
0x46FEC9: jnz     short loc_46FEC0
0x46FECB: pop     edi
0x46FECC: pop     esi
0x46FECD: mov     al, 1
0x46FECF: pop     ebx
0x46FED0: retn    4
0x46FED3: add     edi, 1
0x46FED6: mov     edx, [edx+4]
0x46FED9: test    edx, edx
0x46FEDB: jnz     short loc_46FEB2
0x46FEDD: lea     ecx, [eax+0Ch]
0x46FEE0: call    BSSimpleList_Count
0x46FEE5: cmp     eax, edi
0x46FEE7: pop     edi
0x46FEE8: pop     esi
0x46FEE9: setnz   al
0x46FEEC: pop     ebx
0x46FEED: retn    4
