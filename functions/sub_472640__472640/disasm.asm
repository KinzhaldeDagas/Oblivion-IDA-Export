0x472640: push    esi
0x472641: push    edi
0x472642: mov     edi, [esp+8+object]
0x472646: test    edi, edi
0x472648: mov     esi, ecx
0x47264A: jz      short loc_47267C
0x47264C: mov     eax, 0FFh
0x472651: cmp     [esi+3Ch], ax
0x472655: jnz     short loc_472674
0x472657: cmp     [esi+70h], ax
0x47265B: jnz     short loc_472674
0x47265D: mov     ecx, edi; object
0x47265F: call    Shared_GetWordAtOffset08; TESAnimGroup encoded key accessor: returns 16-bit group key at TESAnimGroup +0x08.
0x472664: test    ax, ax
0x472667: jnz     short loc_472674
0x472669: mov     ecx, edi; object
0x47266B: call    Shared_GetWordAtOffset08; TESAnimGroup encoded key accessor: returns 16-bit group key at TESAnimGroup +0x08.
0x472670: mov     [esi+70h], ax
0x472674: push    edi
0x472675: mov     ecx, esi
0x472677: call    ActorAnimData_SetAnimGroupMovementVector; ActorAnimData movement-vector recovery. For an installed TESAnimGroup, samples AccumRoot at current/end times, computes normalized movement delta, stores it back to the TESAnimGroup, and warns when Animate In Place exported zero movement.
0x47267C: pop     edi
0x47267D: pop     esi
0x47267E: retn    4
