0x68EA10: cmp     [esp+arg_0], 0; Verified termination API: sets bTerminated=1. When its flush flag is true, immediately invokes ActiveEffect_Base_ProcessEffect to run termination cleanup.
0x68EA15: mov     byte ptr [ecx+11h], 1; Verified: ActiveEffect_Base_Remove sets bTerminated=true; optional immediate processing controls whether termination cleanup is flushed now.
0x68EA19: jz      short locret_68EA26
0x68EA1B: fldz
0x68EA1D: push    ecx
0x68EA1E: fstp    [esp+4+var_4]
0x68EA21: call    ActiveEffect_Base_ProcessEffect
0x68EA26: retn    4
