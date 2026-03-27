0x413CF2: cmp     dword ptr [esi], 4B434F4Ch
0x413CF8: jnz     short EffectItem_BuildDisplayString___GetUnqualifiedName
0x413CFA: mov     edx, sMagicEffectItemCreateLock
0x413D00: push    ebx; a3
0x413D01: push    edx; a2
0x413D02: mov     ecx, edi; this
0x413D04: call    BSStringT_Set
0x413D09: jmp     short EffectItem_BuildDisplayString___CheckMagnitudeType
