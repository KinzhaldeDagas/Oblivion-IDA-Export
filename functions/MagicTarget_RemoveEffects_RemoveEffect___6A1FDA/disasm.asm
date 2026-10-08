0x6A1FDA: push    1
0x6A1FDC: mov     ecx, esi
0x6A1FDE: call    ActiveEffect_Base_Remove; Verified termination API: sets bTerminated=1. When its flush flag is true, immediately invokes ActiveEffect_Base_ProcessEffect to run termination cleanup.
