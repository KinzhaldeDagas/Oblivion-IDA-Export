0xA196E0: push    offset OB_INI_fTreeDimmer_BlurShaderHDR_010201A0
0xA196E5: mov     ecx, offset dword_B07CFC
0xA196EA: call    BSSimpleList_Remove
0xA196EF: mov     eax, off_B06E50; "fTreeDimmer:BlurShaderHDR"
0xA196F4: test    eax, eax
0xA196F6: jz      short locret_A19704
0xA196F8: cmp     byte ptr [eax], 53h ; 'S'
0xA196FB: jnz     short locret_A19704
0xA196FD: push    eax
0xA196FE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA19703: pop     ecx
0xA19704: retn
