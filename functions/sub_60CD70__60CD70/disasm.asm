0x60CD70: fld     dword ptr ds:0B33E9Ch; ArrowProjectile virtual update wrapper. It ignores the supplied update argument and feeds the current global frame delta to ArrowProjectile_UpdateFlightAndLifecycle.
0x60CD76: push    ecx
0x60CD77: fstp    [esp+4+deltaTime]; deltaTime
0x60CD7A: call    ArrowProjectile_UpdateFlightAndLifecycle; Projectile lifecycle/settling state machine never replaces the AMMO base assigned by construction. A later ordinary pickup therefore remains reference-based AMMO recovery.
0x60CD7F: retn    4
