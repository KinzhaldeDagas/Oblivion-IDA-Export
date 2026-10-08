0x6945C0: push    esi
0x6945C1: push    edi
0x6945C2: mov     edi, [esp+8+destination]
0x6945C6: push    edi
0x6945C7: mov     esi, ecx
0x6945C9: call    ActiveEffect_Base_CopyTo; Verified ActiveEffect_Base_CopyTo copies fields through object +0x30 (boundObjectOrParentForm) and stops there; it does not copy hitEffectList at +0x34. ActiveEffect_Ctor zeroes +0x34. The registered-effect vtables' copy slots either call this routine directly or call derived copy helpers that chain to it; inspected helpers copy their own fields but do not write +0x34. Therefore standard ActiveEffect clones start with an independent empty hit-effect list.
0x6945CE: push    0; int
0x6945D0: push    offset ??_R0?AVLightEffect@@@8; struct TypeDescriptor *
0x6945D5: push    offset ??_R0?AVActiveEffect@@@8; struct _s_RTTICompleteObjectLocator *
0x6945DA: push    0; int
0x6945DC: push    edi; void *
0x6945DD: call    OblivionDynamicCast
0x6945E2: add     esp, 14h
0x6945E5: test    eax, eax
0x6945E7: jz      short loc_6945F5
0x6945E9: add     esi, 38h ; '8'
0x6945EC: push    esi; incoming
0x6945ED: lea     ecx, [eax+38h]; this
0x6945F0: call    OB_NiSmartPointer_Assign_010201A0; SpeedTreeOBSE 2026-07-14: smart-pointer assignment releases the old reference before storing/AddRefing the new one. Transaction rollback snapshots must hold their own AddRef.
0x6945F5: pop     edi
0x6945F6: pop     esi
0x6945F7: retn    4
