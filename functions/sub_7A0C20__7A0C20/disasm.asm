0x7A0C20: push    ebp
0x7A0C21: mov     ebp, esp
0x7A0C23: push    0FFFFFFFFh
0x7A0C25: push    offset SEH_7A0C20
0x7A0C2A: mov     eax, large fs:0
0x7A0C30: push    eax
0x7A0C31: sub     esp, 0Ch
0x7A0C34: push    ebx
0x7A0C35: push    esi
0x7A0C36: push    edi
0x7A0C37: mov     eax, ds:0B30AACh
0x7A0C3C: xor     eax, ebp
0x7A0C3E: push    eax
0x7A0C3F: lea     eax, [ebp+var_C]
0x7A0C42: mov     large fs:0, eax
0x7A0C48: mov     [ebp+var_10], esp
0x7A0C4B: mov     esi, [ebp+arg_0]
0x7A0C4E: mov     edi, [ebp+arg_4]
0x7A0C51: xor     ebx, ebx
0x7A0C53: mov     [ebp+var_14], esi
0x7A0C56: mov     [ebp+var_4], ebx
0x7A0C59: lea     esp, [esp+0]
0x7A0C60: cmp     edi, ebx
0x7A0C62: jbe     short loc_7A0CB0
0x7A0C64: mov     [ebp+arg_4], esi
0x7A0C67: mov     [ebp+var_18], esi
0x7A0C6A: cmp     esi, ebx
0x7A0C6C: mov     byte ptr [ebp+var_4], 1
0x7A0C70: jz      short loc_7A0C7D
0x7A0C72: mov     eax, [ebp+arg_8]
0x7A0C75: push    eax
0x7A0C76: mov     ecx, esi
0x7A0C78: call    sub_79EE40
0x7A0C7D: sub     edi, 1
0x7A0C80: add     esi, 10h
0x7A0C83: mov     byte ptr [ebp+var_4], bl
0x7A0C86: mov     [ebp+arg_0], esi
0x7A0C89: jmp     short loc_7A0C60
0x7A0C8B: mov     esi, [ebp+var_14]
0x7A0C8E: mov     edi, [ebp+arg_0]
0x7A0C91: cmp     esi, edi
0x7A0C93: jz      short loc_7A0CA7
0x7A0C95: mov     ebx, [ebp+arg_C]
0x7A0C98: push    esi
0x7A0C99: mov     ecx, ebx
0x7A0C9B: call    sub_7A0B00
0x7A0CA0: add     esi, 10h
0x7A0CA3: cmp     esi, edi
0x7A0CA5: jnz     short loc_7A0C98
0x7A0CA7: xor     ebx, ebx
0x7A0CA9: push    ebx
0x7A0CAA: push    ebx
0x7A0CAB: call    ThrowException??
0x7A0CB0: mov     ecx, [ebp+var_C]
0x7A0CB3: mov     large fs:0, ecx
0x7A0CBA: pop     ecx
0x7A0CBB: pop     edi
0x7A0CBC: pop     esi
0x7A0CBD: pop     ebx
0x7A0CBE: mov     esp, ebp
0x7A0CC0: pop     ebp
0x7A0CC1: retn
