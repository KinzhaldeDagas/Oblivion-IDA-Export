0x68F1F0: push    esi
0x68F1F1: push    edi
0x68F1F2: mov     edi, [esp+8+arg_0]
0x68F1F6: push    edi
0x68F1F7: mov     esi, ecx
0x68F1F9: call    ActiveEffect_Base_CopyTo; Verified ActiveEffect_Base_CopyTo copies fields through object +0x30 (boundObjectOrParentForm) and stops there; it does not copy hitEffectList at +0x34. ActiveEffect_Ctor zeroes +0x34. The registered-effect vtables' copy slots either call this routine directly or call derived copy helpers that chain to it; inspected helpers copy their own fields but do not write +0x34. Therefore standard ActiveEffect clones start with an independent empty hit-effect list.
0x68F1FE: push    0; int
0x68F200: push    offset ??_R0?AVAssociatedItemEffect@@@8; struct TypeDescriptor *
0x68F205: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x68F20A: push    0; int
0x68F20C: push    edi; void *
0x68F20D: call    OblivionDynamicCast
0x68F212: add     esp, 14h
0x68F215: test    eax, eax
0x68F217: jz      short loc_68F21F
0x68F219: mov     ecx, [esi+38h]
0x68F21C: mov     [eax+38h], ecx
0x68F21F: pop     edi
0x68F220: pop     esi
0x68F221: retn    4
