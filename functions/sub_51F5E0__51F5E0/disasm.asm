0x51F5E0: push    ecx
0x51F5E1: mov     eax, [esp+4+arg_0]
0x51F5E5: push    ebp
0x51F5E6: push    esi
0x51F5E7: push    0; int
0x51F5E9: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x51F5EE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51F5F3: push    0; int
0x51F5F5: push    eax; void *
0x51F5F6: mov     ebp, ecx
0x51F5F8: call    OblivionDynamicCast
0x51F5FD: mov     esi, eax
0x51F5FF: add     esp, 14h
0x51F602: test    esi, esi
0x51F604: jnz     short loc_51F60E
0x51F606: pop     esi
0x51F607: mov     al, 1
0x51F609: pop     ebp
0x51F60A: pop     ecx
0x51F60B: retn    4
0x51F60E: push    esi; a2
0x51F60F: mov     ecx, ebp; this
0x51F611: call    TESForm_CompareAllComponentsTo
0x51F616: test    al, al
0x51F618: jnz     short loc_51F606
0x51F61A: movzx   eax, byte ptr [ebp+34h]
0x51F61E: movzx   ecx, byte ptr [esi+34h]
0x51F622: sub     eax, ecx
0x51F624: jz      short loc_51F634
0x51F626: test    eax, eax
0x51F628: mov     ecx, 1
0x51F62D: jg      short loc_51F636
0x51F62F: or      ecx, 0FFFFFFFFh
0x51F632: jmp     short loc_51F636
0x51F634: xor     ecx, ecx
0x51F636: test    ecx, ecx
0x51F638: jnz     short loc_51F606
0x51F63A: fld     dword ptr [ebp+38h]
0x51F63D: fld     dword ptr [esi+38h]
0x51F640: fucompp
0x51F642: fnstsw  ax
0x51F644: test    ah, 44h
0x51F647: jp      short loc_51F606
0x51F649: add     ebp, 3Ch ; '<'
0x51F64C: add     esi, 3Ch ; '<'
0x51F64F: test    ebp, ebp
0x51F651: push    ebx
0x51F652: push    edi
0x51F653: mov     [esp+14h+var_4], ebp
0x51F657: mov     [esp+14h+arg_0], esi
0x51F65B: jz      loc_51F73A
0x51F661: mov     ecx, ebp
0x51F663: call    BSSimpleList_IsEmpty
0x51F668: test    al, al
0x51F66A: jnz     loc_51F73A
0x51F670: test    esi, esi
0x51F672: jz      loc_51F749
0x51F678: mov     esi, [esi]
0x51F67A: test    esi, esi
0x51F67C: jz      loc_51F749
0x51F682: mov     ebx, [ebp+0]
0x51F685: mov     ecx, ebx
0x51F687: call    BSStringT_GetLen
0x51F68C: test    eax, eax
0x51F68E: jnz     short loc_51F69B
0x51F690: mov     ecx, esi
0x51F692: call    BSStringT_GetLen
0x51F697: test    eax, eax
0x51F699: jz      short loc_51F6C7
0x51F69B: mov     ecx, esi
0x51F69D: call    BSStringT_GetLen
0x51F6A2: mov     ecx, ebx
0x51F6A4: mov     edi, eax
0x51F6A6: call    BSStringT_GetLen
0x51F6AB: cmp     eax, edi
0x51F6AD: jnz     loc_51F749
0x51F6B3: mov     eax, [esi]
0x51F6B5: push    0
0x51F6B7: push    eax
0x51F6B8: mov     ecx, ebx
0x51F6BA: call    BSStringT_StrCmp??
0x51F6BF: test    eax, eax
0x51F6C1: jnz     loc_51F749
0x51F6C7: lea     edi, [ebx+8]
0x51F6CA: mov     ecx, edi
0x51F6CC: call    BSStringT_GetLen
0x51F6D1: test    eax, eax
0x51F6D3: jnz     short loc_51F6E1
0x51F6D5: lea     ecx, [esi+8]
0x51F6D8: call    BSStringT_GetLen
0x51F6DD: test    eax, eax
0x51F6DF: jz      short loc_51F70B
0x51F6E1: lea     ecx, [esi+8]
0x51F6E4: call    BSStringT_GetLen
0x51F6E9: mov     ecx, edi
0x51F6EB: mov     ebp, eax
0x51F6ED: call    BSStringT_GetLen
0x51F6F2: cmp     eax, ebp
0x51F6F4: jnz     short loc_51F749
0x51F6F6: mov     eax, [esi+8]
0x51F6F9: push    0
0x51F6FB: push    eax
0x51F6FC: mov     ecx, edi
0x51F6FE: call    BSStringT_StrCmp??
0x51F703: test    eax, eax
0x51F705: jnz     short loc_51F749
0x51F707: mov     ebp, [esp+14h+var_4]
0x51F70B: mov     edx, [ebx+10h]
0x51F70E: mov     eax, [edx+0Ch]
0x51F711: lea     ecx, [ebx+10h]
0x51F714: add     esi, 10h
0x51F717: push    esi
0x51F718: call    eax
0x51F71A: test    al, al
0x51F71C: jnz     short loc_51F749
0x51F71E: mov     ecx, [esp+14h+arg_0]
0x51F722: mov     ebp, [ebp+4]
0x51F725: test    ebp, ebp
0x51F727: mov     edx, [ecx+4]
0x51F72A: mov     [esp+14h+var_4], ebp
0x51F72E: mov     [esp+14h+arg_0], edx
0x51F732: mov     esi, edx
0x51F734: jnz     loc_51F661
0x51F73A: test    esi, esi
0x51F73C: jz      short loc_51F753
0x51F73E: mov     ecx, esi
0x51F740: call    BSSimpleList_IsEmpty
0x51F745: test    al, al
0x51F747: jnz     short loc_51F753
0x51F749: pop     edi
0x51F74A: pop     ebx
0x51F74B: pop     esi
0x51F74C: mov     al, 1
0x51F74E: pop     ebp
0x51F74F: pop     ecx
0x51F750: retn    4
0x51F753: pop     edi
0x51F754: pop     ebx
0x51F755: pop     esi
0x51F756: xor     al, al
0x51F758: pop     ebp
0x51F759: pop     ecx
0x51F75A: retn    4
