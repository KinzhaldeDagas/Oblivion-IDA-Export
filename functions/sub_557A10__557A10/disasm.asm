0x557A10: push    ebp
0x557A11: mov     ebp, esp
0x557A13: push    0FFFFFFFFh
0x557A15: push    offset SEH_557A10
0x557A1A: mov     eax, large fs:0
0x557A20: push    eax
0x557A21: sub     esp, 8
0x557A24: push    ebx
0x557A25: push    esi
0x557A26: push    edi
0x557A27: mov     eax, ds:0B30AACh
0x557A2C: xor     eax, ebp
0x557A2E: push    eax
0x557A2F: lea     eax, [ebp+var_C]
0x557A32: mov     large fs:0, eax
0x557A38: mov     [ebp+var_10], esp
0x557A3B: mov     edi, [ebp+arg_8]
0x557A3E: mov     ebx, [ebp+arg_4]
0x557A41: mov     esi, [ebp+arg_0]
0x557A44: mov     [ebp+var_14], edi
0x557A47: mov     [ebp+var_4], 0
0x557A4E: mov     edi, edi
0x557A50: cmp     esi, ebx
0x557A52: jz      short loc_557A8E
0x557A54: push    esi
0x557A55: push    edi
0x557A56: call    sub_557800
0x557A5B: add     edi, 40h ; '@'
0x557A5E: add     esp, 8
0x557A61: mov     [ebp+arg_8], edi
0x557A64: add     esi, 40h ; '@'
0x557A67: jmp     short loc_557A50
0x557A69: mov     esi, [ebp+var_14]
0x557A6C: mov     edi, [ebp+arg_8]
0x557A6F: cmp     esi, edi
0x557A71: jz      short loc_557A85
0x557A73: mov     ebx, [ebp+arg_C]
0x557A76: push    esi
0x557A77: mov     ecx, ebx
0x557A79: call    sub_556FC0
0x557A7E: add     esi, 40h ; '@'
0x557A81: cmp     esi, edi
0x557A83: jnz     short loc_557A76
0x557A85: push    0
0x557A87: push    0
0x557A89: call    ThrowException??
0x557A8E: mov     eax, edi
0x557A90: mov     ecx, [ebp+var_C]
0x557A93: mov     large fs:0, ecx
0x557A9A: pop     ecx
0x557A9B: pop     edi
0x557A9C: pop     esi
0x557A9D: pop     ebx
0x557A9E: mov     esp, ebp
0x557AA0: pop     ebp
0x557AA1: retn
