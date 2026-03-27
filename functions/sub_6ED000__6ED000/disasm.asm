0x6ED000: push    ebx
0x6ED001: push    esi
0x6ED002: mov     esi, [esp+8+arg_0]
0x6ED006: push    edi
0x6ED007: push    esi
0x6ED008: mov     ebx, ecx
0x6ED00A: call    sub_6CE3F0
0x6ED00F: mov     eax, ds:0B3EF5Ch
0x6ED014: push    eax; ArgList
0x6ED015: call    TESOutput_PrintString
0x6ED01A: movzx   edi, word ptr [esi+0Ah]
0x6ED01E: movzx   ecx, word ptr [esi+8]
0x6ED022: add     esp, 4
0x6ED025: cmp     edi, ecx
0x6ED027: mov     [esp+0Ch+arg_0], eax
0x6ED02B: jb      short loc_6ED03B
0x6ED02D: movzx   edx, word ptr [esi+0Eh]
0x6ED031: add     edx, edi
0x6ED033: push    edx
0x6ED034: mov     ecx, esi
0x6ED036: call    NiTArray_SetSize
0x6ED03B: lea     eax, [esp+0Ch+arg_0]
0x6ED03F: push    eax
0x6ED040: push    edi
0x6ED041: mov     ecx, esi
0x6ED043: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ED048: mov     ecx, [ebx+40h]
0x6ED04B: push    ecx; int
0x6ED04C: push    offset aExtraDataName; "Extra Data Name"
0x6ED051: call    TESOutput_PrintLabeledString
0x6ED056: movzx   edi, word ptr [esi+0Ah]
0x6ED05A: movzx   edx, word ptr [esi+8]
0x6ED05E: add     esp, 8
0x6ED061: cmp     edi, edx
0x6ED063: mov     [esp+0Ch+arg_0], eax
0x6ED067: jb      short loc_6ED077
0x6ED069: movzx   eax, word ptr [esi+0Eh]
0x6ED06D: add     eax, edi
0x6ED06F: push    eax
0x6ED070: mov     ecx, esi
0x6ED072: call    NiTArray_SetSize
0x6ED077: lea     ecx, [esp+0Ch+arg_0]
0x6ED07B: push    ecx
0x6ED07C: push    edi
0x6ED07D: mov     ecx, esi
0x6ED07F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6ED084: pop     edi
0x6ED085: pop     esi
0x6ED086: pop     ebx
0x6ED087: retn    4
