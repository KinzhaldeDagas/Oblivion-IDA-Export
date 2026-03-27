0x6CE3F0: push    ebx
0x6CE3F1: push    esi
0x6CE3F2: mov     esi, [esp+8+arg_0]
0x6CE3F6: push    edi
0x6CE3F7: push    esi
0x6CE3F8: mov     ebx, ecx
0x6CE3FA: call    sub_6D05C0
0x6CE3FF: mov     eax, ds:0B3CCB0h
0x6CE404: push    eax; ArgList
0x6CE405: call    TESOutput_PrintString
0x6CE40A: movzx   edi, word ptr [esi+0Ah]
0x6CE40E: movzx   ecx, word ptr [esi+8]
0x6CE412: add     esp, 4
0x6CE415: cmp     edi, ecx
0x6CE417: mov     [esp+0Ch+arg_0], eax
0x6CE41B: jb      short loc_6CE42B
0x6CE41D: movzx   edx, word ptr [esi+0Eh]
0x6CE421: add     edx, edi
0x6CE423: push    edx
0x6CE424: mov     ecx, esi
0x6CE426: call    NiTArray_SetSize
0x6CE42B: lea     eax, [esp+0Ch+arg_0]
0x6CE42F: push    eax
0x6CE430: push    edi
0x6CE431: mov     ecx, esi
0x6CE433: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6CE438: mov     ecx, [ebx+3Ch]
0x6CE43B: test    ecx, ecx
0x6CE43D: jz      short loc_6CE447
0x6CE43F: mov     edx, [ecx]
0x6CE441: mov     eax, [edx+30h]
0x6CE444: push    esi
0x6CE445: call    eax
0x6CE447: pop     edi
0x6CE448: pop     esi
0x6CE449: pop     ebx
0x6CE44A: retn    4
