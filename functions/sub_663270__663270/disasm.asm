0x663270: mov     byte ptr ds:0B3BB07h, 0
0x663277: call    InterfaceManager_ConsumeMessageButton
0x66327C: cmp     al, 1
0x66327E: jnz     short loc_66328B
0x663280: mov     ecx, ds:0B33B00h
0x663286: jmp     loc_466D50
0x66328B: cmp     al, 2
0x66328D: jnz     short locret_663298
0x66328F: mov     eax, ds:0B33398h
0x663294: mov     byte ptr [eax+1], 1
0x663298: retn
0x466D50: mov     eax, [ecx+1C0h]
0x466D56: test    eax, eax
0x466D58: jz      short loc_466D68
0x466D5A: push    0
0x466D5C: push    eax
0x466D5D: push    0
0x466D5F: call    TESSaveLoadGame_LoadGame;  Verified map lifecycle: allocates incomingChangesMap at +4, stores save records there, reconciles pre-load currentChangesMap at +0 after form loading, then swaps in incoming map via 464440. The map roles are based on direct stores/lookups and final pointer assignments.
0x466D64: test    al, al
0x466D66: jnz     short locret_466D70
0x466D68: push    0
0x466D6A: call    LoadgameMenu_Open; CharacterSpecificSaves v5 hooks all callers. Its wrapper resets to the character overview, pre-enumerates *g_createdBaseObjList, and prepares exact-name grouping before native menu construction; this covers the native branch that can skip 0x005AEBB6.
0x466D6F: pop     ecx
0x466D70: retn
