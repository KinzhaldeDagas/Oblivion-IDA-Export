0x4194B0: mov     ecx, [esp+arg_0]
0x4194B4: test    ecx, ecx
0x4194B6: jnz     short loc_4194BB
0x4194B8: xor     al, al
0x4194BA: retn
0x4194BB: mov     eax, [ecx]
0x4194BD: test    eax, eax
0x4194BF: jz      short loc_4194C5
0x4194C1: mov     eax, [eax]
0x4194C3: jmp     short loc_4194C7
0x4194C5: xor     eax, eax
0x4194C7: mov     edx, [esp+arg_8]
0x4194CB: mov     ecx, [ecx+8]
0x4194CE: push    edx
0x4194CF: mov     edx, [esp+4+arg_4]
0x4194D3: push    edx
0x4194D4: push    eax
0x4194D5: push    ecx
0x4194D6: call    EnchantmentItem_EffectAllowedFromEnch??
0x4194DB: add     esp, 10h
0x4194DE: retn
