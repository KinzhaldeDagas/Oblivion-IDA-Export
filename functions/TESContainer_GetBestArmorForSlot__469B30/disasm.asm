0x469B30: push    ecx
0x469B31: fld     dword ptr ds:0A3B888h
0x469B37: push    ebp
0x469B38: push    edi
0x469B39: fstp    [esp+0Ch+var_4]
0x469B3D: lea     edi, [ecx+8]
0x469B40: xor     ebp, ebp
0x469B42: test    edi, edi
0x469B44: jz      short loc_469BBC
0x469B46: push    ebx
0x469B47: mov     ebx, [esp+10h+arg_4]
0x469B4B: push    esi
0x469B4C: lea     esp, [esp+0]
0x469B50: mov     eax, [edi]
0x469B52: test    eax, eax
0x469B54: jz      short loc_469BB3
0x469B56: mov     eax, [eax+4]
0x469B59: push    0; int
0x469B5B: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x469B60: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x469B65: push    0; int
0x469B67: push    eax; void *
0x469B68: call    OblivionDynamicCast
0x469B6D: mov     esi, eax
0x469B6F: add     esp, 14h
0x469B72: test    esi, esi
0x469B74: jz      short loc_469BB3
0x469B76: cmp     ebx, 0FFFFFFFFh
0x469B79: jz      short loc_469BB3
0x469B7B: push    0
0x469B7D: push    ebx
0x469B7E: lea     ecx, [esi+64h]
0x469B81: call    TESBipedModelForm_CoversSlot
0x469B86: test    al, al
0x469B88: jz      short loc_469BB3
0x469B8A: mov     ecx, [esp+14h+arg_0]
0x469B8E: push    esi
0x469B8F: call    TESActorBase_GetEquippableItemRating
0x469B94: fstp    [esp+14h+arg_4]
0x469B98: fld     [esp+14h+arg_4]
0x469B9C: fld     [esp+14h+var_4]
0x469BA0: fcomp   st(1)
0x469BA2: fnstsw  ax
0x469BA4: test    ah, 5
0x469BA7: jp      short loc_469BB1
0x469BA9: fstp    [esp+14h+var_4]
0x469BAD: mov     ebp, esi
0x469BAF: jmp     short loc_469BB3
0x469BB1: fstp    st
0x469BB3: mov     edi, [edi+4]
0x469BB6: test    edi, edi
0x469BB8: jnz     short loc_469B50
0x469BBA: pop     esi
0x469BBB: pop     ebx
0x469BBC: pop     edi
0x469BBD: mov     eax, ebp
0x469BBF: pop     ebp
0x469BC0: pop     ecx
0x469BC1: retn    8
