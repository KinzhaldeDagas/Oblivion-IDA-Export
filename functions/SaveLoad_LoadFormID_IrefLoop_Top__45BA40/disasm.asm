0x45BA40: mov     edi, [ebx+esi*4]
0x45BA43: mov     ecx, ds:0B33A98h
0x45BA49: push    edi; _DWORD
0x45BA4A: call    TESDataHandler_IsFormIDCreated?
0x45BA4F: test    al, al
0x45BA51: jnz     short SaveLoad_LoadFormID___IrefLoop_CheckFormID
0x45BA53: mov     eax, [ebp+74h]
0x45BA56: cmp     edi, [eax+0Ch]
0x45BA59: jbe     short SaveLoad_LoadFormID___IrefLoop_IrefToFormID
0x45BA5B: xor     edi, edi
0x45BA5D: jmp     short SaveLoad_LoadFormID___IrefLoop_CheckFormID
