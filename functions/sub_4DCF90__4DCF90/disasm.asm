0x4DCF90: push    esi; ArgList
0x4DCF91: mov     esi, ecx
0x4DCF93: cmp     dword ptr [esi+3Ch], 0
0x4DCF97: jz      short loc_4DCFEE
0x4DCF99: mov     eax, [esi]
0x4DCF9B: mov     edx, [eax+168h]
0x4DCFA1: call    edx
0x4DCFA3: mov     ecx, ds:0B333C4h; this
0x4DCFA9: cmp     esi, ecx
0x4DCFAB: jnz     short loc_4DCFB4
0x4DCFAD: push    0; firstPerson
0x4DCFAF: call    Actor_GetSkinInfoByPerspective; Per-perspective ActorSkinInfo selector. false returns Actor+0x104; true returns PlayerCharacter+0x5C8. ActorSkinInfo is the 0x154-byte skin/bone/equipment context. It is not ActorAnimData; first-person ActorAnimData is independently at PlayerCharacter+0x5CC and selected by 0x65D750. firstPerson=true is meaningful only for the player.
0x4DCFB4: test    eax, eax
0x4DCFB6: jz      short loc_4DCFC6
0x4DCFB8: mov     ecx, [esp+4+arg_0]
0x4DCFBC: push    ecx; int
0x4DCFBD: mov     ecx, eax; int
0x4DCFBF: call    sub_47B9A0
0x4DCFC4: jmp     short loc_4DCFD3
0x4DCFC6: push    offset aCreaturesAre_0; "Creatures are not allowed to wear amule"...
0x4DCFCB: call    PrintError
0x4DCFD0: add     esp, 4
0x4DCFD3: mov     edx, [esi]
0x4DCFD5: mov     eax, [edx+190h]
0x4DCFDB: mov     ecx, esi
0x4DCFDD: call    eax
0x4DCFDF: test    al, al
0x4DCFE1: jz      short loc_4DCFEE
0x4DCFE3: mov     ecx, [esi+3Ch]
0x4DCFE6: push    ecx
0x4DCFE7: mov     ecx, esi
0x4DCFE9: call    sub_5EA1A0
0x4DCFEE: pop     esi
0x4DCFEF: retn    4
