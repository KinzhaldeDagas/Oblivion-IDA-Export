0x7028C0: push    ebx
0x7028C1: push    esi
0x7028C2: mov     esi, [esp+8+arg_0]
0x7028C6: push    edi
0x7028C7: push    esi
0x7028C8: mov     ebx, ecx
0x7028CA: call    sub_701430
0x7028CF: mov     eax, ds:0B3F95Ch
0x7028D4: push    eax; ArgList
0x7028D5: call    TESOutput_PrintString
0x7028DA: movzx   edi, word ptr [esi+0Ah]
0x7028DE: movzx   ecx, word ptr [esi+8]
0x7028E2: add     esp, 4
0x7028E5: cmp     edi, ecx
0x7028E7: mov     [esp+0Ch+arg_0], eax
0x7028EB: jb      short loc_7028FB
0x7028ED: movzx   edx, word ptr [esi+0Eh]
0x7028F1: add     edx, edi
0x7028F3: push    edx
0x7028F4: mov     ecx, esi
0x7028F6: call    NiTArray_SetSize
0x7028FB: lea     eax, [esp+0Ch+arg_0]
0x7028FF: push    eax
0x702900: push    edi
0x702901: mov     ecx, esi
0x702903: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x702908: mov     ecx, [ebx+38h]
0x70290B: push    ecx; int
0x70290C: push    offset aFile_0; "File:"
0x702911: call    TESOutput_PrintLabeledString
0x702916: movzx   edi, word ptr [esi+0Ah]
0x70291A: movzx   edx, word ptr [esi+8]
0x70291E: add     esp, 8
0x702921: cmp     edi, edx
0x702923: mov     [esp+0Ch+arg_0], eax
0x702927: jb      short loc_702937
0x702929: movzx   eax, word ptr [esi+0Eh]
0x70292D: add     eax, edi
0x70292F: push    eax
0x702930: mov     ecx, esi
0x702932: call    NiTArray_SetSize
0x702937: lea     ecx, [esp+0Ch+arg_0]
0x70293B: push    ecx
0x70293C: push    edi
0x70293D: mov     ecx, esi
0x70293F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x702944: pop     edi
0x702945: pop     esi
0x702946: pop     ebx
0x702947: retn    4
