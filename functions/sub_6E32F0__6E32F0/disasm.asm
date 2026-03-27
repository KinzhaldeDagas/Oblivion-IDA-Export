0x6E32F0: push    esi
0x6E32F1: mov     esi, [esp+4+arg_0]
0x6E32F5: push    edi
0x6E32F6: push    esi
0x6E32F7: call    sub_6ED000
0x6E32FC: mov     eax, ds:0B3E1E8h
0x6E3301: push    eax; ArgList
0x6E3302: call    TESOutput_PrintString
0x6E3307: movzx   edi, word ptr [esi+0Ah]
0x6E330B: movzx   ecx, word ptr [esi+8]
0x6E330F: add     esp, 4
0x6E3312: cmp     edi, ecx
0x6E3314: mov     [esp+8+arg_0], eax
0x6E3318: jb      short loc_6E3328
0x6E331A: movzx   edx, word ptr [esi+0Eh]
0x6E331E: add     edx, edi
0x6E3320: push    edx
0x6E3321: mov     ecx, esi
0x6E3323: call    NiTArray_SetSize
0x6E3328: lea     eax, [esp+8+arg_0]
0x6E332C: push    eax
0x6E332D: push    edi
0x6E332E: mov     ecx, esi
0x6E3330: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E3335: pop     edi
0x6E3336: pop     esi
0x6E3337: retn    4
