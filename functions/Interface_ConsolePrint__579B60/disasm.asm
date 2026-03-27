0x579B60: push    1; arg1
0x579B62: push    0; canCreate
0x579B64: call    InterfaceManager_GetSingleton
0x579B69: add     esp, 8
0x579B6C: test    eax, eax
0x579B6E: jz      short locret_579BB6
0x579B70: push    1; arg1
0x579B72: push    0; canCreate
0x579B74: call    InterfaceManager_GetSingleton
0x579B79: add     esp, 8
0x579B7C: cmp     dword ptr [eax+1Ch], 0
0x579B80: jz      short locret_579BB6
0x579B82: push    1
0x579B84: call    GetGlobalScriptStateObj??
0x579B89: add     esp, 4
0x579B8C: cmp     byte ptr [eax+31h], 0
0x579B90: jg      short loc_579B9B
0x579B92: cmp     byte ptr ds:0B3B908h, 0
0x579B99: jz      short locret_579BB6
0x579B9B: mov     ecx, [esp+Format]
0x579B9F: lea     eax, [esp+ArgList]
0x579BA3: push    eax; ArgList
0x579BA4: push    ecx; Format
0x579BA5: push    1
0x579BA7: call    GetGlobalScriptStateObj??
0x579BAC: add     esp, 4
0x579BAF: mov     ecx, eax; this
0x579BB1: call    Console_FormatPrint
0x579BB6: retn
