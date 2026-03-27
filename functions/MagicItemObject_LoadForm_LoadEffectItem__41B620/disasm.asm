0x41B620: mov     eax, [edi]
0x41B622: mov     edx, [eax+0D4h]
0x41B628: mov     ecx, edi
0x41B62A: call    edx
0x41B62C: test    eax, eax
0x41B62E: jz      short loc_41B659
0x41B630: mov     eax, [edi]
0x41B632: mov     edx, [eax+0D4h]
0x41B638: mov     ecx, edi
0x41B63A: call    edx
0x41B63C: cmp     byte ptr [eax], 0
0x41B63F: jz      short loc_41B659
0x41B641: mov     eax, [edi]
0x41B643: mov     edx, [eax+0D4h]
0x41B649: mov     ecx, edi
0x41B64B: call    edx
0x41B64D: push    eax
0x41B64E: push    ebx
0x41B64F: lea     ecx, [edi+30h]
0x41B652: call    EffectItemList_LoadItem
0x41B657: jmp     short MagicItemObject_LoadForm___LoadBaseData_
0x41B659: mov     eax, [esi+4]
0x41B65C: test    eax, eax
0x41B65E: jnz     short loc_41B665
0x41B660: mov     eax, offset EmptyString
0x41B665: push    eax
0x41B666: push    ebx
0x41B667: lea     ecx, [edi+30h]
0x41B66A: call    EffectItemList_LoadItem
0x41B66F: jmp     short MagicItemObject_LoadForm___LoadBaseData_
