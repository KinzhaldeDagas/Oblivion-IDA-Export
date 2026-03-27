0x57CCC0: sub     esp, 8
0x57CCC3: push    ebp
0x57CCC4: push    edi
0x57CCC5: push    1; arg1
0x57CCC7: push    0; canCreate
0x57CCC9: mov     byte ptr ds:0B3A6D4h, 1
0x57CCD0: call    InterfaceManager_GetSingleton
0x57CCD5: mov     edi, [eax+68h]
0x57CCD8: mov     ebp, [edi+34h]
0x57CCDB: add     esp, 8
0x57CCDE: test    ebp, ebp
0x57CCE0: mov     [esp+10h+var_8], edi
0x57CCE4: jz      loc_57CD84
0x57CCEA: push    esi
0x57CCEB: jmp     short loc_57CCF4
0x57CCED: align 10h
0x57CCF0: mov     edi, [esp+14h+var_8]
0x57CCF4: mov     esi, [ebp+8]
0x57CCF7: test    esi, esi
0x57CCF9: lea     eax, [ebp+8]
0x57CCFC: mov     ebp, [ebp+0]
0x57CCFF: jz      short loc_57CD7B; jumptable 0057CD2D cases 1002-1004,1007,1022,1023,1045
0x57CD01: mov     ecx, esi
0x57CD03: call    Tile_GetParentMenu
0x57CD08: test    eax, eax
0x57CD0A: jz      short loc_57CD7B; jumptable 0057CD2D cases 1002-1004,1007,1022,1023,1045
0x57CD0C: mov     ecx, esi
0x57CD0E: call    Tile_GetParentMenu
0x57CD13: mov     edx, [eax]
0x57CD15: mov     ecx, eax
0x57CD17: mov     eax, [edx+34h]
0x57CD1A: call    eax
0x57CD1C: add     eax, 0FFFFFC16h; switch 44 cases
0x57CD21: cmp     eax, 2Bh
0x57CD24: ja      short def_57CD2D; jumptable 0057CD2D default case, cases 1005,1006,1008,1009,1011-1021,1024-1044
0x57CD26: movzx   ecx, ds:byte_57CDA0[eax]
0x57CD2D: jmp     ds:jpt_57CD2D[ecx*4]; switch jump
0x57CD34: cmp     [esp+14h+arg_0], 0; jumptable 0057CD2D case 1010
0x57CD39: jnz     short loc_57CD7B; jumptable 0057CD2D cases 1002-1004,1007,1022,1023,1045
0x57CD3B: mov     eax, [edi+34h]; jumptable 0057CD2D default case, cases 1005,1006,1008,1009,1011-1021,1024-1044
0x57CD3E: test    eax, eax
0x57CD40: lea     ecx, [edi+30h]
0x57CD43: jz      short loc_57CD55
0x57CD45: cmp     esi, [eax+8]
0x57CD48: lea     edx, [eax+8]
0x57CD4B: mov     edi, eax
0x57CD4D: mov     eax, [eax]
0x57CD4F: jz      short loc_57CD57
0x57CD51: test    eax, eax
0x57CD53: jnz     short loc_57CD45
0x57CD55: xor     edi, edi
0x57CD57: test    edi, edi
0x57CD59: mov     [esp+14h+var_4], edi
0x57CD5D: jz      short loc_57CD6B
0x57CD5F: lea     edx, [esp+14h+var_4]
0x57CD63: push    edx
0x57CD64: call    sub_7AA860
0x57CD69: jmp     short loc_57CD6D
0x57CD6B: mov     eax, esi
0x57CD6D: test    eax, eax
0x57CD6F: jz      short loc_57CD7B; jumptable 0057CD2D cases 1002-1004,1007,1022,1023,1045
0x57CD71: mov     edx, [eax]
0x57CD73: mov     ecx, eax
0x57CD75: mov     eax, [edx]
0x57CD77: push    1
0x57CD79: call    eax
0x57CD7B: test    ebp, ebp; jumptable 0057CD2D cases 1002-1004,1007,1022,1023,1045
0x57CD7D: jnz     loc_57CCF0
0x57CD83: pop     esi
0x57CD84: pop     edi
0x57CD85: mov     byte ptr ds:0B3A6D4h, 0
0x57CD8C: pop     ebp
0x57CD8D: add     esp, 8
0x57CD90: retn
