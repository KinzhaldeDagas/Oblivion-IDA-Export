0x5059F0: mov     eax, [esp+arg_18]
0x5059F4: mov     ecx, [esp+arg_8]
0x5059F8: push    eax
0x5059F9: push    0
0x5059FB: push    0
0x5059FD: push    ecx
0x5059FE: call    Cmd_GetClassDefaultMatch; Script command GetClassDefaultMatch / GetIsClassDefault: return 2.0 when current class exactly equals the recommended/default class, 1.0 when only TESClass specialization matches, otherwise 0.0.
0x505A03: add     esp, 10h
0x505A06: retn
