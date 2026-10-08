0xA19470: push    offset bIsHDR; [Verified] Removes bIsHDR from the setting list and frees its owned name string when the string has heap-owned marker 0x53.
0xA19475: mov     ecx, offset dword_B07CFC
0xA1947A: call    BSSimpleList_Remove
0xA1947F: mov     eax, bIsHDRSettingName
0xA19484: test    eax, eax
0xA19486: jz      short locret_A19494
0xA19488: cmp     byte ptr [eax], 53h ; 'S'
0xA1948B: jnz     short locret_A19494
0xA1948D: push    eax
0xA1948E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA19493: pop     ecx
0xA19494: retn
