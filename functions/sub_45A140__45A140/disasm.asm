0x45A140: push    ebx
0x45A141: mov     bl, [esp+4+arg_0]
0x45A145: cmp     bl, 13h
0x45A148: push    esi
0x45A149: mov     esi, ecx
0x45A14B: jnb     short loc_45A160
0x45A14D: movzx   eax, bl
0x45A150: push    13h
0x45A152: push    eax; ArgList
0x45A153: push    offset aSavegameLoadin; "Savegame loading error: Attempting to s"...
0x45A158: call    PrintError
0x45A15D: add     esp, 0Ch
0x45A160: mov     [esi+7Ch], bl
