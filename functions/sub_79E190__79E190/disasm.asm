0x79E190: push    ebp
0x79E191: mov     ebp, esp
0x79E193: push    0FFFFFFFFh
0x79E195: push    offset SEH_79E190
0x79E19A: mov     eax, large fs:0
0x79E1A0: push    eax
0x79E1A1: sub     esp, 8
0x79E1A4: push    ebx
0x79E1A5: push    esi
0x79E1A6: push    edi
0x79E1A7: mov     eax, ds:0B30AACh
0x79E1AC: xor     eax, ebp
0x79E1AE: push    eax
0x79E1AF: lea     eax, [ebp+var_C]
0x79E1B2: mov     large fs:0, eax
0x79E1B8: mov     [ebp+var_10], esp
0x79E1BB: mov     edi, [ebp+arg_0]
0x79E1BE: mov     ebx, [ebp+arg_8]
0x79E1C1: mov     esi, [ebp+arg_4]
0x79E1C4: mov     [ebp+var_14], edi
0x79E1C7: mov     [ebp+var_4], 0
0x79E1CE: mov     edi, edi
0x79E1D0: test    esi, esi
0x79E1D2: jbe     short loc_79E20E
0x79E1D4: push    ebx
0x79E1D5: push    edi
0x79E1D6: call    sub_79B7D0
0x79E1DB: add     esp, 8
0x79E1DE: sub     esi, 1
0x79E1E1: add     edi, 30h ; '0'
0x79E1E4: mov     [ebp+arg_0], edi
0x79E1E7: jmp     short loc_79E1D0
0x79E1E9: mov     esi, [ebp+var_14]
0x79E1EC: mov     edi, [ebp+arg_0]
0x79E1EF: cmp     esi, edi
0x79E1F1: jz      short loc_79E205
0x79E1F3: mov     ebx, [ebp+arg_C]
0x79E1F6: push    esi
0x79E1F7: mov     ecx, ebx
0x79E1F9: call    sub_79BFF0
0x79E1FE: add     esi, 30h ; '0'
0x79E201: cmp     esi, edi
0x79E203: jnz     short loc_79E1F6
0x79E205: push    0
0x79E207: push    0
0x79E209: call    ThrowException??
0x79E20E: mov     ecx, [ebp+var_C]
0x79E211: mov     large fs:0, ecx
0x79E218: pop     ecx
0x79E219: pop     edi
0x79E21A: pop     esi
0x79E21B: pop     ebx
0x79E21C: mov     esp, ebp
0x79E21E: pop     ebp
0x79E21F: retn
