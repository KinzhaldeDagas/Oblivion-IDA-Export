0x795AD0: push    ebp
0x795AD1: mov     ebp, esp
0x795AD3: push    0FFFFFFFFh
0x795AD5: push    offset SEH_795AD0
0x795ADA: mov     eax, large fs:0
0x795AE0: push    eax
0x795AE1: sub     esp, 0Ch
0x795AE4: push    ebx
0x795AE5: push    esi
0x795AE6: push    edi
0x795AE7: mov     eax, ds:0B30AACh
0x795AEC: xor     eax, ebp
0x795AEE: push    eax
0x795AEF: lea     eax, [ebp+var_C]
0x795AF2: mov     large fs:0, eax
0x795AF8: mov     [ebp+var_10], esp
0x795AFB: mov     esi, [ebp+arg_8]
0x795AFE: mov     edi, [ebp+arg_0]
0x795B01: xor     ebx, ebx
0x795B03: mov     [ebp+var_14], esi
0x795B06: mov     [ebp+var_4], ebx
0x795B09: lea     esp, [esp+0]
0x795B10: cmp     edi, [ebp+arg_4]
0x795B13: jz      short loc_795B5E
0x795B15: mov     [ebp+arg_0], esi
0x795B18: mov     [ebp+var_18], esi
0x795B1B: cmp     esi, ebx
0x795B1D: mov     byte ptr [ebp+var_4], 1
0x795B21: jz      short loc_795B2B
0x795B23: push    edi
0x795B24: mov     ecx, esi
0x795B26: call    sub_795480
0x795B2B: add     esi, 10h
0x795B2E: mov     byte ptr [ebp+var_4], bl
0x795B31: mov     [ebp+arg_8], esi
0x795B34: add     edi, 10h
0x795B37: jmp     short loc_795B10
0x795B39: mov     esi, [ebp+var_14]
0x795B3C: mov     edi, [ebp+arg_8]
0x795B3F: cmp     esi, edi
0x795B41: jz      short loc_795B55
0x795B43: mov     ebx, [ebp+arg_C]
0x795B46: push    esi
0x795B47: mov     ecx, ebx
0x795B49: call    sub_79BFF0
0x795B4E: add     esi, 10h
0x795B51: cmp     esi, edi
0x795B53: jnz     short loc_795B46
0x795B55: xor     ebx, ebx
0x795B57: push    ebx
0x795B58: push    ebx
0x795B59: call    ThrowException??
0x795B5E: mov     eax, esi
0x795B60: mov     ecx, [ebp+var_C]
0x795B63: mov     large fs:0, ecx
0x795B6A: pop     ecx
0x795B6B: pop     edi
0x795B6C: pop     esi
0x795B6D: pop     ebx
0x795B6E: mov     esp, ebp
0x795B70: pop     ebp
0x795B71: retn
