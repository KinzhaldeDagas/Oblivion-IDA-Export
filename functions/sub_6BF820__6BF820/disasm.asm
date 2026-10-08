0x6BF820: mov     eax, [esp+arg_0]; Position type 1 registers NiPosKey_InsertType1Linear for GuaranteeTimeRange boundary insertion.
0x6BF824: mov     ecx, [esp+arg_4]
0x6BF828: lea     eax, [eax+eax*2]
0x6BF82B: lea     eax, [ecx+eax*2]
0x6BF82E: add     eax, eax
0x6BF830: add     eax, eax
0x6BF832: mov     dword ptr ds:unk_B3D118[eax], offset nullsub_returnFloat0_0arg
0x6BF83C: mov     dword ptr ds:unk_B3CFF8[eax], offset NiPosKey_EvaluateType1Linear; Oblivion position evaluator for numeric type 1: componentwise lower*(1-t)+upper*t using key value components at +4,+8,+0xC.
0x6BF846: mov     dword ptr ds:unk_B3D238[eax], offset sub_6BF480
0x6BF850: mov     dword ptr ds:unk_B3D650[eax], offset NiPosKey_EvaluateType0; Oblivion position evaluator for numeric type 0: ignores segment time and both keys and writes the engine's zero position constant.
0x6BF85A: mov     dword ptr ds:unk_B3D4A0[eax], offset sub_6BF3C0
0x6BF864: mov     dword ptr ds:unk_B3D410[eax], offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BF86E: mov     dword ptr ds:unk_B3D1A8[eax], offset NiPosKey_InsertType1Linear; Type-1 linear position boundary insertion: reject duplicate time, allocate count+1 0x10-byte records, copy around insertion index, evaluate/clamp the new position, increment count, destroy/free old array, and replace pointer.
0x6BF878: retn
