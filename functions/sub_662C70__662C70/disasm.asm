0x662C70: push    ebx
0x662C71: mov     ebx, [esp+4+arg_0]
0x662C75: mov     al, [ebx+4]
0x662C78: cmp     al, 14h
0x662C7A: push    esi
0x662C7B: mov     esi, ecx
0x662C7D: jz      short loc_662C83
0x662C7F: cmp     al, 16h
0x662C81: jnz     short loc_662D00
0x662C83: cmp     dword ptr [esi+1FCh], 0
0x662C8A: jz      short loc_662D00
0x662C8C: push    0; int
0x662C8E: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x662C93: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x662C98: push    0; int
0x662C9A: push    ebx; void *
0x662C9B: call    OblivionDynamicCast
0x662CA0: add     esp, 14h
0x662CA3: test    eax, eax
0x662CA5: jz      short loc_662CAC
0x662CA7: mov     eax, [eax+4]
0x662CAA: jmp     short loc_662CAE
0x662CAC: xor     eax, eax
0x662CAE: test    eax, eax
0x662CB0: jz      short loc_662D00
0x662CB2: push    edi
0x662CB3: add     eax, 18h
0x662CB6: lea     edi, [esi+68h]
0x662CB9: push    eax
0x662CBA: mov     ecx, edi
0x662CBC: call    MagicTarget_HasMagicItem
0x662CC1: test    al, al
0x662CC3: jz      short loc_662CCF
0x662CC5: push    0
0x662CC7: push    ebx
0x662CC8: mov     ecx, edi
0x662CCA: call    MagicTarget_RemoveBoundObj
0x662CCF: mov     ecx, [esi+1FCh]
0x662CD5: push    ebx
0x662CD6: call    BSSimpleList_Remove
0x662CDB: mov     eax, [esi+1FCh]
0x662CE1: cmp     dword ptr [eax+4], 0
0x662CE5: pop     edi
0x662CE6: jnz     short loc_662D00
0x662CE8: cmp     dword ptr [eax], 0
0x662CEB: jnz     short loc_662D00
0x662CED: push    eax
0x662CEE: call    FormHeapFree
0x662CF3: add     esp, 4
0x662CF6: mov     dword ptr [esi+1FCh], 0
0x662D00: pop     esi
0x662D01: pop     ebx
0x662D02: retn    8
