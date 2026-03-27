0x6918D0: push    edi
0x6918D1: mov     edi, ecx
0x6918D3: cmp     byte ptr [edi+84h], 0
0x6918DA: jnz     short loc_691902
0x6918DC: fld     dword ptr [edi+4]
0x6918DF: fld     dword ptr [edi+80h]
0x6918E5: fcompp
0x6918E7: fnstsw  ax
0x6918E9: test    ah, 41h
0x6918EC: jp      loc_691A4C
0x6918F2: call    sub_690AF0
0x6918F7: mov     byte ptr [edi+84h], 1
0x6918FE: pop     edi
0x6918FF: retn    4
0x691902: mov     ecx, [edi+20h]; this
0x691905: test    ecx, ecx
0x691907: push    esi
0x691908: jz      short loc_691913
0x69190A: call    MagicTarget_GetParentActor
0x69190F: mov     esi, eax
0x691911: jmp     short loc_691915
0x691913: xor     esi, esi
0x691915: mov     eax, [edi+38h]
0x691918: push    ebp
0x691919: push    0; int
0x69191B: push    offset ??_R0?AVTESObjectWEAP@@@8; struct TypeDescriptor *
0x691920: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x691925: push    0; int
0x691927: push    eax; void *
0x691928: call    OblivionDynamicCast
0x69192D: add     esp, 14h
0x691930: test    esi, esi
0x691932: mov     ebp, eax
0x691934: jz      loc_6919E9
0x69193A: mov     ecx, [esi+58h]
0x69193D: test    ecx, ecx
0x69193F: jz      loc_6919E9
0x691945: test    ebp, ebp
0x691947: jz      loc_6919E9
0x69194D: mov     eax, [ecx]
0x69194F: mov     edx, [eax+3D4h]
0x691955: push    ebp
0x691956: call    edx
0x691958: cmp     byte ptr [edi+88h], 0
0x69195F: jz      short loc_6919A8
0x691961: mov     ecx, [esi+58h]
0x691964: mov     eax, [ecx]
0x691966: mov     edx, [eax+0ECh]
0x69196C: push    1
0x69196E: call    edx
0x691970: test    eax, eax
0x691972: jz      short loc_6919A8
0x691974: mov     ecx, [esi+58h]
0x691977: mov     eax, [ecx]
0x691979: mov     edx, [eax+0ECh]
0x69197F: push    1
0x691981: call    edx
0x691983: cmp     ebp, [eax+8]
0x691986: jnz     short loc_6919A8
0x691988: cmp     dword ptr [eax], 0
0x69198B: jz      short loc_6919A8
0x69198D: mov     byte ptr [edi+88h], 0
0x691994: mov     eax, [eax]
0x691996: mov     ebp, [eax]
0x691998: push    1
0x69199A: mov     ecx, ebp
0x69199C: call    sub_41F370
0x6919A1: mov     ecx, ebp
0x6919A3: call    sub_41F2F0
0x6919A8: cmp     esi, ds:0B333C4h
0x6919AE: jnz     loc_691A4A
0x6919B4: mov     ecx, [esi+58h]
0x6919B7: mov     edx, [ecx]
0x6919B9: mov     eax, [edx+304h]
0x6919BF: call    eax
0x6919C1: test    al, al
0x6919C3: jnz     loc_691A4A
0x6919C9: mov     ecx, [esi+58h]
0x6919CC: mov     edx, [ecx]
0x6919CE: mov     eax, [edx+2FCh]
0x6919D4: call    eax
0x6919D6: test    al, al
0x6919D8: jnz     short loc_691A4A
0x6919DA: push    0
0x6919DC: mov     ecx, edi
0x6919DE: call    ActiveEffect_Base_Remove
0x6919E3: pop     ebp
0x6919E4: pop     esi
0x6919E5: pop     edi
0x6919E6: retn    4
0x6919E9: cmp     byte ptr [edi+88h], 0
0x6919F0: jz      short loc_691A4A
0x6919F2: mov     eax, [edi+38h]
0x6919F5: push    0; int
0x6919F7: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x6919FC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x691A01: push    0; int
0x691A03: push    eax; void *
0x691A04: call    OblivionDynamicCast
0x691A09: mov     ebp, eax
0x691A0B: add     esp, 14h
0x691A0E: test    ebp, ebp
0x691A10: jz      short loc_691A4A
0x691A12: mov     ecx, esi; this
0x691A14: call    TESObjectREFR_GetContainer
0x691A19: push    eax
0x691A1A: push    esi; a1
0x691A1B: call    ContainerExtraData_GetContainerExtraDataForRef
0x691A20: add     esp, 8
0x691A23: push    1
0x691A25: push    ebp
0x691A26: mov     ecx, eax
0x691A28: call    ExtraContainerChanges_SetEquipped
0x691A2D: mov     esi, eax
0x691A2F: test    esi, esi
0x691A31: jz      short loc_691A4A
0x691A33: push    1
0x691A35: mov     ecx, esi
0x691A37: mov     byte ptr [edi+88h], 0
0x691A3E: call    sub_41F370
0x691A43: mov     ecx, esi
0x691A45: call    sub_41F2F0
0x691A4A: pop     ebp
0x691A4B: pop     esi
0x691A4C: pop     edi
0x691A4D: retn    4
