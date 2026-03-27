0x50CC80: push    ecx
0x50CC81: push    esi
0x50CC82: push    edi
0x50CC83: mov     edi, [esp+0Ch+a4]
0x50CC87: push    0; int
0x50CC89: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50CC8E: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50CC93: push    0; int
0x50CC95: push    edi; void *
0x50CC96: mov     dword ptr [esp+20h+var_4], 0
0x50CC9E: call    OblivionDynamicCast
0x50CCA3: mov     esi, eax
0x50CCA5: add     esp, 14h
0x50CCA8: test    esi, esi
0x50CCAA: jz      short loc_50CD1B
0x50CCAC: mov     ecx, [esp+0Ch+l]
0x50CCB0: mov     edx, [esp+0Ch+arg_10]
0x50CCB4: lea     eax, [esp+0Ch+var_4]
0x50CCB8: push    eax; UInt16
0x50CCB9: mov     eax, [esp+10h+arg_C]
0x50CCBD: push    ecx; l
0x50CCBE: mov     ecx, [esp+14h+a3]
0x50CCC2: push    edx; a6
0x50CCC3: mov     edx, [esp+18h+arg_4]
0x50CCC7: push    eax; a5
0x50CCC8: mov     eax, [esp+1Ch+a1]
0x50CCCC: push    edi; a4
0x50CCCD: push    ecx; a3
0x50CCCE: push    edx; a2
0x50CCCF: push    eax; a1
0x50CCD0: call    Script_ExtractArgs
0x50CCD5: add     esp, 20h
0x50CCD8: test    al, al
0x50CCDA: jnz     short loc_50CCE0
0x50CCDC: pop     edi
0x50CCDD: pop     esi
0x50CCDE: pop     ecx
0x50CCDF: retn
0x50CCE0: mov     ecx, dword ptr [esp+0Ch+var_4]
0x50CCE4: lea     edi, [esi+44h]
0x50CCE7: push    ecx
0x50CCE8: mov     ecx, edi
0x50CCEA: call    sub_41F420
0x50CCEF: mov     edx, [esi]
0x50CCF1: mov     eax, [edx+40h]
0x50CCF4: push    2000h
0x50CCF9: mov     ecx, esi
0x50CCFB: call    eax
0x50CCFD: cmp     byte ptr ds:0B361ACh, 0
0x50CD04: jz      short loc_50CD1B
0x50CD06: mov     ecx, edi
0x50CD08: call    sub_41E980
0x50CD0D: push    eax
0x50CD0E: push    offset aActorSBaseInve; " Actor's base investment gold is  %d "
0x50CD13: call    Interface_ConsolePrint
0x50CD18: add     esp, 8
0x50CD1B: pop     edi
0x50CD1C: mov     al, 1
0x50CD1E: pop     esi
0x50CD1F: pop     ecx
0x50CD20: retn
