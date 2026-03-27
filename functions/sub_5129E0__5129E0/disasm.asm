0x5129E0: push    ecx
0x5129E1: mov     ecx, [esp+4+l]
0x5129E5: mov     edx, [esp+4+arg_10]
0x5129E9: lea     eax, [esp+4+var_4]
0x5129EC: push    eax; UInt16
0x5129ED: mov     eax, [esp+8+arg_C]
0x5129F1: push    ecx; l
0x5129F2: mov     ecx, [esp+0Ch+a4]
0x5129F6: push    edx; a6
0x5129F7: mov     edx, [esp+10h+a3]
0x5129FB: push    eax; a5
0x5129FC: mov     eax, [esp+14h+arg_4]
0x512A00: push    ecx; a4
0x512A01: mov     ecx, [esp+18h+a1]
0x512A05: push    edx; a3
0x512A06: push    eax; a2
0x512A07: push    ecx; a1
0x512A08: mov     dword ptr [esp+24h+var_4], 0
0x512A10: call    Script_ExtractArgs
0x512A15: add     esp, 20h
0x512A18: test    al, al
0x512A1A: jnz     short loc_512A1E
0x512A1C: pop     ecx
0x512A1D: retn
0x512A1E: mov     eax, dword ptr [esp+4+var_4]
0x512A21: test    eax, eax
0x512A23: jz      loc_512AD0
0x512A29: push    esi
0x512A2A: push    0; int
0x512A2C: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x512A31: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x512A36: push    0; int
0x512A38: push    eax; void *
0x512A39: call    OblivionDynamicCast
0x512A3E: mov     edx, dword ptr [esp+1Ch+var_4]
0x512A42: push    0; int
0x512A44: push    offset ??_R0?AVTESObjectBOOK@@@8; struct TypeDescriptor *
0x512A49: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x512A4E: push    0; int
0x512A50: push    edx; void *
0x512A51: mov     esi, eax
0x512A53: call    OblivionDynamicCast
0x512A58: add     esp, 28h
0x512A5B: test    eax, eax
0x512A5D: jnz     short loc_512A84
0x512A5F: test    esi, esi
0x512A61: jz      short loc_512A74
0x512A63: mov     ecx, ds:0B333C4h
0x512A69: lea     eax, [esi+18h]
0x512A6C: push    eax
0x512A6D: call    PlayerCharacter_SetCurrentMagicItem
0x512A72: jmp     short loc_512A90
0x512A74: mov     ecx, ds:0B333C4h
0x512A7A: xor     eax, eax
0x512A7C: push    eax
0x512A7D: call    PlayerCharacter_SetCurrentMagicItem
0x512A82: jmp     short loc_512A90
0x512A84: mov     ecx, ds:0B333C4h
0x512A8A: push    eax
0x512A8B: call    sub_664850
0x512A90: cmp     byte ptr ds:0B361ACh, 0
0x512A97: jz      short loc_512ACF
0x512A99: test    esi, esi
0x512A9B: jnz     short loc_512AB5
0x512A9D: mov     esi, offset aNone_0; "NONE"
0x512AA2: push    esi
0x512AA3: push    offset aPlayerSpellSet; "Player Spell set to %s"
0x512AA8: call    Interface_ConsolePrint
0x512AAD: add     esp, 8
0x512AB0: pop     esi
0x512AB1: mov     al, 1
0x512AB3: pop     ecx
0x512AB4: retn
0x512AB5: mov     esi, [esi+1Ch]
0x512AB8: test    esi, esi
0x512ABA: jnz     short loc_512AC1
0x512ABC: mov     esi, offset EmptyString
0x512AC1: push    esi
0x512AC2: push    offset aPlayerSpellSet; "Player Spell set to %s"
0x512AC7: call    Interface_ConsolePrint
0x512ACC: add     esp, 8
0x512ACF: pop     esi
0x512AD0: mov     al, 1
0x512AD2: pop     ecx
0x512AD3: retn
