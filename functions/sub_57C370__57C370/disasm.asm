0x57C370: push    0FFFFFFFFh
0x57C372: push    offset SEH_57C370
0x57C377: mov     eax, large fs:0
0x57C37D: push    eax
0x57C37E: mov     eax, ds:0B30AACh
0x57C383: xor     eax, esp
0x57C385: push    eax
0x57C386: lea     eax, [esp+10h+var_C]
0x57C38A: mov     large fs:0, eax
0x57C390: push    1; arg1
0x57C392: push    0; canCreate
0x57C394: mov     [esp+18h+var_4], 0
0x57C39C: call    InterfaceManager_GetSingleton
0x57C3A1: add     esp, 8
0x57C3A4: test    eax, eax
0x57C3A6: jz      short loc_57C3FC
0x57C3A8: push    1; arg1
0x57C3AA: push    0; canCreate
0x57C3AC: call    InterfaceManager_GetSingleton
0x57C3B1: add     esp, 8
0x57C3B4: cmp     dword ptr [eax+1Ch], 0
0x57C3B8: jz      short loc_57C3FC
0x57C3BA: push    0
0x57C3BC: call    GetGlobalScriptStateObj??
0x57C3C1: add     esp, 4
0x57C3C4: test    eax, eax
0x57C3C6: jz      short loc_57C3D8
0x57C3C8: push    1
0x57C3CA: call    GetGlobalScriptStateObj??
0x57C3CF: add     esp, 4
0x57C3D2: cmp     byte ptr [eax+31h], 0
0x57C3D6: jg      short loc_57C3E1
0x57C3D8: cmp     byte ptr ds:0B3B908h, 0
0x57C3DF: jz      short loc_57C3FC
0x57C3E1: mov     ecx, [esp+10h+Format]
0x57C3E5: lea     eax, [esp+10h+ArgList]
0x57C3E9: push    eax; ArgList
0x57C3EA: push    ecx; Format
0x57C3EB: push    1
0x57C3ED: call    GetGlobalScriptStateObj??
0x57C3F2: add     esp, 4
0x57C3F5: mov     ecx, eax; this
0x57C3F7: call    Console_FormatPrint
0x57C3FC: mov     edx, [esp+10h+Format]
0x57C400: push    edx
0x57C401: call    FormHeapFree
0x57C406: add     esp, 4
0x57C409: mov     ecx, [esp+10h+var_C]
0x57C40D: mov     large fs:0, ecx
0x57C414: pop     ecx
0x57C415: add     esp, 0Ch
0x57C418: retn
