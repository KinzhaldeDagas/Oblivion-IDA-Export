0x7909D0: push    0FFFFFFFFh
0x7909D2: push    offset SEH_7909D0
0x7909D7: mov     eax, large fs:0
0x7909DD: push    eax
0x7909DE: sub     esp, 24h
0x7909E1: push    ebx
0x7909E2: push    esi
0x7909E3: push    edi
0x7909E4: mov     eax, ds:0B30AACh
0x7909E9: xor     eax, esp
0x7909EB: push    eax
0x7909EC: lea     eax, [esp+40h+var_C]
0x7909F0: mov     large fs:0, eax
0x7909F6: mov     edi, ecx
0x7909F8: xor     ebx, ebx
0x7909FA: push    5Ch ; '\'; Size
0x7909FC: mov     [esp+44h+var_30], ebx
0x790A00: call    FormHeapAlloc
0x790A05: mov     esi, eax
0x790A07: add     esp, 4
0x790A0A: mov     [esp+40h+var_2C], esi
0x790A0E: cmp     esi, ebx
0x790A10: mov     [esp+40h+var_4], ebx
0x790A14: jz      short loc_790A3C
0x790A16: lea     eax, [esp+40h+var_28]
0x790A1A: push    eax
0x790A1B: mov     ecx, edi
0x790A1D: call    sub_78EC20
0x790A22: mov     ebx, 1
0x790A27: push    eax
0x790A28: mov     ecx, esi
0x790A2A: mov     byte ptr [esp+44h+var_4], 1
0x790A2F: mov     [esp+44h+var_30], ebx
0x790A33: call    sub_786D60
0x790A38: mov     esi, eax
0x790A3A: jmp     short loc_790A3E
0x790A3C: xor     esi, esi
0x790A3E: test    bl, 1
0x790A41: jz      short loc_790A57
0x790A43: cmp     [esp+40h+var_10], 10h
0x790A48: jb      short loc_790A57
0x790A4A: mov     ecx, [esp+40h+var_24]
0x790A4E: push    ecx
0x790A4F: call    FormHeapFree
0x790A54: add     esp, 4
0x790A57: mov     eax, esi
0x790A59: mov     ecx, [esp+40h+var_C]
0x790A5D: mov     large fs:0, ecx
0x790A64: pop     ecx
0x790A65: pop     edi
0x790A66: pop     esi
0x790A67: pop     ebx
0x790A68: add     esp, 30h
0x790A6B: retn
