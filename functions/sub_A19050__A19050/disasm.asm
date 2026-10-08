0xA19050: push    offset bUseBlurShader; [Verified] Removes bUseBlurShader from the setting list and frees its owned name string when marked heap-owned.
0xA19055: mov     ecx, offset dword_B07CFC
0xA1905A: call    BSSimpleList_Remove
0xA1905F: mov     eax, bUseBlurShaderSettingName
0xA19064: test    eax, eax
0xA19066: jz      short locret_A19074
0xA19068: cmp     byte ptr [eax], 53h ; 'S'
0xA1906B: jnz     short locret_A19074
0xA1906D: push    eax
0xA1906E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA19073: pop     ecx
0xA19074: retn
