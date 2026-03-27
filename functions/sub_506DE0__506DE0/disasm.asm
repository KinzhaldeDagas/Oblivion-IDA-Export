0x506DE0: push    esi
0x506DE1: mov     esi, dword ptr [esp+4+arg_8]
0x506DE5: mov     eax, [esi]
0x506DE7: mov     edx, [eax+190h]
0x506DED: mov     ecx, esi
0x506DEF: call    edx
0x506DF1: test    al, al
0x506DF3: jz      loc_506E86
0x506DF9: mov     ecx, [esp+4+l]
0x506DFD: mov     edx, [esp+4+arg_10]
0x506E01: lea     eax, [esp+4+arg_8]
0x506E05: push    eax; UInt16
0x506E06: mov     eax, [esp+8+arg_C]
0x506E0A: push    ecx; l
0x506E0B: mov     ecx, [esp+0Ch+a3]
0x506E0F: push    edx; a6
0x506E10: mov     edx, [esp+10h+arg_4]
0x506E14: push    eax; a5
0x506E15: mov     eax, [esp+14h+a1]
0x506E19: push    esi; a4
0x506E1A: push    ecx; a3
0x506E1B: push    edx; a2
0x506E1C: push    eax; a1
0x506E1D: call    Script_ExtractArgs
0x506E22: add     esp, 20h
0x506E25: test    al, al
0x506E27: jnz     short loc_506E2B
0x506E29: pop     esi
0x506E2A: retn
0x506E2B: push    0; int
0x506E2D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x506E32: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x506E37: push    0; int
0x506E39: push    esi; void *
0x506E3A: call    OblivionDynamicCast
0x506E3F: add     esp, 14h
0x506E42: test    eax, eax
0x506E44: jz      short loc_506E86
0x506E46: cmp     dword ptr [esp+4+arg_8], 0
0x506E4B: jnz     short loc_506E53
0x506E4D: mov     byte ptr [eax+78h], 0
0x506E51: jmp     short loc_506E57
0x506E53: mov     byte ptr [eax+78h], 1
0x506E57: cmp     byte ptr ds:0B361ACh, 0
0x506E5E: jz      short loc_506E86
0x506E60: cmp     byte ptr [eax+78h], 0
0x506E64: mov     ecx, offset aOn_0
0x506E69: jnz     short loc_506E70
0x506E6B: mov     ecx, offset aOff
0x506E70: push    ecx
0x506E71: mov     ecx, eax; this
0x506E73: call    TESObjectREFR_GetName
0x506E78: push    eax
0x506E79: push    offset aSProcessingIsS; "%s processing is  %s"
0x506E7E: call    Interface_ConsolePrint
0x506E83: add     esp, 0Ch
0x506E86: mov     al, 1
0x506E88: pop     esi
0x506E89: retn
