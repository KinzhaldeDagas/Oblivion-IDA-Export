0x4A59E0: push    ecx
0x4A59E1: push    ebx
0x4A59E2: push    ebp
0x4A59E3: mov     ebp, ecx
0x4A59E5: mov     dword ptr [ebp+0], offset ??_7TESRegionGrassObject@@6B@; const TESRegionGrassObject::`vftable'
0x4A59EC: mov     eax, ds:0B33A98h
0x4A59F1: test    eax, eax
0x4A59F3: push    esi
0x4A59F4: push    edi; ArgList
0x4A59F5: jz      short loc_4A5A69
0x4A59F7: mov     ecx, [eax+0CD8h]
0x4A59FD: test    ecx, ecx
0x4A59FF: jz      short loc_4A5A69
0x4A5A01: mov     eax, [ecx]
0x4A5A03: mov     edx, [eax]
0x4A5A05: call    edx
0x4A5A07: test    eax, eax
0x4A5A09: jz      short loc_4A5A69
0x4A5A0B: mov     eax, ds:0B33A98h
0x4A5A10: mov     ecx, [eax+0CD8h]
0x4A5A16: mov     edx, [ecx]
0x4A5A18: mov     eax, [edx]
0x4A5A1A: call    eax
0x4A5A1C: mov     ebx, [esp+14h+arg_0]
0x4A5A20: mov     ecx, [ebx]
0x4A5A22: mov     [esp+14h+a1], ecx
0x4A5A26: push    0FFFFFFFFh; a2
0x4A5A28: mov     ecx, eax; this
0x4A5A2A: call    TESForm_GetOverrideFile
0x4A5A2F: mov     esi, eax
0x4A5A31: lea     edx, [esp+14h+a1]
0x4A5A35: push    esi; a2
0x4A5A36: push    edx; a1
0x4A5A37: call    TESForm_ResolveFormID
0x4A5A3C: mov     eax, [esp+1Ch+a1]
0x4A5A40: push    eax; a1
0x4A5A41: call    TESForm_LookupByFormID
0x4A5A46: mov     ecx, [ebx+4]
0x4A5A49: lea     edx, [esp+20h+a1]
0x4A5A4D: push    esi; a2
0x4A5A4E: push    edx; a1
0x4A5A4F: mov     edi, eax
0x4A5A51: mov     [esp+28h+a1], ecx
0x4A5A55: call    TESForm_ResolveFormID
0x4A5A5A: mov     eax, [esp+28h+a1]
0x4A5A5E: push    eax; a1
0x4A5A5F: call    TESForm_LookupByFormID
0x4A5A64: add     esp, 18h
0x4A5A67: jmp     short loc_4A5A83
0x4A5A69: mov     esi, [esp+14h+arg_0]
0x4A5A6D: mov     ecx, [esi]
0x4A5A6F: push    ecx; a1
0x4A5A70: call    TESForm_LookupByFormID
0x4A5A75: mov     edx, [esi+4]
0x4A5A78: push    edx; a1
0x4A5A79: mov     edi, eax
0x4A5A7B: call    TESForm_LookupByFormID
0x4A5A80: add     esp, 8
0x4A5A83: test    edi, edi
0x4A5A85: mov     ebx, eax
0x4A5A87: mov     dword ptr [ebp+4], 0
0x4A5A8E: jz      loc_4A5B2E
0x4A5A94: cmp     byte ptr [edi+4], 1Dh
0x4A5A98: jnz     short loc_4A5AA2
0x4A5A9A: mov     [ebp+4], edi
0x4A5A9D: jmp     loc_4A5BBA
0x4A5AA2: mov     eax, ds:0B33A98h
0x4A5AA7: mov     ecx, [eax+0CD8h]
0x4A5AAD: mov     edx, [ecx]
0x4A5AAF: mov     eax, [edx]
0x4A5AB1: call    eax
0x4A5AB3: test    eax, eax
0x4A5AB5: jz      short loc_4A5B24
0x4A5AB7: mov     ecx, ds:0B33A98h
0x4A5ABD: mov     ecx, [ecx+0CD8h]
0x4A5AC3: mov     edx, [ecx]
0x4A5AC5: mov     eax, [edx]
0x4A5AC7: call    eax
0x4A5AC9: mov     ecx, eax
0x4A5ACB: call    TESForm__GetEditorNameLen
0x4A5AD0: test    eax, eax
0x4A5AD2: jz      short loc_4A5AF6
0x4A5AD4: mov     ecx, ds:0B33A98h
0x4A5ADA: mov     ecx, [ecx+0CD8h]
0x4A5AE0: mov     edx, [ecx]
0x4A5AE2: mov     eax, [edx]
0x4A5AE4: call    eax
0x4A5AE6: mov     edx, [eax]
0x4A5AE8: mov     ecx, eax
0x4A5AEA: mov     eax, [edx+0D4h]
0x4A5AF0: call    eax
0x4A5AF2: mov     esi, eax
0x4A5AF4: jmp     short loc_4A5AFB
0x4A5AF6: mov     esi, offset EmptyString
0x4A5AFB: mov     ecx, ds:0B33A98h
0x4A5B01: mov     ecx, [ecx+0CD8h]
0x4A5B07: mov     edx, [ecx]
0x4A5B09: mov     eax, [edx]
0x4A5B0B: call    eax
0x4A5B0D: mov     ecx, [eax+0Ch]
0x4A5B10: push    ecx
0x4A5B11: push    esi; ArgList
0x4A5B12: push    offset aInstantiatingA; "Instantiating a Grass region object for"...
0x4A5B17: call    PrintError
0x4A5B1C: add     esp, 0Ch
0x4A5B1F: jmp     loc_4A5BBA
0x4A5B24: push    offset aInstantiatin_0; "Instantiating a Grass region object wit"...
0x4A5B29: jmp     loc_4A5BB2
0x4A5B2E: mov     edx, ds:0B33A98h
0x4A5B34: mov     ecx, [edx+0CD8h]
0x4A5B3A: mov     eax, [ecx]
0x4A5B3C: mov     edx, [eax]
0x4A5B3E: call    edx
0x4A5B40: test    eax, eax
0x4A5B42: jz      short loc_4A5BAD
0x4A5B44: mov     eax, ds:0B33A98h
0x4A5B49: mov     ecx, [eax+0CD8h]
0x4A5B4F: mov     edx, [ecx]
0x4A5B51: mov     eax, [edx]
0x4A5B53: call    eax
0x4A5B55: mov     ecx, eax
0x4A5B57: call    TESForm__GetEditorNameLen
0x4A5B5C: test    eax, eax
0x4A5B5E: jz      short loc_4A5B82
0x4A5B60: mov     ecx, ds:0B33A98h
0x4A5B66: mov     ecx, [ecx+0CD8h]
0x4A5B6C: mov     edx, [ecx]
0x4A5B6E: mov     eax, [edx]
0x4A5B70: call    eax
0x4A5B72: mov     edx, [eax]
0x4A5B74: mov     ecx, eax
0x4A5B76: mov     eax, [edx+0D4h]
0x4A5B7C: call    eax
0x4A5B7E: mov     esi, eax
0x4A5B80: jmp     short loc_4A5B87
0x4A5B82: mov     esi, offset EmptyString
0x4A5B87: mov     ecx, ds:0B33A98h
0x4A5B8D: mov     ecx, [ecx+0CD8h]
0x4A5B93: mov     edx, [ecx]
0x4A5B95: mov     eax, [edx]
0x4A5B97: call    eax
0x4A5B99: mov     ecx, [eax+0Ch]
0x4A5B9C: push    ecx
0x4A5B9D: push    esi; ArgList
0x4A5B9E: push    offset aInstantiatin_1; "Instantiating a Grass region object for"...
0x4A5BA3: call    PrintError
0x4A5BA8: add     esp, 0Ch
0x4A5BAB: jmp     short loc_4A5BBA
0x4A5BAD: push    offset aInstantiatin_2; "Instantiating a Grass region object wit"...
0x4A5BB2: call    PrintError
0x4A5BB7: add     esp, 4
0x4A5BBA: cmp     dword ptr [ebp+4], 0
0x4A5BBE: mov     dword ptr [ebp+8], 0
0x4A5BC5: jz      short loc_4A5BEB
0x4A5BC7: test    ebx, ebx
0x4A5BC9: jz      short loc_4A5BEB
0x4A5BCB: cmp     byte ptr [ebx+4], 0Eh
0x4A5BCF: jnz     short loc_4A5BDE
0x4A5BD1: pop     edi
0x4A5BD2: pop     esi
0x4A5BD3: mov     [ebp+8], ebx
0x4A5BD6: mov     eax, ebp
0x4A5BD8: pop     ebp
0x4A5BD9: pop     ebx
0x4A5BDA: pop     ecx
0x4A5BDB: retn    4
0x4A5BDE: push    offset aInstantiatin_3; "Instantiating a Grass region object wit"...
0x4A5BE3: call    PrintError
0x4A5BE8: add     esp, 4
0x4A5BEB: pop     edi
0x4A5BEC: pop     esi
0x4A5BED: mov     eax, ebp
0x4A5BEF: pop     ebp
0x4A5BF0: pop     ebx
0x4A5BF1: pop     ecx
0x4A5BF2: retn    4
