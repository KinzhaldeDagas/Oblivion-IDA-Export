0x4706D0: mov     al, [esp+state]; Oblivion ActorAnimData update-control setter: stores one byte at +0x90. Observed callers write state 3 for attack/action synchronization and state 5 from Cmd_SkipAnim. Do not infer KF unloading or map mutation from this setter.
0x4706D4: mov     [ecx+90h], al
0x4706DA: retn    4
