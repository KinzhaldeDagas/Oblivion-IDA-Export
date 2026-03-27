0x571820: sub     esp, 8
0x571823: push    ebx
0x571824: push    ebp
0x571825: push    esi
0x571826: push    edi
0x571827: push    3
0x571829: mov     esi, ecx
0x57182B: call    nullsub_returnTrue_0arg
0x571830: mov     ebp, ds:0A2807Ch
0x571836: add     esp, 4
0x571839: add     esi, 0Ch
0x57183C: mov     [esp+18h+var_8], 0C8h ; 'È'
0x571844: xor     ebx, ebx
0x571846: cmp     [esi], ebx
0x571848: jz      loc_5718DB
0x57184E: push    1; arg1
0x571850: push    ebx; canCreate
0x571851: call    InterfaceManager_GetSingleton
0x571856: mov     edx, [esi]
0x571858: mov     ecx, [eax+70h]
0x57185B: mov     eax, [ecx]
0x57185D: mov     eax, [eax+88h]
0x571863: add     esp, 8
0x571866: push    edx
0x571867: lea     edx, [esp+1Ch+var_4]
0x57186B: push    edx
0x57186C: call    eax
0x57186E: mov     eax, [esp+18h+var_4]
0x571872: cmp     eax, ebx
0x571874: jz      short loc_571890
0x571876: mov     edi, eax
0x571878: add     eax, 4
0x57187B: push    eax; lpAddend
0x57187C: call    ebp ; InterlockedDecrement
0x57187E: test    eax, eax
0x571880: jnz     short loc_571890
0x571882: cmp     edi, ebx
0x571884: jz      short loc_571890
0x571886: mov     edx, [edi]
0x571888: mov     eax, [edx]
0x57188A: push    1
0x57188C: mov     ecx, edi
0x57188E: call    eax
0x571890: mov     edi, [esi]
0x571892: cmp     edi, ebx
0x571894: jz      short loc_5718B0
0x571896: lea     ecx, [edi+4]
0x571899: push    ecx; lpAddend
0x57189A: call    ebp ; InterlockedDecrement
0x57189C: test    eax, eax
0x57189E: jnz     short loc_5718AE
0x5718A0: cmp     edi, ebx
0x5718A2: jz      short loc_5718AE
0x5718A4: mov     edx, [edi]
0x5718A6: mov     eax, [edx]
0x5718A8: push    1
0x5718AA: mov     ecx, edi
0x5718AC: call    eax
0x5718AE: mov     [esi], ebx
0x5718B0: fldz
0x5718B2: mov     [esi-4], ebx
0x5718B5: fst     dword ptr [esi-0Ch]
0x5718B8: fstp    dword ptr [esi-8]
0x5718BB: mov     ecx, [esi+4]
0x5718BE: push    ecx
0x5718BF: call    FormHeapFree
0x5718C4: fld     dword ptr ds:0A30634h
0x5718CA: mov     [esi+4], ebx
0x5718CD: mov     [esi+0Ah], bx
0x5718D1: mov     [esi+8], bx
0x5718D5: fstp    dword ptr [esi+0Ch]
0x5718D8: add     esp, 4
0x5718DB: add     esi, 1Ch
0x5718DE: sub     [esp+18h+var_8], 1
0x5718E3: jnz     loc_571846
0x5718E9: push    2
0x5718EB: call    nullsub_returnTrue_0arg
0x5718F0: add     esp, 4
0x5718F3: pop     edi
0x5718F4: pop     esi
0x5718F5: pop     ebp
0x5718F6: pop     ebx
0x5718F7: add     esp, 8
0x5718FA: retn
