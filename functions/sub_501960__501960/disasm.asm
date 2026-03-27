0x501960: push    ecx
0x501961: mov     ecx, [esp+4+l]
0x501965: mov     edx, [esp+4+arg_10]
0x501969: push    esi
0x50196A: mov     esi, [esp+8+a4]
0x50196E: lea     eax, [esp+8+var_4]
0x501972: push    eax; UInt16
0x501973: mov     eax, [esp+0Ch+arg_C]
0x501977: push    ecx; l
0x501978: mov     ecx, [esp+10h+a3]
0x50197C: push    edx; a6
0x50197D: mov     edx, [esp+14h+arg_4]
0x501981: push    eax; a5
0x501982: mov     eax, [esp+18h+a1]
0x501986: push    esi; a4
0x501987: push    ecx; a3
0x501988: push    edx; a2
0x501989: push    eax; a1
0x50198A: mov     dword ptr [esp+28h+var_4], 0
0x501992: call    Script_ExtractArgs
0x501997: add     esp, 20h
0x50199A: test    al, al
0x50199C: jnz     short loc_5019A1
0x50199E: pop     esi
0x50199F: pop     ecx
0x5019A0: retn
0x5019A1: push    0; int
0x5019A3: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5019A8: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5019AD: push    0; int
0x5019AF: push    esi; void *
0x5019B0: call    OblivionDynamicCast
0x5019B5: add     esp, 14h
0x5019B8: test    eax, eax
0x5019BA: jz      short loc_5019CE
0x5019BC: fldz
0x5019BE: push    ecx
0x5019BF: mov     ecx, dword ptr [esp+0Ch+var_4]
0x5019C3: fstp    [esp+0Ch+var_C]; int
0x5019C6: push    ecx; int
0x5019C7: mov     ecx, eax; int
0x5019C9: call    Actor_Kill
0x5019CE: mov     al, 1
0x5019D0: pop     esi
0x5019D1: pop     ecx
0x5019D2: retn
