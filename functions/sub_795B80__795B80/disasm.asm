0x795B80: push    ebp
0x795B81: mov     ebp, esp
0x795B83: push    0FFFFFFFFh
0x795B85: push    offset SEH_795B80
0x795B8A: mov     eax, large fs:0
0x795B90: push    eax
0x795B91: sub     esp, 0Ch
0x795B94: push    ebx
0x795B95: push    esi
0x795B96: push    edi
0x795B97: mov     eax, ds:0B30AACh
0x795B9C: xor     eax, ebp
0x795B9E: push    eax
0x795B9F: lea     eax, [ebp+var_C]
0x795BA2: mov     large fs:0, eax
0x795BA8: mov     [ebp+var_10], esp
0x795BAB: mov     esi, [ebp+arg_8]
0x795BAE: mov     edi, [ebp+arg_0]
0x795BB1: xor     ebx, ebx
0x795BB3: mov     [ebp+var_14], esi
0x795BB6: mov     [ebp+var_4], ebx
0x795BB9: lea     esp, [esp+0]
0x795BC0: cmp     edi, [ebp+arg_4]
0x795BC3: jz      short loc_795C0E
0x795BC5: mov     [ebp+arg_0], esi
0x795BC8: mov     [ebp+var_18], esi
0x795BCB: cmp     esi, ebx
0x795BCD: mov     byte ptr [ebp+var_4], 1
0x795BD1: jz      short loc_795BDB
0x795BD3: push    edi
0x795BD4: mov     ecx, esi
0x795BD6: call    sub_7A3580
0x795BDB: add     esi, 10h
0x795BDE: mov     byte ptr [ebp+var_4], bl
0x795BE1: mov     [ebp+arg_8], esi
0x795BE4: add     edi, 10h
0x795BE7: jmp     short loc_795BC0
0x795BE9: mov     esi, [ebp+var_14]
0x795BEC: mov     edi, [ebp+arg_8]
0x795BEF: cmp     esi, edi
0x795BF1: jz      short loc_795C05
0x795BF3: mov     ebx, [ebp+arg_C]
0x795BF6: push    esi
0x795BF7: mov     ecx, ebx
0x795BF9: call    sub_79BFF0
0x795BFE: add     esi, 10h
0x795C01: cmp     esi, edi
0x795C03: jnz     short loc_795BF6
0x795C05: xor     ebx, ebx
0x795C07: push    ebx
0x795C08: push    ebx
0x795C09: call    ThrowException??
0x795C0E: mov     eax, esi
0x795C10: mov     ecx, [ebp+var_C]
0x795C13: mov     large fs:0, ecx
0x795C1A: pop     ecx
0x795C1B: pop     edi
0x795C1C: pop     esi
0x795C1D: pop     ebx
0x795C1E: mov     esp, ebp
0x795C20: pop     ebp
0x795C21: retn
