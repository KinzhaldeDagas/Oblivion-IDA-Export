0x6BCEB0: mov     eax, [esp+arg_0]; Position type 2 registers NiPosKey_InsertType2Cubic for GuaranteeTimeRange boundary insertion.
0x6BCEB4: mov     ecx, [esp+arg_4]
0x6BCEB8: lea     eax, [eax+eax*2]
0x6BCEBB: lea     eax, [ecx+eax*2]
0x6BCEBE: add     eax, eax
0x6BCEC0: add     eax, eax
0x6BCEC2: mov     dword ptr ds:unk_B3D118[eax], offset sub_6BC780
0x6BCECC: mov     dword ptr ds:unk_B3CFF8[eax], offset NiPosKey_EvaluateType2Cubic; Oblivion position evaluator for numeric type 2: evaluates a precomputed three-component cubic polynomial from the lower key record using Horner form.
0x6BCED6: mov     dword ptr ds:unk_B3D238[eax], offset sub_6BC480
0x6BCEE0: mov     dword ptr ds:unk_B3D650[eax], offset sub_6BC560
0x6BCEEA: mov     dword ptr ds:unk_B3D4A0[eax], offset sub_6BC2C0
0x6BCEF4: mov     dword ptr ds:unk_B3D410[eax], offset sub_6BC600
0x6BCEFE: mov     dword ptr ds:unk_B3D1A8[eax], offset NiPosKey_InsertType2Cubic; Type-2 cubic position boundary insertion: allocate count+1 0x40-byte records, insert evaluated position, split/repair adjacent cubic tangent state when interior, free old array, replace pointer, then recompute derived coefficients.
0x6BCF08: retn
