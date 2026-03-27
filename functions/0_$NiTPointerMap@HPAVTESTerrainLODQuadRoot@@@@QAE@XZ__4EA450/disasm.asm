0x4EA450: push    0FFFFFFFFh
0x4EA452: push    offset ??0?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@QAE@XZ_SEH
0x4EA457: mov     eax, large fs:0
0x4EA45D: push    eax
0x4EA45E: push    ecx
0x4EA45F: push    ebp
0x4EA460: push    esi
0x4EA461: push    edi
0x4EA462: mov     eax, ds:0B30AACh
0x4EA467: xor     eax, esp
0x4EA469: push    eax
0x4EA46A: lea     eax, [esp+20h+var_C]
0x4EA46E: mov     large fs:0, eax
0x4EA474: mov     esi, ecx
0x4EA476: mov     [esp+20h+var_10], esi
0x4EA47A: xor     ecx, ecx
0x4EA47C: mov     eax, 25h ; '%'
0x4EA481: mov     [esi+4], eax
0x4EA484: xor     ebp, ebp
0x4EA486: mov     edx, 4
0x4EA48B: mul     edx
0x4EA48D: seto    cl
0x4EA490: mov     dword ptr [esi], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@HPAVTESTerrainLODQuadRoot@@@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,int,TESTerrainLODQuadRoot *>::`vftable'
0x4EA496: mov     [esi+0Ch], ebp
0x4EA499: neg     ecx
0x4EA49B: or      ecx, eax
0x4EA49D: push    ecx; Size
0x4EA49E: call    FormHeapAlloc
0x4EA4A3: mov     ecx, [esi+4]
0x4EA4A6: add     ecx, ecx
0x4EA4A8: add     ecx, ecx
0x4EA4AA: push    ecx
0x4EA4AB: push    ebp
0x4EA4AC: push    eax
0x4EA4AD: mov     [esi+8], eax
0x4EA4B0: call    __memset
0x4EA4B5: add     esp, 10h
0x4EA4B8: mov     dword ptr [esi], offset ??_7?$NiTPointerMap@HPAVTESTerrainLODQuadRoot@@@@6B@; const NiTPointerMap<int,TESTerrainLODQuadRoot *>::`vftable'
0x4EA4BE: mov     [esi+14h], ebp
0x4EA4C1: mov     [esi+18h], ebp
0x4EA4C4: cmp     ds:0B360A0h, ebp
0x4EA4CA: mov     [esp+20h+var_4], ebp
0x4EA4CE: jnz     short loc_4EA532
0x4EA4D0: mov     eax, 800h
0x4EA4D5: cdq
0x4EA4D6: idiv    dword ptr ds:0B09B20h
0x4EA4DC: cmp     ds:0B36098h, ebp
0x4EA4E2: mov     edi, eax
0x4EA4E4: jnz     short loc_4EA507
0x4EA4E6: imul    eax, edi
0x4EA4E9: xor     ecx, ecx
0x4EA4EB: mov     edx, 0Ch
0x4EA4F0: mul     edx
0x4EA4F2: seto    cl
0x4EA4F5: neg     ecx
0x4EA4F7: or      ecx, eax
0x4EA4F9: push    ecx; Size
0x4EA4FA: call    FormHeapAlloc
0x4EA4FF: add     esp, 4
0x4EA502: mov     ds:0B36098h, eax
0x4EA507: cmp     ds:0B3609Ch, ebp
0x4EA50D: jnz     short loc_4EA532
0x4EA50F: mov     eax, edi
0x4EA511: imul    eax, edi
0x4EA514: xor     ecx, ecx
0x4EA516: mov     edx, 4
0x4EA51B: mul     edx
0x4EA51D: seto    cl
0x4EA520: neg     ecx
0x4EA522: or      ecx, eax
0x4EA524: push    ecx; Size
0x4EA525: call    FormHeapAlloc
0x4EA52A: add     esp, 4
0x4EA52D: mov     ds:0B3609Ch, eax
0x4EA532: fld     dword ptr ds:0B09B28h
0x4EA538: add     dword ptr ds:0B360A0h, 1
0x4EA53F: fstp    dword ptr ds:0B46064h
0x4EA545: mov     eax, esi
0x4EA547: fld     dword ptr ds:0B09B30h
0x4EA54D: fstp    dword ptr ds:0B46068h
0x4EA553: mov     ecx, [esp+20h+var_C]
0x4EA557: mov     large fs:0, ecx
0x4EA55E: pop     ecx
0x4EA55F: pop     edi
0x4EA560: pop     esi
0x4EA561: pop     ebp
0x4EA562: add     esp, 10h
0x4EA565: retn
