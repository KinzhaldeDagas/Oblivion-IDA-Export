0x60E580: sub     esp, 50h
0x60E583: fldz
0x60E585: push    ebx
0x60E586: push    ebp
0x60E587: mov     ebp, ecx
0x60E589: fcom    dword ptr [ebp+108h]
0x60E58F: xor     ebx, ebx
0x60E591: mov     [esp+58h+var_40], ebx
0x60E595: fnstsw  ax
0x60E597: test    ah, 41h
0x60E59A: jnz     loc_60E70D
0x60E5A0: fst     dword ptr [ebp+108h]
0x60E5A6: lea     ecx, [ebp+44h]; this
0x60E5A9: fst     [esp+58h+var_4C]
0x60E5AD: fstp    [esp+58h+var_50]
0x60E5B1: call    ExtraDataList_GetContainerChanges
0x60E5B6: cmp     eax, ebx
0x60E5B8: mov     [esp+58h+var_44], eax
0x60E5BC: jz      loc_60E6FD
0x60E5C2: push    esi
0x60E5C3: xor     edx, edx
0x60E5C5: push    edi
0x60E5C6: mov     [esp+60h+var_48], edx
0x60E5CA: jmp     short loc_60E5D4
0x60E5CC: align 10h
0x60E5D0: mov     eax, [esp+64h+var_48]
0x60E5D4: cmp     edx, 0Dh
0x60E5D7: jnz     short loc_60E64E
0x60E5D9: mov     ecx, [ebp+58h]
0x60E5DC: test    ecx, ecx
0x60E5DE: jz      loc_60E6E7
0x60E5E4: mov     eax, [ecx]
0x60E5E6: mov     edx, [eax+0F8h]
0x60E5EC: push    1
0x60E5EE: call    edx
0x60E5F0: mov     esi, eax
0x60E5F2: test    esi, esi
0x60E5F4: jz      loc_60E6E7
0x60E5FA: mov     eax, [esi+8]
0x60E5FD: push    0; int
0x60E5FF: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x60E604: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60E609: push    0; int
0x60E60B: push    eax; void *
0x60E60C: call    OblivionDynamicCast
0x60E611: add     esp, 14h
0x60E614: test    eax, eax
0x60E616: jz      loc_60E6E7
0x60E61C: mov     ecx, eax
0x60E61E: call    TESObjectARMO_ISHeavyArmor
0x60E623: test    al, al
0x60E625: push    ebp
0x60E626: mov     ecx, esi
0x60E628: jnz     short loc_60E63C
0x60E62A: call    sub_488CB0
0x60E62F: fadd    [esp+64h+var_50]
0x60E633: fstp    [esp+64h+var_50]
0x60E637: jmp     loc_60E6E7
0x60E63C: call    sub_488CB0
0x60E641: fadd    [esp+64h+var_54]
0x60E645: fstp    [esp+64h+var_54]
0x60E649: jmp     loc_60E6E7
0x60E64E: push    0
0x60E650: push    edx
0x60E651: mov     ecx, eax
0x60E653: call    ContainerExtraData_GetEquippedInstance
0x60E658: mov     edi, eax
0x60E65A: test    edi, edi
0x60E65C: jz      loc_60E6E7
0x60E662: mov     eax, [edi+8]
0x60E665: push    0; int
0x60E667: push    offset ??_R0?AVTESObjectARMO@@@8; struct TypeDescriptor *
0x60E66C: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x60E671: push    0; int
0x60E673: push    eax; void *
0x60E674: call    OblivionDynamicCast
0x60E679: mov     esi, eax
0x60E67B: add     esp, 14h
0x60E67E: test    esi, esi
0x60E680: jz      short loc_60E6D7
0x60E682: xor     cl, cl
0x60E684: test    ebx, ebx
0x60E686: jz      short loc_60E6A6
0x60E688: xor     eax, eax
0x60E68A: test    ebx, ebx
0x60E68C: jle     short loc_60E6A6
0x60E68E: mov     edi, edi
0x60E690: test    cl, cl
0x60E692: jnz     short loc_60E6D7
0x60E694: cmp     [esp+eax*4+60h+var_40], esi
0x60E698: setz    cl
0x60E69B: add     eax, 1
0x60E69E: cmp     eax, ebx
0x60E6A0: jl      short loc_60E690
0x60E6A2: test    cl, cl
0x60E6A4: jnz     short loc_60E6D7
0x60E6A6: mov     ecx, esi
0x60E6A8: call    TESObjectARMO_ISHeavyArmor
0x60E6AD: test    al, al
0x60E6AF: push    ebp
0x60E6B0: mov     ecx, edi
0x60E6B2: jnz     short loc_60E6C3
0x60E6B4: call    sub_488CB0
0x60E6B9: fadd    [esp+60h+var_4C]
0x60E6BD: fstp    [esp+60h+var_4C]
0x60E6C1: jmp     short loc_60E6D0
0x60E6C3: call    sub_488CB0
0x60E6C8: fadd    [esp+60h+var_50]
0x60E6CC: fstp    [esp+60h+var_50]; float
0x60E6D0: mov     [esp+ebx*4+60h+var_40], esi
0x60E6D4: add     ebx, 1
0x60E6D7: mov     ecx, edi
0x60E6D9: call    ContainerEntryExtraData_DestroyDataTable
0x60E6DE: push    edi
0x60E6DF: call    FormHeapFree
0x60E6E4: add     esp, 4
0x60E6E7: mov     edx, [esp+64h+var_4C]
0x60E6EB: add     edx, 1
0x60E6EE: cmp     edx, 10h
0x60E6F1: mov     [esp+64h+var_4C], edx; float
0x60E6F5: jl      loc_60E5D0
0x60E6FB: pop     edi
0x60E6FC: pop     esi
0x60E6FD: fld     [esp+5Ch+var_54]
0x60E701: fadd    [esp+5Ch+var_50]
0x60E705: fstp    dword ptr [ebp+108h]
0x60E70B: jmp     short Character_GetArmorRating___CalcLightArmorPerk
0x60E70D: fstp    st
