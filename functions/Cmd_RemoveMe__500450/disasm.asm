0x500450: push    ecx
0x500451: mov     ecx, [esp+4+l]
0x500455: mov     edx, [esp+4+arg_10]
0x500459: push    ebp
0x50045A: push    esi
0x50045B: mov     esi, [esp+0Ch+a4]
0x50045F: push    edi
0x500460: mov     edi, [esp+10h+arg_C]
0x500464: lea     eax, [esp+10h+var_4]
0x500468: push    eax; UInt16
0x500469: mov     eax, [esp+14h+a3]
0x50046D: push    ecx; l
0x50046E: mov     ecx, [esp+18h+arg_4]
0x500472: push    edx; a6
0x500473: mov     edx, [esp+1Ch+a1]
0x500477: push    edi; a5
0x500478: push    esi; a4
0x500479: push    eax; a3
0x50047A: push    ecx; a2
0x50047B: xor     ebp, ebp
0x50047D: push    edx; a1
0x50047E: mov     dword ptr [esp+30h+var_4], ebp
0x500482: call    Script_ExtractArgs
0x500487: add     esp, 20h
0x50048A: test    al, al
0x50048C: jz      loc_50055D
0x500492: cmp     esi, ebp
0x500494: jz      loc_500564
0x50049A: cmp     edi, ebp
0x50049C: jz      loc_500564
0x5004A2: push    ebx
0x5004A3: push    ebp; int
0x5004A4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5004A9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5004AE: push    ebp; int
0x5004AF: push    edi; void *
0x5004B0: call    OblivionDynamicCast
0x5004B5: mov     ebx, eax
0x5004B7: add     esp, 14h
0x5004BA: test    ebx, ebx
0x5004BC: jz      short loc_500511
0x5004BE: mov     eax, [esi]
0x5004C0: mov     edx, [eax+170h]
0x5004C6: mov     ecx, esi
0x5004C8: call    edx
0x5004CA: push    eax
0x5004CB: mov     ecx, ebx
0x5004CD: call    Actor_IsObjectEquipped
0x5004D2: test    al, al
0x5004D4: jz      short loc_500511
0x5004D6: push    ebp; a2
0x5004D7: mov     ecx, ebx; this
0x5004D9: call    Actor_GetActorBaseForm
0x5004DE: test    eax, eax
0x5004E0: jz      short loc_5004E7
0x5004E2: add     eax, 44h ; 'D'
0x5004E5: jmp     short loc_5004E9
0x5004E7: xor     eax, eax
0x5004E9: push    eax
0x5004EA: push    edi; a1
0x5004EB: call    ContainerExtraData_GetContainerExtraDataForRef
0x5004F0: mov     ebx, eax
0x5004F2: add     esp, 8
0x5004F5: test    ebx, ebx
0x5004F7: jz      short loc_500511
0x5004F9: mov     eax, [esi]
0x5004FB: mov     edx, [eax+170h]
0x500501: push    0
0x500503: mov     ecx, esi
0x500505: call    edx
0x500507: push    eax
0x500508: mov     ecx, ebx
0x50050A: call    ExtraContainerChanges_SetEquipped
0x50050F: mov     ebp, eax
0x500511: mov     eax, dword ptr [esp+14h+var_4]
0x500515: mov     edx, [esi]
0x500517: mov     ebx, [edi]
0x500519: push    0
0x50051B: push    1
0x50051D: push    0
0x50051F: push    0
0x500521: push    eax
0x500522: mov     eax, [edx+170h]
0x500528: push    0
0x50052A: push    0
0x50052C: push    1
0x50052E: push    ebp
0x50052F: mov     ecx, esi
0x500531: call    eax
0x500533: mov     edx, [ebx+100h]
0x500539: push    eax
0x50053A: mov     ecx, edi
0x50053C: call    edx
0x50053E: mov     ecx, ds:0B333C4h
0x500544: push    esi
0x500545: call    sub_665260
0x50054A: cmp     edi, ds:0B333C4h
0x500550: pop     ebx
0x500551: jnz     short loc_50055D
0x500553: push    0
0x500555: call    sub_57A3B0
0x50055A: add     esp, 4
0x50055D: pop     edi
0x50055E: pop     esi
0x50055F: xor     al, al
0x500561: pop     ebp
0x500562: pop     ecx
0x500563: retn
0x500564: pop     edi
0x500565: pop     esi
0x500566: mov     al, 1
0x500568: pop     ebp
0x500569: pop     ecx
0x50056A: retn
