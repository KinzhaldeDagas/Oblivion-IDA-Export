0x4A6120: push    ebp
0x4A6121: push    esi
0x4A6122: push    edi
0x4A6123: mov     edi, ecx
0x4A6125: test    edi, edi
0x4A6127: jz      short loc_4A612E
0x4A6129: lea     ebp, [edi+4]
0x4A612C: jmp     short loc_4A6130
0x4A612E: xor     ebp, ebp
0x4A6130: mov     esi, [esp+0Ch+arg_0]
0x4A6134: test    esi, esi
0x4A6136: jnz     short loc_4A6161
0x4A6138: push    14h; Size
0x4A613A: call    FormHeapAlloc
0x4A613F: add     esp, 4
0x4A6142: test    eax, eax
0x4A6144: jz      short loc_4A615D
0x4A6146: mov     cl, [edi+0Ch]
0x4A6149: mov     [eax+4], esi
0x4A614C: mov     [eax+8], esi
0x4A614F: mov     dword ptr [eax], offset ??_7TESRegionGrassObjectList@@6B@; const TESRegionGrassObjectList::`vftable'
0x4A6155: mov     [eax+0Ch], cl
0x4A6158: mov     [eax+10h], esi
0x4A615B: jmp     short loc_4A615F
0x4A615D: xor     eax, eax
0x4A615F: mov     esi, eax
0x4A6161: test    ebp, ebp
0x4A6163: jz      short loc_4A61D3
0x4A6165: mov     edi, 1
0x4A616A: lea     ebx, [ebx+0]
0x4A6170: mov     ecx, [ebp+0]
0x4A6173: test    ecx, ecx
0x4A6175: jz      short loc_4A61D3
0x4A6177: cmp     byte ptr [esi+0Ch], 0
0x4A617B: jz      short loc_4A61AD
0x4A617D: mov     eax, [ecx]
0x4A617F: mov     edx, [eax+14h]
0x4A6182: push    0
0x4A6184: call    edx
0x4A6186: test    eax, eax
0x4A6188: jz      short loc_4A61CC
0x4A618A: lea     ecx, [esi+4]
0x4A618D: mov     edx, ecx
0x4A618F: test    edx, edx
0x4A6191: jz      short loc_4A619E
0x4A6193: cmp     [edx], eax
0x4A6195: jz      short loc_4A61A1
0x4A6197: mov     edx, [edx+4]
0x4A619A: test    edx, edx
0x4A619C: jnz     short loc_4A6193
0x4A619E: push    eax
0x4A619F: jmp     short loc_4A61C4
0x4A61A1: mov     edx, [eax]
0x4A61A3: mov     ecx, eax
0x4A61A5: mov     eax, [edx+8]
0x4A61A8: push    edi
0x4A61A9: call    eax
0x4A61AB: jmp     short loc_4A61CC
0x4A61AD: lea     edx, [esi+4]
0x4A61B0: mov     eax, edx
0x4A61B2: test    eax, eax
0x4A61B4: jz      short loc_4A61C1
0x4A61B6: cmp     [eax], ecx
0x4A61B8: jz      short loc_4A61CC
0x4A61BA: mov     eax, [eax+4]
0x4A61BD: test    eax, eax
0x4A61BF: jnz     short loc_4A61B6
0x4A61C1: push    ecx
0x4A61C2: mov     ecx, edx
0x4A61C4: call    BSSimpleList_PushBack
0x4A61C9: add     [esi+10h], edi
0x4A61CC: mov     ebp, [ebp+4]
0x4A61CF: test    ebp, ebp
0x4A61D1: jnz     short loc_4A6170
0x4A61D3: pop     edi
0x4A61D4: mov     eax, esi
0x4A61D6: pop     esi
0x4A61D7: pop     ebp
0x4A61D8: retn    4
