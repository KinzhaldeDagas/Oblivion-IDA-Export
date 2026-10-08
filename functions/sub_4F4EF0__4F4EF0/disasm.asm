0x4F4EF0: push    ecx; Oblivion GetRandomPercent_Eval draws Game_RandomLargeInteger(0) % 100, returning 0..99 per evaluation. Fallout's analogous condition callback (x4y6:0x823B70B0) uses BSRandom::UnsignedInt(100); both yield percent values, but the RNG source/reduction differs. This remains independent of TESTopicInfo.Random selection.
0x4F4EF1: push    0; Seed
0x4F4EF3: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x4F4EF8: mov     ecx, eax
0x4F4EFA: mov     eax, 51EB851Fh
0x4F4EFF: imul    ecx
0x4F4F01: sar     edx, 5
0x4F4F04: mov     eax, edx
0x4F4F06: shr     eax, 1Fh
0x4F4F09: add     eax, edx
0x4F4F0B: imul    eax, 64h ; 'd'
0x4F4F0E: sub     ecx, eax
0x4F4F10: mov     [esp+8+var_4], ecx
0x4F4F14: mov     ecx, [esp+8+value]
0x4F4F18: add     esp, 4
0x4F4F1B: fild    [esp+4+var_4]; Vanilla GetRandomPercent uses Game_RandomLargeInteger(0) % 100, yielding integer percent values 0..99.
0x4F4F1E: fst     qword ptr [ecx]
0x4F4F20: cmp     byte ptr ds:0B361ACh, 0
0x4F4F27: jz      short loc_4F4F40
0x4F4F29: sub     esp, 8
0x4F4F2C: fstp    [esp+0Ch+var_C]
0x4F4F2F: push    offset aGetrandomperce; "GetRandomPercent >> %0.2f"
0x4F4F34: call    Interface_ConsolePrint
0x4F4F39: add     esp, 0Ch
0x4F4F3C: mov     al, 1
0x4F4F3E: pop     ecx
0x4F4F3F: retn
0x4F4F40: fstp    st
0x4F4F42: mov     al, 1
0x4F4F44: pop     ecx
0x4F4F45: retn
