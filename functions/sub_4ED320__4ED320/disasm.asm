0x4ED320: push    0FFFFFFFFh
0x4ED322: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4ED327: mov     eax, large fs:0
0x4ED32D: push    eax
0x4ED32E: push    ecx
0x4ED32F: push    ebx
0x4ED330: push    esi
0x4ED331: push    edi
0x4ED332: mov     eax, ds:0B30AACh
0x4ED337: xor     eax, esp
0x4ED339: push    eax; ArgList
0x4ED33A: lea     eax, [esp+20h+var_C]
0x4ED33E: mov     large fs:0, eax
0x4ED344: mov     esi, ecx
0x4ED346: mov     eax, [esi+8]
0x4ED349: cmp     eax, 5
0x4ED34C: jz      short loc_4ED375
0x4ED34E: cmp     eax, 1
0x4ED351: jz      short loc_4ED375
0x4ED353: push    offset aTesterrainlodq; "TESTerrainLODQuad::BuildMesh called on "...
0x4ED358: call    PrintError
0x4ED35D: add     esp, 4
0x4ED360: xor     al, al
0x4ED362: mov     ecx, [esp+20h+var_C]
0x4ED366: mov     large fs:0, ecx
0x4ED36D: pop     ecx
0x4ED36E: pop     edi
0x4ED36F: pop     esi
0x4ED370: pop     ebx
0x4ED371: add     esp, 10h
0x4ED374: retn
0x4ED375: cmp     dword ptr [esi], 0
0x4ED378: jnz     short loc_4ED39C
0x4ED37A: push    offset aTesterrainlo_0; "TESTerrainLODQuad::BuildMesh(): pQuadRo"...
0x4ED37F: call    sub_40FEC0
0x4ED384: add     esp, 4
0x4ED387: xor     al, al
0x4ED389: mov     ecx, [esp+20h+var_C]
0x4ED38D: mov     large fs:0, ecx
0x4ED394: pop     ecx
0x4ED395: pop     edi
0x4ED396: pop     esi
0x4ED397: pop     ebx
0x4ED398: add     esp, 10h
0x4ED39B: retn
0x4ED39C: cmp     dword ptr [esi+4], 0
0x4ED3A0: lea     ebx, [esi+4]
0x4ED3A3: jnz     short loc_4ED419
0x4ED3A5: push    48h ; 'H'; Size
0x4ED3A7: mov     dword ptr [esi+8], 1
0x4ED3AE: call    FormHeapAlloc
0x4ED3B3: add     esp, 4
0x4ED3B6: mov     [esp+20h+var_10], eax
0x4ED3BA: test    eax, eax
0x4ED3BC: mov     [esp+20h+var_4], 0
0x4ED3C4: jz      short loc_4ED3FE
0x4ED3C6: mov     edx, [esi]
0x4ED3C8: test    edx, edx
0x4ED3CA: movzx   ecx, word ptr [edx+0Ah]
0x4ED3CE: movzx   edi, word ptr [edx+8]
0x4ED3D2: jz      short loc_4ED3E0
0x4ED3D4: mov     edx, [edx+4]
0x4ED3D7: test    edx, edx
0x4ED3D9: jz      short loc_4ED3E0
0x4ED3DB: mov     edx, [edx+10h]
0x4ED3DE: jmp     short loc_4ED3E2
0x4ED3E0: xor     edx, edx
0x4ED3E2: mov     edx, [edx+0Ch]
0x4ED3E5: movsx   ecx, cx
0x4ED3E8: shl     ecx, 5
0x4ED3EB: push    ecx
0x4ED3EC: movsx   ecx, di
0x4ED3EF: shl     ecx, 5
0x4ED3F2: push    ecx
0x4ED3F3: push    edx
0x4ED3F4: push    esi
0x4ED3F5: mov     ecx, eax; this
0x4ED3F7: call    ??0TerrainLODQuadLoadTask@@QAE@XZ; TerrainLODQuadLoadTask::TerrainLODQuadLoadTask(void)
0x4ED3FC: jmp     short loc_4ED400
0x4ED3FE: xor     eax, eax
0x4ED400: push    eax
0x4ED401: mov     ecx, ebx
0x4ED403: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4ED40B: call    sub_4BCB70
0x4ED410: mov     ecx, [ebx]
0x4ED412: mov     edx, [ecx]
0x4ED414: mov     eax, [edx+20h]
0x4ED417: call    eax
0x4ED419: mov     al, 1
0x4ED41B: mov     ecx, [esp+20h+var_C]
0x4ED41F: mov     large fs:0, ecx
0x4ED426: pop     ecx
0x4ED427: pop     edi
0x4ED428: pop     esi
0x4ED429: pop     ebx
0x4ED42A: add     esp, 10h
0x4ED42D: retn
