0x795D50: push    ebp
0x795D51: mov     ebp, esp
0x795D53: push    0FFFFFFFFh
0x795D55: push    offset SEH_795D50
0x795D5A: mov     eax, large fs:0
0x795D60: push    eax
0x795D61: sub     esp, 0Ch
0x795D64: push    ebx
0x795D65: push    esi
0x795D66: push    edi
0x795D67: mov     eax, ds:0B30AACh
0x795D6C: xor     eax, ebp
0x795D6E: push    eax
0x795D6F: lea     eax, [ebp+var_C]
0x795D72: mov     large fs:0, eax
0x795D78: mov     [ebp+var_10], esp
0x795D7B: mov     esi, [ebp+arg_0]
0x795D7E: mov     edi, [ebp+arg_4]
0x795D81: xor     ebx, ebx
0x795D83: mov     [ebp+var_14], esi
0x795D86: mov     [ebp+var_4], ebx
0x795D89: lea     esp, [esp+0]
0x795D90: cmp     edi, ebx
0x795D92: jbe     short loc_795DE0
0x795D94: mov     [ebp+arg_4], esi
0x795D97: mov     [ebp+var_18], esi
0x795D9A: cmp     esi, ebx
0x795D9C: mov     byte ptr [ebp+var_4], 1
0x795DA0: jz      short loc_795DAD
0x795DA2: mov     eax, [ebp+arg_8]
0x795DA5: push    eax
0x795DA6: mov     ecx, esi
0x795DA8: call    sub_795480
0x795DAD: sub     edi, 1
0x795DB0: add     esi, 10h
0x795DB3: mov     byte ptr [ebp+var_4], bl
0x795DB6: mov     [ebp+arg_0], esi
0x795DB9: jmp     short loc_795D90
0x795DBB: mov     esi, [ebp+var_14]
0x795DBE: mov     edi, [ebp+arg_0]
0x795DC1: cmp     esi, edi
0x795DC3: jz      short loc_795DD7
0x795DC5: mov     ebx, [ebp+arg_C]
0x795DC8: push    esi
0x795DC9: mov     ecx, ebx
0x795DCB: call    sub_79BFF0
0x795DD0: add     esi, 10h
0x795DD3: cmp     esi, edi
0x795DD5: jnz     short loc_795DC8
0x795DD7: xor     ebx, ebx
0x795DD9: push    ebx
0x795DDA: push    ebx
0x795DDB: call    ThrowException??
0x795DE0: mov     ecx, [ebp+var_C]
0x795DE3: mov     large fs:0, ecx
0x795DEA: pop     ecx
0x795DEB: pop     edi
0x795DEC: pop     esi
0x795DED: pop     ebx
0x795DEE: mov     esp, ebp
0x795DF0: pop     ebp
0x795DF1: retn
