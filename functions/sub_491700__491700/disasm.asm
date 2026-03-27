0x491700: push    ebx
0x491701: mov     ebx, ecx
0x491703: mov     ecx, [ebx+4]; this
0x491706: test    ecx, ecx
0x491708: push    esi
0x491709: push    edi
0x49170A: jz      short loc_491713
0x49170C: call    TESObjectREFR_GetContainer
0x491711: jmp     short loc_491715
0x491713: xor     eax, eax
0x491715: lea     esi, [eax+8]
0x491718: test    esi, esi
0x49171A: jz      short loc_491748
0x49171C: lea     esp, [esp+0]
0x491720: cmp     dword ptr [esi+4], 0
0x491724: jnz     short loc_49172B
0x491726: cmp     dword ptr [esi], 0
0x491729: jz      short loc_491748
0x49172B: mov     eax, [esi]
0x49172D: mov     edi, [eax+4]
0x491730: test    edi, edi
0x491732: jz      short loc_491741
0x491734: push    edi
0x491735: call    sub_469980
0x49173A: add     esp, 4
0x49173D: test    al, al
0x49173F: jnz     short loc_491780
0x491741: mov     esi, [esi+4]
0x491744: test    esi, esi
0x491746: jnz     short loc_491720
0x491748: mov     esi, [ebx]
0x49174A: test    esi, esi
0x49174C: jz      loc_4917D0
0x491752: cmp     dword ptr [esi+4], 0
0x491756: jnz     short loc_49175D
0x491758: cmp     dword ptr [esi], 0
0x49175B: jz      short loc_4917D0
0x49175D: mov     ecx, [esi]
0x49175F: mov     edi, [ecx+8]
0x491762: test    edi, edi
0x491764: jz      short loc_491773
0x491766: push    edi
0x491767: call    sub_469980
0x49176C: add     esp, 4
0x49176F: test    al, al
0x491771: jnz     short loc_4917AB
0x491773: mov     esi, [esi+4]
0x491776: test    esi, esi
0x491778: jnz     short loc_491752
0x49177A: pop     edi
0x49177B: pop     esi
0x49177C: pop     ebx
0x49177D: retn    0Ch
0x491780: mov     ecx, [esp+0Ch+arg_8]
0x491784: mov     edx, [esp+0Ch+arg_4]
0x491788: mov     eax, [esp+0Ch+arg_0]
0x49178C: push    0
0x49178E: push    1
0x491790: push    0
0x491792: push    0
0x491794: push    ecx
0x491795: push    0
0x491797: push    0
0x491799: push    edx
0x49179A: push    0
0x49179C: push    edi
0x49179D: push    eax
0x49179E: mov     ecx, ebx
0x4917A0: call    ContainerExtraData_RemoveForm
0x4917A5: pop     edi
0x4917A6: pop     esi
0x4917A7: pop     ebx
0x4917A8: retn    0Ch
0x4917AB: mov     edx, [esp+0Ch+arg_8]
0x4917AF: mov     eax, [esp+0Ch+arg_4]
0x4917B3: mov     ecx, [esp+0Ch+arg_0]
0x4917B7: push    0
0x4917B9: push    1
0x4917BB: push    0
0x4917BD: push    0
0x4917BF: push    edx
0x4917C0: push    0
0x4917C2: push    0
0x4917C4: push    eax
0x4917C5: push    0
0x4917C7: push    edi
0x4917C8: push    ecx
0x4917C9: mov     ecx, ebx
0x4917CB: call    ContainerExtraData_RemoveForm
0x4917D0: pop     edi
0x4917D1: pop     esi
0x4917D2: pop     ebx
0x4917D3: retn    0Ch
