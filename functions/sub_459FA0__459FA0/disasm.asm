0x459FA0: mov     eax, [esp+arg_0]
0x459FA4: push    esi
0x459FA5: xor     esi, esi
0x459FA7: test    eax, eax
0x459FA9: jz      short loc_45A01A
0x459FAB: push    esi; int
0x459FAC: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x459FB1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x459FB6: push    esi; int
0x459FB7: push    eax; void *
0x459FB8: call    OblivionDynamicCast
0x459FBD: add     esp, 14h
0x459FC0: test    eax, eax
0x459FC2: jz      short loc_45A01A
0x459FC4: cmp     [eax+58h], esi
0x459FC7: jz      short loc_45A01A
0x459FC9: mov     edx, [eax]
0x459FCB: mov     ecx, eax
0x459FCD: mov     eax, [edx+124h]
0x459FD3: push    504D4156h
0x459FD8: call    eax
0x459FDA: mov     ecx, eax
0x459FDC: call    sub_6A1F30
0x459FE1: fstp    [esp+4+arg_0]
0x459FE5: fldz
0x459FE7: fcomp   [esp+4+arg_0]
0x459FEB: fnstsw  ax
0x459FED: test    ah, 44h
0x459FF0: jnp     short loc_45A01A
0x459FF2: push    4; Size
0x459FF4: call    FormHeapAlloc
0x459FF9: add     esp, 4
0x459FFC: test    eax, eax
0x459FFE: jz      short loc_45A00E
0x45A000: fldz
0x45A002: pop     esi
0x45A003: fstp    dword ptr [eax]
0x45A005: fld     [esp+arg_0]
0x45A009: fstp    dword ptr [eax]
0x45A00B: retn    4
0x45A00E: fld     [esp+4+arg_0]
0x45A012: xor     eax, eax
0x45A014: fstp    dword ptr [eax]
0x45A016: pop     esi
0x45A017: retn    4
0x45A01A: mov     eax, esi
0x45A01C: pop     esi
0x45A01D: retn    4
