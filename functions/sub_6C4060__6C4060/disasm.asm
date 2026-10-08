0x6C4060: fld     [esp+arg_14]; Morph transition wrapper used by ActorAnimData_PlaySequence only after Oblivion confirms matching nonzero TESAnimGroup morph keys and equal controlled-block counts. Delegates to the sequence morph implementation at 0x6C9E00.
0x6C4064: mov     eax, [esp+arg_C]
0x6C4068: sub     esp, 8
0x6C406B: fstp    [esp+8+var_4]; float
0x6C406F: fld     [esp+8+arg_10]
0x6C4073: fstp    [esp+8+var_8]; float
0x6C4076: push    eax; int
0x6C4077: fld     [esp+0Ch+arg_8]
0x6C407B: push    ecx
0x6C407C: mov     ecx, [esp+10h+arg_4]
0x6C4080: fstp    [esp+10h+var_10]; float
0x6C4083: push    ecx; int
0x6C4084: mov     ecx, [esp+14h+arg_0]
0x6C4088: call    sub_6C9E00; Internal sequence morph implementation. Activates the source against the destination, marks destination transition state and source state 6 (morph source), and records morph timing/weight fields. ActorAnimData reaches this only through the guarded 0x6C4060 wrapper.
0x6C408D: retn    18h
