0x6455F0: push    ebx
0x6455F1: push    esi
0x6455F2: push    edi
0x6455F3: mov     edi, ecx
0x6455F5: mov     eax, [edi+44h]
0x6455F8: test    eax, eax
0x6455FA: jz      short loc_645617
0x6455FC: mov     ecx, [eax]
0x6455FE: mov     edx, [ecx+0Ch]
0x645601: cmp     edx, [esp+0Ch+arg_0]
0x645605: jnz     short loc_645617
0x645607: push    eax
0x645608: call    FormHeapFree
0x64560D: add     esp, 4
0x645610: mov     dword ptr [edi+44h], 0
0x645617: mov     eax, [edi+48h]
0x64561A: test    eax, eax
0x64561C: jz      short loc_645639
0x64561E: mov     ecx, [eax]
0x645620: mov     edx, [esp+0Ch+arg_0]
0x645624: cmp     [ecx+0Ch], edx
0x645627: jnz     short loc_645639
0x645629: push    eax
0x64562A: call    FormHeapFree
0x64562F: add     esp, 4
0x645632: mov     dword ptr [edi+48h], 0
0x645639: lea     ebx, [edi+3Ch]
0x64563C: mov     eax, ebx
0x64563E: test    eax, eax
0x645640: jz      short loc_64566F
0x645642: mov     esi, [eax]
0x645644: test    esi, esi
0x645646: jz      short loc_64566F
0x645648: mov     ecx, [esi]
0x64564A: mov     edx, [esp+0Ch+arg_0]
0x64564E: cmp     [ecx+0Ch], edx
0x645651: jnz     short loc_645668
0x645653: push    esi
0x645654: mov     ecx, ebx
0x645656: call    BSSimpleList_Remove
0x64565B: push    esi
0x64565C: call    FormHeapFree
0x645661: add     esp, 4
0x645664: mov     eax, ebx
0x645666: jmp     short loc_64566B
0x645668: mov     eax, [eax+4]
0x64566B: test    eax, eax
0x64566D: jnz     short loc_645642
0x64566F: mov     eax, [edi+30h]
0x645672: test    eax, eax
0x645674: jz      short loc_645686
0x645676: mov     ecx, [esp+0Ch+arg_0]
0x64567A: cmp     [eax+0Ch], ecx
0x64567D: jnz     short loc_645686
0x64567F: mov     dword ptr [edi+30h], 0
0x645686: lea     esi, [edi+4Ch]
0x645689: xor     edi, edi
0x64568B: test    esi, esi
0x64568D: jz      short loc_6456DD
0x64568F: nop
0x645690: mov     eax, [esi]
0x645692: test    eax, eax
0x645694: jz      short loc_6456DD
0x645696: mov     edx, [esp+0Ch+arg_0]
0x64569A: cmp     [eax+0Ch], edx
0x64569D: jnz     short loc_6456D4
0x64569F: test    edi, edi
0x6456A1: jz      short loc_6456B0
0x6456A3: push    eax
0x6456A4: mov     ecx, edi
0x6456A6: call    BSSimpleList_Remove
0x6456AB: mov     esi, [edi+4]
0x6456AE: jmp     short loc_6456D9
0x6456B0: mov     eax, [esi+4]
0x6456B3: test    eax, eax
0x6456B5: jz      short loc_6456CC
0x6456B7: mov     ecx, [eax+4]
0x6456BA: mov     [esi+4], ecx
0x6456BD: mov     edx, [eax]
0x6456BF: push    eax
0x6456C0: mov     [esi], edx
0x6456C2: call    FormHeapFree
0x6456C7: add     esp, 4
0x6456CA: jmp     short loc_6456D9
0x6456CC: mov     dword ptr [esi], 0
0x6456D2: jmp     short loc_6456D9
0x6456D4: mov     edi, esi
0x6456D6: mov     esi, [esi+4]
0x6456D9: test    esi, esi
0x6456DB: jnz     short loc_645690
0x6456DD: pop     edi
0x6456DE: pop     esi
0x6456DF: pop     ebx
0x6456E0: retn    4
