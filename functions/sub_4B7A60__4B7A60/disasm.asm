0x4B7A60: sub     esp, 8
0x4B7A63: mov     eax, [esp+8+a2]
0x4B7A67: push    esi
0x4B7A68: push    edi
0x4B7A69: push    0; int
0x4B7A6B: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x4B7A70: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B7A75: mov     esi, ecx
0x4B7A77: push    0; int
0x4B7A79: push    eax; void *
0x4B7A7A: mov     [esp+24h+var_8], esi
0x4B7A7E: call    OblivionDynamicCast
0x4B7A83: mov     edi, eax
0x4B7A85: add     esp, 14h
0x4B7A88: test    edi, edi
0x4B7A8A: mov     [esp+10h+var_4], edi
0x4B7A8E: jz      loc_4B7B36
0x4B7A94: push    ebx
0x4B7A95: push    ebp
0x4B7A96: mov     ecx, esi
0x4B7A98: call    sub_4B7900
0x4B7A9D: lea     ebx, [edi+68h]
0x4B7AA0: test    ebx, ebx
0x4B7AA2: lea     ebp, [esi+68h]
0x4B7AA5: jz      short loc_4B7B10
0x4B7AA7: cmp     dword ptr [ebx+4], 0
0x4B7AAB: jnz     short loc_4B7AB2
0x4B7AAD: cmp     dword ptr [ebx], 0
0x4B7AB0: jz      short loc_4B7B10
0x4B7AB2: mov     edi, [ebx]
0x4B7AB4: test    edi, edi
0x4B7AB6: jz      short loc_4B7AFC
0x4B7AB8: cmp     dword ptr [ebp+4], 0
0x4B7ABC: lea     eax, [ebp+4]
0x4B7ABF: mov     esi, ebp
0x4B7AC1: jz      short loc_4B7ACE
0x4B7AC3: mov     esi, [eax]
0x4B7AC5: cmp     dword ptr [esi+4], 0
0x4B7AC9: lea     eax, [esi+4]
0x4B7ACC: jnz     short loc_4B7AC3
0x4B7ACE: cmp     dword ptr [esi], 0
0x4B7AD1: jz      short loc_4B7AF6
0x4B7AD3: push    8; Size
0x4B7AD5: call    FormHeapAlloc
0x4B7ADA: add     esp, 4
0x4B7ADD: test    eax, eax
0x4B7ADF: jz      short loc_4B7AEF
0x4B7AE1: mov     [eax], edi
0x4B7AE3: mov     dword ptr [eax+4], 0
0x4B7AEA: mov     [esi+4], eax
0x4B7AED: jmp     short loc_4B7AF8
0x4B7AEF: xor     eax, eax
0x4B7AF1: mov     [esi+4], eax
0x4B7AF4: jmp     short loc_4B7AF8
0x4B7AF6: mov     [esi], edi
0x4B7AF8: mov     esi, [esp+18h+var_8]
0x4B7AFC: mov     eax, [ebp+4]
0x4B7AFF: test    eax, eax
0x4B7B01: jz      short loc_4B7B05
0x4B7B03: mov     ebp, eax
0x4B7B05: mov     ebx, [ebx+4]
0x4B7B08: test    ebx, ebx
0x4B7B0A: mov     edi, [esp+18h+var_4]
0x4B7B0E: jnz     short loc_4B7AA7
0x4B7B10: mov     cl, [edi+64h]
0x4B7B13: mov     [esi+64h], cl
0x4B7B16: mov     edx, [edi+58h]
0x4B7B19: mov     [esi+58h], edx
0x4B7B1C: mov     eax, [edi+5Ch]
0x4B7B1F: mov     edx, [esp+18h+a2]
0x4B7B23: mov     [esi+5Ch], eax
0x4B7B26: mov     ecx, [edi+60h]
0x4B7B29: mov     [esi+60h], ecx
0x4B7B2C: push    edx; a2
0x4B7B2D: mov     ecx, esi; this
0x4B7B2F: call    TESForm_CopyAllComponentsFrom
0x4B7B34: pop     ebp
0x4B7B35: pop     ebx
0x4B7B36: pop     edi
0x4B7B37: pop     esi
0x4B7B38: add     esp, 8
0x4B7B3B: retn    4
