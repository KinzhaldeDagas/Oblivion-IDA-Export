0x4E4C20: push    ebx
0x4E4C21: push    esi
0x4E4C22: push    edi
0x4E4C23: mov     edi, [esp+0Ch+arg_0]
0x4E4C27: movzx   eax, byte ptr [edi+4]
0x4E4C2B: push    eax
0x4E4C2C: mov     esi, ecx
0x4E4C2E: xor     bl, bl
0x4E4C30: call    sub_4CA010
0x4E4C35: add     esp, 4
0x4E4C38: test    al, al
0x4E4C3A: jz      loc_4E4CD6
0x4E4C40: push    ebp
0x4E4C41: push    0; int
0x4E4C43: push    offset ??_R0?AVTESChildCell@@@8; struct TypeDescriptor *
0x4E4C48: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E4C4D: push    0; int
0x4E4C4F: push    edi; void *
0x4E4C50: call    OblivionDynamicCast
0x4E4C55: mov     edx, [eax]
0x4E4C57: mov     ecx, eax
0x4E4C59: mov     eax, [edx]
0x4E4C5B: add     esp, 14h
0x4E4C5E: call    eax
0x4E4C60: mov     edx, [esi+18h]
0x4E4C63: add     esi, 18h
0x4E4C66: mov     ebp, eax
0x4E4C68: mov     eax, [edx]
0x4E4C6A: mov     ecx, esi
0x4E4C6C: call    eax
0x4E4C6E: cmp     ebp, eax
0x4E4C70: jnz     short loc_4E4CBD
0x4E4C72: movzx   eax, byte ptr [edi+4]
0x4E4C76: cmp     eax, 31h ; '1'
0x4E4C79: jl      short loc_4E4CF0
0x4E4C7B: cmp     eax, 33h ; '3'
0x4E4C7E: jle     short loc_4E4C8E
0x4E4C80: cmp     eax, 36h ; '6'
0x4E4C83: jnz     short loc_4E4CF0
0x4E4C85: pop     ebp
0x4E4C86: pop     edi
0x4E4C87: pop     esi
0x4E4C88: xor     al, al
0x4E4C8A: pop     ebx
0x4E4C8B: retn    4
0x4E4C8E: push    0; int
0x4E4C90: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x4E4C95: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E4C9A: push    0; int
0x4E4C9C: push    edi; void *
0x4E4C9D: call    OblivionDynamicCast
0x4E4CA2: add     esp, 14h
0x4E4CA5: test    eax, eax
0x4E4CA7: jz      short loc_4E4C85
0x4E4CA9: mov     ecx, eax; this
0x4E4CAB: call    TESObjectREFR_IsPersistent?
0x4E4CB0: test    al, al
0x4E4CB2: jnz     short loc_4E4C85
0x4E4CB4: pop     ebp
0x4E4CB5: pop     edi
0x4E4CB6: pop     esi
0x4E4CB7: mov     al, 1
0x4E4CB9: pop     ebx
0x4E4CBA: retn    4
0x4E4CBD: mov     edx, [esi]
0x4E4CBF: mov     eax, [edx]
0x4E4CC1: mov     ecx, esi
0x4E4CC3: call    eax
0x4E4CC5: mov     edx, [eax]
0x4E4CC7: mov     ecx, eax
0x4E4CC9: mov     eax, [edx+34h]
0x4E4CCC: push    ebp
0x4E4CCD: call    eax
0x4E4CCF: pop     ebp
0x4E4CD0: pop     edi
0x4E4CD1: pop     esi
0x4E4CD2: pop     ebx
0x4E4CD3: retn    4
0x4E4CD6: mov     edx, [esi+18h]
0x4E4CD9: mov     eax, [edx]
0x4E4CDB: lea     ecx, [esi+18h]
0x4E4CDE: call    eax
0x4E4CE0: mov     edx, [eax]
0x4E4CE2: mov     ecx, eax
0x4E4CE4: mov     eax, [edx+34h]
0x4E4CE7: push    edi
0x4E4CE8: call    eax
0x4E4CEA: pop     edi
0x4E4CEB: pop     esi
0x4E4CEC: pop     ebx
0x4E4CED: retn    4
0x4E4CF0: pop     ebp
0x4E4CF1: pop     edi
0x4E4CF2: pop     esi
0x4E4CF3: mov     al, bl
0x4E4CF5: pop     ebx
0x4E4CF6: retn    4
