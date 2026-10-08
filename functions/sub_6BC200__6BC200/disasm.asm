0x6BC200: mov     eax, [esp+arg_0]; Position type 0 registers no boundary-insertion callback in the GuaranteeTimeRange dispatch table.
0x6BC204: mov     ecx, [esp+arg_4]
0x6BC208: lea     eax, [eax+eax*2]
0x6BC20B: lea     eax, [ecx+eax*2]
0x6BC20E: add     eax, eax
0x6BC210: add     eax, eax
0x6BC212: mov     dword ptr ds:unk_B3D118[eax], offset nullsub_returnFloat0_0arg
0x6BC21C: mov     dword ptr ds:unk_B3CFF8[eax], offset NiPosKey_EvaluateType0; Oblivion position evaluator for numeric type 0: ignores segment time and both keys and writes the engine's zero position constant.
0x6BC226: mov     dword ptr ds:unk_B3D238[eax], offset NiPosKey_EvaluateType0; Oblivion position evaluator for numeric type 0: ignores segment time and both keys and writes the engine's zero position constant.
0x6BC230: mov     dword ptr ds:unk_B3D650[eax], offset NiPosKey_EvaluateType0; Oblivion position evaluator for numeric type 0: ignores segment time and both keys and writes the engine's zero position constant.
0x6BC23A: mov     dword ptr ds:unk_B3D4A0[eax], offset sub_6BBE80
0x6BC244: mov     dword ptr ds:unk_B3D410[eax], offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BC24E: mov     dword ptr ds:unk_B3D1A8[eax], 0
0x6BC258: retn
