0x4F1E00: push    ebx
0x4F1E01: push    esi
0x4F1E02: mov     esi, ecx
0x4F1E04: xor     ebx, ebx
0x4F1E06: mov     [esi+7Ch], ebx
0x4F1E09: mov     [esi+5Ch], bl
0x4F1E0C: call    sub_46B660
0x4F1E11: test    al, al
0x4F1E13: jnz     short loc_4F1E19
0x4F1E15: or      byte ptr [esi+5Ch], 1
0x4F1E19: mov     [esi+58h], ebx
0x4F1E1C: mov     [esi+80h], ebx
0x4F1E22: mov     eax, [esi+28h]
0x4F1E25: push    eax
0x4F1E26: call    FormHeapFree
0x4F1E2B: mov     [esi+28h], ebx
0x4F1E2E: mov     [esi+2Eh], bx
0x4F1E32: mov     [esi+2Ch], bx
0x4F1E36: add     esp, 4
0x4F1E39: xor     eax, eax
0x4F1E3B: mov     [esi+84h], eax
0x4F1E41: mov     [esi+88h], eax
0x4F1E47: mov     [esi+8Ch], eax
0x4F1E4D: mov     [esi+90h], eax
0x4F1E53: mov     [esi+94h], ebx
0x4F1E59: mov     ecx, esi
0x4F1E5B: pop     esi
0x4F1E5C: pop     ebx
0x4F1E5D: jmp     j_TESForm_InitializeComponents
