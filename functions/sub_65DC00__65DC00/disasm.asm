0x65DC00: push    1
0x65DC02: call    LoadgameMenu_Open; CharacterSpecificSaves v5 hooks all callers. Its wrapper resets to the character overview, pre-enumerates *g_createdBaseObjList, and prepares exact-name grouping before native menu construction; this covers the native branch that can skip 0x005AEBB6.
0x65DC07: pop     ecx
0x65DC08: retn
