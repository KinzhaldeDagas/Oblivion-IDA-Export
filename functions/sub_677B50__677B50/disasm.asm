0x677B50: push    ebp
0x677B51: mov     ebp, [esp+4+arg_0]
0x677B55: test    ebp, ebp
0x677B57: jz      loc_677C61
0x677B5D: push    ebx
0x677B5E: lea     ebx, [ecx+58h]
0x677B61: test    ebx, ebx
0x677B63: jz      loc_677C60
0x677B69: push    esi
0x677B6A: push    edi
0x677B6B: jmp     short loc_677B70
0x677B6D: align 10h
0x677B70: cmp     dword ptr [ebx+4], 0
0x677B74: jnz     short loc_677B7F
0x677B76: cmp     dword ptr [ebx], 0
0x677B79: jz      loc_677C5E
0x677B7F: mov     esi, [ebx]
0x677B81: mov     eax, [esi]
0x677B83: mov     edx, [eax+188h]
0x677B89: mov     ecx, esi
0x677B8B: call    edx
0x677B8D: test    al, al
0x677B8F: jz      loc_677C53
0x677B95: cmp     esi, ebp
0x677B97: jz      loc_677C53
0x677B9D: push    0; int
0x677B9F: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x677BA4: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x677BA9: push    0; int
0x677BAB: push    esi; void *
0x677BAC: call    OblivionDynamicCast
0x677BB1: mov     edi, eax
0x677BB3: add     esp, 14h
0x677BB6: test    edi, edi
0x677BB8: jz      short loc_677C13
0x677BBA: cmp     [esp+10h+arg_4], 0
0x677BBF: jz      short loc_677BD6
0x677BC1: mov     eax, [ebp+0]
0x677BC4: mov     edx, [eax+120h]
0x677BCA: mov     ecx, ebp
0x677BCC: call    edx
0x677BCE: push    eax
0x677BCF: mov     ecx, edi
0x677BD1: call    sub_5E69E0
0x677BD6: mov     esi, [edi+58h]
0x677BD9: test    esi, esi
0x677BDB: jz      short loc_677C53
0x677BDD: mov     eax, [ebp+0]
0x677BE0: mov     edx, [eax+124h]
0x677BE6: mov     ecx, ebp
0x677BE8: call    edx
0x677BEA: mov     edx, [esi]
0x677BEC: mov     edx, [edx+2B0h]
0x677BF2: mov     ecx, esi
0x677BF4: mov     [esp+10h+arg_0], eax
0x677BF8: call    edx
0x677BFA: mov     ecx, [esp+10h+arg_0]
0x677BFE: cmp     eax, ecx
0x677C00: jnz     short loc_677C53
0x677C02: mov     ecx, [edi+58h]
0x677C05: mov     eax, [ecx]
0x677C07: mov     edx, [eax+2B4h]
0x677C0D: push    0
0x677C0F: call    edx
0x677C11: jmp     short loc_677C53
0x677C13: cmp     [esp+10h+arg_4], 0
0x677C18: jz      short loc_677C53
0x677C1A: push    0; int
0x677C1C: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x677C21: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x677C26: push    0; int
0x677C28: push    esi; void *
0x677C29: call    OblivionDynamicCast
0x677C2E: mov     esi, eax
0x677C30: add     esp, 14h
0x677C33: test    esi, esi
0x677C35: jz      short loc_677C53
0x677C37: mov     eax, [ebp+0]
0x677C3A: mov     edi, [esi]
0x677C3C: mov     edx, [eax+120h]
0x677C42: mov     ecx, ebp
0x677C44: add     edi, 218h
0x677C4A: call    edx
0x677C4C: push    eax
0x677C4D: mov     eax, [edi]
0x677C4F: mov     ecx, esi
0x677C51: call    eax
0x677C53: mov     ebx, [ebx+4]
0x677C56: test    ebx, ebx
0x677C58: jnz     loc_677B70
0x677C5E: pop     edi
0x677C5F: pop     esi
0x677C60: pop     ebx
0x677C61: pop     ebp
0x677C62: retn    8
