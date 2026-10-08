0x4534D0: push    esi; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x4534D1: push    edi
0x4534D2: mov     edi, [esp+8+Size]
0x4534D6: mov     esi, ecx
0x4534D8: mov     eax, [esi+14h]
0x4534DB: mov     ecx, [esp+8+Dst]
0x4534DF: push    edi; byteCount
0x4534E0: push    eax; source
0x4534E1: push    ecx; destination
0x4534E2: call    _memcpy; EngineIssues review: central save-record LoadData memcpy reads from save cursor and advances it without an active record-buffer bounds check.
0x4534E7: add     [esi+14h], edi
0x4534EA: add     esp, 0Ch
0x4534ED: pop     edi
0x4534EE: pop     esi
0x4534EF: retn    8
