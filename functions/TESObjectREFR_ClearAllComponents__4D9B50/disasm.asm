0x4D9B50: push    ebx
0x4D9B51: push    ebp
0x4D9B52: mov     ebp, ecx
0x4D9B54: push    esi
0x4D9B55: lea     esi, [ebp+44h]
0x4D9B58: push    edi
0x4D9B59: mov     ecx, esi
0x4D9B5B: call    sub_41E650
0x4D9B60: mov     edi, eax
0x4D9B62: test    edi, edi
0x4D9B64: jz      short loc_4D9BAD
0x4D9B66: mov     eax, [edi]
0x4D9B68: test    eax, eax
0x4D9B6A: jz      short loc_4D9BA6
0x4D9B6C: push    eax
0x4D9B6D: push    0
0x4D9B6F: call    GetShadowSceneNode
0x4D9B74: add     esp, 4
0x4D9B77: mov     ecx, eax
0x4D9B79: call    sub_7C7DC0
0x4D9B7E: mov     ebx, [edi]
0x4D9B80: test    ebx, ebx
0x4D9B82: jz      short loc_4D9BA6
0x4D9B84: lea     eax, [ebx+4]
0x4D9B87: push    eax; lpAddend
0x4D9B88: call    dword ptr ds:0A2807Ch
0x4D9B8E: test    eax, eax
0x4D9B90: jnz     short loc_4D9BA0
0x4D9B92: test    ebx, ebx
0x4D9B94: jz      short loc_4D9BA0
0x4D9B96: mov     edx, [ebx]
0x4D9B98: mov     eax, [edx]
0x4D9B9A: push    1
0x4D9B9C: mov     ecx, ebx
0x4D9B9E: call    eax
0x4D9BA0: mov     dword ptr [edi], 0
0x4D9BA6: mov     ecx, esi
0x4D9BA8: call    sub_41F5B0
0x4D9BAD: mov     ecx, esi
0x4D9BAF: call    sub_41FF80
0x4D9BB4: mov     ecx, ds:0B33B00h
0x4D9BBA: mov     edx, [ecx+18h]
0x4D9BBD: shr     edx, 2
0x4D9BC0: xor     edi, edi
0x4D9BC2: test    dl, 1
0x4D9BC5: mov     ebx, eax
0x4D9BC7: jz      short loc_4D9BE2
0x4D9BC9: push    40h ; '@'; a2
0x4D9BCB: mov     ecx, esi; this
0x4D9BCD: call    BaseExtraList_GetExtraData
0x4D9BD2: mov     edi, eax
0x4D9BD4: test    edi, edi
0x4D9BD6: jz      short loc_4D9BE2
0x4D9BD8: push    0
0x4D9BDA: push    edi
0x4D9BDB: mov     ecx, esi
0x4D9BDD: call    BaseExtraList_RemoveExtraByPtr
0x4D9BE2: push    1
0x4D9BE4: mov     ecx, esi
0x4D9BE6: call    BaseExtraList_Clear
0x4D9BEB: test    edi, edi
0x4D9BED: jz      short loc_4D9BF7
0x4D9BEF: push    edi; BSExtraData *
0x4D9BF0: mov     ecx, esi; ExtraDataList *
0x4D9BF2: call    BaseExtraList_AddExtra
0x4D9BF7: test    ebx, ebx
0x4D9BF9: jz      short loc_4D9C03
0x4D9BFB: push    ebx
0x4D9BFC: mov     ecx, esi
0x4D9BFE: call    sub_4247B0
0x4D9C03: mov     eax, ds:0B33B00h
0x4D9C08: mov     ecx, [eax+18h]
0x4D9C0B: shr     ecx, 2
0x4D9C0E: test    cl, 1
0x4D9C11: jnz     short loc_4D9C22
0x4D9C13: mov     edx, [ebp+0]
0x4D9C16: mov     eax, [edx+150h]
0x4D9C1C: push    0
0x4D9C1E: mov     ecx, ebp
0x4D9C20: call    eax
0x4D9C22: pop     edi
0x4D9C23: pop     esi
0x4D9C24: mov     ecx, ebp
0x4D9C26: pop     ebp
0x4D9C27: pop     ebx
0x4D9C28: jmp     j_TESForm_ClearComponentReferences
