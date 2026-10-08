0xA19350: push    offset bForce1XShaders; [Verified] Removes bForce1XShaders from the setting list and frees its owned name string when the string has heap-owned marker 0x53.
0xA19355: mov     ecx, offset dword_B07CFC
0xA1935A: call    BSSimpleList_Remove
0xA1935F: mov     eax, bForce1XShadersSettingName
0xA19364: test    eax, eax
0xA19366: jz      short locret_A19374
0xA19368: cmp     byte ptr [eax], 53h ; 'S'
0xA1936B: jnz     short locret_A19374
0xA1936D: push    eax
0xA1936E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA19373: pop     ecx
0xA19374: retn
