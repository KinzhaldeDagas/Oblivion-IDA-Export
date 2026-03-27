0x9A19A6: push    ebp
0x9A19A7: mov     ebp, esp
0x9A19A9: sub     esp, 10h
0x9A19AC: push    ebx
0x9A19AD: push    [ebp+arg_8]; struct localeinfo_struct *
0x9A19B0: lea     ecx, [ebp+var_10]; this
0x9A19B3: call    ??0_LocaleUpdate@@QAE@PAUlocaleinfo_struct@@@Z
0x9A19B8: mov     eax, [ebp+Str]
0x9A19BB: xor     ebx, ebx
0x9A19BD: cmp     eax, ebx
0x9A19BF: jnz     short loc_9A19E9
0x9A19C1: call    __errno
0x9A19C6: push    ebx
0x9A19C7: push    ebx
0x9A19C8: push    ebx
0x9A19C9: push    ebx
0x9A19CA: push    ebx
0x9A19CB: mov     dword ptr [eax], 16h
0x9A19D1: call    __invalid_parameter
0x9A19D6: add     esp, 14h
0x9A19D9: cmp     [ebp+var_4], bl
0x9A19DC: jz      short loc_9A19E5
0x9A19DE: mov     eax, [ebp+var_8]
0x9A19E1: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A19E5: xor     eax, eax
0x9A19E7: jmp     short loc_9A1A5D
0x9A19E9: push    esi
0x9A19EA: mov     esi, [ebp+var_C]
0x9A19ED: cmp     [esi+8], ebx
0x9A19F0: jnz     short loc_9A1A2C
0x9A19F2: push    [ebp+Val]; Val
0x9A19F5: push    eax; Str
0x9A19F6: call    _strchr
0x9A19FB: pop     ecx
0x9A19FC: pop     ecx
0x9A19FD: jmp     short loc_9A1A40
0x9A19FF: movzx   edx, cl
0x9A1A02: test    byte ptr [edx+esi+1Dh], 4
0x9A1A07: jz      short loc_9A1A23
0x9A1A09: inc     eax
0x9A1A0A: mov     dl, [eax]
0x9A1A0C: cmp     dl, bl
0x9A1A0E: jz      short loc_9A1A4E
0x9A1A10: movzx   ecx, cx
0x9A1A13: movzx   edx, dl
0x9A1A16: shl     ecx, 8
0x9A1A19: or      ecx, edx
0x9A1A1B: cmp     [ebp+Val], ecx
0x9A1A1E: jnz     short loc_9A1A2B
0x9A1A20: dec     eax
0x9A1A21: jmp     short loc_9A1A40
0x9A1A23: movzx   edx, cx
0x9A1A26: cmp     [ebp+Val], edx
0x9A1A29: jz      short loc_9A1A38
0x9A1A2B: inc     eax
0x9A1A2C: movzx   cx, byte ptr [eax]
0x9A1A30: movzx   ecx, cx
0x9A1A33: cmp     cx, bx
0x9A1A36: jnz     short loc_9A19FF
0x9A1A38: movzx   ecx, cx
0x9A1A3B: cmp     [ebp+Val], ecx
0x9A1A3E: jnz     short loc_9A1A4E
0x9A1A40: cmp     [ebp+var_4], bl
0x9A1A43: jz      short loc_9A1A5C
0x9A1A45: mov     ecx, [ebp+var_8]
0x9A1A48: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x9A1A4C: jmp     short loc_9A1A5C
0x9A1A4E: cmp     [ebp+var_4], bl
0x9A1A51: jz      short loc_9A1A5A
0x9A1A53: mov     eax, [ebp+var_8]
0x9A1A56: and     dword ptr [eax+70h], 0FFFFFFFDh
0x9A1A5A: xor     eax, eax
0x9A1A5C: pop     esi
0x9A1A5D: pop     ebx
0x9A1A5E: leave
0x9A1A5F: retn
