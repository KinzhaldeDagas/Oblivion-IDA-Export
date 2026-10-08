0x6D6C00: mov     eax, [esp+arg_0]
0x6D6C04: cmp     [ecx+30h], eax
0x6D6C07: jz      short loc_6D6C10
0x6D6C09: mov     dword ptr [ecx+44h], 0
0x6D6C10: mov     [esp+arg_0], eax
0x6D6C14: jmp     NiTimeController__SetTarget; Retargets a controller while holding a temporary self-reference. Removes it from the previous NiObjectNET controller chain, assigns non-owning target +0x30, avoids duplicate insertion, then inserts into the new target's refcounted chain and propagates manager-controlled target state when applicable.
