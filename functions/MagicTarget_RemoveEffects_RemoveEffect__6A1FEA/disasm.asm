0x6A1FEA: push    1
0x6A1FEC: mov     ecx, esi
0x6A1FEE: call    ActiveEffect_Base_Remove; Verified termination API: sets bTerminated=1. When its flush flag is true, immediately invokes ActiveEffect_Base_ProcessEffect to run termination cleanup.
