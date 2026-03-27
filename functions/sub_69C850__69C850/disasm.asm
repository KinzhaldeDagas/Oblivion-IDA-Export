0x69C850: push    ecx
0x69C851: push    esi
0x69C852: push    edi
0x69C853: mov     esi, ecx
0x69C855: call    sub_69C100
0x69C85A: mov     eax, [esi]
0x69C85C: mov     edx, [eax+148h]
0x69C862: mov     ecx, esi
0x69C864: call    edx
0x69C866: mov     eax, dword ptr [esp+0Ch+a1.member.type]
0x69C86A: mov     ecx, [esp+0Ch+a1.vtbl]
0x69C86E: push    eax
0x69C86F: push    ecx
0x69C870: mov     ecx, esi
0x69C872: call    sub_69F800
0x69C877: push    4; a2
0x69C879: lea     edx, [esi+7Ch]
0x69C87C: push    edx; a1
0x69C87D: mov     ecx, esi
0x69C87F: call    TESForm_LoadDataFromCurrentSaveGame
0x69C884: push    4; a2
0x69C886: lea     eax, [esi+5Ch]
0x69C889: push    eax; a1
0x69C88A: mov     ecx, esi
0x69C88C: call    TESForm_LoadDataFromCurrentSaveGame
0x69C891: push    4; a2
0x69C893: lea     ecx, [esi+80h]
0x69C899: push    ecx; a1
0x69C89A: mov     ecx, esi
0x69C89C: call    TESForm_LoadDataFromCurrentSaveGame
0x69C8A1: mov     ecx, ds:0B33B00h
0x69C8A7: push    4; Size
0x69C8A9: lea     edi, [esi+88h]
0x69C8AF: push    edi; Dst
0x69C8B0: call    SaveLoad_LoadData
0x69C8B5: push    4; a2
0x69C8B7: lea     edx, [esi+8Ch]
0x69C8BD: push    edx; a1
0x69C8BE: mov     ecx, esi
0x69C8C0: call    TESForm_LoadDataFromCurrentSaveGame
0x69C8C5: cmp     dword ptr [edi], 1
0x69C8C8: jnz     short loc_69C8E2
0x69C8CA: push    4; a2
0x69C8CC: lea     eax, [esp+10h+a1.member]
0x69C8D0: push    eax; a1
0x69C8D1: mov     ecx, esi
0x69C8D3: call    TESForm_LoadDataFromCurrentSaveGame
0x69C8D8: mov     ecx, dword ptr [esp+0Ch+a1.member.type]
0x69C8DC: mov     [esi+98h], ecx
0x69C8E2: mov     edx, ds:0B33B00h
0x69C8E8: cmp     byte ptr [edx+7Ch], 71h ; 'q'
0x69C8EC: jb      loc_69C978
0x69C8F2: push    4; a2
0x69C8F4: lea     eax, [esi+84h]
0x69C8FA: push    eax; a1
0x69C8FB: mov     ecx, esi
0x69C8FD: call    TESForm_LoadDataFromCurrentSaveGame
0x69C902: push    2; a2
0x69C904: lea     ecx, [esp+10h+a1]
0x69C908: push    ecx; a1
0x69C909: mov     ecx, esi
0x69C90B: call    TESForm_LoadDataFromCurrentSaveGame
0x69C910: xor     edi, edi
0x69C912: cmp     word ptr [esp+0Ch+a1.vtbl], di
0x69C917: jbe     short loc_69C978
0x69C919: push    ebx
0x69C91A: lea     ebx, [ebx+0]
0x69C920: push    4; a2
0x69C922: lea     edx, [esp+14h+var_4]
0x69C926: push    edx; a1
0x69C927: mov     ecx, esi
0x69C929: call    TESForm_LoadFormIDFromCurrentSaveGame
0x69C92E: push    1; a2
0x69C930: lea     eax, [esp+1Ch]
0x69C934: push    eax; a1
0x69C935: mov     ecx, esi
0x69C937: call    TESForm_LoadDataFromCurrentSaveGame
0x69C93C: push    0Ch; Size
0x69C93E: call    FormHeapAlloc
0x69C943: add     esp, 4
0x69C946: test    eax, eax
0x69C948: jz      short loc_69C963
0x69C94A: movzx   edx, byte ptr [esp+18h]
0x69C94F: mov     ecx, [esi+94h]
0x69C955: mov     ebx, [esp+18h+var_C]
0x69C959: mov     [eax], ebx
0x69C95B: mov     [eax+4], edx
0x69C95E: mov     [eax+8], ecx
0x69C961: jmp     short loc_69C965
0x69C963: xor     eax, eax
0x69C965: movzx   ecx, [esp+18h+var_4]
0x69C96A: add     edi, 1
0x69C96D: cmp     edi, ecx
0x69C96F: mov     [esi+94h], eax
0x69C975: jb      short loc_69C920
0x69C977: pop     ebx
0x69C978: pop     edi
0x69C979: pop     esi
0x69C97A: pop     ecx
0x69C97B: retn    8
