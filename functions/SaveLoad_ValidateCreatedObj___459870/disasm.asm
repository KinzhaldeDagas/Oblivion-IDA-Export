0x459870: push    ebp
0x459871: push    esi
0x459872: lea     ebp, [ecx+30h]
0x459875: push    edi
0x459876: mov     edi, ebp
0x459878: test    edi, edi
0x45987A: jz      loc_4598FE
0x459880: push    ebx
0x459881: mov     esi, [edi]
0x459883: test    esi, esi
0x459885: jz      short loc_4598F6
0x459887: push    0; int
0x459889: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x45988E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x459893: push    0; int
0x459895: push    esi; void *
0x459896: call    OblivionDynamicCast
0x45989B: push    0; int
0x45989D: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x4598A2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4598A7: push    0; int
0x4598A9: push    esi; void *
0x4598AA: mov     ebx, eax
0x4598AC: call    OblivionDynamicCast
0x4598B1: add     esp, 28h
0x4598B4: test    ebx, ebx
0x4598B6: jnz     short loc_4598F6
0x4598B8: test    eax, eax
0x4598BA: jnz     short loc_4598F6
0x4598BC: mov     eax, [edi+4]
0x4598BF: test    eax, eax
0x4598C1: jz      short loc_4598E3
0x4598C3: mov     ecx, [eax+4]
0x4598C6: mov     [edi+4], ecx
0x4598C9: mov     edx, [eax]
0x4598CB: push    eax
0x4598CC: mov     [edi], edx
0x4598CE: call    FormHeapFree
0x4598D3: mov     eax, [esi]
0x4598D5: mov     edx, [eax+10h]
0x4598D8: add     esp, 4
0x4598DB: push    1
0x4598DD: mov     ecx, esi
0x4598DF: call    edx
0x4598E1: jmp     short loc_4598F9
0x4598E3: mov     dword ptr [edi], 0
0x4598E9: mov     eax, [esi]
0x4598EB: mov     edx, [eax+10h]
0x4598EE: push    1
0x4598F0: mov     ecx, esi
0x4598F2: call    edx
0x4598F4: jmp     short loc_4598F9
0x4598F6: mov     edi, [edi+4]
0x4598F9: test    edi, edi
0x4598FB: jnz     short loc_459881
0x4598FD: pop     ebx
0x4598FE: test    ebp, ebp
0x459900: jz      short loc_459945
0x459902: mov     ecx, ebp
0x459904: call    BSSimpleList_IsEmpty
0x459909: test    al, al
0x45990B: jnz     short loc_459945
0x45990D: mov     eax, [ebp+4]
0x459910: test    eax, eax
0x459912: mov     esi, [ebp+0]
0x459915: jz      short loc_45992D
0x459917: mov     ecx, [eax+4]
0x45991A: mov     [ebp+4], ecx
0x45991D: mov     edx, [eax]
0x45991F: push    eax
0x459920: mov     [ebp+0], edx
0x459923: call    FormHeapFree
0x459928: add     esp, 4
0x45992B: jmp     short loc_459934
0x45992D: mov     dword ptr [ebp+0], 0
0x459934: test    esi, esi
0x459936: jz      short loc_459902
0x459938: mov     eax, [esi]
0x45993A: mov     edx, [eax+10h]
0x45993D: push    1
0x45993F: mov     ecx, esi
0x459941: call    edx
0x459943: jmp     short loc_459902
0x459945: pop     edi
0x459946: pop     esi
0x459947: pop     ebp
0x459948: retn
