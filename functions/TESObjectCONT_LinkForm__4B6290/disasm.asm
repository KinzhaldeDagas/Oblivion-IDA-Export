0x4B6290: push    ecx
0x4B6291: push    esi
0x4B6292: mov     esi, ecx
0x4B6294: mov     eax, [esi+8]
0x4B6297: shr     eax, 3
0x4B629A: test    al, 1
0x4B629C: jnz     loc_4B639D
0x4B62A2: push    esi
0x4B62A3: lea     ecx, [esi+58h]
0x4B62A6: call    TESScriptableForm_Link
0x4B62AB: push    esi
0x4B62AC: lea     ecx, [esi+24h]
0x4B62AF: call    TESContainer_LinkComponent
0x4B62B4: mov     eax, [esi+70h]
0x4B62B7: test    eax, eax
0x4B62B9: mov     dword ptr [esp+8+ArgList], eax
0x4B62BD: jz      short loc_4B6324
0x4B62BF: push    0FFFFFFFFh; a2
0x4B62C1: mov     ecx, esi; this
0x4B62C3: call    TESForm_GetOverrideFile
0x4B62C8: push    eax; a2
0x4B62C9: lea     ecx, [esp+0Ch+ArgList]
0x4B62CD: push    ecx; a1
0x4B62CE: call    TESForm_ResolveFormID
0x4B62D3: mov     edx, dword ptr [esp+10h+ArgList]
0x4B62D7: add     esp, 8
0x4B62DA: push    0; int
0x4B62DC: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B62E1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B62E6: push    0; int
0x4B62E8: push    edx; a1
0x4B62E9: call    TESForm_LookupByFormID
0x4B62EE: add     esp, 4
0x4B62F1: push    eax; void *
0x4B62F2: call    OblivionDynamicCast
0x4B62F7: add     esp, 14h
0x4B62FA: test    eax, eax
0x4B62FC: mov     [esi+70h], eax
0x4B62FF: jnz     short loc_4B6324
0x4B6301: mov     eax, [esi+0Ch]
0x4B6304: push    eax
0x4B6305: mov     eax, [esi]
0x4B6307: mov     edx, [eax+0D4h]
0x4B630D: mov     ecx, esi
0x4B630F: call    edx
0x4B6311: push    eax
0x4B6312: mov     eax, dword ptr [esp+10h+ArgList]
0x4B6316: push    eax; ArgList
0x4B6317: push    offset aCouldNotFin_17; "Could not find open sound (%08X) for co"...
0x4B631C: call    PrintError
0x4B6321: add     esp, 10h
0x4B6324: mov     eax, [esi+74h]
0x4B6327: test    eax, eax
0x4B6329: mov     dword ptr [esp+8+ArgList], eax
0x4B632D: jz      short loc_4B6394
0x4B632F: push    0FFFFFFFFh; a2
0x4B6331: mov     ecx, esi; this
0x4B6333: call    TESForm_GetOverrideFile
0x4B6338: push    eax; a2
0x4B6339: lea     ecx, [esp+0Ch+ArgList]
0x4B633D: push    ecx; a1
0x4B633E: call    TESForm_ResolveFormID
0x4B6343: mov     edx, dword ptr [esp+10h+ArgList]
0x4B6347: add     esp, 8
0x4B634A: push    0; int
0x4B634C: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B6351: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B6356: push    0; int
0x4B6358: push    edx; a1
0x4B6359: call    TESForm_LookupByFormID
0x4B635E: add     esp, 4
0x4B6361: push    eax; void *
0x4B6362: call    OblivionDynamicCast
0x4B6367: add     esp, 14h
0x4B636A: test    eax, eax
0x4B636C: mov     [esi+74h], eax
0x4B636F: jnz     short loc_4B6394
0x4B6371: mov     eax, [esi+0Ch]
0x4B6374: push    eax
0x4B6375: mov     eax, [esi]
0x4B6377: mov     edx, [eax+0D4h]
0x4B637D: mov     ecx, esi
0x4B637F: call    edx
0x4B6381: push    eax
0x4B6382: mov     eax, dword ptr [esp+10h+ArgList]
0x4B6386: push    eax; ArgList
0x4B6387: push    offset aCouldNotFin_17; "Could not find open sound (%08X) for co"...
0x4B638C: call    PrintError
0x4B6391: add     esp, 10h
0x4B6394: push    1; a2
0x4B6396: mov     ecx, esi; this
0x4B6398: call    TESForm_SetIsLinked
0x4B639D: pop     esi
0x4B639E: pop     ecx
0x4B639F: retn
