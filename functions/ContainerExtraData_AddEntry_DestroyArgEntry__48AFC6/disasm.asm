0x48AFC6: cmp     [esp+arg_28], 0
0x48AFCB: jz      short loc_48AFED
0x48AFCD: mov     ecx, [ebx]
0x48AFCF: cmp     ecx, ebp
0x48AFD1: jz      short loc_48AFD8
0x48AFD3: call    BSSimpleList_Clear
0x48AFD8: mov     eax, [ebx]
0x48AFDA: push    eax
0x48AFDB: call    FormHeapFree
0x48AFE0: push    ebx
0x48AFE1: mov     [ebx], ebp
0x48AFE3: call    FormHeapFree
0x48AFE8: add     esp, 8
0x48AFEB: mov     ebx, ebp
0x48AFED: mov     ecx, [esp+arg_1C]
0x48AFF1: push    ebp
0x48AFF2: push    1
0x48AFF4: push    ecx
0x48AFF5: mov     ecx, edi
0x48AFF7: call    ContainerExtraData_GetEntryForForm
0x48AFFC: mov     esi, eax
0x48AFFE: cmp     esi, ebp
0x48B000: jz      short ContainerExtraData_AddEntry___Done_
0x48B002: mov     eax, [esi]
0x48B004: cmp     eax, ebp
0x48B006: jz      short loc_48B011
0x48B008: cmp     [eax+4], ebp
0x48B00B: jnz     short ContainerExtraData_AddEntry___Done_
0x48B00D: cmp     [eax], ebp
0x48B00F: jnz     short ContainerExtraData_AddEntry___Done_
0x48B011: cmp     [esi+4], ebp
0x48B014: jnz     short ContainerExtraData_AddEntry___Done_
0x48B016: mov     edx, [esp+0Ch+arg_4]
0x48B01A: mov     ecx, [edx]
0x48B01C: push    esi
0x48B01D: call    BSSimpleList_Remove
0x48B022: mov     ecx, [esi]
0x48B024: cmp     ecx, ebp
0x48B026: jz      short loc_48B02D
0x48B028: call    BSSimpleList_Clear
0x48B02D: mov     eax, [esi]
0x48B02F: push    eax
0x48B030: call    FormHeapFree
0x48B035: push    esi
0x48B036: mov     [esi], ebp
0x48B038: call    FormHeapFree
0x48B03D: add     esp, 8
0x48B040: cmp     ebx, ebp
0x48B042: jz      short ContainerExtraData_AddEntry___Done_
0x48B044: mov     ecx, [ebx]
0x48B046: cmp     ecx, ebp
0x48B048: jz      short loc_48B04F
0x48B04A: call    BSSimpleList_Clear
0x48B04F: mov     ecx, [ebx]
0x48B051: push    ecx
0x48B052: call    FormHeapFree
0x48B057: push    ebx
0x48B058: mov     [ebx], ebp
0x48B05A: call    FormHeapFree
0x48B05F: add     esp, 8
0x48B062: pop     esi
0x48B063: pop     edi
0x48B064: pop     ebp
0x48B065: pop     ebx
0x48B066: add     esp, 14h
0x48B069: retn    8
