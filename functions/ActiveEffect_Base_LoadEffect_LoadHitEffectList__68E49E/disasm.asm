0x68E49E: push    1; Verified version 0x2A+ ActiveEffect load reads the hit-effect count and reconstructs each BSTempEffect into the list at +0x34. Type codes 5 and 6 dispatch MagicModelHitEffect and MagicShaderHitEffect loaders; each allocated node is eight bytes.
0x68E4A0: lea     edx, [esp+4+Dst+2]
0x68E4A4: push    edx; destination
0x68E4A5: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x68E4AA: cmp     byte ptr [esp+Dst+2], bl
0x68E4AE: mov     [esp+arg_14], ebx
0x68E4B2: jbe     ActiveEffect_Base_LoadEffect___LoadUnk14_
