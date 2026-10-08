0x7A2540: push    esi; Oblivion stock 16013 flare-seed parser: reads one dword from file and stores it at CTreeEngine+0x54.
0x7A2541: mov     esi, ecx
0x7A2543: mov     ecx, [esp+4+file]; this
0x7A2547: call    OB_CTreeFileAccess_ReadDword_010201A0; SpeedTreeOBSE 2026-05-25 stock scalar-tail pass: top-level 16013/File_FlareSeed delegates here, reads one dword, and stores it at CTreeEngine+0x54.
0x7A254C: mov     [esi+54h], eax
0x7A254F: pop     esi
0x7A2550: retn    4
