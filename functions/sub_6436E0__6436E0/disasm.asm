0x6436E0: push    ebx
0x6436E1: push    esi
0x6436E2: mov     esi, [esp+8+arg_0]
0x6436E6: test    esi, esi
0x6436E8: mov     ebx, ecx
0x6436EA: jz      short loc_64373A
0x6436EC: push    edi
0x6436ED: push    0; int
0x6436EF: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6436F4: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x6436F9: push    0; int
0x6436FB: push    esi; void *
0x6436FC: call    OblivionDynamicCast
0x643701: mov     edi, eax
0x643703: add     esp, 14h
0x643706: test    edi, edi
0x643708: jz      short loc_643739
0x64370A: fld     [esp+0Ch+arg_4]
0x64370E: fcomp   qword ptr ds:0A2F938h
0x643714: fnstsw  ax
0x643716: test    ah, 41h
0x643719: jnz     short loc_643727
0x64371B: mov     eax, [ebx]
0x64371D: mov     edx, [eax+14h]
0x643720: push    1
0x643722: push    esi
0x643723: mov     ecx, ebx
0x643725: call    edx
0x643727: mov     eax, [edi]
0x643729: fldz
0x64372B: mov     edx, [eax+1C0h]
0x643731: push    ecx
0x643732: mov     ecx, edi
0x643734: fstp    [esp+10h+var_10]
0x643737: call    edx
0x643739: pop     edi
0x64373A: pop     esi
0x64373B: pop     ebx
0x64373C: retn    8
