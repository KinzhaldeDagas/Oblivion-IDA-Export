0x6A5EE0: push    0
0x6A5EE2: mov     ecx, esi
0x6A5EE4: call    ActiveEffect_Base_Remove; Verified termination API: sets bTerminated=1. When its flush flag is true, immediately invokes ActiveEffect_Base_ProcessEffect to run termination cleanup.
