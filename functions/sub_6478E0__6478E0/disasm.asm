0x6478E0: mov     eax, [esp+arg_4]
0x6478E4: push    esi
0x6478E5: mov     esi, ecx
0x6478E7: mov     ecx, [esp+4+arg_0]
0x6478EB: push    eax
0x6478EC: push    ecx
0x6478ED: mov     ecx, esi
0x6478EF: call    sub_60D810
0x6478F4: mov     edx, ds:0B33B00h
0x6478FA: mov     eax, [edx+44h]
0x6478FD: cmp     eax, 1FFFF000h
0x647902: jz      short loc_64790F
0x647904: cmp     eax, 7FFFF000h
0x647909: jnz     loc_64799E
0x64790F: mov     ecx, [esi+34h]
0x647912: push    ebx
0x647913: xor     ebx, ebx
0x647915: cmp     ecx, ebx
0x647917: push    ebp
0x647918: push    edi
0x647919: jz      short loc_647923
0x64791B: mov     eax, [ecx]
0x64791D: mov     edx, [eax]
0x64791F: push    1
0x647921: call    edx
0x647923: mov     [esi+34h], ebx
0x647926: mov     [esi+38h], ebx
0x647929: lea     edi, [esi+3Ch]
0x64792C: lea     esp, [esp+0]
0x647930: cmp     [edi+4], ebx
0x647933: jnz     short loc_647939
0x647935: cmp     [edi], ebx
0x647937: jz      short loc_647952
0x647939: mov     ebp, [edi]
0x64793B: push    ebp
0x64793C: mov     ecx, edi
0x64793E: call    BSSimpleList_Remove
0x647943: cmp     ebp, ebx
0x647945: jz      short loc_647930
0x647947: push    ebp
0x647948: call    FormHeapFree
0x64794D: add     esp, 4
0x647950: jmp     short loc_647930
0x647952: lea     ecx, [esi+4Ch]
0x647955: call    BSSimpleList_Clear
0x64795A: fld     dword ptr ds:0A30634h
0x647960: fstp    dword ptr [esi+14h]
0x647963: pop     edi
0x647964: fldz
0x647966: pop     ebp
0x647967: fst     dword ptr [esi+88h]
0x64796D: mov     [esi+44h], ebx
0x647970: fst     dword ptr [esi+28h]
0x647973: mov     [esi+48h], ebx
0x647976: mov     [esi+84h], bl
0x64797C: fstp    dword ptr [esi+8Ch]
0x647982: mov     [esi+2Ch], ebx
0x647985: mov     [esi+30h], ebx
0x647988: mov     [esi+18h], ebx
0x64798B: mov     [esi+1Ch], bl
0x64798E: mov     [esi+1Dh], bl
0x647991: mov     [esi+1Fh], bl
0x647994: mov     [esi+20h], bl
0x647997: mov     [esi+24h], ebx
0x64799A: mov     [esi+1Eh], bl
0x64799D: pop     ebx
0x64799E: test    [esp+4+arg_0], 400000h
0x6479A6: jz      short loc_6479B0
0x6479A8: lea     ecx, [esi+70h]
0x6479AB: call    AVCollection_Clear
0x6479B0: pop     esi
0x6479B1: retn    8
