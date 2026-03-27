0x4B3D30: push    ecx
0x4B3D31: push    esi
0x4B3D32: mov     esi, ecx
0x4B3D34: mov     eax, [esi+8]
0x4B3D37: shr     eax, 3
0x4B3D3A: test    al, 1
0x4B3D3C: jnz     loc_4B3DC4
0x4B3D42: push    esi
0x4B3D43: lea     ecx, [esi+48h]
0x4B3D46: call    TESScriptableForm_Link
0x4B3D4B: mov     eax, [esi+54h]
0x4B3D4E: test    eax, eax
0x4B3D50: mov     dword ptr [esp+8+ArgList], eax
0x4B3D54: jz      short loc_4B3DBB
0x4B3D56: push    0FFFFFFFFh; a2
0x4B3D58: mov     ecx, esi; this
0x4B3D5A: call    TESForm_GetOverrideFile
0x4B3D5F: push    eax; a2
0x4B3D60: lea     ecx, [esp+0Ch+ArgList]
0x4B3D64: push    ecx; a1
0x4B3D65: call    TESForm_ResolveFormID
0x4B3D6A: mov     edx, dword ptr [esp+10h+ArgList]
0x4B3D6E: add     esp, 8
0x4B3D71: push    0; int
0x4B3D73: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B3D78: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B3D7D: push    0; int
0x4B3D7F: push    edx; a1
0x4B3D80: call    TESForm_LookupByFormID
0x4B3D85: add     esp, 4
0x4B3D88: push    eax; void *
0x4B3D89: call    OblivionDynamicCast
0x4B3D8E: add     esp, 14h
0x4B3D91: test    eax, eax
0x4B3D93: mov     [esi+54h], eax
0x4B3D96: jnz     short loc_4B3DBB
0x4B3D98: mov     eax, [esi+0Ch]
0x4B3D9B: push    eax
0x4B3D9C: mov     eax, [esi]
0x4B3D9E: mov     edx, [eax+0D4h]
0x4B3DA4: mov     ecx, esi
0x4B3DA6: call    edx
0x4B3DA8: push    eax
0x4B3DA9: mov     eax, dword ptr [esp+10h+ArgList]
0x4B3DAD: push    eax; ArgList
0x4B3DAE: push    offset aCouldNotFindOp; "Could not find open sound (%08X) for ac"...
0x4B3DB3: call    PrintError
0x4B3DB8: add     esp, 10h
0x4B3DBB: push    1; a2
0x4B3DBD: mov     ecx, esi; this
0x4B3DBF: call    TESForm_SetIsLinked
0x4B3DC4: pop     esi
0x4B3DC5: pop     ecx
0x4B3DC6: retn
