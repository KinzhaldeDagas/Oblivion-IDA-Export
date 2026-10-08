0x612BD0: push    esi; Attempts to start the selected attack animation group; on success it saves the prior mode, sets combat mode +0x74 to 0, and records the chosen attack group at +0x50. Private register-carried inputs are retained.
0x612BD1: push    edi
0x612BD2: mov     edi, [esp+8+arg_0]
0x612BD6: cmp     edi, 0FFh
0x612BDC: mov     esi, ecx
0x612BDE: jz      short loc_612C26
0x612BE0: cmp     dword ptr [esi+74h], 0
0x612BE4: jz      short loc_612C26
0x612BE6: cmp     [esp+8+arg_4], 0
0x612BEB: jnz     short loc_612C09
0x612BED: mov     ecx, [esi+3Ch]
0x612BF0: fldz
0x612BF2: mov     eax, [ecx]
0x612BF4: mov     edx, [eax+164h]
0x612BFA: push    ecx
0x612BFB: fstp    [esp+0Ch+easeOutTime]; easeOutTime
0x612BFE: push    3; slot
0x612C00: call    edx
0x612C02: mov     ecx, eax; this
0x612C04: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x612C09: mov     ecx, [esi+3Ch]
0x612C0C: push    edi
0x612C0D: call    PlayerCharacter_TryStartAttackAnimGroup; Player attack-animation admission uses Oblivion behavior and preserves a compiler-specific register/FPU ABI. Bow admission requires equipped AMMO and an AttackBow group with the required Start/Attach/Hold/Release/End note contract. Rejects a new bow attack while action 5 (AttackBowArrowAttached) remains at phase <=3; an accepted bow group commits action 4 (AttackBow). This path does not automatically reload: later attack input must admit another AttackBow sequence.
0x612C12: test    al, al
0x612C14: jz      short loc_612C26
0x612C16: mov     eax, [esi+74h]
0x612C19: mov     [esi+78h], eax
0x612C1C: mov     dword ptr [esi+74h], 0
0x612C23: mov     [esi+50h], edi
0x612C26: pop     edi
0x612C27: pop     esi
0x612C28: retn    8
