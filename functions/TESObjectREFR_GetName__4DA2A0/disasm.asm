0x4DA2A0: mov     ecx, [ecx+1Ch]
0x4DA2A3: push    0; int
0x4DA2A5: push    offset ??_R0?AVTESFullName@@@8; struct TypeDescriptor *
0x4DA2AA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4DA2AF: push    0; int
0x4DA2B1: push    ecx; void *
0x4DA2B2: call    OblivionDynamicCast
0x4DA2B7: add     esp, 14h
0x4DA2BA: test    eax, eax
0x4DA2BC: jz      short loc_4DA2C5
0x4DA2BE: mov     eax, [eax+4]
0x4DA2C1: test    eax, eax
0x4DA2C3: jnz     short locret_4DA2CA
0x4DA2C5: mov     eax, offset EmptyString
0x4DA2CA: retn
