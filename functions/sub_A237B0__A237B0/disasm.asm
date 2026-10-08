0xA237B0: push    offset iCanopyShadowScale_SpeedTree; Verified INI setting cleanup removes iCanopyShadowScale from the setting list and frees a dynamically allocated name if applicable.
0xA237B5: mov     ecx, offset dword_B07CFC
0xA237BA: call    BSSimpleList_Remove
0xA237BF: mov     eax, iCanopyShadowScale_SpeedTree.name
0xA237C4: test    eax, eax
0xA237C6: jz      short locret_A237D4
0xA237C8: cmp     byte ptr [eax], 53h ; 'S'
0xA237CB: jnz     short locret_A237D4
0xA237CD: push    eax
0xA237CE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA237D3: pop     ecx
0xA237D4: retn
