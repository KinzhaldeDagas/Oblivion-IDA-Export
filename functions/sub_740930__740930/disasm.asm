0x740930: push    esi
0x740931: mov     esi, [esp+4+arg_0]
0x740935: push    edi
0x740936: push    esi
0x740937: call    sub_7421B0
0x74093C: mov     eax, ds:0B4021Ch
0x740941: push    eax; ArgList
0x740942: call    TESOutput_PrintString
0x740947: movzx   edi, word ptr [esi+0Ah]
0x74094B: movzx   ecx, word ptr [esi+8]
0x74094F: add     esp, 4
0x740952: cmp     edi, ecx
0x740954: mov     [esp+8+arg_0], eax
0x740958: jb      short loc_740968
0x74095A: movzx   edx, word ptr [esi+0Eh]
0x74095E: add     edx, edi
0x740960: push    edx
0x740961: mov     ecx, esi
0x740963: call    NiTArray_SetSize
0x740968: lea     eax, [esp+8+arg_0]
0x74096C: push    eax
0x74096D: push    edi
0x74096E: mov     ecx, esi
0x740970: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x740975: pop     edi
0x740976: pop     esi
0x740977: retn    4
