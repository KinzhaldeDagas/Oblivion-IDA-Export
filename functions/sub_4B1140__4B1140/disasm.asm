0x4B1140: mov     eax, [ecx+7Ch]
0x4B1143: shr     eax, 1
0x4B1145: test    al, 1
0x4B1147: jnz     short loc_4B114E; TESObjectLIGH::lightFlags_7C bit 0x02. The Oblivion Construction Set Light dialog names this bit 'Can carry'; retail activation delegates to TESBoundObject_ActivatePickup only when set.
0x4B1149: xor     al, al
0x4B114B: retn    14h
0x4B114E: jmp     TESBoundObject_ActivatePickup
