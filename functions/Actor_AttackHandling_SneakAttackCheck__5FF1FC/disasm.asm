0x5FF1FC: mov     edx, [edi]
0x5FF1FE: fld1
0x5FF200: mov     eax, [edx+170h]
0x5FF206: fstp    [esp+arg_34]; int
0x5FF20A: mov     ecx, edi
0x5FF20C: mov     [esp+arg_1A], 0
0x5FF211: call    eax
0x5FF213: cmp     byte ptr [eax+4], 24h ; '$'
0x5FF217: jz      Actor_AttackHandling___DetermineDamageFormula
0x5FF21D: mov     ecx, edi
0x5FF21F: call    Actor_IsSneaking
0x5FF224: test    al, al
0x5FF226: jz      Actor_AttackHandling___DetermineDamageFormula
0x5FF22C: mov     ecx, [esi+58h]
0x5FF22F: mov     edx, [ecx]
0x5FF231: mov     eax, [edx+1C8h]
0x5FF237: push    edi
0x5FF238: call    eax
0x5FF23A: mov     edx, [esi]
0x5FF23C: mov     ebp, eax
0x5FF23E: mov     eax, [edx+330h]
0x5FF244: mov     ecx, esi
0x5FF246: call    eax
0x5FF248: test    eax, eax
0x5FF24A: jz      short loc_5FF276
0x5FF24C: mov     edx, [esi]
0x5FF24E: mov     eax, [edx+330h]
0x5FF254: push    edi
0x5FF255: mov     ecx, esi
0x5FF257: call    eax
0x5FF259: mov     ecx, eax
0x5FF25B: call    sub_613670
0x5FF260: test    al, al
0x5FF262: jz      short loc_5FF276
0x5FF264: cmp     ebp, ds:0B372F0h
0x5FF26A: jle     short loc_5FF276
0x5FF26C: mov     ebp, 1
0x5FF271: jmp     loc_5FF31B
0x5FF276: test    ebp, ebp
0x5FF278: jg      loc_5FF31B
0x5FF27E: mov     eax, [esp+arg_28]
0x5FF282: test    eax, eax
0x5FF284: jz      short loc_5FF28F
0x5FF286: movsx   eax, byte ptr [eax+90h]
0x5FF28D: jmp     short loc_5FF292
0x5FF28F: or      eax, 0FFFFFFFFh
0x5FF292: push    eax
0x5FF293: push    1Fh
0x5FF295: mov     ecx, edi
0x5FF297: call    Actor_GetSkillMasteryLevel
0x5FF29C: push    eax
0x5FF29D: call    Calc_SneakAttackMultiplier
0x5FF2A2: fstp    [esp+8+arg_34]; int
0x5FF2A6: fld1
0x5FF2A8: add     esp, 8
0x5FF2AB: fcomp   [esp+arg_34]
0x5FF2AF: fnstsw  ax
0x5FF2B1: test    ah, 5
0x5FF2B4: jp      short loc_5FF2C9
0x5FF2B6: push    1Fh
0x5FF2B8: mov     ecx, edi
0x5FF2BA: call    Actor_GetSkillMasteryLevel
0x5FF2BF: cmp     eax, 4
0x5FF2C2: jnz     short loc_5FF2C9
0x5FF2C4: mov     [esp+arg_1A], 1
0x5FF2C9: cmp     edi, ds:0B333C4h
0x5FF2CF: jnz     short loc_5FF31B
0x5FF2D1: mov     ecx, ds:0B38F10h
0x5FF2D7: fld     [esp+arg_34]
0x5FF2DB: push    ecx
0x5FF2DC: call    Double_To_SInt32
0x5FF2E1: mov     edx, ds:0B38F08h
0x5FF2E7: push    eax
0x5FF2E8: push    edx
0x5FF2E9: lea     eax, [esp+0Ch+string]
0x5FF2F0: push    offset aSDS_0; "%s%d%s"
0x5FF2F5: push    eax
0x5FF2F6: call    __sprintf
0x5FF2FB: fld     dword ptr ds:0A30634h
0x5FF301: add     esp, 10h
0x5FF304: fstp    [esp+4+duration]; duration
0x5FF307: push    1; unk2
0x5FF309: lea     ecx, [esp+8+string]
0x5FF310: push    0; unk1
0x5FF312: push    ecx; string
0x5FF313: call    GameUI_QueueMessage
0x5FF318: add     esp, 10h
0x5FF31B: cmp     byte ptr ds:0B3B908h, 0
0x5FF322: jz      short Actor_AttackHandling___DetermineDamageFormula
0x5FF324: test    ebp, ebp
0x5FF326: mov     eax, offset aSuccess_0; "SUCCESS"
0x5FF32B: jle     short loc_5FF332
0x5FF32D: mov     eax, offset aFailure; "FAILURE"
0x5FF332: push    eax
0x5FF333: push    ebp
0x5FF334: mov     ecx, esi; this
0x5FF336: call    TESObjectREFR_GetName
0x5FF33B: push    eax
0x5FF33C: mov     ecx, edi; this
0x5FF33E: call    TESObjectREFR_GetName
0x5FF343: push    eax
0x5FF344: push    offset a_20sAttemptsAS; "%.20s attempts a Sneak Attack on %.20s."...
0x5FF349: call    Interface_ConsolePrint
0x5FF34E: add     esp, 14h
