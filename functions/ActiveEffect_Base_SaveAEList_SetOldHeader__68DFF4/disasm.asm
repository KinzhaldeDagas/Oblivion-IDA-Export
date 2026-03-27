0x68DFF4: mov     edx, ds:0B33B00h
0x68DFFA: mov     edi, [esp+arg_10]
0x68DFFE: mov     esi, [edx+14h]
0x68E001: lea     eax, [edi+0FFFFh]
0x68E007: cmp     esi, eax
0x68E009: jbe     short loc_68E022
0x68E00B: push    36Bh
0x68E010: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68E015: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x68E01A: call    PrintError
0x68E01F: add     esp, 0Ch
0x68E022: sub     esi, edi
0x68E024: mov     [edi], si
