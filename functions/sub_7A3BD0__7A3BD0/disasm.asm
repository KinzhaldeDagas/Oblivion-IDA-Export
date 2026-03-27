0x7A3BD0: push    ebp
0x7A3BD1: mov     ebp, esp
0x7A3BD3: push    0FFFFFFFFh
0x7A3BD5: push    offset SEH_7A3BD0
0x7A3BDA: mov     eax, large fs:0
0x7A3BE0: push    eax
0x7A3BE1: sub     esp, 0Ch
0x7A3BE4: push    ebx
0x7A3BE5: push    esi
0x7A3BE6: push    edi
0x7A3BE7: mov     eax, ds:0B30AACh
0x7A3BEC: xor     eax, ebp
0x7A3BEE: push    eax
0x7A3BEF: lea     eax, [ebp+var_C]
0x7A3BF2: mov     large fs:0, eax
0x7A3BF8: mov     [ebp+var_10], esp
0x7A3BFB: mov     esi, [ebp+arg_8]
0x7A3BFE: mov     edi, [ebp+arg_0]
0x7A3C01: xor     ebx, ebx
0x7A3C03: mov     [ebp+var_14], esi
0x7A3C06: mov     [ebp+var_4], ebx
0x7A3C09: lea     esp, [esp+0]
0x7A3C10: cmp     edi, [ebp+arg_4]
0x7A3C13: jz      short loc_7A3C5E
0x7A3C15: mov     [ebp+arg_0], esi
0x7A3C18: mov     [ebp+var_18], esi
0x7A3C1B: cmp     esi, ebx
0x7A3C1D: mov     byte ptr [ebp+var_4], 1
0x7A3C21: jz      short loc_7A3C2B
0x7A3C23: push    edi
0x7A3C24: mov     ecx, esi
0x7A3C26: call    sub_7A2850
0x7A3C2B: add     esi, 54h ; 'T'
0x7A3C2E: mov     byte ptr [ebp+var_4], bl
0x7A3C31: mov     [ebp+arg_8], esi
0x7A3C34: add     edi, 54h ; 'T'
0x7A3C37: jmp     short loc_7A3C10
0x7A3C39: mov     esi, [ebp+var_14]
0x7A3C3C: mov     edi, [ebp+arg_8]
0x7A3C3F: cmp     esi, edi
0x7A3C41: jz      short loc_7A3C55
0x7A3C43: mov     ebx, [ebp+arg_C]
0x7A3C46: push    esi
0x7A3C47: mov     ecx, ebx
0x7A3C49: call    sub_7A3440
0x7A3C4E: add     esi, 54h ; 'T'
0x7A3C51: cmp     esi, edi
0x7A3C53: jnz     short loc_7A3C46
0x7A3C55: xor     ebx, ebx
0x7A3C57: push    ebx
0x7A3C58: push    ebx
0x7A3C59: call    ThrowException??
0x7A3C5E: mov     eax, esi
0x7A3C60: mov     ecx, [ebp+var_C]
0x7A3C63: mov     large fs:0, ecx
0x7A3C6A: pop     ecx
0x7A3C6B: pop     edi
0x7A3C6C: pop     esi
0x7A3C6D: pop     ebx
0x7A3C6E: mov     esp, ebp
0x7A3C70: pop     ebp
0x7A3C71: retn
