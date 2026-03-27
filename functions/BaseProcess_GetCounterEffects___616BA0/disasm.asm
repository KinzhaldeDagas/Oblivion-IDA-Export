0x616BA0: push    ecx
0x616BA1: push    ebx
0x616BA2: push    esi
0x616BA3: mov     esi, [esp+0Ch+arg_0]
0x616BA7: mov     [esp+0Ch+var_4], ecx
0x616BAB: mov     ecx, [esi+0Ch]
0x616BAE: mov     ebx, [ecx+1Ch]
0x616BB1: call    EffectItem_IsHostile
0x616BB6: test    al, al
0x616BB8: jz      BaseProcess_GetCounterEffects?___Done
0x616BBE: fldz
0x616BC0: fcomp   dword ptr [esi+1Ch]
0x616BC3: fnstsw  ax
0x616BC5: test    ah, 5
0x616BC8: jnp     short loc_616BD7
0x616BCA: mov     eax, [ebx+58h]
0x616BCD: shr     eax, 1
0x616BCF: test    al, 1
0x616BD1: jnz     BaseProcess_GetCounterEffects?___Done
0x616BD7: mov     eax, [esi+8]
0x616BDA: push    ebp
0x616BDB: push    edi
0x616BDC: xor     edi, edi
0x616BDE: push    edi; int
0x616BDF: push    offset ??_R0?AVAlchemyItem@@@8; struct TypeDescriptor *
0x616BE4: push    offset ??_R0?AVMagicItem@@@8; struct _s_RTTICompleteObjectLocator *
0x616BE9: push    edi; int
0x616BEA: push    eax; void *
0x616BEB: call    OblivionDynamicCast
0x616BF0: mov     ecx, [esi+8]
0x616BF3: mov     edx, [ecx]
0x616BF5: mov     ebp, eax
0x616BF7: mov     eax, [edx+18h]
0x616BFA: add     esp, 14h
0x616BFD: call    eax
0x616BFF: cmp     eax, 5
0x616C02: jz      short loc_616C71
0x616C04: test    ebp, ebp
0x616C06: jz      short loc_616C14
0x616C08: lea     ecx, [ebp+30h]
0x616C0B: call    EffectItemList_AllEffectsHostile
0x616C10: test    al, al
0x616C12: jnz     short loc_616C71
0x616C14: mov     esi, [esi+8]
0x616C17: mov     edx, [esi]
0x616C19: mov     eax, [edx+18h]
0x616C1C: mov     ecx, esi
0x616C1E: call    eax
0x616C20: cmp     eax, 1
0x616C23: jnz     short loc_616C2C
0x616C25: push    49445543h
0x616C2A: jmp     short loc_616C76
0x616C2C: mov     ebp, [ebx+9Ch]
0x616C32: xor     esi, esi
0x616C34: cmp     [ebx+6Ch], si
0x616C38: jle     short BaseProcess_GetCounterEffects?___Wrapup
0x616C3A: lea     ebx, [ebx+0]
0x616C40: test    edi, edi
0x616C42: jnz     short BaseProcess_GetCounterEffects?___Wrapup
0x616C44: mov     ecx, [ebp+esi*4+0]
0x616C48: push    ecx
0x616C49: mov     ecx, [esp+18h+var_4]
0x616C4D: call    BaseProcess_UseCounterEffect??
0x616C52: movsx   edx, word ptr [ebx+6Ch]
0x616C56: add     esi, 1
0x616C59: cmp     esi, edx
0x616C5B: mov     edi, eax
0x616C5D: jl      short loc_616C40
0x616C5F: mov     eax, [esp+14h+var_4]
0x616C63: mov     [eax+88h], edi
0x616C69: pop     edi
0x616C6A: pop     ebp
0x616C6B: pop     esi
0x616C6C: pop     ebx
0x616C6D: pop     ecx
0x616C6E: retn    4
0x616C71: push    4F505543h
0x616C76: mov     ecx, [esp+18h+var_4]
0x616C7A: call    BaseProcess_UseCounterEffect??
0x616C7F: mov     edi, eax
