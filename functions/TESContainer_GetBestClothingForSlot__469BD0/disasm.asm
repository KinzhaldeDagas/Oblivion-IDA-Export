0x469BD0: push    ecx
0x469BD1: fld     dword ptr ds:0A3B888h
0x469BD7: push    ebp
0x469BD8: push    edi
0x469BD9: fstp    [esp+0Ch+var_4]
0x469BDD: lea     edi, [ecx+8]
0x469BE0: xor     ebp, ebp
0x469BE2: test    edi, edi
0x469BE4: jz      short loc_469C5C
0x469BE6: push    ebx
0x469BE7: mov     ebx, [esp+10h+arg_4]
0x469BEB: push    esi
0x469BEC: lea     esp, [esp+0]
0x469BF0: mov     eax, [edi]
0x469BF2: test    eax, eax
0x469BF4: jz      short loc_469C53
0x469BF6: mov     eax, [eax+4]
0x469BF9: push    0; int
0x469BFB: push    offset ??_R0?AVTESObjectCLOT@@@8; struct TypeDescriptor *
0x469C00: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x469C05: push    0; int
0x469C07: push    eax; void *
0x469C08: call    OblivionDynamicCast
0x469C0D: mov     esi, eax
0x469C0F: add     esp, 14h
0x469C12: test    esi, esi
0x469C14: jz      short loc_469C53
0x469C16: cmp     ebx, 0FFFFFFFFh
0x469C19: jz      short loc_469C53
0x469C1B: push    0
0x469C1D: push    ebx
0x469C1E: lea     ecx, [esi+5Ch]
0x469C21: call    TESBipedModelForm_CoversSlot
0x469C26: test    al, al
0x469C28: jz      short loc_469C53
0x469C2A: mov     ecx, [esp+14h+arg_0]
0x469C2E: push    esi
0x469C2F: call    TESActorBase_GetEquippableItemRating
0x469C34: fstp    [esp+14h+arg_4]
0x469C38: fld     [esp+14h+arg_4]
0x469C3C: fld     [esp+14h+var_4]
0x469C40: fcomp   st(1)
0x469C42: fnstsw  ax
0x469C44: test    ah, 5
0x469C47: jp      short loc_469C51
0x469C49: fstp    [esp+14h+var_4]
0x469C4D: mov     ebp, esi
0x469C4F: jmp     short loc_469C53
0x469C51: fstp    st
0x469C53: mov     edi, [edi+4]
0x469C56: test    edi, edi
0x469C58: jnz     short loc_469BF0
0x469C5A: pop     esi
0x469C5B: pop     ebx
0x469C5C: pop     edi
0x469C5D: mov     eax, ebp
0x469C5F: pop     ebp
0x469C60: pop     ecx
0x469C61: retn    8
