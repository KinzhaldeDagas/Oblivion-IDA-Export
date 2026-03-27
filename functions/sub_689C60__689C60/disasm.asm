0x689C60: sub     esp, 0Ch
0x689C63: push    ebx
0x689C64: push    edi
0x689C65: mov     edi, ecx
0x689C67: mov     ebx, [edi+8]
0x689C6A: test    ebx, ebx
0x689C6C: mov     [esp+14h+var_8], edi
0x689C70: jz      loc_689D1D
0x689C76: push    ebp
0x689C77: push    esi
0x689C78: jmp     short loc_689C84
0x689C7A: align 10h
0x689C80: mov     edi, [esp+1Ch+var_8]
0x689C84: cmp     dword ptr [ebx+4], 0
0x689C88: jnz     short loc_689C93
0x689C8A: cmp     dword ptr [ebx], 0
0x689C8D: jz      loc_689D1B
0x689C93: mov     ecx, [ebx]
0x689C95: mov     [esp+1Ch+var_C], ecx
0x689C99: call    sub_68B0F0
0x689C9E: test    eax, eax
0x689CA0: jz      short loc_689D10
0x689CA2: mov     ecx, eax; this
0x689CA4: call    GetTeleportExtraData
0x689CA9: mov     esi, eax
0x689CAB: test    esi, esi
0x689CAD: jz      short loc_689D10
0x689CAF: mov     ecx, esi
0x689CB1: call    sub_42B410
0x689CB6: test    eax, eax
0x689CB8: jz      short loc_689D10
0x689CBA: mov     ecx, esi
0x689CBC: call    sub_42B410
0x689CC1: mov     ecx, eax
0x689CC3: call    sub_4D8AF0
0x689CC8: test    eax, eax
0x689CCA: mov     [esp+1Ch+var_4], eax
0x689CCE: jz      short loc_689D10
0x689CD0: add     edi, 4
0x689CD3: mov     esi, edi
0x689CD5: xor     ebp, ebp
0x689CD7: test    esi, esi
0x689CD9: jz      short loc_689D10
0x689CDB: jmp     short loc_689CE0
0x689CDD: align 10h
0x689CE0: cmp     dword ptr [esi+4], 0
0x689CE4: jnz     short loc_689CEB
0x689CE6: cmp     dword ptr [esi], 0
0x689CE9: jz      short loc_689D10
0x689CEB: cmp     esi, ebx
0x689CED: jz      short loc_689D10
0x689CEF: mov     ecx, [esi]
0x689CF1: call    sub_68B0F0
0x689CF6: test    eax, eax
0x689CF8: jz      short loc_689D07
0x689CFA: mov     ecx, eax
0x689CFC: call    sub_4D8AF0
0x689D01: cmp     eax, [esp+1Ch+var_4]
0x689D05: jz      short loc_689D23
0x689D07: mov     ebp, esi
0x689D09: mov     esi, [esi+4]
0x689D0C: test    esi, esi
0x689D0E: jnz     short loc_689CE0
0x689D10: mov     ebx, [ebx+4]
0x689D13: test    ebx, ebx
0x689D15: jnz     loc_689C80
0x689D1B: pop     esi
0x689D1C: pop     ebp
0x689D1D: pop     edi
0x689D1E: pop     ebx
0x689D1F: add     esp, 0Ch
0x689D22: retn
0x689D23: test    ebp, ebp
0x689D25: mov     bl, 1
0x689D27: jnz     short loc_689D83
0x689D29: lea     esp, [esp+0]
0x689D30: mov     esi, [edi]
0x689D32: cmp     esi, [esp+1Ch+var_C]
0x689D36: jnz     short loc_689D3A
0x689D38: xor     bl, bl
0x689D3A: test    esi, esi
0x689D3C: jz      short loc_689D4E
0x689D3E: mov     ecx, esi
0x689D40: call    sub_68B1C0
0x689D45: push    esi
0x689D46: call    FormHeapFree
0x689D4B: add     esp, 4
0x689D4E: mov     eax, [edi+4]
0x689D51: test    eax, eax
0x689D53: jz      short loc_689D6A
0x689D55: mov     ecx, [eax+4]
0x689D58: mov     [edi+4], ecx
0x689D5B: mov     edx, [eax]
0x689D5D: push    eax
0x689D5E: mov     [edi], edx
0x689D60: call    FormHeapFree
0x689D65: add     esp, 4
0x689D68: jmp     short loc_689D70
0x689D6A: mov     dword ptr [edi], 0
0x689D70: cmp     dword ptr [edi+4], 0
0x689D74: jnz     short loc_689D7B
0x689D76: cmp     dword ptr [edi], 0
0x689D79: jz      short loc_689D7F
0x689D7B: test    bl, bl
0x689D7D: jnz     short loc_689D30
0x689D7F: mov     ebx, edi
0x689D81: jmp     short loc_689D13
0x689D83: mov     edi, [ebp+4]
0x689D86: mov     esi, [edi]
0x689D88: cmp     esi, [esp+1Ch+var_C]
0x689D8C: jnz     short loc_689D90
0x689D8E: xor     bl, bl
0x689D90: test    esi, esi
0x689D92: jz      short loc_689DA4
0x689D94: mov     ecx, esi
0x689D96: call    sub_68B1C0
0x689D9B: push    esi
0x689D9C: call    FormHeapFree
0x689DA1: add     esp, 4
0x689DA4: mov     eax, [edi]
0x689DA6: push    eax
0x689DA7: mov     ecx, ebp
0x689DA9: call    BSSimpleList_Remove
0x689DAE: cmp     dword ptr [ebp+4], 0
0x689DB2: jz      short loc_689DB8
0x689DB4: test    bl, bl
0x689DB6: jnz     short loc_689D83
0x689DB8: mov     ebx, [ebp+4]
0x689DBB: jmp     loc_689D13
