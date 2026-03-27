0x607B90: sub     esp, 8
0x607B93: push    esi
0x607B94: mov     esi, [esp+0Ch+arg_0]
0x607B98: test    esi, esi
0x607B9A: jz      loc_607E83
0x607BA0: mov     eax, [esi]
0x607BA2: mov     edx, [eax+0E8h]
0x607BA8: mov     ecx, esi
0x607BAA: call    edx
0x607BAC: test    al, al
0x607BAE: jnz     loc_607E83
0x607BB4: mov     eax, [esi]
0x607BB6: mov     edx, [eax+190h]
0x607BBC: push    ebx
0x607BBD: push    ebp
0x607BBE: push    edi
0x607BBF: mov     ecx, esi
0x607BC1: mov     [esp+18h+var_5], 1
0x607BC6: call    edx
0x607BC8: test    al, al
0x607BCA: jz      loc_607CB1
0x607BD0: mov     ebx, [esi+58h]
0x607BD3: test    ebx, ebx
0x607BD5: jz      loc_607CB1
0x607BDB: mov     eax, [ebx]
0x607BDD: mov     edx, [eax+504h]
0x607BE3: mov     ecx, ebx
0x607BE5: call    edx
0x607BE7: test    eax, eax
0x607BE9: jz      loc_607C8C
0x607BEF: mov     eax, [ebx]
0x607BF1: mov     edx, [eax+504h]
0x607BF7: mov     ecx, ebx
0x607BF9: call    edx
0x607BFB: mov     edi, eax
0x607BFD: test    edi, edi
0x607BFF: jz      short loc_607C79
0x607C01: cmp     dword ptr [edi+4], 0
0x607C05: jnz     short loc_607C0C
0x607C07: cmp     dword ptr [edi], 0
0x607C0A: jz      short loc_607C79
0x607C0C: mov     esi, [edi]
0x607C0E: test    esi, esi
0x607C10: jz      short loc_607C72
0x607C12: mov     eax, [esi+5Ch]
0x607C15: test    eax, eax
0x607C17: jz      short loc_607C1E
0x607C19: mov     ecx, [eax+28h]
0x607C1C: jmp     short loc_607C20
0x607C1E: xor     ecx, ecx
0x607C20: cmp     ecx, [esp+18h+arg_0]
0x607C24: jnz     short loc_607C59
0x607C26: test    eax, eax
0x607C28: jz      short loc_607C31
0x607C2A: mov     dword ptr [eax+28h], 0
0x607C31: mov     eax, [esi+8]
0x607C34: shr     eax, 5
0x607C37: test    al, 1
0x607C39: jnz     short loc_607C59
0x607C3B: cmp     [esp+18h+arg_4], 0
0x607C40: jz      short loc_607C52
0x607C42: mov     edx, [esi]
0x607C44: mov     eax, [edx+8Ch]
0x607C4A: push    1
0x607C4C: mov     ecx, esi
0x607C4E: call    eax
0x607C50: jmp     short loc_607C59
0x607C52: mov     dword ptr [esi+60h], 3
0x607C59: mov     ecx, [esi+8]
0x607C5C: shr     ecx, 5
0x607C5F: test    cl, 1
0x607C62: jz      short loc_607C72
0x607C64: mov     edx, [esi]
0x607C66: mov     eax, [edx+150h]
0x607C6C: push    0
0x607C6E: mov     ecx, esi
0x607C70: call    eax
0x607C72: mov     edi, [edi+4]
0x607C75: test    edi, edi
0x607C77: jnz     short loc_607C01
0x607C79: mov     edx, [ebx]
0x607C7B: mov     eax, [edx+504h]
0x607C81: mov     ecx, ebx
0x607C83: call    eax
0x607C85: mov     ecx, eax
0x607C87: call    BSSimpleList_Clear
0x607C8C: mov     edx, [ebx]
0x607C8E: mov     eax, [edx+8]
0x607C91: mov     ecx, ebx
0x607C93: call    eax
0x607C95: test    eax, eax
0x607C97: jnz     short loc_607C9F
0x607C99: mov     [esp+18h+var_5], al
0x607C9D: jmp     short loc_607CB1
0x607C9F: mov     edx, [ebx]
0x607CA1: mov     eax, [edx+8]
0x607CA4: mov     ecx, ebx
0x607CA6: call    eax
0x607CA8: cmp     eax, 1
0x607CAB: jz      loc_607DA6
0x607CB1: push    0; a2
0x607CB3: mov     ecx, offset ActorProcessManager_ptr; this
0x607CB8: call    sub_673A50
0x607CBD: mov     ecx, eax; this
0x607CBF: call    sub_7616D0
0x607CC4: test    eax, eax
0x607CC6: mov     [esp+18h+var_4], eax
0x607CCA: mov     ebp, eax
0x607CCC: jz      loc_607D9B
0x607CD2: cmp     dword ptr [ebp+4], 0
0x607CD6: jnz     short loc_607CE2
0x607CD8: cmp     dword ptr [ebp+0], 0
0x607CDC: jz      loc_607D9B
0x607CE2: mov     edi, [ebp+0]
0x607CE5: mov     edx, [edi]
0x607CE7: mov     eax, [edx+0E8h]
0x607CED: mov     ecx, edi
0x607CEF: xor     bl, bl
0x607CF1: call    eax
0x607CF3: test    al, al
0x607CF5: jz      loc_607D8C
0x607CFB: push    0; int
0x607CFD: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x607D02: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x607D07: push    0; int
0x607D09: push    edi; void *
0x607D0A: call    OblivionDynamicCast
0x607D0F: mov     esi, eax
0x607D11: add     esp, 14h
0x607D14: test    esi, esi
0x607D16: jz      short loc_607D8C
0x607D18: mov     eax, [esi+5Ch]
0x607D1B: test    eax, eax
0x607D1D: jz      short loc_607D24
0x607D1F: mov     ecx, [eax+28h]
0x607D22: jmp     short loc_607D26
0x607D24: xor     ecx, ecx
0x607D26: cmp     ecx, [esp+18h+arg_0]
0x607D2A: jnz     short loc_607D62
0x607D2C: test    eax, eax
0x607D2E: jz      short loc_607D37
0x607D30: mov     dword ptr [eax+28h], 0
0x607D37: mov     ecx, [edi+8]
0x607D3A: shr     ecx, 5
0x607D3D: test    cl, 1
0x607D40: jnz     short loc_607D62
0x607D42: cmp     [esp+18h+arg_4], 0
0x607D47: jz      short loc_607D5B
0x607D49: mov     edx, [esi]
0x607D4B: mov     eax, [edx+8Ch]
0x607D51: push    1
0x607D53: mov     ecx, esi
0x607D55: call    eax
0x607D57: mov     bl, 1
0x607D59: jmp     short loc_607D62
0x607D5B: mov     dword ptr [esi+60h], 3
0x607D62: mov     ecx, [esi+8]
0x607D65: shr     ecx, 5
0x607D68: test    cl, 1
0x607D6B: jz      short loc_607D7B
0x607D6D: mov     edx, [esi]
0x607D6F: mov     eax, [edx+150h]
0x607D75: push    0
0x607D77: mov     ecx, esi
0x607D79: call    eax
0x607D7B: test    bl, bl
0x607D7D: jz      short loc_607D8C
0x607D7F: mov     eax, [esp+18h+var_4]
0x607D83: cmp     ebp, eax
0x607D85: jz      short loc_607D93
0x607D87: mov     ebp, [eax+4]
0x607D8A: jmp     short loc_607D93
0x607D8C: mov     [esp+18h+var_4], ebp
0x607D90: mov     ebp, [ebp+4]
0x607D93: test    ebp, ebp
0x607D95: jnz     loc_607CD2
0x607D9B: cmp     [esp+18h+var_5], 0
0x607DA0: jz      loc_607E80
0x607DA6: push    1; a2
0x607DA8: mov     ecx, offset ActorProcessManager_ptr; this
0x607DAD: call    sub_673A50
0x607DB2: mov     ecx, eax; this
0x607DB4: call    sub_7616D0
0x607DB9: test    eax, eax
0x607DBB: mov     [esp+18h+var_4], eax
0x607DBF: mov     ebp, eax
0x607DC1: jz      loc_607E80
0x607DC7: cmp     dword ptr [ebp+4], 0
0x607DCB: jnz     short loc_607DD7
0x607DCD: cmp     dword ptr [ebp+0], 0
0x607DD1: jz      loc_607E80
0x607DD7: mov     edi, [ebp+0]
0x607DDA: mov     edx, [edi]
0x607DDC: mov     eax, [edx+0E8h]
0x607DE2: mov     ecx, edi
0x607DE4: xor     bl, bl
0x607DE6: call    eax
0x607DE8: test    al, al
0x607DEA: jz      loc_607E71
0x607DF0: push    0; int
0x607DF2: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x607DF7: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x607DFC: push    0; int
0x607DFE: push    edi; void *
0x607DFF: call    OblivionDynamicCast
0x607E04: mov     esi, eax
0x607E06: add     esp, 14h
0x607E09: test    esi, esi
0x607E0B: jz      short loc_607E71
0x607E0D: mov     eax, [esi+5Ch]
0x607E10: test    eax, eax
0x607E12: jz      short loc_607E19
0x607E14: mov     ecx, [eax+28h]
0x607E17: jmp     short loc_607E1B
0x607E19: xor     ecx, ecx
0x607E1B: cmp     ecx, [esp+18h+arg_0]
0x607E1F: jnz     short loc_607E47
0x607E21: test    eax, eax
0x607E23: jz      short loc_607E2C
0x607E25: mov     dword ptr [eax+28h], 0
0x607E2C: mov     ecx, [edi+8]
0x607E2F: shr     ecx, 5
0x607E32: test    cl, 1
0x607E35: jnz     short loc_607E47
0x607E37: mov     edx, [esi]
0x607E39: mov     eax, [edx+8Ch]
0x607E3F: push    1
0x607E41: mov     ecx, esi
0x607E43: call    eax
0x607E45: mov     bl, 1
0x607E47: mov     ecx, [esi+8]
0x607E4A: shr     ecx, 5
0x607E4D: test    cl, 1
0x607E50: jz      short loc_607E60
0x607E52: mov     edx, [esi]
0x607E54: mov     eax, [edx+150h]
0x607E5A: push    0
0x607E5C: mov     ecx, esi
0x607E5E: call    eax
0x607E60: test    bl, bl
0x607E62: jz      short loc_607E71
0x607E64: mov     eax, [esp+18h+var_4]
0x607E68: cmp     ebp, eax
0x607E6A: jz      short loc_607E78
0x607E6C: mov     ebp, [eax+4]
0x607E6F: jmp     short loc_607E78
0x607E71: mov     [esp+18h+var_4], ebp
0x607E75: mov     ebp, [ebp+4]
0x607E78: test    ebp, ebp
0x607E7A: jnz     loc_607DC7
0x607E80: pop     edi
0x607E81: pop     ebp
0x607E82: pop     ebx
0x607E83: pop     esi
0x607E84: add     esp, 8
0x607E87: retn
