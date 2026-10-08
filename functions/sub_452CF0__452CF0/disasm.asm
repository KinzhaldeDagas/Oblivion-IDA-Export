0x452CF0: mov     eax, [esp+flags]
0x452CF4: mov     edx, [esp+formID]
0x452CF8: push    eax; flags
0x452CF9: push    edx; formID
0x452CFA: call    ChangesMap_SetChangeFlags;
0x452CFF: mov     ecx, [esp+buffer]
0x452D03: mov     [eax+4], ecx
0x452D06: retn    0Ch
