0x6C2920: mov     eax, [esp+arg_0]; Position type 5 registers NiPosKey_InsertType5Step for GuaranteeTimeRange boundary insertion.
0x6C2924: mov     ecx, [esp+arg_4]
0x6C2928: lea     eax, [eax+eax*2]
0x6C292B: lea     eax, [ecx+eax*2]
0x6C292E: add     eax, eax
0x6C2930: add     eax, eax
0x6C2932: mov     dword ptr ds:unk_B3D118[eax], offset nullsub_returnFloat0_0arg
0x6C293C: mov     dword ptr ds:unk_B3CFF8[eax], offset NiPosKey_EvaluateType5Step; Oblivion position evaluator for numeric type 5: holds the lower key for t<1 and selects the upper key only at t>=1.
0x6C2946: mov     dword ptr ds:unk_B3D238[eax], offset sub_6C2740
0x6C2950: mov     dword ptr ds:unk_B3D650[eax], offset NiPosKey_EvaluateType0; Oblivion position evaluator for numeric type 0: ignores segment time and both keys and writes the engine's zero position constant.
0x6C295A: mov     dword ptr ds:unk_B3D4A0[eax], offset sub_6BF3C0
0x6C2964: mov     dword ptr ds:unk_B3D410[eax], offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6C296E: mov     dword ptr ds:unk_B3D1A8[eax], offset NiPosKey_InsertType5Step; Type-5 step position boundary insertion: reject duplicate time, allocate count+1 0x10-byte records, insert the clamped/held evaluated position in sorted order, free old array, and replace pointer.
0x6C2978: retn
