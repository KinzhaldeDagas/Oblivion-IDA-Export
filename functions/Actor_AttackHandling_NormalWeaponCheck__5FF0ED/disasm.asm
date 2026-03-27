0x5FF0ED: setz    bl
0x5FF0F0: test    bl, bl
0x5FF0F2: mov     [esp+arg_5C], al
0x5FF0F6: mov     [esp+arg_3C], bl
0x5FF0FA: jz      short loc_5FF152
0x5FF0FC: test    ebp, ebp
0x5FF0FE: jnz     short loc_5FF115
0x5FF100: mov     eax, [esp+arg_28]
0x5FF104: test    eax, eax
0x5FF106: jz      short loc_5FF15D
0x5FF108: mov     bl, [eax+9Ch]
0x5FF10E: not     bl
0x5FF110: and     bl, 1
0x5FF113: jmp     short loc_5FF152
0x5FF115: mov     eax, [ebp+0]
0x5FF118: mov     edx, [eax+170h]
0x5FF11E: mov     ecx, ebp
0x5FF120: call    edx
0x5FF122: cmp     byte ptr [eax+4], 22h ; '"'
0x5FF126: jnz     short loc_5FF144
0x5FF128: mov     eax, [ebp+0]
0x5FF12B: mov     edx, [eax+170h]
0x5FF131: mov     ecx, ebp
0x5FF133: call    edx
0x5FF135: test    eax, eax
0x5FF137: jz      short loc_5FF144
0x5FF139: mov     bl, [eax+80h]
0x5FF13F: not     bl
0x5FF141: and     bl, 1
0x5FF144: test    bl, bl
0x5FF146: jz      short loc_5FF152
0x5FF148: cmp     byte ptr [ebp+96h], 0
0x5FF14F: setz    bl
0x5FF152: cmp     [esp+arg_28], 0
0x5FF157: jnz     short loc_5FF16C
0x5FF159: test    ebp, ebp
0x5FF15B: jnz     short loc_5FF16C
0x5FF15D: push    11h
0x5FF15F: mov     ecx, edi
0x5FF161: call    Actor_GetSkillMasteryLevel
0x5FF166: cmp     eax, 2
0x5FF169: setl    bl
0x5FF16C: mov     eax, [esi]
0x5FF16E: mov     edx, [eax+284h]
0x5FF174: push    41h ; 'A'
0x5FF176: mov     ecx, esi
0x5FF178: call    edx
0x5FF17A: test    bl, bl
0x5FF17C: mov     [esp+arg_1C], eax
0x5FF180: jz      short Actor_AttackHandling___NotEnoughChargeMsg
0x5FF182: cmp     eax, 64h ; 'd'
0x5FF185: jl      short Actor_AttackHandling___NotEnoughChargeMsg
0x5FF187: cmp     edi, ds:0B333C4h
0x5FF18D: jnz     short loc_5FF1B7
0x5FF18F: fld     dword ptr ds:0A30634h
0x5FF195: mov     eax, ds:0B37208h
0x5FF19A: push    ecx
0x5FF19B: fstp    [esp+4+duration]; duration
0x5FF19E: push    1; unk2
0x5FF1A0: push    0; unk1
0x5FF1A2: push    eax; string
0x5FF1A3: call    GameUI_QueueMessage
0x5FF1A8: add     esp, 10h
0x5FF1AB: cmp     [esp+arg_27], 0
0x5FF1B0: jz      short loc_5FF1B7
0x5FF1B2: mov     [esp+arg_27], 0
0x5FF1B7: cmp     byte ptr ds:0B3B908h, 0
0x5FF1BE: jz      Actor_AttackHandling___ActorMagicHit
0x5FF1C4: mov     ecx, esi; this
0x5FF1C6: call    TESObjectREFR_GetName
0x5FF1CB: push    eax
0x5FF1CC: mov     ecx, edi; this
0x5FF1CE: call    TESObjectREFR_GetName
0x5FF1D3: push    eax
0x5FF1D4: push    offset a_20sSNormalWea; "%.20s's normal weapons have no effect o"...
0x5FF1D9: call    Interface_ConsolePrint
0x5FF1DE: add     esp, 0Ch
0x5FF1E1: jmp     Actor_AttackHandling___ActorMagicHit
