0x5E4B00: push    ecx
0x5E4B01: push    ebx
0x5E4B02: push    ebp
0x5E4B03: push    esi
0x5E4B04: mov     esi, ecx
0x5E4B06: mov     eax, [esi]
0x5E4B08: mov     edx, [eax+170h]
0x5E4B0E: push    edi
0x5E4B0F: xor     edi, edi
0x5E4B11: call    edx
0x5E4B13: mov     ebx, eax
0x5E4B15: test    ebx, ebx
0x5E4B17: jz      short loc_5E4B2B
0x5E4B19: mov     eax, [esi]
0x5E4B1B: mov     edx, [eax+190h]
0x5E4B21: mov     ecx, esi
0x5E4B23: call    edx
0x5E4B25: test    al, al
0x5E4B27: jz      short loc_5E4B2B
0x5E4B29: mov     edi, ebx
0x5E4B2B: mov     eax, [esi]
0x5E4B2D: mov     edx, [eax+170h]
0x5E4B33: lea     ebp, [edi+58h]
0x5E4B36: mov     ecx, esi
0x5E4B38: xor     edi, edi
0x5E4B3A: call    edx
0x5E4B3C: mov     ebx, eax
0x5E4B3E: test    ebx, ebx
0x5E4B40: jz      short loc_5E4B54
0x5E4B42: mov     eax, [esi]
0x5E4B44: mov     edx, [eax+190h]
0x5E4B4A: mov     ecx, esi
0x5E4B4C: call    edx
0x5E4B4E: test    al, al
0x5E4B50: jz      short loc_5E4B54
0x5E4B52: mov     edi, ebx
0x5E4B54: lea     eax, [edi+58h]
0x5E4B57: xor     ecx, ecx
0x5E4B59: test    eax, eax
0x5E4B5B: mov     [esp+14h+var_4], eax
0x5E4B5F: jz      short loc_5E4B70
0x5E4B61: cmp     dword ptr [eax], 0
0x5E4B64: jz      short loc_5E4B69
0x5E4B66: add     ecx, 1
0x5E4B69: mov     eax, [eax+4]
0x5E4B6C: test    eax, eax
0x5E4B6E: jnz     short loc_5E4B61
0x5E4B70: test    ebp, ebp
0x5E4B72: mov     ebx, ecx
0x5E4B74: jz      loc_5E4C36
0x5E4B7A: lea     ebx, [ebx+0]
0x5E4B80: mov     eax, [ebp+0]
0x5E4B83: test    eax, eax
0x5E4B85: jz      short loc_5E4BB3
0x5E4B87: lea     edi, [eax+18h]
0x5E4B8A: mov     eax, [edi]
0x5E4B8C: mov     edx, [eax+18h]
0x5E4B8F: mov     ecx, edi
0x5E4B91: call    edx
0x5E4B93: cmp     eax, 4
0x5E4B96: jz      short loc_5E4BA6
0x5E4B98: mov     eax, [edi]
0x5E4B9A: mov     edx, [eax+18h]
0x5E4B9D: mov     ecx, edi
0x5E4B9F: call    edx
0x5E4BA1: cmp     eax, 1
0x5E4BA4: jnz     short loc_5E4BB3
0x5E4BA6: push    0
0x5E4BA8: push    0
0x5E4BAA: push    edi
0x5E4BAB: lea     ecx, [esi+68h]
0x5E4BAE: call    MagicTarget_RemoveEffects
0x5E4BB3: mov     ecx, [esp+14h+var_4]
0x5E4BB7: call    BSSimpleList_Count
0x5E4BBC: cmp     eax, ebx
0x5E4BBE: jz      short loc_5E4C2B
0x5E4BC0: mov     eax, [esi]
0x5E4BC2: mov     edx, [eax+170h]
0x5E4BC8: mov     ecx, esi
0x5E4BCA: xor     edi, edi
0x5E4BCC: call    edx
0x5E4BCE: mov     ebx, eax
0x5E4BD0: test    ebx, ebx
0x5E4BD2: jz      short loc_5E4BE6
0x5E4BD4: mov     eax, [esi]
0x5E4BD6: mov     edx, [eax+190h]
0x5E4BDC: mov     ecx, esi
0x5E4BDE: call    edx
0x5E4BE0: test    al, al
0x5E4BE2: jz      short loc_5E4BE6
0x5E4BE4: mov     edi, ebx
0x5E4BE6: mov     eax, [esi]
0x5E4BE8: mov     edx, [eax+170h]
0x5E4BEE: mov     ecx, esi
0x5E4BF0: lea     ebp, [edi+58h]
0x5E4BF3: xor     ebx, ebx
0x5E4BF5: call    edx
0x5E4BF7: mov     edi, eax
0x5E4BF9: test    edi, edi
0x5E4BFB: jz      short loc_5E4C0F
0x5E4BFD: mov     eax, [esi]
0x5E4BFF: mov     edx, [eax+190h]
0x5E4C05: mov     ecx, esi
0x5E4C07: call    edx
0x5E4C09: test    al, al
0x5E4C0B: jz      short loc_5E4C0F
0x5E4C0D: mov     ebx, edi
0x5E4C0F: lea     eax, [ebx+58h]
0x5E4C12: xor     ecx, ecx
0x5E4C14: test    eax, eax
0x5E4C16: jz      short loc_5E4C27
0x5E4C18: cmp     dword ptr [eax], 0
0x5E4C1B: jz      short loc_5E4C20
0x5E4C1D: add     ecx, 1
0x5E4C20: mov     eax, [eax+4]
0x5E4C23: test    eax, eax
0x5E4C25: jnz     short loc_5E4C18
0x5E4C27: mov     ebx, ecx
0x5E4C29: jmp     short loc_5E4C2E
0x5E4C2B: mov     ebp, [ebp+4]
0x5E4C2E: test    ebp, ebp
0x5E4C30: jnz     loc_5E4B80
0x5E4C36: mov     eax, [esi]
0x5E4C38: mov     edx, [eax+268h]
0x5E4C3E: mov     ecx, esi
0x5E4C40: call    edx
0x5E4C42: test    eax, eax
0x5E4C44: jz      short loc_5E4C99
0x5E4C46: mov     eax, [esi]
0x5E4C48: mov     edx, [eax+268h]
0x5E4C4E: mov     ecx, esi
0x5E4C50: call    edx
0x5E4C52: mov     ebx, eax
0x5E4C54: add     ebx, 3Ch ; '<'
0x5E4C57: jz      short loc_5E4C99
0x5E4C59: lea     esp, [esp+0]
0x5E4C60: mov     eax, [ebx]
0x5E4C62: test    eax, eax
0x5E4C64: jz      short loc_5E4C92
0x5E4C66: lea     edi, [eax+18h]
0x5E4C69: mov     eax, [edi]
0x5E4C6B: mov     edx, [eax+18h]
0x5E4C6E: mov     ecx, edi
0x5E4C70: call    edx
0x5E4C72: cmp     eax, 4
0x5E4C75: jz      short loc_5E4C85
0x5E4C77: mov     eax, [edi]
0x5E4C79: mov     edx, [eax+18h]
0x5E4C7C: mov     ecx, edi
0x5E4C7E: call    edx
0x5E4C80: cmp     eax, 1
0x5E4C83: jnz     short loc_5E4C92
0x5E4C85: push    0
0x5E4C87: push    0
0x5E4C89: push    edi
0x5E4C8A: lea     ecx, [esi+68h]
0x5E4C8D: call    MagicTarget_RemoveEffects
0x5E4C92: mov     ebx, [ebx+4]
0x5E4C95: test    ebx, ebx
0x5E4C97: jnz     short loc_5E4C60
0x5E4C99: mov     ecx, esi; this
0x5E4C9B: call    Actor_IsNPC
0x5E4CA0: test    al, al
0x5E4CA2: jz      loc_5E4D29
0x5E4CA8: mov     eax, [esi]
0x5E4CAA: mov     edx, [eax+170h]
0x5E4CB0: mov     ecx, esi
0x5E4CB2: call    edx
0x5E4CB4: test    eax, eax
0x5E4CB6: jz      short loc_5E4D29
0x5E4CB8: cmp     dword ptr [eax+0E8h], 0
0x5E4CBF: jz      short loc_5E4D29
0x5E4CC1: mov     ecx, esi; this
0x5E4CC3: call    Actor_IsNPC
0x5E4CC8: test    al, al
0x5E4CCA: jz      short loc_5E4CE4
0x5E4CCC: mov     eax, [esi]
0x5E4CCE: mov     edx, [eax+170h]
0x5E4CD4: mov     ecx, esi
0x5E4CD6: call    edx
0x5E4CD8: test    eax, eax
0x5E4CDA: jz      short loc_5E4CE4
0x5E4CDC: mov     eax, [eax+0E8h]
0x5E4CE2: jmp     short loc_5E4CE6
0x5E4CE4: xor     eax, eax
0x5E4CE6: lea     ebx, [eax+30h]
0x5E4CE9: test    ebx, ebx
0x5E4CEB: jz      short loc_5E4D29
0x5E4CED: lea     ecx, [ecx+0]
0x5E4CF0: mov     eax, [ebx]
0x5E4CF2: test    eax, eax
0x5E4CF4: jz      short loc_5E4D22
0x5E4CF6: lea     edi, [eax+18h]
0x5E4CF9: mov     eax, [edi]
0x5E4CFB: mov     edx, [eax+18h]
0x5E4CFE: mov     ecx, edi
0x5E4D00: call    edx
0x5E4D02: cmp     eax, 4
0x5E4D05: jz      short loc_5E4D15
0x5E4D07: mov     eax, [edi]
0x5E4D09: mov     edx, [eax+18h]
0x5E4D0C: mov     ecx, edi
0x5E4D0E: call    edx
0x5E4D10: cmp     eax, 1
0x5E4D13: jnz     short loc_5E4D22
0x5E4D15: push    0
0x5E4D17: push    0
0x5E4D19: push    edi
0x5E4D1A: lea     ecx, [esi+68h]
0x5E4D1D: call    MagicTarget_RemoveEffects
0x5E4D22: mov     ebx, [ebx+4]
0x5E4D25: test    ebx, ebx
0x5E4D27: jnz     short loc_5E4CF0
0x5E4D29: mov     eax, [esi]
0x5E4D2B: mov     edx, [eax+170h]
0x5E4D31: mov     ecx, esi
0x5E4D33: call    edx
0x5E4D35: mov     edi, eax
0x5E4D37: test    edi, edi
0x5E4D39: jz      short loc_5E4D50
0x5E4D3B: mov     eax, [esi]
0x5E4D3D: mov     edx, [eax+190h]
0x5E4D43: mov     ecx, esi
0x5E4D45: call    edx
0x5E4D47: test    al, al
0x5E4D49: jz      short loc_5E4D50
0x5E4D4B: lea     eax, [edi+44h]
0x5E4D4E: jmp     short loc_5E4D52
0x5E4D50: xor     eax, eax
0x5E4D52: push    eax
0x5E4D53: push    esi; a1
0x5E4D54: call    ContainerExtraData_GetContainerExtraDataForRef
0x5E4D59: add     esp, 8
0x5E4D5C: mov     ebp, eax
0x5E4D5E: xor     ebx, ebx
0x5E4D60: mov     eax, ds:dword_B1489C[ebx]
0x5E4D66: push    0
0x5E4D68: push    eax
0x5E4D69: mov     ecx, ebp
0x5E4D6B: call    ContainerExtraData_GetEquippedInstance
0x5E4D70: mov     edi, eax
0x5E4D72: test    edi, edi
0x5E4D74: jz      short loc_5E4DB8
0x5E4D76: mov     eax, [edi+8]
0x5E4D79: push    0; int
0x5E4D7B: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E4D80: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5E4D85: push    0; int
0x5E4D87: push    eax; void *
0x5E4D88: call    OblivionDynamicCast
0x5E4D8D: add     esp, 14h
0x5E4D90: test    eax, eax
0x5E4D92: jz      short loc_5E4DA8
0x5E4D94: cmp     dword ptr [eax+4], 0
0x5E4D98: jz      short loc_5E4DA8
0x5E4D9A: mov     ecx, [edi+8]
0x5E4D9D: push    0
0x5E4D9F: push    ecx
0x5E4DA0: lea     ecx, [esi+68h]
0x5E4DA3: call    MagicTarget_RemoveBoundObj
0x5E4DA8: mov     ecx, edi
0x5E4DAA: call    ContainerEntryExtraData_DestroyDataTable
0x5E4DAF: push    edi
0x5E4DB0: call    FormHeapFree
0x5E4DB5: add     esp, 4
0x5E4DB8: add     ebx, 4
0x5E4DBB: cmp     ebx, 28h ; '('
0x5E4DBE: jb      short loc_5E4D60
0x5E4DC0: pop     edi
0x5E4DC1: pop     esi
0x5E4DC2: pop     ebp
0x5E4DC3: pop     ebx
0x5E4DC4: pop     ecx
0x5E4DC5: retn
