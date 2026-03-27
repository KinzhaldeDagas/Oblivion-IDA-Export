0x488830: push    0FFFFFFFFh
0x488832: push    offset SEH_488830
0x488837: mov     eax, large fs:0
0x48883D: push    eax
0x48883E: sub     esp, 8
0x488841: push    ebx
0x488842: push    ebp
0x488843: push    esi
0x488844: push    edi
0x488845: mov     eax, ds:0B30AACh
0x48884A: xor     eax, esp
0x48884C: push    eax
0x48884D: lea     eax, [esp+28h+var_C]
0x488851: mov     large fs:0, eax
0x488857: mov     edi, ecx
0x488859: mov     eax, [edi+8]
0x48885C: push    0; int
0x48885E: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x488863: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x488868: push    0; int
0x48886A: push    eax; void *
0x48886B: call    OblivionDynamicCast
0x488870: mov     ecx, [edi+8]
0x488873: push    ecx
0x488874: mov     ebx, eax
0x488876: call    TESHealthForm_GetHealthForForm
0x48887B: mov     edx, [edi+8]
0x48887E: push    0; int
0x488880: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x488885: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48888A: push    0; int
0x48888C: push    edx; void *
0x48888D: mov     [esp+54h+var_10], eax
0x488891: call    OblivionDynamicCast
0x488896: mov     esi, eax
0x488898: add     esp, 2Ch
0x48889B: test    esi, esi
0x48889D: jz      short loc_488902
0x48889F: mov     eax, [edi]
0x4888A1: test    eax, eax
0x4888A3: jz      short loc_4888E5
0x4888A5: mov     ebp, [eax]
0x4888A7: test    ebp, ebp
0x4888A9: jz      short loc_4888E5
0x4888AB: mov     ecx, ebp
0x4888AD: call    ExtraDataList_GetHealthData
0x4888B2: fcomp   dword ptr ds:0A30634h
0x4888B8: fnstsw  ax
0x4888BA: test    ah, 44h
0x4888BD: jnp     short loc_4888C8
0x4888BF: mov     ecx, ebp
0x4888C1: call    ExtraDataList_GetHealthData
0x4888C6: jmp     short loc_488908
0x4888C8: mov     eax, [esi]
0x4888CA: mov     edx, [eax+10h]
0x4888CD: mov     ecx, esi
0x4888CF: call    edx
0x4888D1: test    eax, eax
0x4888D3: mov     [esp+28h+var_14], eax
0x4888D7: fild    [esp+28h+var_14]
0x4888DB: jge     short loc_488908
0x4888DD: fadd    dword ptr ds:0A2FC78h
0x4888E3: jmp     short loc_488908
0x4888E5: mov     eax, [esi]
0x4888E7: mov     edx, [eax+10h]
0x4888EA: mov     ecx, esi
0x4888EC: call    edx
0x4888EE: test    eax, eax
0x4888F0: mov     [esp+28h+var_14], eax
0x4888F4: fild    [esp+28h+var_14]
0x4888F8: jge     short loc_488908
0x4888FA: fadd    dword ptr ds:0A2FC78h
0x488900: jmp     short loc_488908
0x488902: fld     dword ptr ds:0A30634h
0x488908: fstp    [esp+28h+var_14]
0x48890C: fld     [esp+28h+var_14]
0x488910: call    Double_To_SInt32
0x488915: mov     ebp, [esp+28h+arg_4]
0x488919: mov     ecx, [ebp+4]
0x48891C: test    ecx, ecx
0x48891E: mov     esi, eax
0x488920: jz      short loc_48892E
0x488922: mov     eax, [ecx]
0x488924: mov     edx, [eax+40h]
0x488927: push    8000000h
0x48892C: call    edx
0x48892E: test    ebx, ebx
0x488930: jz      loc_488A87
0x488936: fld     [esp+28h+arg_0]
0x48893A: fild    [esp+28h+var_10]
0x48893E: fcomp   st(1)
0x488940: fnstsw  ax
0x488942: test    ah, 41h
0x488945: jz      short loc_4889BC
0x488947: cmp     esi, [esp+28h+var_10]
0x48894B: jg      short loc_4889BC
0x48894D: mov     eax, [edi]
0x48894F: fstp    st
0x488951: test    eax, eax
0x488953: jz      loc_488A87
0x488959: mov     ecx, [esp+28h+arg_8]
0x48895D: lea     ecx, [ecx+0]
0x488960: mov     esi, [eax]
0x488962: test    esi, esi
0x488964: jz      loc_488A87
0x48896A: cmp     esi, ecx
0x48896C: jz      short loc_48897A
0x48896E: mov     eax, [eax+4]
0x488971: test    eax, eax
0x488973: jnz     short loc_488960
0x488975: jmp     loc_488A87
0x48897A: mov     ecx, esi
0x48897C: call    sub_41F610
0x488981: cmp     dword ptr [esi+4], 0
0x488985: jnz     loc_488A87
0x48898B: cmp     byte ptr [esp+28h+arg_C], 0
0x488990: jz      loc_488A87
0x488996: mov     eax, [edi+8]
0x488999: push    0
0x48899B: push    1
0x48899D: push    eax
0x48899E: mov     ecx, ebp
0x4889A0: call    ContainerExtraData_GetEntryForForm
0x4889A5: mov     ecx, [eax]
0x4889A7: push    esi
0x4889A8: call    BSSimpleList_Remove
0x4889AD: mov     eax, [esi]
0x4889AF: mov     edx, [eax]
0x4889B1: push    1
0x4889B3: mov     ecx, esi
0x4889B5: call    edx
0x4889B7: jmp     loc_488A87
0x4889BC: mov     eax, [edi]
0x4889BE: test    eax, eax
0x4889C0: jnz     short loc_488A1F
0x4889C2: push    14h; Size
0x4889C4: fstp    st
0x4889C6: call    FormHeapAlloc
0x4889CB: add     esp, 4
0x4889CE: mov     [esp+28h+arg_C], eax
0x4889D2: xor     ebp, ebp
0x4889D4: cmp     eax, ebp
0x4889D6: mov     [esp+28h+var_4], ebp
0x4889DA: jz      short loc_4889E5
0x4889DC: mov     ecx, eax
0x4889DE: call    ExtraDataList_constr
0x4889E3: mov     ebp, eax
0x4889E5: push    8; Size
0x4889E7: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4889EF: call    FormHeapAlloc
0x4889F4: xor     esi, esi
0x4889F6: add     esp, 4
0x4889F9: cmp     eax, esi
0x4889FB: jz      short loc_488A04
0x4889FD: mov     [eax], esi
0x4889FF: mov     [eax+4], esi
0x488A02: mov     esi, eax
0x488A04: fld     [esp+28h+arg_0]
0x488A08: push    ecx
0x488A09: mov     ecx, ebp
0x488A0B: fstp    [esp+2Ch+var_2C]; float
0x488A0E: call    sub_41EE90
0x488A13: push    ebp
0x488A14: mov     ecx, esi
0x488A16: call    BSSimpleList_PushFront
0x488A1B: mov     [edi], esi
0x488A1D: jmp     short loc_488A87
0x488A1F: mov     edx, [esp+28h+arg_8]
0x488A23: mov     ecx, [eax]
0x488A25: test    ecx, ecx
0x488A27: jz      short loc_488A34
0x488A29: cmp     ecx, edx
0x488A2B: jz      short loc_488A5B
0x488A2D: mov     eax, [eax+4]
0x488A30: test    eax, eax
0x488A32: jnz     short loc_488A23
0x488A34: push    14h; Size
0x488A36: fstp    st
0x488A38: call    FormHeapAlloc
0x488A3D: add     esp, 4
0x488A40: mov     [esp+28h+arg_C], eax
0x488A44: test    eax, eax
0x488A46: mov     [esp+28h+var_4], 1
0x488A4E: jz      short loc_488A66
0x488A50: mov     ecx, eax
0x488A52: call    ExtraDataList_constr
0x488A57: mov     esi, eax
0x488A59: jmp     short loc_488A68
0x488A5B: push    ecx
0x488A5C: fstp    [esp+2Ch+var_2C]; float
0x488A5F: call    ExtraDataList_SetHealthValue
0x488A64: jmp     short loc_488A87
0x488A66: xor     esi, esi
0x488A68: fld     [esp+28h+arg_0]
0x488A6C: push    ecx
0x488A6D: mov     ecx, esi
0x488A6F: fstp    [esp+2Ch+var_2C]; float
0x488A72: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x488A7A: call    ExtraDataList_SetHealthValue
0x488A7F: mov     ecx, [edi]
0x488A81: push    esi
0x488A82: call    BSSimpleList_PushFront
0x488A87: mov     ecx, dword ptr [esp+28h+var_C]
0x488A8B: mov     large fs:0, ecx
0x488A92: pop     ecx
0x488A93: pop     edi
0x488A94: pop     esi
0x488A95: pop     ebp
0x488A96: pop     ebx
0x488A97: add     esp, 14h
0x488A9A: retn    10h
