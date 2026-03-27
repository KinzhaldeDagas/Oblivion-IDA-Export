0x6A2A98: mov     ebp, [ebp+0Ch]
0x6A2A9B: lea     eax, [esp+arg_14]
0x6A2A9F: push    eax
0x6A2AA0: mov     ecx, ebp
0x6A2AA2: call    EffectItem_GetName
0x6A2AA7: mov     esi, [esi+4]
0x6A2AAA: test    esi, esi
0x6A2AAC: mov     eax, [eax]
0x6A2AAE: mov     [esp+arg_134], 1
0x6A2AB9: jnz     short loc_6A2AC0
0x6A2ABB: mov     esi, offset EmptyString
0x6A2AC0: push    eax
0x6A2AC1: push    esi
0x6A2AC2: push    edi
0x6A2AC3: push    offset aInvalidTargetT; "Invalid Target: Target: %s Spell: %s Ef"...
0x6A2AC8: call    Interface_ConsolePrint
0x6A2ACD: mov     ecx, dword ptr [esp+10h+arg_14]
0x6A2AD1: push    ecx
0x6A2AD2: call    FormHeapFree
0x6A2AD7: add     esp, 14h
0x6A2ADA: jmp     MagicTarget_AddEffect___Return_0
