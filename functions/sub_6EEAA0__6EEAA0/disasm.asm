0x6EEAA0: push    ebp
0x6EEAA1: mov     ebp, esp
0x6EEAA3: push    0FFFFFFFFh
0x6EEAA5: push    offset SEH_6EEAA0
0x6EEAAA: mov     eax, large fs:0
0x6EEAB0: push    eax
0x6EEAB1: sub     esp, 0Ch
0x6EEAB4: push    ebx
0x6EEAB5: push    esi
0x6EEAB6: push    edi
0x6EEAB7: mov     eax, ds:0B30AACh
0x6EEABC: xor     eax, ebp
0x6EEABE: push    eax
0x6EEABF: lea     eax, [ebp+var_C]
0x6EEAC2: mov     large fs:0, eax
0x6EEAC8: mov     [ebp+var_10], esp
0x6EEACB: mov     esi, [ebp+arg_0]
0x6EEACE: mov     edi, [ebp+arg_4]
0x6EEAD1: xor     ebx, ebx
0x6EEAD3: mov     [ebp+var_14], esi
0x6EEAD6: mov     [ebp+var_4], ebx
0x6EEAD9: lea     esp, [esp+0]
0x6EEAE0: cmp     edi, ebx
0x6EEAE2: jbe     short loc_6EEB30
0x6EEAE4: mov     [ebp+arg_4], esi
0x6EEAE7: mov     [ebp+var_18], esi
0x6EEAEA: cmp     esi, ebx
0x6EEAEC: mov     byte ptr [ebp+var_4], 1
0x6EEAF0: jz      short loc_6EEAFD
0x6EEAF2: mov     eax, [ebp+arg_8]
0x6EEAF5: push    eax
0x6EEAF6: mov     ecx, esi
0x6EEAF8: call    sub_6EDC20
0x6EEAFD: sub     edi, 1
0x6EEB00: add     esi, 34h ; '4'
0x6EEB03: mov     byte ptr [ebp+var_4], bl
0x6EEB06: mov     [ebp+arg_0], esi
0x6EEB09: jmp     short loc_6EEAE0
0x6EEB0B: mov     esi, [ebp+var_14]
0x6EEB0E: mov     edi, [ebp+arg_0]
0x6EEB11: cmp     esi, edi
0x6EEB13: jz      short loc_6EEB27
0x6EEB15: mov     ebx, [ebp+arg_C]
0x6EEB18: push    esi
0x6EEB19: mov     ecx, ebx
0x6EEB1B: call    sub_552090
0x6EEB20: add     esi, 34h ; '4'
0x6EEB23: cmp     esi, edi
0x6EEB25: jnz     short loc_6EEB18
0x6EEB27: xor     ebx, ebx
0x6EEB29: push    ebx
0x6EEB2A: push    ebx
0x6EEB2B: call    ThrowException??
0x6EEB30: mov     ecx, [ebp+var_C]
0x6EEB33: mov     large fs:0, ecx
0x6EEB3A: pop     ecx
0x6EEB3B: pop     edi
0x6EEB3C: pop     esi
0x6EEB3D: pop     ebx
0x6EEB3E: mov     esp, ebp
0x6EEB40: pop     ebp
0x6EEB41: retn
