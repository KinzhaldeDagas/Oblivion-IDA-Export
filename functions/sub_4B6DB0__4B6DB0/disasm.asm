0x4B6DB0: push    ecx
0x4B6DB1: push    edi
0x4B6DB2: mov     edi, ecx
0x4B6DB4: mov     eax, [edi+8]
0x4B6DB7: shr     eax, 3
0x4B6DBA: test    al, 1
0x4B6DBC: jnz     loc_4B6E90
0x4B6DC2: push    ebx
0x4B6DC3: push    esi
0x4B6DC4: push    edi
0x4B6DC5: lea     ecx, [edi+48h]
0x4B6DC8: call    TESScriptableForm_Link
0x4B6DCD: lea     esi, [edi+68h]
0x4B6DD0: xor     ebx, ebx
0x4B6DD2: test    esi, esi
0x4B6DD4: jz      loc_4B6E85
0x4B6DDA: lea     ebx, [ebx+0]
0x4B6DE0: cmp     dword ptr [esi+4], 0
0x4B6DE4: jnz     short loc_4B6DEF
0x4B6DE6: cmp     dword ptr [esi], 0
0x4B6DE9: jz      loc_4B6E85
0x4B6DEF: mov     ecx, [esi]
0x4B6DF1: mov     dword ptr [esp+10h+ArgList], ecx
0x4B6DF5: push    0FFFFFFFFh; a2
0x4B6DF7: mov     ecx, edi; this
0x4B6DF9: call    TESForm_GetOverrideFile
0x4B6DFE: push    eax; a2
0x4B6DFF: lea     edx, [esp+14h+ArgList]
0x4B6E03: push    edx; a1
0x4B6E04: call    TESForm_ResolveFormID
0x4B6E09: mov     eax, dword ptr [esp+18h+ArgList]
0x4B6E0D: push    eax; a1
0x4B6E0E: call    TESForm_LookupByFormID
0x4B6E13: add     esp, 0Ch
0x4B6E16: test    eax, eax
0x4B6E18: jz      short loc_4B6E23
0x4B6E1A: mov     [esi], eax
0x4B6E1C: mov     ebx, esi
0x4B6E1E: mov     esi, [esi+4]
0x4B6E21: jmp     short loc_4B6E7D
0x4B6E23: mov     eax, [edi+0Ch]
0x4B6E26: mov     edx, [edi]
0x4B6E28: push    eax
0x4B6E29: mov     eax, [edx+0D4h]
0x4B6E2F: mov     ecx, edi
0x4B6E31: call    eax
0x4B6E33: mov     ecx, dword ptr [esp+14h+ArgList]
0x4B6E37: push    eax
0x4B6E38: push    ecx; ArgList
0x4B6E39: push    offset aCouldNotFindRa; "Could not find RandomTeleport (%08X) fo"...
0x4B6E3E: call    PrintError
0x4B6E43: add     esp, 10h
0x4B6E46: test    ebx, ebx
0x4B6E48: jz      short loc_4B6E5B
0x4B6E4A: mov     edx, dword ptr [esp+10h+ArgList]
0x4B6E4E: push    edx
0x4B6E4F: mov     ecx, ebx
0x4B6E51: call    BSSimpleList_Remove
0x4B6E56: mov     esi, [ebx+4]
0x4B6E59: jmp     short loc_4B6E7D
0x4B6E5B: mov     eax, [esi+4]
0x4B6E5E: test    eax, eax
0x4B6E60: jz      short loc_4B6E77
0x4B6E62: mov     ecx, [eax+4]
0x4B6E65: mov     [esi+4], ecx
0x4B6E68: mov     edx, [eax]
0x4B6E6A: push    eax
0x4B6E6B: mov     [esi], edx
0x4B6E6D: call    FormHeapFree
0x4B6E72: add     esp, 4
0x4B6E75: jmp     short loc_4B6E7D
0x4B6E77: mov     dword ptr [esi], 0
0x4B6E7D: test    esi, esi
0x4B6E7F: jnz     loc_4B6DE0
0x4B6E85: push    1; a2
0x4B6E87: mov     ecx, edi; this
0x4B6E89: call    TESForm_SetIsLinked
0x4B6E8E: pop     esi
0x4B6E8F: pop     ebx
0x4B6E90: pop     edi
0x4B6E91: pop     ecx
0x4B6E92: retn
