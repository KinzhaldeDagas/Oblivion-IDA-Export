0x46F370: cmp     [eax], esi
0x46F372: jz      short TESSpellList_AddSpell___Return_0
0x46F374: mov     eax, [eax+4]
0x46F377: test    eax, eax
0x46F379: jnz     short TESSpellList_AddSpell___SpellListLoop
0x46F37B: push    esi
0x46F37C: call    BSSimpleList_PushFront
0x46F381: mov     ecx, ds:0B333C4h; this
0x46F387: push    0; a2
0x46F389: call    Actor_GetActorBaseForm
0x46F38E: test    eax, eax
0x46F390: jz      short loc_46F397
0x46F392: add     eax, 54h ; 'T'
0x46F395: jmp     short loc_46F399
0x46F397: xor     eax, eax
0x46F399: cmp     edi, eax
0x46F39B: jnz     short TESSpellList_AddSpell___Return_1
0x46F39D: mov     eax, ds:0BA9DE4h
0x46F3A2: mov     ecx, large fs:2Ch
0x46F3A9: mov     edx, [ecx+eax*4]
0x46F3AC: cmp     byte ptr [edx+184h], 0
0x46F3B3: jnz     short TESSpellList_AddSpell___Return_1
0x46F3B5: mov     ecx, ds:0B333C4h
0x46F3BB: push    esi
0x46F3BC: call    PlayerCharacter_SetKnownEffect
