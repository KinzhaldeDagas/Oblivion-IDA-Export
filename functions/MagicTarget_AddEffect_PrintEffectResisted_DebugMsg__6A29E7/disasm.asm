0x6A29E7: mov     ebp, [ebp+0Ch]
0x6A29EA: lea     ecx, [esp+arg_14]
0x6A29EE: push    ecx
0x6A29EF: mov     ecx, ebp
0x6A29F1: call    EffectItem_GetName
0x6A29F6: mov     esi, [esi+4]
0x6A29F9: test    esi, esi
0x6A29FB: mov     eax, [eax]
0x6A29FD: mov     [esp+arg_134], 0
0x6A2A08: jnz     short loc_6A2A0F
0x6A2A0A: mov     esi, offset EmptyString
0x6A2A0F: fld     [esp+arg_20]
0x6A2A13: sub     esp, 8
0x6A2A16: fstp    [esp+8+var_C+4]
0x6A2A19: push    eax
0x6A2A1A: push    esi
0x6A2A1B: push    edi
0x6A2A1C: push    offset aTargetSFullyRe; "Target: %s FULLY RESISTED Spell: %s Eff"...
0x6A2A21: call    Interface_ConsolePrint
0x6A2A26: mov     edx, dword ptr [esp+18h+arg_14]
0x6A2A2A: push    edx
0x6A2A2B: call    FormHeapFree
0x6A2A30: add     esp, 1Ch
0x6A2A33: jmp     MagicTarget_AddEffect___Return_0
