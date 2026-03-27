0x4AE830: push    esi
0x4AE831: mov     esi, ecx
0x4AE833: mov     eax, [esi+8]
0x4AE836: shr     eax, 0Eh
0x4AE839: test    al, 1
0x4AE83B: jnz     short loc_4AE8B8
0x4AE83D: mov     eax, [esi+58h]
0x4AE840: test    eax, eax
0x4AE842: jnz     short loc_4AE899
0x4AE844: mov     edx, [esi]
0x4AE846: push    eax
0x4AE847: mov     eax, [edx+114h]
0x4AE84D: call    eax
0x4AE84F: push    eax; NiObjectNET *
0x4AE850: call    NiObjectNET__GetBSFornitureMarker
0x4AE855: add     esp, 4
0x4AE858: test    eax, eax
0x4AE85A: jnz     short loc_4AE86F
0x4AE85C: mov     edx, [esi+30h]
0x4AE85F: mov     eax, [edx+14h]
0x4AE862: lea     ecx, [esi+30h]
0x4AE865: call    eax
0x4AE867: push    eax
0x4AE868: push    offset aNoFurnituremar; "No FurnitureMarkers found in '%s'."
0x4AE86D: jmp     short loc_4AE881
0x4AE86F: mov     edx, [esi]
0x4AE871: mov     eax, [edx+0D4h]
0x4AE877: mov     ecx, esi
0x4AE879: call    eax
0x4AE87B: push    eax; ArgList
0x4AE87C: push    offset aYouHaveNotSele; "You have not selected any FurnitureMark"...
0x4AE881: call    PrintError
0x4AE886: mov     edx, [esi]
0x4AE888: mov     eax, [edx+0F0h]
0x4AE88E: add     esp, 8
0x4AE891: push    0
0x4AE893: mov     ecx, esi
0x4AE895: call    eax
0x4AE897: pop     esi
0x4AE898: retn
0x4AE899: test    eax, 0C0000000h
0x4AE89E: jnz     short loc_4AE8B8
0x4AE8A0: mov     edx, [esi]
0x4AE8A2: mov     eax, [edx+0D4h]
0x4AE8A8: call    eax
0x4AE8AA: push    eax; ArgList
0x4AE8AB: push    offset aFurnitureSIsNo; "Furniture '%s' is not marked for sittin"...
0x4AE8B0: call    PrintError
0x4AE8B5: add     esp, 8
0x4AE8B8: pop     esi
0x4AE8B9: retn
