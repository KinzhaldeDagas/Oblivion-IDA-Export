0x48B9C0: sub     esp, 18h
0x48B9C3: fld     dword ptr ds:0A3B888h
0x48B9C9: push    ebx
0x48B9CA: push    esi
0x48B9CB: fstp    [esp+20h+var_18]
0x48B9CF: xor     ebx, ebx
0x48B9D1: cmp     byte ptr [esp+20h+arg_4], bl
0x48B9D5: push    edi
0x48B9D6: mov     edi, ecx
0x48B9D8: mov     [esp+24h+var_10], edi
0x48B9DC: mov     [esp+24h+var_14], ebx
0x48B9E0: mov     dword ptr [esp+24h+var_8], ebx
0x48B9E4: jz      short loc_48BA23
0x48B9E6: push    ebx
0x48B9E7: push    0Ch
0x48B9E9: call    ContainerExtraData_GetEquippedInstance
0x48B9EE: mov     esi, eax
0x48B9F0: cmp     esi, ebx
0x48B9F2: jz      short loc_48BA23
0x48B9F4: mov     eax, [esi]
0x48B9F6: mov     ecx, [eax]
0x48B9F8: call    sub_41DF40
0x48B9FD: test    al, al
0x48B9FF: jnz     loc_48BD8A
0x48BA05: mov     ecx, [esi]
0x48BA07: cmp     ecx, ebx
0x48BA09: jz      short loc_48BA10
0x48BA0B: call    BSSimpleList_Clear
0x48BA10: mov     ecx, [esi]
0x48BA12: push    ecx
0x48BA13: call    FormHeapFree
0x48BA18: push    esi
0x48BA19: mov     [esi], ebx
0x48BA1B: call    FormHeapFree
0x48BA20: add     esp, 8
0x48BA23: mov     ecx, [edi+4]; this
0x48BA26: cmp     ecx, ebx
0x48BA28: jz      short loc_48BA31
0x48BA2A: call    TESObjectREFR_GetContainer
0x48BA2F: jmp     short loc_48BA33
0x48BA31: xor     eax, eax
0x48BA33: add     eax, 8
0x48BA36: cmp     eax, ebx
0x48BA38: push    ebp
0x48BA39: mov     [esp+28h+arg_4], eax
0x48BA3D: jz      loc_48BB89
0x48BA43: jmp     short loc_48BA49
0x48BA45: mov     eax, [esp+28h+arg_4]
0x48BA49: mov     eax, [eax]
0x48BA4B: cmp     eax, ebx
0x48BA4D: jz      loc_48BB76
0x48BA53: mov     edx, [eax+4]
0x48BA56: push    ebx; int
0x48BA57: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x48BA5C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48BA61: push    ebx; int
0x48BA62: push    edx; void *
0x48BA63: call    OblivionDynamicCast
0x48BA68: add     esp, 14h
0x48BA6B: cmp     eax, ebx
0x48BA6D: mov     [esp+28h+var_C], eax
0x48BA71: jz      loc_48BB76
0x48BA77: mov     eax, [esp+28h+var_10]
0x48BA7B: mov     eax, [eax]
0x48BA7D: cmp     eax, ebx
0x48BA7F: mov     dl, 1
0x48BA81: jz      short loc_48BAA1
0x48BA83: mov     esi, [esp+28h+var_C]
0x48BA87: test    dl, dl
0x48BA89: jz      short loc_48BACD
0x48BA8B: mov     ecx, [eax]
0x48BA8D: cmp     ecx, ebx
0x48BA8F: jz      short loc_48BA9A
0x48BA91: cmp     [ecx+8], esi
0x48BA94: jnz     short loc_48BA9A
0x48BA96: xor     dl, dl
0x48BA98: jmp     short loc_48BA9D
0x48BA9A: mov     eax, [eax+4]
0x48BA9D: cmp     eax, ebx
0x48BA9F: jnz     short loc_48BA87
0x48BAA1: xor     edi, edi
0x48BAA3: xor     ebp, ebp
0x48BAA5: cmp     edi, ebx
0x48BAA7: jz      loc_48BB47
0x48BAAD: mov     eax, [edi]
0x48BAAF: cmp     eax, ebx
0x48BAB1: jz      short loc_48BAD5
0x48BAB3: mov     esi, [eax]
0x48BAB5: cmp     esi, ebx
0x48BAB7: jz      short loc_48BAD5
0x48BAB9: mov     ecx, esi
0x48BABB: call    ExtraDataList_GetOwner
0x48BAC0: test    eax, eax
0x48BAC2: jz      short loc_48BAD5
0x48BAC4: mov     ecx, esi
0x48BAC6: call    ExtraDataList_GetOwner
0x48BACB: jmp     short loc_48BAD7
0x48BACD: cmp     eax, ebx
0x48BACF: jz      short loc_48BAA1
0x48BAD1: mov     edi, [eax]
0x48BAD3: jmp     short loc_48BAA3
0x48BAD5: xor     eax, eax
0x48BAD7: cmp     eax, [esp+28h+arg_0]
0x48BADB: jz      short loc_48BB01
0x48BADD: cmp     [edi+4], ebx
0x48BAE0: jle     short loc_48BB01
0x48BAE2: mov     esi, [edi]
0x48BAE4: cmp     esi, ebx
0x48BAE6: jz      short loc_48BB01
0x48BAE8: mov     ecx, [esi]
0x48BAEA: cmp     ecx, ebx
0x48BAEC: jz      short loc_48BB01
0x48BAEE: call    ExtraDataList_GetOwner
0x48BAF3: test    eax, eax
0x48BAF5: jz      short loc_48BAFA
0x48BAF7: add     ebp, 1
0x48BAFA: mov     esi, [esi+4]
0x48BAFD: cmp     esi, ebx
0x48BAFF: jnz     short loc_48BAE8
0x48BB01: mov     eax, [edi]
0x48BB03: cmp     eax, ebx
0x48BB05: jz      short loc_48BB32
0x48BB07: mov     esi, [eax]
0x48BB09: cmp     esi, ebx
0x48BB0B: jz      short loc_48BB32
0x48BB0D: mov     ecx, esi
0x48BB0F: call    ExtraDataList_GetOwner
0x48BB14: test    eax, eax
0x48BB16: jz      short loc_48BB32
0x48BB18: mov     ecx, esi
0x48BB1A: call    ExtraDataList_GetOwner
0x48BB1F: cmp     eax, ebx
0x48BB21: jz      short loc_48BB32
0x48BB23: mov     ecx, [esp+28h+arg_4]
0x48BB27: mov     edx, [ecx]
0x48BB29: mov     eax, [edi+4]
0x48BB2C: add     eax, [edx]
0x48BB2E: cmp     ebp, eax
0x48BB30: jge     short loc_48BB76
0x48BB32: mov     ecx, [esp+28h+arg_4]
0x48BB36: mov     edx, [ecx]
0x48BB38: mov     eax, [edx]
0x48BB3A: mov     ecx, [edi+4]
0x48BB3D: add     ecx, eax
0x48BB3F: test    ecx, ecx
0x48BB41: jg      short loc_48BB47
0x48BB43: cmp     eax, ebx
0x48BB45: jge     short loc_48BB76
0x48BB47: mov     esi, [esp+28h+var_C]
0x48BB4B: mov     ecx, [esp+28h+arg_0]
0x48BB4F: push    esi
0x48BB50: call    TESActorBase_GetEquippableItemRating
0x48BB55: fstp    [esp+28h+var_C]
0x48BB59: fld     [esp+28h+var_C]
0x48BB5D: fld     [esp+28h+var_18]
0x48BB61: fcomp   st(1)
0x48BB63: fnstsw  ax
0x48BB65: test    ah, 5
0x48BB68: jp      short loc_48BB74
0x48BB6A: fstp    [esp+28h+var_18]
0x48BB6E: mov     [esp+28h+var_14], esi
0x48BB72: jmp     short loc_48BB76
0x48BB74: fstp    st
0x48BB76: mov     edx, [esp+28h+arg_4]
0x48BB7A: mov     eax, [edx+4]
0x48BB7D: cmp     eax, ebx
0x48BB7F: mov     [esp+28h+arg_4], eax
0x48BB83: jnz     loc_48BA45
0x48BB89: mov     eax, [esp+28h+var_10]
0x48BB8D: mov     ebx, [eax]
0x48BB8F: test    ebx, ebx
0x48BB91: jz      loc_48BCD3
0x48BB97: jmp     short loc_48BBA0
0x48BB99: align 10h
0x48BBA0: mov     edi, [ebx]
0x48BBA2: test    edi, edi
0x48BBA4: jz      loc_48BC91
0x48BBAA: mov     ecx, [edi+8]
0x48BBAD: push    0; int
0x48BBAF: push    offset ??_R0?AVTESAmmo@@@8; struct TypeDescriptor *
0x48BBB4: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48BBB9: push    0; int
0x48BBBB: push    ecx; void *
0x48BBBC: call    OblivionDynamicCast
0x48BBC1: mov     ebp, eax
0x48BBC3: add     esp, 14h
0x48BBC6: test    ebp, ebp
0x48BBC8: jz      loc_48BC91
0x48BBCE: mov     esi, [edi]
0x48BBD0: test    esi, esi
0x48BBD2: jz      short loc_48BBF6
0x48BBD4: mov     ecx, [esi]
0x48BBD6: test    ecx, ecx
0x48BBD8: jz      short loc_48BBF6
0x48BBDA: call    sub_41DEF0
0x48BBDF: test    al, al
0x48BBE1: jnz     short loc_48BBEC
0x48BBE3: mov     esi, [esi+4]
0x48BBE6: test    esi, esi
0x48BBE8: jnz     short loc_48BBD4
0x48BBEA: jmp     short loc_48BBF6
0x48BBEC: cmp     dword ptr [edi+4], 0
0x48BBF0: jl      loc_48BC91
0x48BBF6: mov     eax, [edi]
0x48BBF8: test    eax, eax
0x48BBFA: jz      short loc_48BC40
0x48BBFC: mov     esi, [eax]
0x48BBFE: test    esi, esi
0x48BC00: jz      short loc_48BC40
0x48BC02: mov     ecx, esi
0x48BC04: call    ExtraDataList_GetOwner
0x48BC09: test    eax, eax
0x48BC0B: jz      short loc_48BC40
0x48BC0D: mov     ecx, esi
0x48BC0F: call    ExtraDataList_GetOwner
0x48BC14: test    eax, eax
0x48BC16: jz      short loc_48BC40
0x48BC18: mov     eax, [edi]
0x48BC1A: test    eax, eax
0x48BC1C: jz      short loc_48BC38
0x48BC1E: mov     esi, [eax]
0x48BC20: test    esi, esi
0x48BC22: jz      short loc_48BC38
0x48BC24: mov     ecx, esi
0x48BC26: call    ExtraDataList_GetOwner
0x48BC2B: test    eax, eax
0x48BC2D: jz      short loc_48BC38
0x48BC2F: mov     ecx, esi
0x48BC31: call    ExtraDataList_GetOwner
0x48BC36: jmp     short loc_48BC3A
0x48BC38: xor     eax, eax
0x48BC3A: cmp     eax, [esp+28h+arg_0]
0x48BC3E: jnz     short loc_48BC91
0x48BC40: cmp     dword ptr [edi+4], 0
0x48BC44: jz      short loc_48BC91
0x48BC46: mov     edx, [esp+28h+var_10]
0x48BC4A: mov     ecx, [edx+4]; this
0x48BC4D: test    ecx, ecx
0x48BC4F: jz      short loc_48BC58
0x48BC51: call    TESObjectREFR_GetContainer
0x48BC56: jmp     short loc_48BC5A
0x48BC58: xor     eax, eax
0x48BC5A: push    ebp; a2
0x48BC5B: mov     ecx, eax; this
0x48BC5D: call    TESContainer_HasForm
0x48BC62: test    al, al
0x48BC64: jnz     short loc_48BC91
0x48BC66: mov     ecx, [esp+28h+arg_0]
0x48BC6A: push    ebp
0x48BC6B: call    TESActorBase_GetEquippableItemRating
0x48BC70: fstp    [esp+28h+arg_4]
0x48BC74: fld     [esp+28h+arg_4]
0x48BC78: fld     [esp+28h+var_18]
0x48BC7C: fcomp   st(1)
0x48BC7E: fnstsw  ax
0x48BC80: test    ah, 5
0x48BC83: jp      short loc_48BC8F
0x48BC85: fstp    [esp+28h+var_18]
0x48BC89: mov     dword ptr [esp+28h+var_8], ebp
0x48BC8D: jmp     short loc_48BC91
0x48BC8F: fstp    st
0x48BC91: mov     ebx, [ebx+4]
0x48BC94: test    ebx, ebx
0x48BC96: jnz     loc_48BBA0
0x48BC9C: mov     esi, dword ptr [esp+28h+var_8]
0x48BCA0: test    esi, esi
0x48BCA2: jz      short loc_48BCD3
0x48BCA4: mov     ebx, [esp+28h+var_14]
0x48BCA8: cmp     esi, ebx
0x48BCAA: jz      short loc_48BCD3
0x48BCAC: mov     edi, [esp+28h+arg_0]
0x48BCB0: push    esi
0x48BCB1: mov     ecx, edi
0x48BCB3: call    TESActorBase_GetEquippableItemRating
0x48BCB8: fstp    [esp+28h+var_8]
0x48BCBC: push    ebx
0x48BCBD: mov     ecx, edi
0x48BCBF: call    TESActorBase_GetEquippableItemRating
0x48BCC4: fcomp   [esp+28h+var_8]
0x48BCC8: fnstsw  ax
0x48BCCA: test    ah, 5
0x48BCCD: jp      short loc_48BCD3
0x48BCCF: mov     [esp+28h+var_14], esi
0x48BCD3: mov     ebx, [esp+28h+var_14]
0x48BCD7: mov     ebp, [esp+28h+var_10]
0x48BCDB: push    0
0x48BCDD: push    1
0x48BCDF: push    ebx
0x48BCE0: mov     ecx, ebp
0x48BCE2: call    ContainerExtraData_GetEntryForForm
0x48BCE7: xor     esi, esi
0x48BCE9: test    ebx, ebx
0x48BCEB: mov     edi, eax
0x48BCED: jz      short loc_48BD0D
0x48BCEF: push    0Ch; Size
0x48BCF1: call    FormHeapAlloc
0x48BCF6: xor     ecx, ecx
0x48BCF8: add     esp, 4
0x48BCFB: cmp     eax, ecx
0x48BCFD: jz      short loc_48BD09
0x48BCFF: mov     [eax+8], ecx
0x48BD02: mov     [eax], ecx
0x48BD04: mov     [eax+4], ecx
0x48BD07: jmp     short loc_48BD0B
0x48BD09: xor     eax, eax
0x48BD0B: mov     esi, eax
0x48BD0D: test    edi, edi
0x48BD0F: jz      short loc_48BD61
0x48BD11: mov     eax, [edi+8]
0x48BD14: mov     [esi+8], eax
0x48BD17: mov     eax, [edi]
0x48BD19: test    eax, eax
0x48BD1B: jz      short loc_48BD89
0x48BD1D: cmp     dword ptr [eax], 0
0x48BD20: jz      short loc_48BD89
0x48BD22: push    8; Size
0x48BD24: call    FormHeapAlloc
0x48BD29: add     esp, 4
0x48BD2C: test    eax, eax
0x48BD2E: jz      short loc_48BD3F
0x48BD30: mov     dword ptr [eax], 0
0x48BD36: mov     dword ptr [eax+4], 0
0x48BD3D: jmp     short loc_48BD41
0x48BD3F: xor     eax, eax
0x48BD41: mov     [esi], eax
0x48BD43: mov     ecx, [edi]
0x48BD45: mov     edx, [ecx]
0x48BD47: push    edx
0x48BD48: mov     ecx, eax
0x48BD4A: call    BSSimpleList_PushFront
0x48BD4F: mov     eax, [edi+4]
0x48BD52: pop     ebp
0x48BD53: mov     [esi+4], eax
0x48BD56: pop     edi
0x48BD57: mov     eax, esi
0x48BD59: pop     esi
0x48BD5A: pop     ebx
0x48BD5B: add     esp, 18h
0x48BD5E: retn    8
0x48BD61: test    ebx, ebx
0x48BD63: jz      short loc_48BD89
0x48BD65: mov     [esi+8], ebx
0x48BD68: mov     ecx, [ebp+4]; this
0x48BD6B: test    ecx, ecx
0x48BD6D: jz      short loc_48BD76
0x48BD6F: call    TESObjectREFR_GetContainer
0x48BD74: jmp     short loc_48BD78
0x48BD76: xor     eax, eax
0x48BD78: push    ebx
0x48BD79: mov     ecx, eax
0x48BD7B: call    TESContainer_GetFormCount
0x48BD80: test    eax, eax
0x48BD82: jge     short loc_48BD86
0x48BD84: neg     eax
0x48BD86: mov     [esi+4], eax
0x48BD89: pop     ebp
0x48BD8A: pop     edi
0x48BD8B: mov     eax, esi
0x48BD8D: pop     esi
0x48BD8E: pop     ebx
0x48BD8F: add     esp, 18h
0x48BD92: retn    8
