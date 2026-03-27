0x701430: push    esi
0x701431: mov     esi, [esp+4+arg_0]
0x701435: push    edi
0x701436: push    esi
0x701437: call    sub_700540
0x70143C: mov     eax, ds:0B3F70Ch
0x701441: push    eax; ArgList
0x701442: call    TESOutput_PrintString
0x701447: movzx   edi, word ptr [esi+0Ah]
0x70144B: movzx   ecx, word ptr [esi+8]
0x70144F: add     esp, 4
0x701452: cmp     edi, ecx
0x701454: mov     [esp+8+arg_0], eax
0x701458: jb      short loc_701468
0x70145A: movzx   edx, word ptr [esi+0Eh]
0x70145E: add     edx, edi
0x701460: push    edx
0x701461: mov     ecx, esi
0x701463: call    NiTArray_SetSize
0x701468: lea     eax, [esp+8+arg_0]
0x70146C: push    eax
0x70146D: push    edi
0x70146E: mov     ecx, esi
0x701470: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x701475: pop     edi
0x701476: pop     esi
0x701477: retn    4
