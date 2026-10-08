0x5FF1E6: cmp     [esp+arg_27], 0
0x5FF1EB: jz      short Actor_EvaluateSneakAttack; Oblivion sneak-attack decision. Creatures are excluded as attackers; the attacker must be sneaking; victim detection <= 0 permits the bonus unless combat-awareness logic forces failure. Successful attacks use the attacker's Sneak mastery plus weapon type to select the multiplier, set the Master-tier flag when applicable, show the player message, and pass the multiplier into damage calculation.
0x5FF1ED: mov     ecx, ds:0B333C4h
0x5FF1F3: cmp     edi, ecx
0x5FF1F5: jnz     short Actor_EvaluateSneakAttack; Oblivion sneak-attack decision. Creatures are excluded as attackers; the attacker must be sneaking; victim detection <= 0 permits the bonus unless combat-awareness logic forces failure. Successful attacks use the attacker's Sneak mastery plus weapon type to select the multiplier, set the Master-tier flag when applicable, show the player message, and pass the multiplier into damage calculation.
0x5FF1F7: call    sub_663E80
