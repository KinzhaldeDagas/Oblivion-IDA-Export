0x4F0120: push    ebx
0x4F0121: push    esi
0x4F0122: mov     esi, [esp+8+arg_0]
0x4F0126: test    esi, esi
0x4F0128: mov     ebx, ecx
0x4F012A: jz      loc_4F01E1
0x4F0130: mov     eax, [esi+8]
0x4F0133: shr     eax, 0Eh
0x4F0136: test    al, 1
0x4F0138: jnz     loc_4F01E1
0x4F013E: push    offset unk_A2F830; lpCriticalSection
0x4F0143: mov     ecx, offset stru_B36100
0x4F0148: call    NiEnterCriticalSection
0x4F014D: push    esi
0x4F014E: call    sub_4F00C0
0x4F0153: add     esp, 4
0x4F0156: test    al, al
0x4F0158: jnz     short loc_4F0172
0x4F015A: push    esi
0x4F015B: lea     ecx, [ebx+74h]
0x4F015E: call    BSSimpleList_PushFront
0x4F0163: mov     ecx, offset stru_B36100; lpCriticalSection
0x4F0168: call    NiLeaveCriticalSection_0
0x4F016D: pop     esi
0x4F016E: pop     ebx
0x4F016F: retn    4
0x4F0172: mov     edx, [esi]
0x4F0174: mov     eax, [edx+174h]
0x4F017A: push    ebp
0x4F017B: push    edi
0x4F017C: mov     ecx, esi
0x4F017E: call    eax
0x4F0180: push    eax
0x4F0181: call    sub_4EFE40
0x4F0186: add     esp, 4
0x4F0189: lea     ecx, [esp+10h+arg_0]
0x4F018D: push    ecx
0x4F018E: mov     edi, eax
0x4F0190: add     ebx, 64h ; 'd'
0x4F0193: push    edi
0x4F0194: mov     ecx, ebx
0x4F0196: mov     [esp+18h+arg_0], 0
0x4F019E: call    NiTMap_GetAt
0x4F01A3: mov     ebp, [esp+10h+arg_0]
0x4F01A7: test    ebp, ebp
0x4F01A9: jnz     short loc_4F01CD
0x4F01AB: push    8; Size
0x4F01AD: call    FormHeapAlloc
0x4F01B2: add     esp, 4
0x4F01B5: test    eax, eax
0x4F01B7: jz      short loc_4F01C0
0x4F01B9: mov     [eax], ebp
0x4F01BB: mov     [eax+4], ebp
0x4F01BE: jmp     short loc_4F01C2
0x4F01C0: xor     eax, eax
0x4F01C2: push    eax; a3
0x4F01C3: push    edi; a2
0x4F01C4: mov     ecx, ebx; this
0x4F01C6: mov     ebp, eax
0x4F01C8: call    NiTMap_SetAt
0x4F01CD: push    esi
0x4F01CE: mov     ecx, ebp
0x4F01D0: call    BSSimpleList_PushFront
0x4F01D5: pop     edi
0x4F01D6: pop     ebp
0x4F01D7: mov     ecx, offset stru_B36100; lpCriticalSection
0x4F01DC: call    NiLeaveCriticalSection_0
0x4F01E1: pop     esi
0x4F01E2: pop     ebx
0x4F01E3: retn    4
