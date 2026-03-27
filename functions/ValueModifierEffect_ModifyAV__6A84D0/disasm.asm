0x6A84D0: push    esi
0x6A84D1: push    edi
0x6A84D2: mov     edi, [esp+8+arg_0]
0x6A84D6: test    edi, edi
0x6A84D8: mov     esi, ecx
0x6A84DA: jz      ValueModifierEffect_ModifyAV___Done
0x6A84E0: mov     ecx, edi
0x6A84E2: call    Actor_IsPlayer
0x6A84E7: test    al, al
0x6A84E9: jz      short ValueModifierEffect_ModifyAV___GetCasterActor
0x6A84EB: cmp     dword ptr [esi+28h], 4
0x6A84EF: jnz     short ValueModifierEffect_ModifyAV___GetCasterActor
0x6A84F1: mov     eax, [esi+0Ch]
0x6A84F4: mov     ecx, [eax+1Ch]
0x6A84F7: mov     edx, [ecx+58h]
0x6A84FA: shr     edx, 1
0x6A84FC: test    dl, 1
0x6A84FF: jz      short ValueModifierEffect_ModifyAV___GetCasterActor
