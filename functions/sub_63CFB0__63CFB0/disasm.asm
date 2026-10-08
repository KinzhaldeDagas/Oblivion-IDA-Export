0x63CFB0: sub     esp, 8
0x63CFB3: push    ebx; float
0x63CFB4: push    esi; float
0x63CFB5: mov     esi, [esp+10h+a2]
0x63CFB9: mov     eax, [esi+3Ch]
0x63CFBC: push    edi; float
0x63CFBD: push    0
0x63CFBF: push    1
0x63CFC1: push    eax
0x63CFC2: mov     edi, ecx
0x63CFC4: call    sub_88D150
0x63CFC9: mov     bl, al
0x63CFCB: add     esp, 0Ch
0x63CFCE: test    bl, bl
0x63CFD0: jz      short loc_63D037
0x63CFD2: mov     eax, [edi]
0x63CFD4: mov     edx, [eax+28h]
0x63CFD7: mov     ecx, edi
0x63CFD9: call    edx
0x63CFDB: fstp    [esp+14h+var_8]
0x63CFDF: mov     ecx, 0B332E0h
0x63CFE4: call    TimeGlobals_GetGameHour
0x63CFE9: fstp    [esp+14h+a2]
0x63CFED: fld     [esp+14h+a2]
0x63CFF1: fld     [esp+14h+var_8]
0x63CFF5: fcom    st(1)
0x63CFF7: fnstsw  ax
0x63CFF9: test    ah, 41h
0x63CFFC: jnz     short loc_63D008
0x63CFFE: fadd    qword ptr ds:0A492B8h
0x63D004: fsubrp  st(1), st
0x63D006: jmp     short loc_63D00A
0x63D008: fsubp   st(1), st
0x63D00A: fstp    [esp+14h+a2]; float
0x63D00E: mov     ecx, 0B332E0h
0x63D013: fld     [esp+14h+a2]
0x63D017: fstp    qword ptr [esp+14h+var_8]; float
0x63D01B: call    TimeGlobals_GetTimeScale; Returns TimeGlobals field +5 TESGlobal value (time scale). Observed callers use it for magic cooldown and fast-travel time calculations.
0x63D020: fmul    qword ptr ds:0A59B38h
0x63D026: fcomp   qword ptr [esp+14h+var_8]
0x63D02A: fnstsw  ax
0x63D02C: test    ah, 41h
0x63D02F: jnz     short loc_63D035
0x63D031: mov     bl, 1
0x63D033: jmp     short loc_63D037
0x63D035: xor     bl, bl
0x63D037: mov     edi, [edi+17Ch]
0x63D03D: test    edi, edi
0x63D03F: jz      short loc_63D082
0x63D041: push    ebp; float
0x63D042: push    0; slotSelector
0x63D044: mov     ecx, edi; this
0x63D046: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x63D04B: mov     ebp, eax
0x63D04D: test    ebp, ebp
0x63D04F: jz      short loc_63D081
0x63D051: mov     ecx, [ebp+68h]
0x63D054: call    TESAnimGroup_GetAnimationGroup; TESAnimGroup native group id accessor: byte at TESAnimGroup +0x08.
0x63D059: cmp     eax, 20h ; ' '
0x63D05C: jnz     short loc_63D081
0x63D05E: fld     dword ptr ds:0A30634h
0x63D064: push    ecx
0x63D065: fstp    [esp+1Ch+explicitTimeOrMinusOne]; explicitTimeOrMinusOne
0x63D068: push    ebp; sequence
0x63D069: call    BSAnimGroupSequence_GetDuration; Returns zero for null; otherwise returns BSAnimGroupSequence end time (+0x30) minus start time (+0x2C).
0x63D06E: fstp    [esp+20h+deltaTime]; deltaTime
0x63D071: push    esi; ownerActor
0x63D072: mov     ecx, edi; this
0x63D074: call    ActorAnimData_Update; CustomAnimSupport evidence: observed ActorAnimData update caller; supports broad scheduler classification.
0x63D079: push    esi; a2
0x63D07A: mov     ecx, edi; this
0x63D07C: call    ActorAnimData_ApplyToActor; Applies actor-dependent scene/node state through 0x471C00 and then calls ActorAnimData::ApplyActorAnimData. Called during NiNode generation, animation updates, body toggles, resurrection/fast travel, and first-person transitions.
0x63D081: pop     ebp
0x63D082: test    bl, bl
0x63D084: jnz     short loc_63D0B7
0x63D086: mov     ecx, esi
0x63D088: call    sub_5E9E70
0x63D08D: mov     eax, [esi]
0x63D08F: mov     edx, [eax+144h]
0x63D095: mov     ecx, esi
0x63D097: call    edx
0x63D099: mov     eax, [esi]
0x63D09B: mov     edx, [eax+9Ch]
0x63D0A1: push    1
0x63D0A3: mov     ecx, esi
0x63D0A5: call    edx
0x63D0A7: mov     ecx, esi
0x63D0A9: call    sub_4DC550
0x63D0AE: push    esi
0x63D0AF: lea     ecx, [esi+44h]
0x63D0B2: call    sub_424870
0x63D0B7: pop     edi
0x63D0B8: pop     esi
0x63D0B9: pop     ebx
0x63D0BA: add     esp, 8
0x63D0BD: retn    4
