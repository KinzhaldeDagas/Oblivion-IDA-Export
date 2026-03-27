0x447BA0: push    esi
0x447BA1: mov     esi, [esp+4+a2]
0x447BA5: test    esi, esi
0x447BA7: jz      loc_447C3E
0x447BAD: mov     eax, [esi+8]
0x447BB0: shr     eax, 5
0x447BB3: test    al, 1
0x447BB5: jnz     loc_447C3E
0x447BBB: push    esi; a2
0x447BBC: mov     ecx, offset ActorProcessManager_ptr; this
0x447BC1: call    sub_67A8C0
0x447BC6: mov     ecx, esi
0x447BC8: mov     byte ptr [esi+26h], 1
0x447BCC: call    sub_4CB4D0
0x447BD1: mov     ecx, ds:0B33A98h
0x447BD7: cmp     byte ptr [ecx+0CD4h], 0
0x447BDE: jnz     short loc_447BE9
0x447BE0: push    1
0x447BE2: mov     ecx, esi
0x447BE4: call    sub_4CB010
0x447BE9: mov     ecx, esi
0x447BEB: call    sub_4AF170
0x447BF0: test    eax, eax
0x447BF2: jz      short loc_447BFB
0x447BF4: mov     ecx, eax
0x447BF6: call    sub_4E7690
0x447BFB: mov     ecx, esi; this
0x447BFD: call    TESObjectCELL_IsInterior
0x447C02: test    al, al
0x447C04: jnz     short loc_447C14
0x447C06: mov     ecx, esi; this
0x447C08: call    sub_4CE3C0
0x447C0D: mov     ecx, eax
0x447C0F: call    sub_4C6280
0x447C14: mov     ecx, esi; this
0x447C16: call    sub_4CE320
0x447C1B: mov     ecx, esi; this
0x447C1D: call    TESObjectCELL_IsInterior
0x447C22: test    al, al
0x447C24: mov     ecx, esi; this
0x447C26: jz      short loc_447C31
0x447C28: call    sub_4D1570
0x447C2D: pop     esi
0x447C2E: retn    4
0x447C31: push    esi
0x447C32: call    TESObjectCELL_GetWorldSpace
0x447C37: mov     ecx, eax
0x447C39: call    sub_4F1840
0x447C3E: pop     esi
0x447C3F: retn    4
