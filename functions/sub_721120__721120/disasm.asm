0x721120: push    esi
0x721121: mov     esi, [esp+4+arg_0]
0x721125: push    edi
0x721126: push    esi
0x721127: call    sub_7028C0
0x72112C: mov     eax, ds:0B3FD34h
0x721131: push    eax; ArgList
0x721132: call    TESOutput_PrintString
0x721137: movzx   edi, word ptr [esi+0Ah]
0x72113B: movzx   ecx, word ptr [esi+8]
0x72113F: add     esp, 4
0x721142: cmp     edi, ecx
0x721144: mov     [esp+8+arg_0], eax
0x721148: jb      short loc_721158
0x72114A: movzx   edx, word ptr [esi+0Eh]
0x72114E: add     edx, edi
0x721150: push    edx
0x721151: mov     ecx, esi
0x721153: call    NiTArray_SetSize
0x721158: lea     eax, [esp+8+arg_0]
0x72115C: push    eax
0x72115D: push    edi
0x72115E: mov     ecx, esi
0x721160: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x721165: pop     edi
0x721166: pop     esi
0x721167: retn    4
