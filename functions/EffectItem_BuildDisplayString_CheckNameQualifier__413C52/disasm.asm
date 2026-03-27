0x413C52: mov     eax, [esi+1Ch]
0x413C55: add     esp, 4
0x413C58: test    dword ptr [eax+58h], 1180000h
0x413C5F: jz      EffectItem_BuildDisplayString___QualifyLockName
0x413C65: test    byte ptr [eax+5Bh], 1
0x413C69: jnz     EffectItem_BuildDisplayString___QualifyLockName
0x413C6F: mov     ecx, [eax+58h]
0x413C72: shr     ecx, 14h
0x413C75: test    cl, 1
0x413C78: jnz     short EffectItem_BuildDisplayString___QualifySkillAttrName
0x413C7A: mov     edx, [eax+58h]
0x413C7D: shr     edx, 13h
0x413C80: test    dl, 1
0x413C83: jnz     short EffectItem_BuildDisplayString___QualifySkillAttrName
