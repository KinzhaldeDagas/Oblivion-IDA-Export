0x89EEF0: push    ebx
0x89EEF1: push    esi
0x89EEF2: mov     esi, [esp+8+arg_0]
0x89EEF6: push    edi
0x89EEF7: push    esi
0x89EEF8: mov     ebx, ecx
0x89EEFA: call    sub_898210
0x89EEFF: mov     eax, ds:0BA7D24h
0x89EF04: push    eax; ArgList
0x89EF05: call    TESOutput_PrintString
0x89EF0A: movzx   edi, word ptr [esi+0Ah]
0x89EF0E: movzx   ecx, word ptr [esi+8]
0x89EF12: add     esp, 4
0x89EF15: cmp     edi, ecx
0x89EF17: mov     [esp+0Ch+arg_0], eax
0x89EF1B: jb      short loc_89EF2B
0x89EF1D: movzx   edx, word ptr [esi+0Eh]
0x89EF21: add     edx, edi
0x89EF23: push    edx
0x89EF24: mov     ecx, esi
0x89EF26: call    NiTArray_SetSize
0x89EF2B: lea     eax, [esp+0Ch+arg_0]
0x89EF2F: push    eax
0x89EF30: push    edi
0x89EF31: mov     ecx, esi
0x89EF33: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89EF38: movzx   eax, word ptr [ebx+0Ch]
0x89EF3C: test    al, 20h
0x89EF3E: jz      short loc_89EF4E
0x89EF40: shr     al, 6
0x89EF43: test    al, 1
0x89EF45: jnz     short loc_89EF4E
0x89EF47: mov     eax, 1
0x89EF4C: jmp     short loc_89EF50
0x89EF4E: xor     eax, eax
0x89EF50: push    eax; char
0x89EF51: push    offset aBusevel; "bUseVel"
0x89EF56: call    TESOutput_PrintLabeledBool
0x89EF5B: movzx   edi, word ptr [esi+0Ah]
0x89EF5F: movzx   ecx, word ptr [esi+8]
0x89EF63: add     esp, 8
0x89EF66: cmp     edi, ecx
0x89EF68: mov     [esp+0Ch+arg_0], eax
0x89EF6C: jb      short loc_89EF7C
0x89EF6E: movzx   edx, word ptr [esi+0Eh]
0x89EF72: add     edx, edi
0x89EF74: push    edx
0x89EF75: mov     ecx, esi
0x89EF77: call    NiTArray_SetSize
0x89EF7C: lea     eax, [esp+0Ch+arg_0]
0x89EF80: push    eax
0x89EF81: push    edi
0x89EF82: mov     ecx, esi
0x89EF84: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x89EF89: pop     edi
0x89EF8A: pop     esi
0x89EF8B: pop     ebx
0x89EF8C: retn    4
