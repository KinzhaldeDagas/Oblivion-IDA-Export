0x4C8FB0: push    ecx
0x4C8FB1: push    edi
0x4C8FB2: mov     edi, ecx
0x4C8FB4: mov     eax, [edi+8]
0x4C8FB7: shr     eax, 3
0x4C8FBA: test    al, 1
0x4C8FBC: jnz     loc_4C909B
0x4C8FC2: push    ebx
0x4C8FC3: push    esi
0x4C8FC4: lea     esi, [edi+2Ch]
0x4C8FC7: xor     ebx, ebx
0x4C8FC9: test    esi, esi
0x4C8FCB: jz      loc_4C9090
0x4C8FD1: cmp     dword ptr [esi+4], 0
0x4C8FD5: jnz     short loc_4C8FE0
0x4C8FD7: cmp     dword ptr [esi], 0
0x4C8FDA: jz      loc_4C9090
0x4C8FE0: mov     ecx, [esi]
0x4C8FE2: mov     dword ptr [esp+10h+ArgList], ecx
0x4C8FE6: push    0FFFFFFFFh; a2
0x4C8FE8: mov     ecx, edi; this
0x4C8FEA: call    TESForm_GetOverrideFile
0x4C8FEF: push    eax; a2
0x4C8FF0: lea     edx, [esp+14h+ArgList]
0x4C8FF4: push    edx; a1
0x4C8FF5: call    TESForm_ResolveFormID
0x4C8FFA: mov     eax, dword ptr [esp+18h+ArgList]
0x4C8FFE: add     esp, 8
0x4C9001: push    0; int
0x4C9003: push    offset ??_R0?AVTESGrass@@@8; struct TypeDescriptor *
0x4C9008: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C900D: push    0; int
0x4C900F: push    eax; a1
0x4C9010: call    TESForm_LookupByFormID
0x4C9015: add     esp, 4
0x4C9018: push    eax; void *
0x4C9019: call    OblivionDynamicCast
0x4C901E: add     esp, 14h
0x4C9021: test    eax, eax
0x4C9023: jnz     short loc_4C9081
0x4C9025: mov     eax, [edi+0Ch]
0x4C9028: mov     edx, [edi]
0x4C902A: push    eax
0x4C902B: mov     eax, [edx+0D4h]
0x4C9031: mov     ecx, edi
0x4C9033: call    eax
0x4C9035: mov     ecx, dword ptr [esp+14h+ArgList]
0x4C9039: push    eax
0x4C903A: push    ecx; ArgList
0x4C903B: push    offset aCouldNotFindGr; "Could not find Grass (%08X) for LandTex"...
0x4C9040: call    PrintError
0x4C9045: add     esp, 10h
0x4C9048: test    ebx, ebx
0x4C904A: jz      short loc_4C905D
0x4C904C: mov     edx, dword ptr [esp+10h+ArgList]
0x4C9050: push    edx
0x4C9051: mov     ecx, ebx
0x4C9053: call    BSSimpleList_Remove
0x4C9058: mov     esi, [ebx+4]
0x4C905B: jmp     short loc_4C9088
0x4C905D: mov     eax, [esi+4]
0x4C9060: test    eax, eax
0x4C9062: jz      short loc_4C9079
0x4C9064: mov     ecx, [eax+4]
0x4C9067: mov     [esi+4], ecx
0x4C906A: mov     edx, [eax]
0x4C906C: push    eax
0x4C906D: mov     [esi], edx
0x4C906F: call    FormHeapFree
0x4C9074: add     esp, 4
0x4C9077: jmp     short loc_4C9088
0x4C9079: mov     dword ptr [esi], 0
0x4C907F: jmp     short loc_4C9088
0x4C9081: mov     [esi], eax
0x4C9083: mov     ebx, esi
0x4C9085: mov     esi, [esi+4]
0x4C9088: test    esi, esi
0x4C908A: jnz     loc_4C8FD1
0x4C9090: push    1; a2
0x4C9092: mov     ecx, edi; this
0x4C9094: call    TESForm_SetIsLinked
0x4C9099: pop     esi
0x4C909A: pop     ebx
0x4C909B: pop     edi
0x4C909C: pop     ecx
0x4C909D: retn
