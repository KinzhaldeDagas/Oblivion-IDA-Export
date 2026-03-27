0x413CD7: lea     eax, [esp+a2]
0x413CDB: push    eax
0x413CDC: mov     ecx, esi
0x413CDE: call    EffectItem_GetQualifiedName_SkillAttr
0x413CE3: push    ebx; a3
0x413CE4: lea     ecx, [esp+4+a2]
0x413CE8: push    ecx; a2
0x413CE9: mov     ecx, edi; this
0x413CEB: call    BSStringT_Set
0x413CF0: jmp     short EffectItem_BuildDisplayString___CheckMagnitudeType
