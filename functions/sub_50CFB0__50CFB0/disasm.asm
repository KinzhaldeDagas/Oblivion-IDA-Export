0x50CFB0: push    ecx
0x50CFB1: mov     eax, [esp+4+arg_8]
0x50CFB5: push    esi
0x50CFB6: push    0; int
0x50CFB8: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50CFBD: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50CFC2: push    0; int
0x50CFC4: push    eax; void *
0x50CFC5: call    OblivionDynamicCast
0x50CFCA: mov     esi, eax
0x50CFCC: add     esp, 14h
0x50CFCF: test    esi, esi
0x50CFD1: jz      short loc_50D017
0x50CFD3: mov     ecx, esi; this
0x50CFD5: call    MobileObject_GetCharProxy
0x50CFDA: test    eax, eax
0x50CFDC: jz      short loc_50D017
0x50CFDE: mov     ecx, esi; this
0x50CFE0: call    MobileObject_GetCharProxy
0x50CFE5: fld     dword ptr [eax+320h]
0x50CFEB: fstp    [esp+8+var_4]
0x50CFEF: fldz
0x50CFF1: fstp    dword ptr [eax+320h]
0x50CFF7: cmp     byte ptr ds:0B361ACh, 0
0x50CFFE: jz      short loc_50D017
0x50D000: fld     [esp+8+var_4]
0x50D004: sub     esp, 8
0x50D007: fstp    [esp+10h+var_10]
0x50D00A: push    offset aActorSFallTime; " Actor's fall timer is %.02f "
0x50D00F: call    Interface_ConsolePrint
0x50D014: add     esp, 0Ch
0x50D017: mov     al, 1
0x50D019: pop     esi
0x50D01A: pop     ecx
0x50D01B: retn
