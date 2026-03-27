0x67CF50: push    ecx
0x67CF51: cmp     byte ptr ds:0B333B8h, 0
0x67CF58: push    ebp
0x67CF59: mov     ebp, ecx
0x67CF5B: push    8; Size
0x67CF5D: jz      short loc_67CF84
0x67CF5F: call    FormHeapAlloc
0x67CF64: add     esp, 4
0x67CF67: test    eax, eax
0x67CF69: jz      short loc_67CF7D
0x67CF6B: mov     dword ptr [eax], 0
0x67CF71: mov     dword ptr [eax+4], 0
0x67CF78: pop     ebp
0x67CF79: pop     ecx
0x67CF7A: retn    8
0x67CF7D: xor     eax, eax
0x67CF7F: pop     ebp
0x67CF80: pop     ecx
0x67CF81: retn    8
0x67CF84: call    FormHeapAlloc
0x67CF89: xor     ecx, ecx
0x67CF8B: add     esp, 4
0x67CF8E: cmp     eax, ecx
0x67CF90: jz      short loc_67CF9D
0x67CF92: mov     [eax], ecx
0x67CF94: mov     [eax+4], ecx
0x67CF97: mov     [esp+8+var_4], eax
0x67CF9B: jmp     short loc_67CFA1
0x67CF9D: mov     [esp+8+var_4], ecx
0x67CFA1: push    edi
0x67CFA2: mov     edi, [ebp+0]
0x67CFA5: cmp     edi, ecx
0x67CFA7: jz      loc_67D02C
0x67CFAD: push    ebx
0x67CFAE: push    esi
0x67CFAF: nop
0x67CFB0: mov     eax, [edi+4]
0x67CFB3: test    eax, eax
0x67CFB5: jnz     short loc_67CFBB
0x67CFB7: cmp     [edi], eax
0x67CFB9: jz      short loc_67D02A
0x67CFBB: mov     esi, [edi]
0x67CFBD: cmp     edi, [ebp+0]
0x67CFC0: mov     ecx, esi
0x67CFC2: setz    bl
0x67CFC5: mov     edi, eax
0x67CFC7: call    sub_67CC60
0x67CFCC: test    al, al
0x67CFCE: jnz     short loc_67CFF6
0x67CFD0: mov     ecx, [ebp+0]
0x67CFD3: push    esi
0x67CFD4: call    BSSimpleList_Remove
0x67CFD9: test    esi, esi
0x67CFDB: jz      short loc_67CFED
0x67CFDD: mov     ecx, esi
0x67CFDF: call    sub_67B5F0
0x67CFE4: push    esi
0x67CFE5: call    FormHeapFree
0x67CFEA: add     esp, 4
0x67CFED: test    bl, bl
0x67CFEF: jz      short loc_67D026
0x67CFF1: mov     edi, [ebp+0]
0x67CFF4: jmp     short loc_67D026
0x67CFF6: mov     eax, [esp+14h+arg_0]
0x67CFFA: cmp     eax, [esi+0Ch]
0x67CFFD: jnz     short loc_67D026
0x67CFFF: mov     eax, [esi]
0x67D001: test    eax, eax
0x67D003: jz      short loc_67D026
0x67D005: mov     ecx, [eax]
0x67D007: test    ecx, ecx
0x67D009: jz      short loc_67D026
0x67D00B: mov     edx, [esp+14h+arg_4]
0x67D00F: cmp     [ecx], edx
0x67D011: jz      short loc_67D01C
0x67D013: mov     eax, [eax+4]
0x67D016: test    eax, eax
0x67D018: jnz     short loc_67D005
0x67D01A: jmp     short loc_67D026
0x67D01C: mov     ecx, [esp+14h+var_4]
0x67D020: push    esi
0x67D021: call    BSSimpleList_PushFront
0x67D026: test    edi, edi
0x67D028: jnz     short loc_67CFB0
0x67D02A: pop     esi
0x67D02B: pop     ebx
0x67D02C: mov     eax, [esp+0Ch+var_4]
0x67D030: pop     edi
0x67D031: pop     ebp
0x67D032: pop     ecx
0x67D033: retn    8
