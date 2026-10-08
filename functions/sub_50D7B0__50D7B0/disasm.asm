0x50D7B0: sub     esp, 8; Native SetNoRumors command. Stores an actor override only when the requested value differs from the base NoRumors flag; matching the base removes type 0x5A. It never invalidates cached INFOGENERAL type 0x59.
0x50D7B3: mov     ecx, [esp+8+l]
0x50D7B7: mov     edx, [esp+8+arg_10]
0x50D7BB: push    esi
0x50D7BC: mov     esi, [esp+0Ch+a4]
0x50D7C0: lea     eax, [esp+0Ch+var_8]
0x50D7C4: push    eax; UInt16
0x50D7C5: mov     eax, [esp+10h+arg_C]
0x50D7C9: push    ecx; l
0x50D7CA: mov     ecx, [esp+14h+a3]
0x50D7CE: push    edx; a6
0x50D7CF: mov     edx, [esp+18h+arg_4]
0x50D7D3: push    eax; a5
0x50D7D4: mov     eax, [esp+1Ch+a1]
0x50D7D8: push    esi; a4
0x50D7D9: push    ecx; a3
0x50D7DA: push    edx; a2
0x50D7DB: push    eax; a1
0x50D7DC: mov     dword ptr [esp+2Ch+var_8], 0
0x50D7E4: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x50D7E9: add     esp, 20h
0x50D7EC: test    al, al
0x50D7EE: jnz     short loc_50D7F5
0x50D7F0: pop     esi
0x50D7F1: add     esp, 8
0x50D7F4: retn
0x50D7F5: push    0; int
0x50D7F7: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50D7FC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50D801: push    0; int
0x50D803: push    esi; void *
0x50D804: call    OblivionDynamicCast
0x50D809: mov     esi, eax
0x50D80B: add     esp, 14h
0x50D80E: test    esi, esi
0x50D810: jz      short loc_50D859
0x50D812: push    ebx
0x50D813: xor     bl, bl
0x50D815: cmp     dword ptr [esp+10h+var_8], 0
0x50D81A: mov     [esp+10h+noRumors], bl
0x50D81E: jz      short loc_50D826
0x50D820: mov     bl, 1
0x50D822: mov     [esp+10h+noRumors], bl
0x50D826: push    0; a2
0x50D828: mov     ecx, esi; this
0x50D82A: call    Actor_GetActorBaseForm
0x50D82F: mov     ecx, [eax+28h]
0x50D832: add     eax, 24h ; '$'
0x50D835: shr     ecx, 0Dh
0x50D838: and     cl, 1
0x50D83B: cmp     bl, cl
0x50D83D: pop     ebx
0x50D83E: lea     ecx, [esi+44h]; this
0x50D841: jnz     short loc_50D84F; If requested NoRumors equals the base NPC flag, remove the per-reference type-0x5A override. This comparison and removal do not touch cached INFOGENERAL type 0x59.
0x50D843: call    ExtraDataList__RemoveNoRumorsOverride; Remove only ExtraHasNoRumors (0x5A), restoring fallback to the NPC base NoRumors flag. ExtraInfoGeneralTopic (0x59) is untouched, so an old cached rumor can become visible again.
0x50D848: mov     al, 1
0x50D84A: pop     esi
0x50D84B: add     esp, 8
0x50D84E: retn
0x50D84F: mov     edx, dword ptr [esp+0Ch+noRumors]
0x50D853: push    edx; noRumors
0x50D854: call    ExtraDataList__SetNoRumors; Store a type-0x5A override because requested NoRumors differs from the base flag. The cached type-0x59 rumor MenuTopic remains intact.
0x50D859: mov     al, 1
0x50D85B: pop     esi
0x50D85C: add     esp, 8
0x50D85F: retn
