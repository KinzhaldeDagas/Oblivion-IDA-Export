0x692870: mov     eax, [esp+arg_0]
0x692874: push    esi
0x692875: push    edi
0x692876: push    0; int
0x692878: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x69287D: push    offset ??_R0?AVMagicTarget@@@8; struct _s_RTTICompleteObjectLocator *
0x692882: push    0; int
0x692884: push    eax; void *
0x692885: mov     edi, ecx
0x692887: call    OblivionDynamicCast
0x69288C: mov     esi, eax
0x69288E: add     esp, 14h
0x692891: test    esi, esi
0x692893: jnz     short loc_69289C
0x692895: pop     edi
0x692896: xor     al, al
0x692898: pop     esi
0x692899: retn    4
0x69289C: mov     ecx, esi
0x69289E: call    Actor_IsPlayer
0x6928A3: test    al, al
0x6928A5: jnz     short loc_692895
0x6928A7: fld     dword ptr [edi+18h]
0x6928AA: push    ecx
0x6928AB: fstp    [esp+0Ch+arg_0]
0x6928AF: mov     ecx, esi
0x6928B1: fld     [esp+0Ch+arg_0]
0x6928B5: fstp    [esp+0Ch+var_C]; float
0x6928B8: call    Actor_GetLevel
0x6928BD: movzx   ecx, ax
0x6928C0: push    ecx; int
0x6928C1: call    Calc_MagnitudeAffectsLevel
0x6928C6: add     esp, 8
0x6928C9: pop     edi
0x6928CA: pop     esi
0x6928CB: retn    4
