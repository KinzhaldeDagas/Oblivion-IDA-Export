0x4E5380: push    ebp
0x4E5381: mov     ebp, [esp+4+arg_0]
0x4E5385: test    ebp, ebp
0x4E5387: push    edi
0x4E5388: mov     edi, ecx
0x4E538A: jz      short loc_4E53EC
0x4E538C: push    ebx
0x4E538D: push    esi
0x4E538E: mov     ecx, ebp
0x4E5390: call    sub_4BEF40
0x4E5395: push    eax
0x4E5396: call    sub_4E5320
0x4E539B: mov     esi, eax
0x4E539D: add     esp, 4
0x4E53A0: lea     eax, [esp+10h+arg_0]
0x4E53A4: push    eax
0x4E53A5: add     edi, 44h ; 'D'
0x4E53A8: push    esi
0x4E53A9: mov     ecx, edi
0x4E53AB: mov     [esp+18h+arg_0], 0
0x4E53B3: call    NiTMap_GetAt
0x4E53B8: mov     ebx, [esp+10h+arg_0]
0x4E53BC: test    ebx, ebx
0x4E53BE: jnz     short loc_4E53E2
0x4E53C0: push    8; Size
0x4E53C2: call    FormHeapAlloc
0x4E53C7: add     esp, 4
0x4E53CA: test    eax, eax
0x4E53CC: jz      short loc_4E53D5
0x4E53CE: mov     [eax], ebx
0x4E53D0: mov     [eax+4], ebx
0x4E53D3: jmp     short loc_4E53D7
0x4E53D5: xor     eax, eax
0x4E53D7: push    eax; a3
0x4E53D8: push    esi; a2
0x4E53D9: mov     ecx, edi; this
0x4E53DB: mov     ebx, eax
0x4E53DD: call    NiTMap_SetAt
0x4E53E2: push    ebp
0x4E53E3: mov     ecx, ebx
0x4E53E5: call    BSSimpleList_PushFront
0x4E53EA: pop     esi
0x4E53EB: pop     ebx
0x4E53EC: pop     edi
0x4E53ED: pop     ebp
0x4E53EE: retn    4
