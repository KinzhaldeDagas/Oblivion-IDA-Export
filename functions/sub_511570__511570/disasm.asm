0x511570: fldz
0x511572: push    ebp
0x511573: mov     ebp, [esp+4+arg_18]
0x511577: fstp    qword ptr [ebp+0]
0x51157A: push    edi
0x51157B: mov     edi, [esp+8+arg_8]
0x51157F: test    edi, edi
0x511581: jz      loc_511713
0x511587: mov     eax, [edi]
0x511589: mov     edx, [eax+190h]
0x51158F: mov     ecx, edi
0x511591: call    edx
0x511593: test    al, al
0x511595: jz      loc_511713
0x51159B: push    ebx
0x51159C: push    0; a2
0x51159E: mov     ecx, edi; this
0x5115A0: call    Actor_GetActorBaseForm
0x5115A5: mov     ebx, eax
0x5115A7: test    ebx, ebx
0x5115A9: jz      short loc_5115BA
0x5115AB: movzx   eax, byte ptr [ebx+4]
0x5115AF: push    eax; a1
0x5115B0: call    TESForm_CreateDynamic
0x5115B5: add     esp, 4
0x5115B8: jmp     short loc_5115BC
0x5115BA: xor     eax, eax
0x5115BC: push    esi
0x5115BD: push    0; int
0x5115BF: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x5115C4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5115C9: push    0; int
0x5115CB: push    eax; void *
0x5115CC: call    OblivionDynamicCast
0x5115D1: mov     esi, eax
0x5115D3: add     esp, 14h
0x5115D6: test    esi, esi
0x5115D8: jz      loc_511711
0x5115DE: mov     eax, [esi]
0x5115E0: mov     edx, [eax+0B4h]
0x5115E6: push    ebx
0x5115E7: mov     ecx, esi
0x5115E9: call    edx
0x5115EB: mov     ecx, ds:0B333C4h
0x5115F1: cmp     edi, ecx
0x5115F3: jnz     short loc_511631
0x5115F5: push    8
0x5115F7: call    Actor_GetBaseCalcAVi
0x5115FC: push    eax
0x5115FD: mov     ecx, esi
0x5115FF: call    TESActorBase_SetHealth
0x511604: mov     ecx, ds:0B333C4h
0x51160A: push    0Ah
0x51160C: lea     ebx, [esi+24h]
0x51160F: call    Actor_GetBaseCalcAVi
0x511614: push    eax
0x511615: mov     ecx, ebx
0x511617: call    TESActorBaseData_SetFatigue
0x51161C: mov     ecx, ds:0B333C4h
0x511622: push    9
0x511624: call    Actor_GetBaseCalcAVi
0x511629: push    eax
0x51162A: mov     ecx, ebx
0x51162C: call    TESActorBaseData_SetMagicka
0x511631: push    0
0x511633: mov     ecx, edi; this
0x511635: call    TESObjectREFR_GetWorldSpace
0x51163A: push    eax
0x51163B: mov     ecx, edi; this
0x51163D: call    TESObjectREFR_GetParentCell
0x511642: mov     edx, [edi]
0x511644: push    eax
0x511645: lea     eax, [edi+20h]
0x511648: push    eax
0x511649: mov     eax, [edx+174h]
0x51164F: mov     ecx, edi
0x511651: call    eax
0x511653: mov     ecx, ds:0B33A98h
0x511659: push    eax
0x51165A: push    esi
0x51165B: call    TESDataHandler_PlaceObjectRef
0x511660: mov     ebx, eax
0x511662: test    ebx, ebx
0x511664: jz      loc_511706
0x51166A: mov     ecx, [ebx+0Ch]
0x51166D: lea     edx, [esp+10h+arg_18]
0x511671: push    ebp
0x511672: push    edx
0x511673: mov     [esp+18h+arg_18], ecx
0x511677: call    sub_4F9FB0
0x51167C: mov     ecx, ds:0B33A98h
0x511682: add     esp, 8
0x511685: push    esi
0x511686: call    TESDataHandler_AddForm
0x51168B: mov     ecx, ds:0B33B00h
0x511691: push    esi
0x511692: call    SaveLoad_AddCreatedObj
0x511697: lea     ecx, [edi+44h]; this
0x51169A: call    ExtraDataList_GetContainerChanges
0x51169F: test    eax, eax
0x5116A1: jz      short loc_5116AC
0x5116A3: push    ebx
0x5116A4: push    edi
0x5116A5: mov     ecx, eax
0x5116A7: call    sub_48DA00
0x5116AC: lea     ecx, [ebx+44h]; this
0x5116AF: call    ExtraDataList_GetContainerChanges
0x5116B4: test    eax, eax
0x5116B6: jz      short loc_511711
0x5116B8: push    0
0x5116BA: push    9
0x5116BC: mov     ecx, eax
0x5116BE: call    ContainerExtraData_GetEquippedInstance
0x5116C3: mov     ebp, eax
0x5116C5: test    ebp, ebp
0x5116C7: jz      short loc_511711
0x5116C9: mov     ecx, [ebx+58h]
0x5116CC: test    ecx, ecx
0x5116CE: jz      short loc_511711
0x5116D0: mov     eax, [ecx]
0x5116D2: mov     edx, [eax+0ECh]
0x5116D8: push    1
0x5116DA: call    edx
0x5116DC: test    eax, eax
0x5116DE: jnz     short loc_511711
0x5116E0: mov     edi, [ebx+58h]
0x5116E3: mov     eax, [ebx]
0x5116E5: mov     esi, [edi]
0x5116E7: mov     edx, [eax+154h]
0x5116ED: mov     ecx, ebx
0x5116EF: add     esi, 104h
0x5116F5: call    edx
0x5116F7: push    eax
0x5116F8: mov     eax, [esi]
0x5116FA: push    ebp
0x5116FB: mov     ecx, edi
0x5116FD: call    eax
0x5116FF: pop     esi
0x511700: pop     ebx
0x511701: pop     edi
0x511702: mov     al, 1
0x511704: pop     ebp
0x511705: retn
0x511706: mov     edx, [esi]
0x511708: mov     eax, [edx+10h]
0x51170B: push    1
0x51170D: mov     ecx, esi
0x51170F: call    eax
0x511711: pop     esi
0x511712: pop     ebx
0x511713: pop     edi
0x511714: mov     al, 1
0x511716: pop     ebp
0x511717: retn
