0x505810: mov     ecx, ds:0B333C4h
0x505816: test    ecx, ecx
0x505818: jz      short loc_505844
0x50581A: push    esi
0x50581B: call    Actor_GetBaseClass; Actor_GetBaseClass: if Actor_IsNPC, calls GetBaseForm and returns dword [base+0x104]. Direct runtime accessor for NPC class.
0x505820: mov     esi, eax
0x505822: mov     ecx, esi
0x505824: call    TESClass_IsPlayable; TESClass_IsPlayable reads classFlags at +0x60 bit 0.
0x505829: test    al, al
0x50582B: jnz     short loc_50583A
0x50582D: mov     ecx, ds:0B333C4h; this
0x505833: call    Player_GetDefaultClassRecommendation; Resolve Oblivion's default/recommended class. If the actor already has a non-sentinel class, return it. Otherwise classify all 21 deferred chargen skill-use totals by TESSkill specialization, normalize the three shares to seven implied major slots, and select/cache a preset class.
0x505838: mov     esi, eax
0x50583A: push    esi
0x50583B: call    sub_57AA20
0x505840: add     esp, 4
0x505843: pop     esi
0x505844: mov     al, 1
0x505846: retn
