0x419BFA: test    esi, esi
0x419BFC: jz      short MagicItem_GetFXEffect___Return_0
0x419BFE: cmp     dword ptr [esi], 46464553h
0x419C04: jnz     short MagicItem_GetFXEffect___Return_StrongestEffect
0x419C06: mov     ecx, esi
0x419C08: call    EffectItem_GetSCIT_VFXCode
0x419C0D: test    eax, eax
0x419C0F: jz      short MagicItem_GetFXEffect___Return_StrongestEffect
0x419C11: push    eax
0x419C12: call    EffectSettingCollection_LookupByCode
0x419C17: add     esp, 4
0x419C1A: pop     ebp
0x419C1B: pop     ebx
0x419C1C: pop     edi
0x419C1D: pop     esi
0x419C1E: pop     ecx
0x419C1F: retn    4
