0x65F950: mov     eax, ds:0B33398h
0x65F955: push    ebx
0x65F956: push    esi
0x65F957: xor     ebx, ebx
0x65F959: cmp     eax, ebx
0x65F95B: push    edi; ArgList
0x65F95C: mov     edi, [esp+0Ch+arg_0]
0x65F960: mov     esi, ecx
0x65F962: jz      short loc_65F984
0x65F964: cmp     [eax], bl
0x65F966: jnz     short loc_65F984
0x65F968: cmp     [eax+1], bl
0x65F96B: jnz     short loc_65F984
0x65F96D: cmp     edi, ebx
0x65F96F: jnz     short loc_65F984
0x65F971: push    offset aPlayercharac_1; "PlayerCharacter::Set3D( 0 ) called befo"...
0x65F976: call    PrintError
0x65F97B: add     esp, 4
0x65F97E: pop     edi
0x65F97F: pop     esi
0x65F980: pop     ebx
0x65F981: retn    4
0x65F984: push    edi
0x65F985: call    Character_Set3D
0x65F98A: cmp     edi, ebx
0x65F98C: jnz     loc_65FA2F
0x65F992: mov     edi, [esi+5C8h]
0x65F998: cmp     edi, ebx
0x65F99A: jz      short loc_65F9AC
0x65F99C: mov     ecx, edi
0x65F99E: call    sub_47AB80
0x65F9A3: push    edi
0x65F9A4: call    FormHeapFree
0x65F9A9: add     esp, 4
0x65F9AC: mov     edi, [esi+5CCh]
0x65F9B2: cmp     edi, ebx
0x65F9B4: mov     [esi+5C8h], ebx
0x65F9BA: jz      short loc_65F9CC
0x65F9BC: mov     ecx, edi; this
0x65F9BE: call    DisposeActorAnimData
0x65F9C3: push    edi
0x65F9C4: call    FormHeapFree
0x65F9C9: add     esp, 4
0x65F9CC: mov     [esi+5CCh], ebx
0x65F9D2: mov     edi, [esi+5D0h]
0x65F9D8: cmp     edi, ebx
0x65F9DA: jz      short loc_65F9FE
0x65F9DC: lea     eax, [edi+4]
0x65F9DF: push    eax; lpAddend
0x65F9E0: call    dword ptr ds:0A2807Ch
0x65F9E6: test    eax, eax
0x65F9E8: jnz     short loc_65F9F8
0x65F9EA: cmp     edi, ebx
0x65F9EC: jz      short loc_65F9F8
0x65F9EE: mov     edx, [edi]
0x65F9F0: mov     eax, [edx]
0x65F9F2: push    1
0x65F9F4: mov     ecx, edi
0x65F9F6: call    eax
0x65F9F8: mov     [esi+5D0h], ebx
0x65F9FE: mov     ecx, ds:0B36BB8h
0x65FA04: push    1
0x65FA06: push    1
0x65FA08: push    ecx
0x65FA09: mov     ecx, ds:0B33A1Ch
0x65FA0F: mov     ds:0B3BB0Ch, ebx
0x65FA15: mov     ds:0B3BB10h, ebx
0x65FA1B: mov     ds:0B3BB14h, ebx
0x65FA21: call    QueuedModelLoader_RemoveModel
0x65FA26: push    ebx
0x65FA27: call    sub_578CF0
0x65FA2C: add     esp, 4
0x65FA2F: pop     edi
0x65FA30: pop     esi
0x65FA31: pop     ebx
0x65FA32: retn    4
