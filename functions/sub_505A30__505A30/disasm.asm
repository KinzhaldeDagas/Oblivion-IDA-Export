0x505A30: push    ecx
0x505A31: mov     ecx, [esp+4+l]
0x505A35: mov     edx, [esp+4+arg_10]
0x505A39: push    esi
0x505A3A: mov     esi, [esp+8+a4]
0x505A3E: lea     eax, [esp+8+var_4]
0x505A42: push    eax; UInt16
0x505A43: mov     eax, [esp+0Ch+arg_C]
0x505A47: push    ecx; l
0x505A48: mov     ecx, [esp+10h+a3]
0x505A4C: push    edx; a6
0x505A4D: mov     edx, [esp+14h+arg_4]
0x505A51: push    eax; a5
0x505A52: mov     eax, [esp+18h+a1]
0x505A56: push    esi; a4
0x505A57: push    ecx; a3
0x505A58: push    edx; a2
0x505A59: push    eax; a1
0x505A5A: mov     dword ptr [esp+28h+var_4], 0
0x505A62: call    Script_ExtractArgs
0x505A67: add     esp, 20h
0x505A6A: test    al, al
0x505A6C: jnz     short loc_505A71
0x505A6E: pop     esi
0x505A6F: pop     ecx
0x505A70: retn
0x505A71: push    0; int
0x505A73: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x505A78: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x505A7D: push    0; int
0x505A7F: push    esi; void *
0x505A80: call    OblivionDynamicCast
0x505A85: add     esp, 14h
0x505A88: test    eax, eax
0x505A8A: jz      short loc_505A9C
0x505A8C: cmp     dword ptr [esp+8+var_4], 0
0x505A91: setnle  cl
0x505A94: push    ecx
0x505A95: mov     ecx, eax
0x505A97: call    sub_5E8EC0
0x505A9C: cmp     byte ptr ds:0B361ACh, 0
0x505AA3: jz      short loc_505AB7
0x505AA5: mov     edx, dword ptr [esp+8+var_4]
0x505AA9: push    edx
0x505AAA: push    offset aSetghostD; "SetGhost >> %d"
0x505AAF: call    Interface_ConsolePrint
0x505AB4: add     esp, 8
0x505AB7: mov     al, 1
0x505AB9: pop     esi
0x505ABA: pop     ecx
0x505ABB: retn
