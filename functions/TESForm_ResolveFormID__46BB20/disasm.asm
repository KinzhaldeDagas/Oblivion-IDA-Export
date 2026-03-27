0x46BB20: mov     ecx, ds:0B33B00h
0x46BB26: mov     eax, [ecx+18h]
0x46BB29: shr     eax, 11h
0x46BB2C: test    al, 1
0x46BB2E: push    esi
0x46BB2F: jz      short loc_46BB41
0x46BB31: mov     esi, [esp+4+arg_0]
0x46BB35: mov     edx, [esi]
0x46BB37: push    edx
0x46BB38: call    SaveLoad_ResolveFormID
0x46BB3D: mov     [esi], eax
0x46BB3F: pop     esi
0x46BB40: retn
0x46BB41: push    edi
0x46BB42: mov     edi, [esp+8+arg_0]
0x46BB46: mov     eax, [edi]
0x46BB48: test    eax, eax
0x46BB4A: jz      short loc_46BB53
0x46BB4C: cmp     eax, 7FFh
0x46BB51: jbe     short loc_46BBA1
0x46BB53: mov     esi, [esp+8+arg_4]
0x46BB57: test    esi, esi
0x46BB59: jz      short loc_46BBA1
0x46BB5B: shr     eax, 18h
0x46BB5E: add     eax, 1
0x46BB61: push    eax
0x46BB62: mov     ecx, esi
0x46BB64: call    TESFile_GetMasterByIndex
0x46BB69: test    eax, eax
0x46BB6B: jz      short loc_46BB89
0x46BB6D: mov     ecx, eax
0x46BB6F: call    TESFile_GetFileIndex
0x46BB74: mov     ecx, [edi]
0x46BB76: movzx   eax, al
0x46BB79: shl     eax, 18h
0x46BB7C: and     ecx, 0FFFFFFh
0x46BB82: or      eax, ecx
0x46BB84: mov     [edi], eax
0x46BB86: pop     edi
0x46BB87: pop     esi
0x46BB88: retn
0x46BB89: mov     ecx, esi
0x46BB8B: call    TESFile_GetFileIndex
0x46BB90: movzx   edx, al
0x46BB93: mov     eax, [edi]
0x46BB95: shl     edx, 18h
0x46BB98: and     eax, 0FFFFFFh
0x46BB9D: or      edx, eax
0x46BB9F: mov     [edi], edx
0x46BBA1: pop     edi
0x46BBA2: pop     esi
0x46BBA3: retn
