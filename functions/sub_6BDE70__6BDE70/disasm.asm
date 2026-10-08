0x6BDE70: mov     eax, [esp+arg_0]
0x6BDE74: mov     ecx, [esp+arg_4]
0x6BDE78: lea     eax, [eax+eax*2]
0x6BDE7B: lea     eax, [ecx+eax*2]
0x6BDE7E: add     eax, eax
0x6BDE80: add     eax, eax
0x6BDE82: mov     dword ptr ds:unk_B3D118[eax], offset nullsub_returnFloat0_0arg
0x6BDE8C: mov     dword ptr ds:unk_B3CFF8[eax], offset sub_6BDB90
0x6BDE96: mov     dword ptr ds:unk_B3D238[eax], offset sub_6BDB90
0x6BDEA0: mov     dword ptr ds:unk_B3D650[eax], offset sub_6BDB90
0x6BDEAA: mov     dword ptr ds:unk_B3D4A0[eax], offset sub_6BDE40
0x6BDEB4: mov     dword ptr ds:unk_B3D410[eax], offset Shared_NoOpVirtual_60D0A0; Shared one-instruction virtual no-op. Oblivion's base Actor vtable uses this at post-shot slot +0x2E8, so ordinary Actor dispatch performs no ammo-decrement transaction; PlayerCharacter overrides that slot at 0x662590. Other classes may share the same RET stub.
0x6BDEBE: mov     dword ptr ds:unk_B3D1A8[eax], 0
0x6BDEC8: retn
