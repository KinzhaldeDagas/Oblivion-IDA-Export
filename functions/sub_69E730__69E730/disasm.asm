0x69E730: mov     eax, [esp+Dst]; Verified (Oblivion): loads base hit-effect data, optionally starts an I/O task using the owner ActiveEffect's model path, then reads a 16-bit length and allocates/stores that many payload bytes at object +0x2C. The payload's precise in-memory semantic type remains Candidate.
0x69E734: push    esi
0x69E735: mov     esi, [esp+4+ownerActiveEffect]
0x69E739: push    edi
0x69E73A: push    eax; targetReference
0x69E73B: push    esi; ownerActiveEffect
0x69E73C: mov     edi, ecx
0x69E73E: call    MagicHitEffect_LoadExtraData; Verified load callback arguments: ownerActiveEffect is stored at +0x18 and targetReference at +0x1C; it restores elapsedSeconds and bFinished, plus durationSeconds on version 0x72+.
0x69E743: test    esi, esi
0x69E745: jz      short loc_69E7B0
0x69E747: mov     ecx, [esi+0Ch]
0x69E74A: mov     eax, [ecx+1Ch]
0x69E74D: mov     edx, [eax+18h]
0x69E750: lea     ecx, [eax+18h]
0x69E753: mov     eax, [edx+14h]
0x69E756: call    eax
0x69E758: test    eax, eax
0x69E75A: jz      short loc_69E7B0
0x69E75C: mov     ecx, [esi+0Ch]
0x69E75F: mov     eax, [ecx+1Ch]
0x69E762: mov     edx, [eax+18h]
0x69E765: push    0
0x69E767: push    1
0x69E769: push    0
0x69E76B: lea     ecx, [eax+18h]
0x69E76E: mov     eax, [edx+14h]
0x69E771: push    0
0x69E773: push    0
0x69E775: push    5
0x69E777: call    eax
0x69E779: push    eax
0x69E77A: lea     ecx, [esp+24h+ownerActiveEffect]
0x69E77E: push    ecx
0x69E77F: mov     ecx, ds:0B33A1Ch
0x69E785: call    sub_43B420
0x69E78A: mov     eax, [esp+8+ownerActiveEffect]
0x69E78E: test    eax, eax
0x69E790: jz      short loc_69E7B0
0x69E792: mov     esi, eax
0x69E794: add     eax, 8
0x69E797: push    eax; lpAddend
0x69E798: call    dword ptr ds:0A2807Ch
0x69E79E: test    eax, eax
0x69E7A0: jnz     short loc_69E7B0
0x69E7A2: test    esi, esi
0x69E7A4: jz      short loc_69E7B0
0x69E7A6: mov     edx, [esi]
0x69E7A8: mov     eax, [edx]
0x69E7AA: push    1
0x69E7AC: mov     ecx, esi
0x69E7AE: call    eax
0x69E7B0: push    2; byteCount
0x69E7B2: lea     ecx, [esp+0Ch+Dst]
0x69E7B6: push    ecx; destination
0x69E7B7: mov     ecx, ds:0B33B00h; self
0x69E7BD: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x69E7C2: mov     ax, word ptr [esp+8+Dst]
0x69E7C7: test    ax, ax
0x69E7CA: jz      short loc_69E801
0x69E7CC: movzx   eax, ax
0x69E7CF: add     eax, 2
0x69E7D2: push    1
0x69E7D4: push    eax
0x69E7D5: mov     ecx, offset FormHeap
0x69E7DA: call    j_MemoryHeap_Alloc
0x69E7DF: mov     dx, word ptr [esp+8+Dst]
0x69E7E4: mov     esi, eax
0x69E7E6: mov     [esi], dx
0x69E7E9: movzx   eax, word ptr [esp+8+Dst]
0x69E7EE: push    eax; byteCount
0x69E7EF: lea     ecx, [esi+2]
0x69E7F2: push    ecx; destination
0x69E7F3: mov     ecx, ds:0B33B00h; self
0x69E7F9: call    SaveLoad_LoadData; OBMEFix fidelity baseline: SaveLoad_LoadData advances TESSaveLoadGame::bufferOffset at +0x14; OBMEFix uses this for OBME dummy conversion headers and restores the cursor after peeking.
0x69E7FE: mov     [edi+2Ch], esi
0x69E801: pop     edi
0x69E802: pop     esi
0x69E803: retn    8
