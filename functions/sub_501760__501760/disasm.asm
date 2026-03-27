0x501760: push    ecx
0x501761: mov     ecx, [esp+4+l]
0x501765: fldz
0x501767: mov     edx, [esp+4+arg_10]
0x50176B: fstp    dword ptr [esp+4+var_4]
0x50176E: push    esi
0x50176F: mov     esi, [esp+8+a4]
0x501773: lea     eax, [esp+8+var_4]
0x501777: push    eax; UInt16
0x501778: mov     eax, [esp+0Ch+arg_C]
0x50177C: push    ecx; l
0x50177D: mov     ecx, [esp+10h+a3]
0x501781: push    edx; a6
0x501782: mov     edx, [esp+14h+arg_4]
0x501786: push    eax; a5
0x501787: mov     eax, [esp+18h+a1]
0x50178B: push    esi; a4
0x50178C: push    ecx; a3
0x50178D: push    edx; a2
0x50178E: push    eax; a1
0x50178F: call    Script_ExtractArgs
0x501794: add     esp, 20h
0x501797: test    al, al
0x501799: jnz     short loc_50179E
0x50179B: pop     esi
0x50179C: pop     ecx
0x50179D: retn
0x50179E: push    0; int
0x5017A0: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5017A5: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5017AA: push    0; int
0x5017AC: push    esi; void *
0x5017AD: call    OblivionDynamicCast
0x5017B2: add     esp, 14h
0x5017B5: test    eax, eax
0x5017B7: jz      short loc_5017D3
0x5017B9: mov     ecx, eax; this
0x5017BB: call    MobileObject_GetCharProxy
0x5017C0: test    eax, eax
0x5017C2: jz      short loc_5017D3
0x5017C4: fld     dword ptr [esp+8+var_4]
0x5017C8: push    ecx
0x5017C9: mov     ecx, eax
0x5017CB: fstp    [esp+0Ch+var_C]; float
0x5017CE: call    sub_894BD0
0x5017D3: mov     al, 1
0x5017D5: pop     esi
0x5017D6: pop     ecx
0x5017D7: retn
