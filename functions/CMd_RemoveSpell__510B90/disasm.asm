0x510B90: push    ecx
0x510B91: mov     ecx, [esp+4+l]
0x510B95: mov     edx, [esp+4+arg_10]
0x510B99: push    esi
0x510B9A: mov     esi, [esp+8+a4]
0x510B9E: lea     eax, [esp+8+var_4]
0x510BA2: push    eax; UInt16
0x510BA3: mov     eax, [esp+0Ch+arg_C]
0x510BA7: push    ecx; l
0x510BA8: mov     ecx, [esp+10h+a3]
0x510BAC: push    edx; a6
0x510BAD: mov     edx, [esp+14h+arg_4]
0x510BB1: push    eax; a5
0x510BB2: mov     eax, [esp+18h+a1]
0x510BB6: push    esi; a4
0x510BB7: push    ecx; a3
0x510BB8: push    edx; a2
0x510BB9: push    eax; a1
0x510BBA: mov     dword ptr [esp+28h+var_4], 0
0x510BC2: call    Script_ExtractArgs
0x510BC7: add     esp, 20h
0x510BCA: test    al, al
0x510BCC: jnz     short loc_510BD1
0x510BCE: pop     esi
0x510BCF: pop     ecx
0x510BD0: retn
0x510BD1: test    esi, esi
0x510BD3: jz      loc_510C6B
0x510BD9: push    0; int
0x510BDB: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x510BE0: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x510BE5: push    0; int
0x510BE7: push    esi; void *
0x510BE8: call    OblivionDynamicCast
0x510BED: mov     esi, eax
0x510BEF: add     esp, 14h
0x510BF2: test    esi, esi
0x510BF4: jz      short loc_510C6B
0x510BF6: mov     edx, [esi]
0x510BF8: mov     eax, dword ptr [esp+8+var_4]
0x510BFC: mov     edx, [edx+2E0h]
0x510C02: push    edi
0x510C03: push    eax
0x510C04: mov     ecx, esi
0x510C06: call    edx
0x510C08: test    al, al
0x510C0A: jz      short loc_510C42
0x510C0C: fld1
0x510C0E: mov     eax, [esp+0Ch+arg_18]
0x510C12: mov     ecx, dword ptr [esp+0Ch+var_4]
0x510C16: fstp    qword ptr [eax]
0x510C18: mov     eax, [ecx+1Ch]
0x510C1B: test    eax, eax
0x510C1D: mov     edi, eax
0x510C1F: jnz     short loc_510C26
0x510C21: mov     edi, offset EmptyString
0x510C26: mov     ecx, esi; this
0x510C28: call    TESObjectREFR_GetName
0x510C2D: push    eax
0x510C2E: push    edi
0x510C2F: push    offset aSpellSRemovedF; "Spell '%s' removed from %s"
0x510C34: call    Interface_ConsolePrint
0x510C39: add     esp, 0Ch
0x510C3C: pop     edi
0x510C3D: mov     al, 1
0x510C3F: pop     esi
0x510C40: pop     ecx
0x510C41: retn
0x510C42: mov     edx, dword ptr [esp+0Ch+var_4]
0x510C46: mov     eax, [edx+1Ch]
0x510C49: test    eax, eax
0x510C4B: mov     edi, eax
0x510C4D: jnz     short loc_510C54
0x510C4F: mov     edi, offset EmptyString
0x510C54: mov     ecx, esi; this
0x510C56: call    TESObjectREFR_GetName
0x510C5B: push    eax
0x510C5C: push    edi
0x510C5D: push    offset aSpellSNotFound; "Spell '%s' not found in %s"
0x510C62: call    Interface_ConsolePrint
0x510C67: add     esp, 0Ch
0x510C6A: pop     edi
0x510C6B: mov     al, 1
0x510C6D: pop     esi
0x510C6E: pop     ecx
0x510C6F: retn
