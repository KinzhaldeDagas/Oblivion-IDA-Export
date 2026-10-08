0x8903D0: push    esi; Returns true for movement states 5/6/4 (Swimming/Projectile/Flying). Controller uses this to allow vertical desired movement/orientation handling outside ordinary ground/air movement.
0x8903D1: lea     esi, [ecx+1E0h]
0x8903D7: mov     ecx, esi
0x8903D9: call    hkCharacterContext_GetStateId; hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
0x8903DE: cmp     eax, 5
0x8903E1: jz      short loc_8903FF
0x8903E3: mov     ecx, esi
0x8903E5: call    hkCharacterContext_GetStateId; hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
0x8903EA: cmp     eax, 6
0x8903ED: jz      short loc_8903FF
0x8903EF: mov     ecx, esi
0x8903F1: call    hkCharacterContext_GetStateId; hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
0x8903F6: cmp     eax, 4
0x8903F9: jz      short loc_8903FF
0x8903FB: xor     eax, eax
0x8903FD: pop     esi
0x8903FE: retn
0x8903FF: mov     eax, 1
0x890404: pop     esi
0x890405: retn
