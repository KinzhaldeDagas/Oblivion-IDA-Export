0x4F8AD0: push    esi
0x4F8AD1: mov     esi, [esp+4+arg_4]
0x4F8AD5: test    esi, esi
0x4F8AD7: push    edi
0x4F8AD8: jnz     short loc_4F8AEC
0x4F8ADA: mov     ecx, ds:0B333C4h
0x4F8AE0: mov     eax, [ecx]
0x4F8AE2: mov     edx, [eax+170h]
0x4F8AE8: call    edx
0x4F8AEA: mov     esi, eax
0x4F8AEC: mov     eax, [esp+8+arg_0]
0x4F8AF0: test    eax, eax
0x4F8AF2: mov     edi, [esp+8+arg_C]
0x4F8AF6: jz      short loc_4F8B0C
0x4F8AF8: test    esi, esi
0x4F8AFA: jz      short loc_4F8B0C
0x4F8AFC: lea     ecx, [eax+44h]
0x4F8AFF: call    ExtraDataList_GetOwner
0x4F8B04: cmp     eax, esi
0x4F8B06: jnz     short loc_4F8B0C
0x4F8B08: fld1
0x4F8B0A: fstp    qword ptr [edi]
0x4F8B0C: cmp     byte ptr ds:0B361ACh, 0
0x4F8B13: jz      short loc_4F8B80
0x4F8B15: fldz
0x4F8B17: push    0; int
0x4F8B19: fcomp   qword ptr [edi]
0x4F8B1B: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8B20: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8B25: push    0; int
0x4F8B27: push    esi; void *
0x4F8B28: fnstsw  ax
0x4F8B2A: test    ah, 44h
0x4F8B2D: jnp     short loc_4F8B5A
0x4F8B2F: call    OblivionDynamicCast
0x4F8B34: add     esp, 14h
0x4F8B37: test    eax, eax
0x4F8B39: jz      short loc_4F8B42
0x4F8B3B: mov     eax, [eax+4]
0x4F8B3E: test    eax, eax
0x4F8B40: jnz     short loc_4F8B47
0x4F8B42: mov     eax, offset EmptyString
0x4F8B47: push    eax
0x4F8B48: push    offset aSIsTheOwner; "%s is the owner"
0x4F8B4D: call    Interface_ConsolePrint
0x4F8B52: add     esp, 8
0x4F8B55: pop     edi
0x4F8B56: mov     al, 1
0x4F8B58: pop     esi
0x4F8B59: retn
0x4F8B5A: call    OblivionDynamicCast
0x4F8B5F: add     esp, 14h
0x4F8B62: test    eax, eax
0x4F8B64: jz      short loc_4F8B6D
0x4F8B66: mov     eax, [eax+4]
0x4F8B69: test    eax, eax
0x4F8B6B: jnz     short loc_4F8B72
0x4F8B6D: mov     eax, offset EmptyString
0x4F8B72: push    eax
0x4F8B73: push    offset aSIsNotTheOwner; "%s is not the owner"
0x4F8B78: call    Interface_ConsolePrint
0x4F8B7D: add     esp, 8
0x4F8B80: pop     edi
0x4F8B81: mov     al, 1
0x4F8B83: pop     esi
0x4F8B84: retn
