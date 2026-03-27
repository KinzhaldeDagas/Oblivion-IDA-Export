0x521ED0: push    ebx
0x521ED1: mov     ebx, [esp+4+arg_0]
0x521ED5: push    esi
0x521ED6: push    edi
0x521ED7: push    0; int
0x521ED9: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x521EDE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x521EE3: push    0; int
0x521EE5: push    ebx; void *
0x521EE6: mov     esi, ecx
0x521EE8: call    OblivionDynamicCast
0x521EED: mov     edi, eax
0x521EEF: add     esp, 14h
0x521EF2: test    edi, edi
0x521EF4: jz      loc_52202D
0x521EFA: push    ebx
0x521EFB: lea     ecx, [esi+54h]
0x521EFE: call    TESSpellList_CopyFrom
0x521F03: push    ebx
0x521F04: lea     ecx, [esi+0E4h]
0x521F0A: call    sub_46E480
0x521F0F: push    ebx
0x521F10: lea     ecx, [esi+24h]
0x521F13: call    TESActorBaseData_CopyFrom
0x521F18: push    ebx
0x521F19: lea     ecx, [esi+80h]
0x521F1F: call    TESHealthForm_CopyFrom
0x521F24: push    ebx
0x521F25: lea     ecx, [esi+88h]
0x521F2B: call    TESAttributes_CopyFrom
0x521F30: push    ebx
0x521F31: lea     ecx, [esi+0A0h]
0x521F37: call    TESFullName_CopyFrom
0x521F3C: push    ebx
0x521F3D: lea     ecx, [esi+0ACh]
0x521F43: call    TESModel_CopyFrom
0x521F48: mov     eax, [edi+0ECh]
0x521F4E: mov     [esi+0ECh], eax
0x521F54: mov     ecx, [edi+0F0h]
0x521F5A: mov     [esi+0F0h], ecx
0x521F60: mov     edx, [edi+0F4h]
0x521F66: mov     [esi+0F4h], edx
0x521F6C: mov     eax, [edi+0F8h]
0x521F72: mov     [esi+0F8h], eax
0x521F78: mov     ecx, [edi+0FCh]
0x521F7E: mov     ebx, [esi]
0x521F80: mov     [esi+0FCh], ecx
0x521F86: mov     dl, [edi+100h]
0x521F8C: mov     [esi+100h], dl
0x521F92: mov     eax, [edi+104h]
0x521F98: mov     [esi+104h], eax
0x521F9E: mov     ecx, [edi+1C8h]
0x521FA4: mov     [esi+1C8h], ecx
0x521FAA: fld     dword ptr [edi+1CCh]
0x521FB0: fstp    dword ptr [esi+1CCh]
0x521FB6: mov     edx, [edi+1D0h]
0x521FBC: mov     [esi+1D0h], edx
0x521FC2: mov     eax, [edi+1E8h]
0x521FC8: mov     [esi+1E8h], eax
0x521FCE: mov     edx, [edi]
0x521FD0: mov     eax, [edx+120h]
0x521FD6: mov     ecx, edi
0x521FD8: call    eax
0x521FDA: mov     edx, [ebx+124h]
0x521FE0: push    eax
0x521FE1: mov     ecx, esi
0x521FE3: call    edx
0x521FE5: mov     eax, [esi]
0x521FE7: mov     edx, [eax+128h]
0x521FED: push    45h ; 'E'
0x521FEF: mov     ecx, esi
0x521FF1: call    edx
0x521FF3: test    eax, eax
0x521FF5: jz      short loc_521FFF
0x521FF7: add     esi, 168h
0x521FFD: jmp     short loc_522005
0x521FFF: add     esi, 108h
0x522005: mov     eax, [edi]
0x522007: mov     edx, [eax+128h]
0x52200D: push    45h ; 'E'
0x52200F: mov     ecx, edi
0x522011: call    edx
0x522013: test    eax, eax
0x522015: lea     eax, [edi+168h]
0x52201B: jnz     short loc_522023
0x52201D: lea     eax, [edi+108h]
0x522023: push    esi
0x522024: push    eax
0x522025: call    sub_5528F0
0x52202A: add     esp, 8
0x52202D: pop     edi
0x52202E: pop     esi
0x52202F: pop     ebx
0x522030: retn    4
