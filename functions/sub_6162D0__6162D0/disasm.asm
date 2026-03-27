0x6162D0: push    ebx
0x6162D1: push    ebp
0x6162D2: mov     ebp, [esp+8+arg_0]
0x6162D6: push    esi
0x6162D7: mov     esi, ecx
0x6162D9: mov     ecx, [esi+40h]
0x6162DC: xor     bl, bl
0x6162DE: test    ecx, ecx
0x6162E0: push    edi
0x6162E1: jz      short loc_61631A
0x6162E3: mov     eax, [ecx+4]
0x6162E6: test    eax, eax
0x6162E8: jnz     short loc_6162EE
0x6162EA: cmp     [ecx], eax
0x6162EC: jz      short loc_61631A
0x6162EE: mov     edi, [ecx]
0x6162F0: cmp     [edi], ebp
0x6162F2: jz      short loc_6162FC
0x6162F4: mov     ecx, eax
0x6162F6: test    ecx, ecx
0x6162F8: jnz     short loc_6162E3
0x6162FA: jmp     short loc_61631A
0x6162FC: push    edi
0x6162FD: call    BSSimpleList_Remove
0x616302: cmp     ebp, ds:0B333C4h
0x616308: jnz     short loc_61630F
0x61630A: call    sub_6136E0
0x61630F: push    edi
0x616310: call    FormHeapFree
0x616315: add     esp, 4
0x616318: mov     bl, 1
0x61631A: mov     ecx, [esi+28h]
0x61631D: call    sub_569E60
0x616322: cmp     eax, ebp
0x616324: jz      short loc_616332
0x616326: mov     ecx, [esi+24h]
0x616329: call    sub_5697E0
0x61632E: cmp     eax, ebp
0x616330: jnz     short loc_616356
0x616332: mov     edi, [esi+28h]
0x616335: mov     ecx, esi
0x616337: call    sub_6135F0
0x61633C: push    eax
0x61633D: mov     ecx, edi
0x61633F: call    TeSPackage_TargetData_SetTargetREFR
0x616344: mov     edi, [esi+24h]
0x616347: mov     ecx, esi
0x616349: call    sub_6135F0
0x61634E: push    eax
0x61634F: mov     ecx, edi
0x616351: call    TESPackage_LocationData_SetReference
0x616356: test    bl, bl
0x616358: jz      short loc_616392
0x61635A: mov     eax, ds:0B33A98h
0x61635F: cmp     byte ptr [eax+0CD4h], 0
0x616366: jnz     short loc_616392
0x616368: cmp     byte ptr [esi+1A4h], 0
0x61636F: jnz     short loc_616392
0x616371: fld     dword ptr [esi+44h]
0x616374: fstp    dword ptr [esi+140h]
0x61637A: fld     dword ptr ds:0A2FAACh
0x616380: fstp    dword ptr [esi+144h]
0x616386: fld     dword ptr ds:0A30634h
0x61638C: fstp    dword ptr [esi+148h]
0x616392: pop     edi
0x616393: pop     esi
0x616394: pop     ebp
0x616395: pop     ebx
0x616396: retn    4
