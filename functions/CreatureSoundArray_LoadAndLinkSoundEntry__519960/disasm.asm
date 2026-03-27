0x519960: sub     esp, 10Ch
0x519966: mov     eax, ds:0B30AACh
0x51996B: xor     eax, esp
0x51996D: mov     [esp+10Ch+var_4], eax
0x519974: push    ebx
0x519975: push    ebp
0x519976: mov     ebp, [esp+114h+arg_8]
0x51997D: push    esi
0x51997E: mov     esi, [esp+118h+a2]
0x519985: xor     al, al
0x519987: test    esi, esi
0x519989: mov     ebx, ecx
0x51998B: jz      loc_519AA8
0x519991: push    edi
0x519992: mov     ecx, esi
0x519994: call    TESFile_GetChunkType
0x519999: cmp     eax, 49445343h
0x51999E: mov     ecx, esi
0x5199A0: jnz     loc_519A31
0x5199A6: lea     eax, [esp+11Ch+ArgList]
0x5199AA: push    eax
0x5199AB: mov     dword ptr [esp+120h+ArgList], 0
0x5199B3: call    TESFile_GetChunkData4
0x5199B8: push    8; Size
0x5199BA: call    FormHeapAlloc
0x5199BF: add     esp, 4
0x5199C2: cmp     dword ptr [esp+11Ch+ArgList], 0
0x5199C7: mov     edi, eax
0x5199C9: jz      short loc_519A29
0x5199CB: lea     ecx, [esp+11Ch+ArgList]
0x5199CF: push    esi; a2
0x5199D0: push    ecx; a1
0x5199D1: call    TESForm_ResolveFormID
0x5199D6: mov     edx, dword ptr [esp+124h+ArgList]
0x5199DA: add     esp, 8
0x5199DD: push    0; int
0x5199DF: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x5199E4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5199E9: push    0; int
0x5199EB: push    edx; a1
0x5199EC: call    TESForm_LookupByFormID
0x5199F1: add     esp, 4
0x5199F4: push    eax; void *
0x5199F5: call    OblivionDynamicCast
0x5199FA: add     esp, 14h
0x5199FD: test    eax, eax
0x5199FF: mov     [edi], eax
0x519A01: jnz     short loc_519A66
0x519A03: mov     eax, [ebp+0Ch]
0x519A06: push    eax
0x519A07: mov     eax, [ebp+0]
0x519A0A: mov     edx, [eax+0D4h]
0x519A10: mov     ecx, ebp
0x519A12: call    edx
0x519A14: push    eax
0x519A15: mov     eax, dword ptr [esp+124h+ArgList]
0x519A19: push    eax; ArgList
0x519A1A: push    offset aUnableToFindCr; "Unable to find CreatureSound ID (%08X) "...
0x519A1F: call    PrintError
0x519A24: add     esp, 10h
0x519A27: jmp     short loc_519A66
0x519A29: mov     dword ptr [edi], 0
0x519A2F: jmp     short loc_519A66
0x519A31: call    TESFile_GetChunkType
0x519A36: cmp     eax, 46445343h
0x519A3B: jnz     short loc_519AA5
0x519A3D: push    104h; a4
0x519A42: lea     ecx, [esp+120h+Dst]
0x519A46: push    ecx; Dst
0x519A47: mov     ecx, esi; a1
0x519A49: call    TESFile_GetChunkData
0x519A4E: push    8; Size
0x519A50: call    FormHeapAlloc
0x519A55: lea     edx, [esp+120h+Dst]
0x519A59: push    edx
0x519A5A: mov     edi, eax
0x519A5C: call    sub_517ED0
0x519A61: add     esp, 8
0x519A64: mov     [edi], eax
0x519A66: mov     ecx, esi
0x519A68: call    TESFile_GetNextChunk
0x519A6D: mov     ecx, esi
0x519A6F: call    TESFile_GetChunkType
0x519A74: cmp     eax, 43445343h
0x519A79: jnz     short loc_519A9C
0x519A7B: push    1; a4
0x519A7D: lea     eax, [edi+4]
0x519A80: push    eax; Dst
0x519A81: mov     ecx, esi; a1
0x519A83: call    TESFile_GetChunkData
0x519A88: mov     ecx, [esp+11Ch+arg_4]
0x519A8F: push    ecx
0x519A90: push    edi
0x519A91: mov     ecx, ebx
0x519A93: call    CreatureSoundArray_InsertSoundEntry
0x519A98: mov     al, 1
0x519A9A: jmp     short loc_519AA7
0x519A9C: push    edi
0x519A9D: call    FormHeapFree
0x519AA2: add     esp, 4
0x519AA5: xor     al, al
0x519AA7: pop     edi
0x519AA8: mov     ecx, [esp+118h+var_4]
0x519AAF: pop     esi
0x519AB0: pop     ebp
0x519AB1: pop     ebx
0x519AB2: xor     ecx, esp
0x519AB4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x519AB9: add     esp, 10Ch
0x519ABF: retn    0Ch
