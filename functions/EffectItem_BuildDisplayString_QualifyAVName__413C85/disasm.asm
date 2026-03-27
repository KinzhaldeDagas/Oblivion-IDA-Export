0x413C85: lea     eax, [esp+arg_10]
0x413C89: push    eax
0x413C8A: mov     ecx, esi
0x413C8C: call    EffectItem_GetName
0x413C91: mov     ecx, [esi+14h]
0x413C94: mov     [esp+arg_90], ebp
0x413C9B: mov     ebp, [eax]
0x413C9D: push    ecx
0x413C9E: call    ActorValue_GetName
0x413CA3: push    eax
0x413CA4: push    ebp
0x413CA5: lea     ecx, [esp+0Ch+a2]
0x413CA9: push    offset aSS; "%s %s"
0x413CAE: push    ecx
0x413CAF: call    __sprintf
0x413CB4: mov     edx, dword ptr [esp+14h+arg_10]
0x413CB8: push    edx
0x413CB9: mov     byte ptr [esp+18h+arg_90], bl
0x413CC0: call    FormHeapFree
0x413CC5: add     esp, 18h
0x413CC8: push    ebx; a3
0x413CC9: lea     ecx, [esp+4+a2]
0x413CCD: push    ecx; a2
0x413CCE: mov     ecx, edi; this
0x413CD0: call    BSStringT_Set
0x413CD5: jmp     short EffectItem_BuildDisplayString___CheckMagnitudeType
