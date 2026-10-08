0x42B500: push    ecx
0x42B501: push    esi
0x42B502: mov     esi, ecx
0x42B504: mov     ecx, g_TESSaveLoadGame; self
0x42B50A: push    0Ch; byteCount
0x42B50C: lea     eax, [esi+4]
0x42B50F: push    eax; destination
0x42B510: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42B515: push    0Ch; byteCount
0x42B517: lea     ecx, [esi+10h]
0x42B51A: push    ecx; destination
0x42B51B: mov     ecx, g_TESSaveLoadGame; self
0x42B521: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x42B526: mov     ecx, g_TESSaveLoadGame; self
0x42B52C: push    4; byteCount
0x42B52E: lea     edx, [esp+0Ch+Dst]
0x42B532: push    edx; destination
0x42B533: call    SaveLoad_LoadFormID; EnginePatch v2: byte-checked SaveLoad_LoadFormID hook. Bounded save-buffer copy, then preserves original iref-to-formID translation behavior.
0x42B538: mov     eax, dword ptr [esp+10h+var_C]
0x42B53C: mov     [esi], eax
0x42B53E: pop     esi
0x42B53F: pop     ecx
0x42B540: retn
