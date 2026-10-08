0x5039F0: mov     eax, [esp+value]; CommandInfo.execute wrapper for GetRandomPercent (index 77); delegates to GetRandomPercent_Eval, which is also the CTDA eval callback. Script execution and condition evaluation share the same percentage-roll logic.
0x5039F4: mov     ecx, [esp+subject]
0x5039F8: push    eax; value
0x5039F9: push    0; param2
0x5039FB: push    0; param1
0x5039FD: push    ecx; subject
0x5039FE: call    GetRandomPercent_Eval; Oblivion GetRandomPercent_Eval draws Game_RandomLargeInteger(0) % 100, returning 0..99 per evaluation. Fallout's analogous condition callback (x4y6:0x823B70B0) uses BSRandom::UnsignedInt(100); both yield percent values, but the RNG source/reduction differs. This remains independent of TESTopicInfo.Random selection.
0x503A03: add     esp, 10h
0x503A06: retn
