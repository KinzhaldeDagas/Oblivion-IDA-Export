0x75BFA0: push    ebx
0x75BFA1: push    esi
0x75BFA2: mov     esi, [esp+8+arg_0]
0x75BFA6: push    edi
0x75BFA7: push    esi
0x75BFA8: mov     ebx, ecx
0x75BFAA: call    sub_752EC0
0x75BFAF: mov     eax, ds:0B41A58h
0x75BFB4: push    eax; ArgList
0x75BFB5: call    TESOutput_PrintString
0x75BFBA: movzx   edi, word ptr [esi+0Ah]
0x75BFBE: movzx   ecx, word ptr [esi+8]
0x75BFC2: add     esp, 4
0x75BFC5: cmp     edi, ecx
0x75BFC7: mov     [esp+0Ch+arg_0], eax
0x75BFCB: jb      short loc_75BFDB
0x75BFCD: movzx   edx, word ptr [esi+0Eh]
0x75BFD1: add     edx, edi
0x75BFD3: push    edx
0x75BFD4: mov     ecx, esi
0x75BFD6: call    NiTArray_SetSize
0x75BFDB: lea     eax, [esp+0Ch+arg_0]
0x75BFDF: push    eax
0x75BFE0: push    edi
0x75BFE1: mov     ecx, esi
0x75BFE3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75BFE8: movzx   ecx, byte ptr [ebx+18h]
0x75BFEC: push    ecx; char
0x75BFED: push    offset aSpawnOnDeath; "Spawn on Death"
0x75BFF2: call    TESOutput_PrintLabeledBool
0x75BFF7: movzx   edi, word ptr [esi+0Ah]
0x75BFFB: movzx   edx, word ptr [esi+8]
0x75BFFF: add     esp, 8
0x75C002: cmp     edi, edx
0x75C004: mov     [esp+0Ch+arg_0], eax
0x75C008: jb      short loc_75C018
0x75C00A: movzx   eax, word ptr [esi+0Eh]
0x75C00E: add     eax, edi
0x75C010: push    eax
0x75C011: mov     ecx, esi
0x75C013: call    NiTArray_SetSize
0x75C018: lea     ecx, [esp+0Ch+arg_0]
0x75C01C: push    ecx
0x75C01D: push    edi
0x75C01E: mov     ecx, esi
0x75C020: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75C025: mov     ebx, [ebx+1Ch]
0x75C028: test    ebx, ebx
0x75C02A: jz      short loc_75C031
0x75C02C: mov     ebx, [ebx+8]
0x75C02F: jmp     short loc_75C036
0x75C031: mov     ebx, offset aNone; "None"
0x75C036: push    ebx; int
0x75C037: push    offset aSpawnModifier; "Spawn Modifier"
0x75C03C: call    TESOutput_PrintLabeledString
0x75C041: movzx   edi, word ptr [esi+0Ah]
0x75C045: movzx   edx, word ptr [esi+8]
0x75C049: add     esp, 8
0x75C04C: cmp     edi, edx
0x75C04E: mov     [esp+0Ch+arg_0], eax
0x75C052: jb      short loc_75C062
0x75C054: movzx   eax, word ptr [esi+0Eh]
0x75C058: add     eax, edi
0x75C05A: push    eax
0x75C05B: mov     ecx, esi
0x75C05D: call    NiTArray_SetSize
0x75C062: lea     ecx, [esp+0Ch+arg_0]
0x75C066: push    ecx
0x75C067: push    edi
0x75C068: mov     ecx, esi
0x75C06A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75C06F: pop     edi
0x75C070: pop     esi
0x75C071: pop     ebx
0x75C072: retn    4
