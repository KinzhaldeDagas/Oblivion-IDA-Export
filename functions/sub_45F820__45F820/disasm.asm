0x45F820: sub     esp, 0Ch
0x45F823: push    ebx
0x45F824: mov     ebx, ds:0B33A98h
0x45F82A: push    ebp
0x45F82B: add     ebx, 74h ; 't'
0x45F82E: push    esi
0x45F82F: xor     eax, eax
0x45F831: test    ebx, ebx
0x45F833: mov     esi, ecx
0x45F835: push    edi; ArgList
0x45F836: mov     ecx, ebx
0x45F838: jz      short loc_45F84F
0x45F83A: lea     ebx, [ebx+0]
0x45F840: cmp     dword ptr [ecx], 0
0x45F843: jz      short loc_45F848
0x45F845: add     eax, 1
0x45F848: mov     ecx, [ecx+4]
0x45F84B: test    ecx, ecx
0x45F84D: jnz     short loc_45F840
0x45F84F: movzx   ecx, ax
0x45F852: lea     edx, ds:2[eax*8]
0x45F859: movzx   eax, dx
0x45F85C: movzx   ebp, ax
0x45F85F: push    1
0x45F861: mov     [esp+20h+Src], ecx
0x45F865: push    ebp
0x45F866: mov     ecx, offset FormHeap
0x45F86B: call    j_MemoryHeap_Alloc
0x45F870: test    eax, eax
0x45F872: mov     [esi+14h], eax
0x45F875: jnz     short loc_45F884
0x45F877: push    offset aCouldNotCreate; "Could not create save buffer, out of me"...
0x45F87C: call    sub_404EC0
0x45F881: add     esp, 4
0x45F884: mov     edi, [esi+14h]
0x45F887: push    2; Size
0x45F889: lea     eax, [esp+20h+Src]
0x45F88D: push    eax; Src
0x45F88E: mov     ecx, esi
0x45F890: mov     [esp+24h+var_4], edi
0x45F894: call    SaveLoad_SaveData
0x45F899: test    ebx, ebx
0x45F89B: jz      short loc_45F90F
0x45F89D: lea     ecx, [ecx+0]
0x45F8A0: mov     eax, [ebx]
0x45F8A2: test    eax, eax
0x45F8A4: jz      short loc_45F904
0x45F8A6: mov     ecx, [eax+0Ch]
0x45F8A9: fld     dword ptr [eax+24h]
0x45F8AC: push    4
0x45F8AE: fstp    [esp+20h+var_8]
0x45F8B2: lea     edx, [esp+20h+Src]
0x45F8B6: mov     [esp+20h+Src], ecx
0x45F8BA: push    edx
0x45F8BB: mov     ecx, esi
0x45F8BD: call    SaveLoad_SaveFormID
0x45F8C2: mov     eax, ds:0B33398h
0x45F8C7: mov     edi, [eax+10h]
0x45F8CA: call    dword ptr ds:0A2808Ch
0x45F8D0: cmp     eax, edi
0x45F8D2: jnz     short loc_45F8D9
0x45F8D4: mov     al, [esi+18h]
0x45F8D7: jmp     short loc_45F8DF
0x45F8D9: mov     eax, [esi+18h]
0x45F8DC: shr     eax, 12h
0x45F8DF: and     al, 1
0x45F8E1: test    al, al
0x45F8E3: jz      short loc_45F8F7
0x45F8E5: mov     ecx, ds:0B34D90h
0x45F8EB: mov     edx, [ecx]
0x45F8ED: mov     eax, [edx+18h]
0x45F8F0: push    offset aErrorTessavelo; "Error: TESSaveLoadGame::SaveGameData() "...
0x45F8F5: call    eax
0x45F8F7: mov     ecx, [esi+14h]
0x45F8FA: mov     edx, [esp+1Ch+var_8]
0x45F8FE: mov     [ecx], edx
0x45F900: add     dword ptr [esi+14h], 4
0x45F904: mov     ebx, [ebx+4]
0x45F907: test    ebx, ebx
0x45F909: jnz     short loc_45F8A0
0x45F90B: mov     edi, [esp+1Ch+var_4]
0x45F90F: mov     eax, [esi+18h]
0x45F912: shr     eax, 9
0x45F915: test    al, 1
0x45F917: jz      short loc_45F921
0x45F919: add     [esi+90h], ebp
0x45F91F: jmp     short loc_45F93F
0x45F921: mov     eax, [esp+1Ch+arg_0]
0x45F925: mov     edx, [eax+8]
0x45F928: push    1
0x45F92A: lea     ecx, [esp+20h+var_4]
0x45F92E: push    ecx
0x45F92F: push    ebp
0x45F930: push    edi
0x45F931: push    eax
0x45F932: mov     [esp+30h+var_4], 1
0x45F93A: call    edx
0x45F93C: add     esp, 14h
0x45F93F: push    edi; void *
0x45F940: mov     ecx, offset FormHeap
0x45F945: call    MemoryHeap_Free_checked
0x45F94A: mov     dword ptr [esi+14h], 0
0x45F951: mov     esi, [esi+40h]
0x45F954: test    esi, esi
0x45F956: jz      short loc_45F965
0x45F958: push    offset aGlobalVariable; "Global Variables"
0x45F95D: push    ebp
0x45F95E: mov     ecx, esi
0x45F960: call    sub_4531B0
0x45F965: pop     edi
0x45F966: pop     esi
0x45F967: pop     ebp
0x45F968: pop     ebx
0x45F969: add     esp, 0Ch
0x45F96C: retn    4
