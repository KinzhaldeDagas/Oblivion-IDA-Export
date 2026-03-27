0x4F8B90: mov     ecx, [esp+arg_4]
0x4F8B94: call    TESObjectCELL_GetOwner
0x4F8B99: mov     ecx, [esp+arg_8]
0x4F8B9D: cmp     eax, ecx
0x4F8B9F: mov     eax, [esp+arg_C]
0x4F8BA3: jnz     short loc_4F8BA9
0x4F8BA5: fld1
0x4F8BA7: fstp    qword ptr [eax]
0x4F8BA9: cmp     byte ptr ds:0B361ACh, 0
0x4F8BB0: jz      short loc_4F8C1B
0x4F8BB2: fldz
0x4F8BB4: push    0; int
0x4F8BB6: fcomp   qword ptr [eax]
0x4F8BB8: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4F8BBD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F8BC2: push    0; int
0x4F8BC4: push    ecx; void *
0x4F8BC5: fnstsw  ax
0x4F8BC7: test    ah, 44h
0x4F8BCA: jnp     short loc_4F8BF5
0x4F8BCC: call    OblivionDynamicCast
0x4F8BD1: add     esp, 14h
0x4F8BD4: test    eax, eax
0x4F8BD6: jz      short loc_4F8BDF
0x4F8BD8: mov     eax, [eax+4]
0x4F8BDB: test    eax, eax
0x4F8BDD: jnz     short loc_4F8BE4
0x4F8BDF: mov     eax, offset EmptyString
0x4F8BE4: push    eax
0x4F8BE5: push    offset aSIsTheOwner; "%s is the owner"
0x4F8BEA: call    Interface_ConsolePrint
0x4F8BEF: add     esp, 8
0x4F8BF2: mov     al, 1
0x4F8BF4: retn
0x4F8BF5: call    OblivionDynamicCast
0x4F8BFA: add     esp, 14h
0x4F8BFD: test    eax, eax
0x4F8BFF: jz      short loc_4F8C08
0x4F8C01: mov     eax, [eax+4]
0x4F8C04: test    eax, eax
0x4F8C06: jnz     short loc_4F8C0D
0x4F8C08: mov     eax, offset EmptyString
0x4F8C0D: push    eax
0x4F8C0E: push    offset aSIsNotTheOwner; "%s is not the owner"
0x4F8C13: call    Interface_ConsolePrint
0x4F8C18: add     esp, 8
0x4F8C1B: mov     al, 1
0x4F8C1D: retn
