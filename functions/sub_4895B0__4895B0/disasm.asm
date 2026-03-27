0x4895B0: push    ecx
0x4895B1: mov     eax, [ecx]
0x4895B3: test    eax, eax
0x4895B5: mov     [esp+4+var_4], ecx
0x4895B8: mov     dl, 1
0x4895BA: jz      loc_48969E
0x4895C0: push    esi
0x4895C1: mov     esi, [esp+8+arg_0]
0x4895C5: test    dl, dl
0x4895C7: jz      short loc_4895E4
0x4895C9: mov     ecx, [eax]
0x4895CB: test    ecx, ecx
0x4895CD: jz      short loc_4895D8
0x4895CF: cmp     [ecx+8], esi
0x4895D2: jnz     short loc_4895D8
0x4895D4: xor     dl, dl
0x4895D6: jmp     short loc_4895DB
0x4895D8: mov     eax, [eax+4]
0x4895DB: test    eax, eax
0x4895DD: jnz     short loc_4895C5
0x4895DF: pop     esi
0x4895E0: pop     ecx
0x4895E1: retn    8
0x4895E4: test    eax, eax
0x4895E6: jz      loc_48969D
0x4895EC: push    edi
0x4895ED: mov     edi, [eax]
0x4895EF: test    edi, edi
0x4895F1: jz      loc_48969C
0x4895F7: push    ebx
0x4895F8: mov     ebx, [edi]
0x4895FA: test    ebx, ebx
0x4895FC: jz      short loc_48964B
0x4895FE: push    ebp
0x4895FF: mov     ebp, [esp+14h+arg_4]
0x489603: mov     esi, [ebx]
0x489605: mov     ecx, esi
0x489607: call    sub_422C40
0x48960C: movsx   eax, al
0x48960F: cmp     eax, ebp
0x489611: jnz     short loc_489639
0x489613: mov     ecx, esi
0x489615: call    sub_422C60
0x48961A: cmp     dword ptr [esi+4], 0
0x48961E: jz      short loc_489642
0x489620: mov     ecx, esi
0x489622: call    ExtraDataList_GetExtraCount
0x489627: cmp     ax, 1
0x48962B: jle     short loc_489639
0x48962D: mov     ecx, esi
0x48962F: call    BaseExtraList_Count
0x489634: cmp     eax, 1
0x489637: jz      short loc_489642
0x489639: mov     ebx, [ebx+4]
0x48963C: test    ebx, ebx
0x48963E: jnz     short loc_489603
0x489640: jmp     short loc_48964A
0x489642: mov     ecx, [edi]
0x489644: push    esi
0x489645: call    BSSimpleList_Remove
0x48964A: pop     ebp
0x48964B: mov     eax, [edi]
0x48964D: cmp     dword ptr [eax+4], 0
0x489651: pop     ebx
0x489652: jnz     short loc_48969C
0x489654: cmp     dword ptr [eax], 0
0x489657: jnz     short loc_48969C
0x489659: push    eax
0x48965A: call    FormHeapFree
0x48965F: add     esp, 4
0x489662: cmp     dword ptr [edi+4], 0
0x489666: mov     dword ptr [edi], 0
0x48966C: jnz     short loc_48969C
0x48966E: mov     ecx, [esp+0Ch+var_4]
0x489672: mov     ecx, [ecx]
0x489674: push    edi
0x489675: call    BSSimpleList_Remove
0x48967A: mov     ecx, [edi]
0x48967C: test    ecx, ecx
0x48967E: jz      short loc_489685
0x489680: call    BSSimpleList_Clear
0x489685: mov     edx, [edi]
0x489687: push    edx
0x489688: call    FormHeapFree
0x48968D: push    edi
0x48968E: mov     dword ptr [edi], 0
0x489694: call    FormHeapFree
0x489699: add     esp, 8
0x48969C: pop     edi
0x48969D: pop     esi
0x48969E: pop     ecx
0x48969F: retn    8
