0x6C0820: mov     eax, [esp+arg_0]; Position type 3 registers NiPosKey_InsertType3Cubic for GuaranteeTimeRange boundary insertion.
0x6C0824: mov     ecx, [esp+arg_4]
0x6C0828: lea     eax, [eax+eax*2]
0x6C082B: lea     eax, [ecx+eax*2]
0x6C082E: add     eax, eax
0x6C0830: add     eax, eax
0x6C0832: mov     dword ptr ds:unk_B3D118[eax], offset sub_6C0430
0x6C083C: mov     dword ptr ds:unk_B3CFF8[eax], offset NiPosKey_EvaluateType3Cubic; Oblivion position evaluator for numeric type 3: evaluates its distinct precomputed three-component cubic polynomial layout from the lower key record using Horner form.
0x6C0846: mov     dword ptr ds:unk_B3D238[eax], offset sub_6BFDB0
0x6C0850: mov     dword ptr ds:unk_B3D650[eax], offset sub_6BFE90
0x6C085A: mov     dword ptr ds:unk_B3D4A0[eax], offset sub_6BFBB0
0x6C0864: mov     dword ptr ds:unk_B3D410[eax], offset sub_6C0170
0x6C086E: mov     dword ptr ds:unk_B3D1A8[eax], offset NiPosKey_InsertType3Cubic; Type-3 cubic position boundary insertion: allocate count+1 0x4C-byte records, insert evaluated position with zeroed local parameters, free old array, replace pointer, then recompute type-3 derived coefficients.
0x6C0878: retn
