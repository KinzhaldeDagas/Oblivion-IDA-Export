0x65C270: sub     esp, 0Ch
0x65C273: push    ebx
0x65C274: push    ebp
0x65C275: push    esi
0x65C276: push    edi
0x65C277: mov     edi, ecx
0x65C279: mov     ecx, ds:0B33B00h; self
0x65C27F: push    2; byteCount
0x65C281: lea     eax, [esp+20h+Src]
0x65C285: mov     [esp+20h+Src], 0
0x65C28D: mov     ebx, [ecx+14h]
0x65C290: push    eax; source
0x65C291: call    SaveLoad_SaveData
0x65C296: test    edi, edi
0x65C298: mov     esi, edi
0x65C29A: mov     ebp, 1
0x65C29F: jz      short AVCollection_Save___SaveMagickaNode
0x65C2A1: mov     eax, [esi]
0x65C2A3: test    eax, eax
0x65C2A5: jz      short AVCollection_Save___SaveMagickaNode
0x65C2A7: mov     cl, [eax]
0x65C2A9: fld     dword ptr [eax+4]
0x65C2AC: push    ebp; byteCount
0x65C2AD: fstp    [esp+20h+var_4]
0x65C2B1: lea     edx, [esp+20h+source]
0x65C2B5: mov     [esp+20h+source], cl
0x65C2B9: mov     ecx, ds:0B33B00h; self
0x65C2BF: push    edx; source
0x65C2C0: call    SaveLoad_SaveData
0x65C2C5: mov     ecx, ds:0B33B00h; self
0x65C2CB: push    4; byteCount
0x65C2CD: lea     eax, [esp+20h+var_4]
0x65C2D1: push    eax; source
0x65C2D2: call    SaveLoad_SaveData
0x65C2D7: add     [esp+1Ch+Src], ebp
0x65C2DB: mov     esi, [esi+4]
0x65C2DE: test    esi, esi
0x65C2E0: jnz     short AVCollection_Save___SaveListLoop
0x65C2E2: mov     eax, [edi+8]
0x65C2E5: test    eax, eax
0x65C2E7: jz      short AVCollection_Save___SaveFatigueNode
0x65C2E9: mov     cl, [eax]
0x65C2EB: fld     dword ptr [eax+4]
0x65C2EE: push    ebp; byteCount
0x65C2EF: fstp    [esp+20h+var_4]
0x65C2F3: lea     edx, [esp+20h+source]
0x65C2F7: mov     [esp+20h+source], cl
0x65C2FB: mov     ecx, ds:0B33B00h; self
0x65C301: push    edx; source
0x65C302: call    SaveLoad_SaveData
0x65C307: mov     ecx, ds:0B33B00h; self
0x65C30D: push    4; byteCount
0x65C30F: lea     eax, [esp+20h+var_4]
0x65C313: push    eax; source
0x65C314: call    SaveLoad_SaveData
0x65C319: add     [esp+1Ch+Src], ebp
0x65C31D: mov     eax, [edi+0Ch]
0x65C320: test    eax, eax
0x65C322: jz      short AVCollection_Save___SaveArray
0x65C324: mov     cl, [eax]
0x65C326: fld     dword ptr [eax+4]
0x65C329: push    ebp; byteCount
0x65C32A: fstp    [esp+20h+var_4]
0x65C32E: lea     edx, [esp+20h+source]
0x65C332: mov     [esp+20h+source], cl
0x65C336: mov     ecx, ds:0B33B00h; self
0x65C33C: push    edx; source
0x65C33D: call    SaveLoad_SaveData
0x65C342: mov     ecx, ds:0B33B00h; self
0x65C348: push    4; byteCount
0x65C34A: lea     eax, [esp+20h+var_4]
0x65C34E: push    eax; source
0x65C34F: call    SaveLoad_SaveData
0x65C354: add     [esp+1Ch+Src], ebp
0x65C358: mov     eax, [edi+10h]
0x65C35B: test    eax, eax
0x65C35D: jz      AVCollection_Save___Done
0x65C363: mov     ecx, [eax]
0x65C365: push    ecx; entry
0x65C366: mov     ecx, edi; self
0x65C368: call    AVCollection_SaveEntryIfPresent
0x65C36D: test    al, al
0x65C36F: jz      short loc_65C375
0x65C371: add     [esp+1Ch+Src], ebp
0x65C375: mov     edx, [edi+10h]
0x65C378: mov     eax, [edx+4]
0x65C37B: push    eax; entry
0x65C37C: mov     ecx, edi; self
0x65C37E: call    AVCollection_SaveEntryIfPresent
0x65C383: test    al, al
0x65C385: jz      short loc_65C38B
0x65C387: add     [esp+1Ch+Src], ebp
0x65C38B: mov     ecx, [edi+10h]
0x65C38E: mov     edx, [ecx+8]
0x65C391: push    edx; entry
0x65C392: mov     ecx, edi; self
0x65C394: call    AVCollection_SaveEntryIfPresent
0x65C399: test    al, al
0x65C39B: jz      short loc_65C3A1
0x65C39D: add     [esp+1Ch+Src], ebp
0x65C3A1: mov     eax, [edi+10h]
0x65C3A4: mov     ecx, [eax+0Ch]
0x65C3A7: push    ecx; entry
0x65C3A8: mov     ecx, edi; self
0x65C3AA: call    AVCollection_SaveEntryIfPresent
0x65C3AF: test    al, al
0x65C3B1: jz      short loc_65C3B7
0x65C3B3: add     [esp+1Ch+Src], ebp
0x65C3B7: mov     edx, [edi+10h]
0x65C3BA: mov     eax, [edx+10h]
0x65C3BD: push    eax; entry
0x65C3BE: mov     ecx, edi; self
0x65C3C0: call    AVCollection_SaveEntryIfPresent
0x65C3C5: test    al, al
0x65C3C7: jz      short loc_65C3CD
0x65C3C9: add     [esp+1Ch+Src], ebp
0x65C3CD: mov     ecx, [edi+10h]
0x65C3D0: mov     edx, [ecx+14h]
0x65C3D3: push    edx; entry
0x65C3D4: mov     ecx, edi; self
0x65C3D6: call    AVCollection_SaveEntryIfPresent
0x65C3DB: test    al, al
0x65C3DD: jz      short loc_65C3E3
0x65C3DF: add     [esp+1Ch+Src], ebp
0x65C3E3: mov     eax, [edi+10h]
0x65C3E6: mov     ecx, [eax+18h]
0x65C3E9: push    ecx; entry
0x65C3EA: mov     ecx, edi; self
0x65C3EC: call    AVCollection_SaveEntryIfPresent
0x65C3F1: test    al, al
0x65C3F3: jz      short loc_65C3F9
0x65C3F5: add     [esp+1Ch+Src], ebp
0x65C3F9: mov     edx, [edi+10h]
0x65C3FC: mov     eax, [edx+1Ch]
0x65C3FF: push    eax; entry
0x65C400: mov     ecx, edi; self
0x65C402: call    AVCollection_SaveEntryIfPresent
0x65C407: test    al, al
0x65C409: jz      short loc_65C40F
0x65C40B: add     [esp+1Ch+Src], ebp
0x65C40F: mov     ecx, [edi+10h]
0x65C412: mov     edx, [ecx+20h]
0x65C415: push    edx; entry
0x65C416: mov     ecx, edi; self
0x65C418: call    AVCollection_SaveEntryIfPresent
0x65C41D: test    al, al
0x65C41F: jz      short loc_65C425
0x65C421: add     [esp+1Ch+Src], ebp
0x65C425: mov     eax, [edi+10h]
0x65C428: mov     ecx, [eax+24h]
0x65C42B: push    ecx; entry
0x65C42C: mov     ecx, edi; self
0x65C42E: call    AVCollection_SaveEntryIfPresent
0x65C433: test    al, al
0x65C435: jz      short loc_65C43B
0x65C437: add     [esp+1Ch+Src], ebp
0x65C43B: mov     edx, [edi+10h]
0x65C43E: mov     eax, [edx+28h]
0x65C441: push    eax; entry
0x65C442: mov     ecx, edi; self
0x65C444: call    AVCollection_SaveEntryIfPresent
0x65C449: test    al, al
0x65C44B: jz      short loc_65C451
0x65C44D: add     [esp+1Ch+Src], ebp
0x65C451: mov     ecx, [edi+10h]
0x65C454: mov     edx, [ecx+2Ch]
0x65C457: push    edx; entry
0x65C458: mov     ecx, edi; self
0x65C45A: call    AVCollection_SaveEntryIfPresent
0x65C45F: test    al, al
0x65C461: jz      short loc_65C467
0x65C463: add     [esp+1Ch+Src], ebp
0x65C467: mov     eax, [edi+10h]
0x65C46A: mov     ecx, [eax+30h]
0x65C46D: push    ecx; entry
0x65C46E: mov     ecx, edi; self
0x65C470: call    AVCollection_SaveEntryIfPresent
0x65C475: test    al, al
0x65C477: jz      short loc_65C47D
0x65C479: add     [esp+1Ch+Src], ebp
0x65C47D: mov     edx, [edi+10h]
0x65C480: mov     eax, [edx+34h]
0x65C483: push    eax; entry
0x65C484: mov     ecx, edi; self
0x65C486: call    AVCollection_SaveEntryIfPresent
0x65C48B: test    al, al
0x65C48D: jz      short loc_65C493
0x65C48F: add     [esp+1Ch+Src], ebp
0x65C493: mov     ecx, [edi+10h]
0x65C496: mov     edx, [ecx+38h]
0x65C499: push    edx; entry
0x65C49A: mov     ecx, edi; self
0x65C49C: call    AVCollection_SaveEntryIfPresent
0x65C4A1: test    al, al
0x65C4A3: jz      short loc_65C4A9
0x65C4A5: add     [esp+1Ch+Src], ebp
0x65C4A9: mov     eax, [edi+10h]
0x65C4AC: mov     ecx, [eax+3Ch]
0x65C4AF: push    ecx; entry
0x65C4B0: mov     ecx, edi; self
0x65C4B2: call    AVCollection_SaveEntryIfPresent
0x65C4B7: test    al, al
0x65C4B9: jz      short loc_65C4BF
0x65C4BB: add     [esp+1Ch+Src], ebp
0x65C4BF: mov     edx, [edi+10h]
0x65C4C2: mov     eax, [edx+40h]
0x65C4C5: push    eax; entry
0x65C4C6: mov     ecx, edi; self
0x65C4C8: call    AVCollection_SaveEntryIfPresent
0x65C4CD: test    al, al
0x65C4CF: jz      short loc_65C4D5
0x65C4D1: add     [esp+1Ch+Src], ebp
0x65C4D5: mov     ecx, [edi+10h]
0x65C4D8: mov     edx, [ecx+44h]
0x65C4DB: push    edx; entry
0x65C4DC: mov     ecx, edi; self
0x65C4DE: call    AVCollection_SaveEntryIfPresent
0x65C4E3: test    al, al
0x65C4E5: jz      short loc_65C4F8
0x65C4E7: mov     eax, [esp+1Ch+Src]
0x65C4EB: pop     edi
0x65C4EC: pop     esi
0x65C4ED: add     eax, ebp
0x65C4EF: pop     ebp
0x65C4F0: mov     [ebx], ax
0x65C4F3: pop     ebx
0x65C4F4: add     esp, 0Ch
0x65C4F7: retn
0x65C4F8: mov     ax, word ptr [esp+1Ch+Src]
0x65C4FD: pop     edi
0x65C4FE: pop     esi
0x65C4FF: pop     ebp
0x65C500: mov     [ebx], ax
0x65C503: pop     ebx
0x65C504: add     esp, 0Ch
0x65C507: retn
0x65C508: mov     cx, word ptr [esp+1Ch+Src]
0x65C50D: pop     edi
0x65C50E: pop     esi
0x65C50F: pop     ebp
0x65C510: mov     [ebx], cx
0x65C513: pop     ebx
0x65C514: add     esp, 0Ch
0x65C517: retn
