0x45BA00: push    ecx; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x45BA01: push    ebx
0x45BA02: mov     ebx, [esp+8+Dst]
0x45BA06: push    ebp
0x45BA07: push    edi
0x45BA08: mov     edi, [esp+10h+Size]
0x45BA0C: mov     ebp, ecx
0x45BA0E: mov     eax, [ebp+14h]
0x45BA11: push    edi; byteCount
0x45BA12: push    eax; source
0x45BA13: push    ebx; destination
0x45BA14: mov     [esp+1Ch+var_1], 0
0x45BA19: call    _memcpy; EngineIssues review: SaveLoad_LoadFormID copies from save cursor before form-ID translation without an active record-buffer bounds check.
0x45BA1E: add     esp, 0Ch
0x45BA21: cmp     byte ptr [ebp+7Dh], 0
0x45BA25: jz      short SaveLoad_LoadFormID___AdvanceBuffer
0x45BA27: mov     eax, edi
0x45BA29: shr     eax, 2
0x45BA2C: push    esi
0x45BA2D: mov     [esp+14h+Dst], eax
0x45BA31: mov     esi, 0
0x45BA36: jz      short SaveLoad_LoadFormID___AdvanceBuffer_
0x45BA38: jmp     short SaveLoad_LoadFormID___IrefLoop_Top
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
0x45BA5F: mov     ecx, [eax+4]
0x45BA62: mov     edi, [ecx+edi*4]
0x45BA65: cmp     dword ptr [ebx+esi*4], 0
0x45BA69: jz      short SaveLoad_LoadFormID___IrefLoop_Next
0x45BA6B: test    edi, edi
0x45BA6D: jnz     short SaveLoad_LoadFormID___IrefLoop_Next
0x45BA6F: mov     [esp+14h+var_1], 1
0x45BA74: mov     [ebx+esi*4], edi
0x45BA77: add     esi, 1
0x45BA7A: cmp     esi, [esp+14h+Dst]
0x45BA7E: jb      short SaveLoad_LoadFormID___IrefLoop_Top
0x45BA80: mov     edx, [esp+14h+Size]
0x45BA84: add     [ebp+14h], edx
0x45BA87: mov     al, [esp+14h+var_1]
0x45BA8B: pop     esi
0x45BA8C: pop     edi
0x45BA8D: pop     ebp
0x45BA8E: pop     ebx
0x45BA8F: pop     ecx
0x45BA90: retn    8
0x45BA93: add     [ebp+14h], edi
0x45BA96: mov     al, [esp+14h+var_1]
0x45BA9A: pop     esi
0x45BA9B: pop     edi
0x45BA9C: pop     ebp
0x45BA9D: pop     ebx
0x45BA9E: pop     ecx
0x45BA9F: retn    8
0x45BAA2: add     [ebp+14h], edi
0x45BAA5: mov     al, [esp+10h+var_1]
0x45BAA9: pop     edi
0x45BAAA: pop     ebp
0x45BAAB: pop     ebx
0x45BAAC: pop     ecx
0x45BAAD: retn    8
