0x416100: push    ebp
0x416101: mov     ebp, esp
0x416103: sub     esp, 0Ch
0x416106: mov     eax, ___security_cookie
0x41610B: xor     eax, ebp
0x41610D: mov     [ebp+var_4], eax
0x416110: push    ebx
0x416111: push    esi
0x416112: push    edi
0x416113: mov     edi, [ebp+arg_0]
0x416116: mov     ebx, ecx
0x416118: mov     ecx, edi
0x41611A: call    TESFile_GetRecordType
0x41611F: cmp     eax, 0Ch
0x416122: jz      short EffectSetting_LoadForm___LoadFirstChunk
0x416124: xor     al, al
0x416126: jmp     EffectSetting_LoadForm___Done
