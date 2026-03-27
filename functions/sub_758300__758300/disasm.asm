0x758300: push    esi
0x758301: mov     esi, [esp+4+arg_0]
0x758305: push    edi
0x758306: push    esi
0x758307: call    sub_75F730
0x75830C: mov     eax, ds:0B41708h
0x758311: push    eax; ArgList
0x758312: call    TESOutput_PrintString
0x758317: movzx   edi, word ptr [esi+0Ah]
0x75831B: movzx   ecx, word ptr [esi+8]
0x75831F: add     esp, 4
0x758322: cmp     edi, ecx
0x758324: mov     [esp+8+arg_0], eax
0x758328: jb      short loc_758338
0x75832A: movzx   edx, word ptr [esi+0Eh]
0x75832E: add     edx, edi
0x758330: push    edx
0x758331: mov     ecx, esi
0x758333: call    NiTArray_SetSize
0x758338: lea     eax, [esp+8+arg_0]
0x75833C: push    eax
0x75833D: push    edi
0x75833E: mov     ecx, esi
0x758340: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x758345: pop     edi
0x758346: pop     esi
0x758347: retn    4
