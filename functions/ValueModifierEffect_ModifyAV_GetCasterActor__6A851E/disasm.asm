0x6A851E: mov     ecx, [esi+24h]; this
0x6A8521: test    ecx, ecx
0x6A8523: push    ebx
0x6A8524: jz      short loc_6A852F
0x6A8526: call    MagicCaster_GetParentActor
0x6A852B: mov     ebx, eax
0x6A852D: jmp     short ValueModifierEffect_ModifyAV___CheckHostility
0x6A852F: xor     ebx, ebx
