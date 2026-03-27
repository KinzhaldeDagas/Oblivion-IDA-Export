0x5FBEC0: push    ebx
0x5FBEC1: push    ebp
0x5FBEC2: mov     ebp, [esp+8+arg_4]
0x5FBEC6: test    ebp, ebp
0x5FBEC8: push    esi
0x5FBEC9: push    edi
0x5FBECA: mov     esi, ecx
0x5FBECC: jz      loc_5FBF97
0x5FBED2: mov     ecx, ds:0B333C4h
0x5FBED8: cmp     esi, ecx
0x5FBEDA: jnz     short loc_5FBEFA
0x5FBEDC: mov     eax, [ecx]
0x5FBEDE: mov     edx, [eax+170h]
0x5FBEE4: call    edx
0x5FBEE6: mov     ecx, ebp
0x5FBEE8: mov     edi, eax
0x5FBEEA: call    ExtraDataList_GetOwner
0x5FBEEF: cmp     eax, edi
0x5FBEF1: jnz     short loc_5FBEFA
0x5FBEF3: mov     ecx, ebp
0x5FBEF5: call    ExtraDataList_RemoveOwner
0x5FBEFA: mov     ecx, ebp
0x5FBEFC: call    ExtraDataList_GetReferencePointer
0x5FBF01: mov     edi, eax
0x5FBF03: test    edi, edi
0x5FBF05: jz      loc_5FBF97
0x5FBF0B: mov     ebx, [edi+0Ch]
0x5FBF0E: push    esi
0x5FBF0F: lea     ecx, [edi+44h]
0x5FBF12: call    ExtraDataList_SetReferencePointer
0x5FBF17: mov     eax, [edi]
0x5FBF19: mov     edx, [eax+40h]
0x5FBF1C: push    20h ; ' '
0x5FBF1E: mov     ecx, edi
0x5FBF20: call    edx
0x5FBF22: push    esi
0x5FBF23: push    ebx
0x5FBF24: mov     ecx, offset ActorProcessManager_ptr
0x5FBF29: call    sub_674E40
0x5FBF2E: mov     ebx, eax
0x5FBF30: test    ebx, ebx
0x5FBF32: mov     [esp+10h+arg_4], ebx
0x5FBF36: jz      short loc_5FBF97
0x5FBF38: mov     edi, [ebx]
0x5FBF3A: test    edi, edi
0x5FBF3C: jz      short loc_5FBF81
0x5FBF3E: mov     eax, [edi+58h]
0x5FBF41: test    eax, eax
0x5FBF43: jz      short loc_5FBF65
0x5FBF45: mov     eax, [eax+8]
0x5FBF48: test    eax, eax
0x5FBF4A: jz      short loc_5FBF65
0x5FBF4C: mov     ecx, [eax+28h]
0x5FBF4F: test    ecx, ecx
0x5FBF51: jz      short loc_5FBF65
0x5FBF53: call    sub_569E60
0x5FBF58: test    eax, eax
0x5FBF5A: jz      short loc_5FBF65
0x5FBF5C: cmp     dword ptr [edi+58h], 0
0x5FBF60: jz      short loc_5FBF7A
0x5FBF62: push    esi
0x5FBF63: jmp     short loc_5FBF6D
0x5FBF65: cmp     dword ptr [edi+58h], 0
0x5FBF69: jz      short loc_5FBF7A
0x5FBF6B: push    0
0x5FBF6D: mov     ecx, [edi+58h]
0x5FBF70: mov     eax, [ecx]
0x5FBF72: mov     edx, [eax+0D0h]
0x5FBF78: call    edx
0x5FBF7A: mov     ebx, [ebx+4]
0x5FBF7D: test    ebx, ebx
0x5FBF7F: jnz     short loc_5FBF38
0x5FBF81: mov     ecx, [esp+10h+arg_4]
0x5FBF85: call    BSSimpleList_Clear
0x5FBF8A: mov     eax, [esp+10h+arg_4]
0x5FBF8E: push    eax
0x5FBF8F: call    FormHeapFree
0x5FBF94: add     esp, 4
0x5FBF97: mov     ecx, [esp+10h+arg_8]
0x5FBF9B: mov     edi, [esp+10h+arg_0]
0x5FBF9F: push    ecx
0x5FBFA0: push    ebp
0x5FBFA1: push    edi
0x5FBFA2: mov     ecx, esi
0x5FBFA4: call    TESObjectREFR_AddItem_Abbrev
0x5FBFA9: mov     edx, [esi]
0x5FBFAB: mov     eax, [edx+170h]
0x5FBFB1: mov     ecx, esi
0x5FBFB3: call    eax
0x5FBFB5: cmp     byte ptr [eax+4], 23h ; '#'
0x5FBFB9: jnz     loc_5FC07F
0x5FBFBF: mov     bl, 21h ; '!'
0x5FBFC1: cmp     [edi+4], bl
0x5FBFC4: jnz     loc_5FC07F
0x5FBFCA: mov     edx, [esi]
0x5FBFCC: mov     eax, [edx+2B8h]
0x5FBFD2: push    0FFFFFFFFh
0x5FBFD4: mov     ecx, esi
0x5FBFD6: call    eax
0x5FBFD8: mov     ebp, eax
0x5FBFDA: test    ebp, ebp
0x5FBFDC: jz      loc_5FC07F
0x5FBFE2: mov     eax, ds:0B333C4h
0x5FBFE7: cmp     esi, eax
0x5FBFE9: jz      loc_5FC06F
0x5FBFEF: cmp     byte ptr [eax+124h], 0
0x5FBFF6: jnz     short loc_5FC06F
0x5FBFF8: mov     ecx, [ebp+8]
0x5FBFFB: push    0
0x5FBFFD: push    1
0x5FBFFF: push    0
0x5FC001: push    1
0x5FC003: push    ecx
0x5FC004: mov     ecx, esi
0x5FC006: call    Actor_EquipItem
0x5FC00B: mov     edx, [esi]
0x5FC00D: mov     eax, [edx+334h]
0x5FC013: push    1
0x5FC015: mov     ecx, esi
0x5FC017: call    eax
0x5FC019: test    al, al
0x5FC01B: jz      short loc_5FC06F
0x5FC01D: cmp     [edi+4], bl
0x5FC020: jnz     short loc_5FC06F
0x5FC022: mov     ecx, [esi+58h]
0x5FC025: mov     edx, [ecx]
0x5FC027: mov     eax, [edx+308h]
0x5FC02D: push    1
0x5FC02F: call    eax
0x5FC031: mov     ecx, [esi+58h]
0x5FC034: mov     edx, [ecx]
0x5FC036: mov     eax, [edx+300h]
0x5FC03C: push    1
0x5FC03E: call    eax
0x5FC040: mov     ebx, [esi+58h]
0x5FC043: mov     edi, [ebx]
0x5FC045: push    esi
0x5FC046: mov     ecx, esi
0x5FC048: add     edi, 150h
0x5FC04E: call    TESObjectREFR_GetAnimData
0x5FC053: mov     edx, [esi]
0x5FC055: push    eax
0x5FC056: mov     eax, [edx+168h]
0x5FC05C: mov     ecx, esi
0x5FC05E: call    eax
0x5FC060: push    eax
0x5FC061: mov     ecx, esi
0x5FC063: call    Actor_IsWeaponOut
0x5FC068: mov     edx, [edi]
0x5FC06A: mov     ecx, ebx
0x5FC06C: push    eax
0x5FC06D: call    edx
0x5FC06F: mov     ecx, ebp
0x5FC071: call    ContainerEntryExtraData_DestroyDataTable
0x5FC076: push    ebp
0x5FC077: call    FormHeapFree
0x5FC07C: add     esp, 4
0x5FC07F: pop     edi
0x5FC080: pop     esi
0x5FC081: pop     ebp
0x5FC082: pop     ebx
0x5FC083: retn    0Ch
