0x4AFA80: sub     esp, 1Ch
0x4AFA83: push    ebx
0x4AFA84: mov     ebx, [esp+20h+arg_0]
0x4AFA88: push    ebp
0x4AFA89: xor     ebp, ebp
0x4AFA8B: add     ebx, 8
0x4AFA8E: cmp     ebx, ebp
0x4AFA90: mov     [esp+24h+var_C], ecx
0x4AFA94: mov     [esp+24h+var_8], ebp
0x4AFA98: mov     [esp+24h+var_4], ebp
0x4AFA9C: mov     [esp+24h+var_18], ebx
0x4AFAA0: mov     [esp+24h+var_14], ebp
0x4AFAA4: mov     [esp+24h+var_10], ebp
0x4AFAA8: mov     [esp+24h+arg_0], ebp
0x4AFAAC: mov     [esp+24h+var_1C], ebp
0x4AFAB0: jz      loc_4AFD6A
0x4AFAB6: push    esi
0x4AFAB7: push    edi
0x4AFAB8: cmp     dword ptr [ebx+4], 0
0x4AFABC: jnz     short loc_4AFAC7
0x4AFABE: cmp     dword ptr [ebx], 0
0x4AFAC1: jz      loc_4AFBA5
0x4AFAC7: mov     esi, [ebx]
0x4AFAC9: mov     eax, [esi+4]
0x4AFACC: push    0; int
0x4AFACE: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4AFAD3: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4AFAD8: push    0; int
0x4AFADA: push    eax; void *
0x4AFADB: call    OblivionDynamicCast
0x4AFAE0: mov     edi, eax
0x4AFAE2: add     esp, 14h
0x4AFAE5: test    edi, edi
0x4AFAE7: jz      loc_4AFB9A
0x4AFAED: mov     ecx, [esi]
0x4AFAEF: add     [esp+2Ch+var_14], 1
0x4AFAF4: add     [esp+2Ch+var_10], ecx
0x4AFAF8: push    0; int
0x4AFAFA: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4AFAFF: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x4AFB04: push    0; int
0x4AFB06: push    edi; void *
0x4AFB07: call    OblivionDynamicCast
0x4AFB0C: add     esp, 14h
0x4AFB0F: test    eax, eax
0x4AFB11: jnz     loc_4AFB9A
0x4AFB17: mov     edx, [edi+0ACh]
0x4AFB1D: mov     eax, [edx+14h]
0x4AFB20: lea     ecx, [edi+0ACh]
0x4AFB26: call    eax
0x4AFB28: mov     ecx, ds:0B33A1Ch
0x4AFB2E: push    eax
0x4AFB2F: call    ModelLoader_IsModelLoaded??
0x4AFB34: test    eax, eax
0x4AFB36: jz      short loc_4AFB9A
0x4AFB38: mov     ecx, [esi]
0x4AFB3A: add     [esp+2Ch+arg_0], 1
0x4AFB3F: add     [esp+2Ch+var_1C], ecx
0x4AFB43: push    8; Size
0x4AFB45: call    FormHeapAlloc
0x4AFB4A: add     esp, 4
0x4AFB4D: test    eax, eax
0x4AFB4F: jz      short loc_4AFB62
0x4AFB51: mov     dword ptr [eax], 1
0x4AFB57: mov     dword ptr [eax+4], 0
0x4AFB5E: mov     edi, eax
0x4AFB60: jmp     short loc_4AFB64
0x4AFB62: xor     edi, edi
0x4AFB64: test    ebp, ebp
0x4AFB66: mov     edx, [esi]
0x4AFB68: mov     [edi], edx
0x4AFB6A: mov     eax, [esi+4]
0x4AFB6D: mov     [edi+4], eax
0x4AFB70: jz      short loc_4AFB98
0x4AFB72: push    8; Size
0x4AFB74: call    FormHeapAlloc
0x4AFB79: add     esp, 4
0x4AFB7C: test    eax, eax
0x4AFB7E: jz      short loc_4AFB8B
0x4AFB80: mov     [eax], ebp
0x4AFB82: mov     dword ptr [eax+4], 0
0x4AFB89: jmp     short loc_4AFB8D
0x4AFB8B: xor     eax, eax
0x4AFB8D: mov     ecx, [esp+2Ch+var_4]
0x4AFB91: mov     [eax+4], ecx
0x4AFB94: mov     [esp+2Ch+var_4], eax
0x4AFB98: mov     ebp, edi
0x4AFB9A: mov     ebx, [ebx+4]
0x4AFB9D: test    ebx, ebx
0x4AFB9F: jnz     loc_4AFAB8
0x4AFBA5: cmp     [esp+2Ch+var_14], 0
0x4AFBAA: mov     [esp+2Ch+var_8], ebp
0x4AFBAE: jz      loc_4AFD48
0x4AFBB4: mov     ecx, [esp+2Ch+arg_0]
0x4AFBB8: test    ecx, ecx
0x4AFBBA: jnz     loc_4AFC93
0x4AFBC0: mov     ebx, [esp+2Ch+var_C]
0x4AFBC4: add     ebx, 28h ; '('
0x4AFBC7: jz      loc_4AFD48
0x4AFBCD: lea     ecx, [ecx+0]
0x4AFBD0: cmp     dword ptr [ebx+4], 0
0x4AFBD4: jnz     short loc_4AFBDF
0x4AFBD6: cmp     dword ptr [ebx], 0
0x4AFBD9: jz      loc_4AFC87
0x4AFBDF: mov     esi, [ebx]
0x4AFBE1: mov     edx, [esi+4]
0x4AFBE4: push    0; int
0x4AFBE6: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4AFBEB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AFBF0: push    0; int
0x4AFBF2: push    edx; void *
0x4AFBF3: call    OblivionDynamicCast
0x4AFBF8: mov     edi, eax
0x4AFBFA: add     esp, 14h
0x4AFBFD: test    edi, edi
0x4AFBFF: jz      short loc_4AFC7C
0x4AFC01: push    0; int
0x4AFC03: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x4AFC08: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x4AFC0D: push    0; int
0x4AFC0F: push    edi; void *
0x4AFC10: call    OblivionDynamicCast
0x4AFC15: add     esp, 14h
0x4AFC18: test    eax, eax
0x4AFC1A: jnz     short loc_4AFC7C
0x4AFC1C: mov     eax, [edi+0ACh]
0x4AFC22: mov     edx, [eax+14h]
0x4AFC25: lea     ecx, [edi+0ACh]
0x4AFC2B: call    edx
0x4AFC2D: mov     ecx, ds:0B33A1Ch
0x4AFC33: push    eax
0x4AFC34: call    ModelLoader_IsModelLoaded??
0x4AFC39: test    eax, eax
0x4AFC3B: jz      short loc_4AFC7C
0x4AFC3D: movzx   eax, word ptr [esi+8]
0x4AFC41: add     [esp+2Ch+arg_0], 1
0x4AFC46: add     [esp+2Ch+var_1C], eax
0x4AFC4A: push    8; Size
0x4AFC4C: call    FormHeapAlloc
0x4AFC51: add     esp, 4
0x4AFC54: test    eax, eax
0x4AFC56: jz      short loc_4AFC67
0x4AFC58: mov     dword ptr [eax], 1
0x4AFC5E: mov     dword ptr [eax+4], 0
0x4AFC65: jmp     short loc_4AFC69
0x4AFC67: xor     eax, eax
0x4AFC69: movzx   ecx, word ptr [esi+8]
0x4AFC6D: mov     [eax], ecx
0x4AFC6F: push    eax
0x4AFC70: lea     ecx, [esp+30h+var_8]
0x4AFC74: mov     [eax+4], edi
0x4AFC77: call    BSSimpleList_PushFront
0x4AFC7C: mov     ebx, [ebx+4]
0x4AFC7F: test    ebx, ebx
0x4AFC81: jnz     loc_4AFBD0
0x4AFC87: mov     ecx, [esp+2Ch+arg_0]
0x4AFC8B: test    ecx, ecx
0x4AFC8D: jz      loc_4AFD48
0x4AFC93: mov     eax, [esp+2Ch+var_1C]
0x4AFC97: sub     eax, [esp+2Ch+var_10]
0x4AFC9B: cdq
0x4AFC9C: idiv    ecx
0x4AFC9E: cmp     [esp+2Ch+var_18], 0
0x4AFCA3: mov     ebp, eax
0x4AFCA5: jz      short loc_4AFCFD
0x4AFCA7: jmp     short loc_4AFCB0
0x4AFCA9: align 10h
0x4AFCB0: mov     esi, [esp+2Ch+var_18]
0x4AFCB4: mov     ecx, esi
0x4AFCB6: call    BSSimpleList_IsEmpty
0x4AFCBB: test    al, al
0x4AFCBD: jnz     short loc_4AFCFD
0x4AFCBF: mov     esi, [esi]
0x4AFCC1: test    esi, esi
0x4AFCC3: jz      short loc_4AFCD5
0x4AFCC5: mov     ecx, esi; void *
0x4AFCC7: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x4AFCCC: push    esi
0x4AFCCD: call    FormHeapFree
0x4AFCD2: add     esp, 4
0x4AFCD5: mov     ecx, [esp+2Ch+var_18]
0x4AFCD9: mov     eax, [ecx+4]
0x4AFCDC: test    eax, eax
0x4AFCDE: jz      short loc_4AFCF5
0x4AFCE0: mov     edx, [eax+4]
0x4AFCE3: mov     [ecx+4], edx
0x4AFCE6: mov     edx, [eax]
0x4AFCE8: push    eax
0x4AFCE9: mov     [ecx], edx
0x4AFCEB: call    FormHeapFree
0x4AFCF0: add     esp, 4
0x4AFCF3: jmp     short loc_4AFCB0
0x4AFCF5: mov     dword ptr [ecx], 0
0x4AFCFB: jmp     short loc_4AFCB0
0x4AFCFD: lea     edi, [esp+2Ch+var_8]
0x4AFD01: cmp     dword ptr [edi+4], 0
0x4AFD05: jnz     short loc_4AFD0C
0x4AFD07: cmp     dword ptr [edi], 0
0x4AFD0A: jz      short loc_4AFD48
0x4AFD0C: mov     esi, [edi]
0x4AFD0E: mov     ebx, [esp+2Ch+var_18]
0x4AFD12: add     [esi], ebp
0x4AFD14: cmp     dword ptr [ebx], 0
0x4AFD17: jz      short loc_4AFD3F
0x4AFD19: push    8; Size
0x4AFD1B: call    FormHeapAlloc
0x4AFD20: add     esp, 4
0x4AFD23: test    eax, eax
0x4AFD25: jz      short loc_4AFD34
0x4AFD27: mov     ecx, [ebx]
0x4AFD29: mov     [eax], ecx
0x4AFD2B: mov     dword ptr [eax+4], 0
0x4AFD32: jmp     short loc_4AFD36
0x4AFD34: xor     eax, eax
0x4AFD36: mov     edx, [ebx+4]
0x4AFD39: mov     [eax+4], edx
0x4AFD3C: mov     [ebx+4], eax
0x4AFD3F: mov     [ebx], esi
0x4AFD41: mov     edi, [edi+4]
0x4AFD44: test    edi, edi
0x4AFD46: jnz     short loc_4AFD01
0x4AFD48: cmp     [esp+2Ch+var_4], 0
0x4AFD4D: jz      short loc_4AFD68
0x4AFD4F: nop
0x4AFD50: mov     eax, [esp+2Ch+var_4]
0x4AFD54: mov     esi, [eax+4]
0x4AFD57: push    eax
0x4AFD58: call    FormHeapFree
0x4AFD5D: add     esp, 4
0x4AFD60: test    esi, esi
0x4AFD62: mov     [esp+2Ch+var_4], esi
0x4AFD66: jnz     short loc_4AFD50
0x4AFD68: pop     edi
0x4AFD69: pop     esi
0x4AFD6A: pop     ebp
0x4AFD6B: pop     ebx
0x4AFD6C: add     esp, 1Ch
0x4AFD6F: retn    4
