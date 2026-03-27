0x6EF590: push    ebp
0x6EF591: mov     ebp, esp
0x6EF593: push    0FFFFFFFFh
0x6EF595: push    offset SEH_6EF590
0x6EF59A: mov     eax, large fs:0
0x6EF5A0: push    eax
0x6EF5A1: sub     esp, 8
0x6EF5A4: push    ebx
0x6EF5A5: push    esi
0x6EF5A6: push    edi
0x6EF5A7: mov     eax, ds:0B30AACh
0x6EF5AC: xor     eax, ebp
0x6EF5AE: push    eax
0x6EF5AF: lea     eax, [ebp+var_C]
0x6EF5B2: mov     large fs:0, eax
0x6EF5B8: mov     [ebp+var_10], esp
0x6EF5BB: mov     edi, [ebp+arg_0]
0x6EF5BE: mov     ebx, [ebp+arg_8]
0x6EF5C1: mov     esi, [ebp+arg_4]
0x6EF5C4: mov     [ebp+var_14], edi
0x6EF5C7: mov     [ebp+var_4], 0
0x6EF5CE: mov     edi, edi
0x6EF5D0: test    esi, esi
0x6EF5D2: jbe     short loc_6EF60E
0x6EF5D4: push    ebx
0x6EF5D5: push    edi
0x6EF5D6: call    sub_557800
0x6EF5DB: add     esp, 8
0x6EF5DE: sub     esi, 1
0x6EF5E1: add     edi, 40h ; '@'
0x6EF5E4: mov     [ebp+arg_0], edi
0x6EF5E7: jmp     short loc_6EF5D0
0x6EF5E9: mov     esi, [ebp+var_14]
0x6EF5EC: mov     edi, [ebp+arg_0]
0x6EF5EF: cmp     esi, edi
0x6EF5F1: jz      short loc_6EF605
0x6EF5F3: mov     ebx, [ebp+arg_C]
0x6EF5F6: push    esi
0x6EF5F7: mov     ecx, ebx
0x6EF5F9: call    sub_556FC0
0x6EF5FE: add     esi, 40h ; '@'
0x6EF601: cmp     esi, edi
0x6EF603: jnz     short loc_6EF5F6
0x6EF605: push    0
0x6EF607: push    0
0x6EF609: call    ThrowException??
0x6EF60E: mov     ecx, [ebp+var_C]
0x6EF611: mov     large fs:0, ecx
0x6EF618: pop     ecx
0x6EF619: pop     edi
0x6EF61A: pop     esi
0x6EF61B: pop     ebx
0x6EF61C: mov     esp, ebp
0x6EF61E: pop     ebp
0x6EF61F: retn
