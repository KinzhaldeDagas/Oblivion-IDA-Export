0x6FEC00: push    ecx
0x6FEC01: push    ebx
0x6FEC02: push    ebp
0x6FEC03: push    esi
0x6FEC04: mov     esi, [esp+10h+arg_0]
0x6FEC08: push    edi
0x6FEC09: mov     ebx, ecx
0x6FEC0B: push    esi
0x6FEC0C: mov     [esp+18h+var_4], ebx
0x6FEC10: call    sub_7531E0
0x6FEC15: mov     eax, ds:0B3F54Ch
0x6FEC1A: push    eax; ArgList
0x6FEC1B: call    TESOutput_PrintString
0x6FEC20: movzx   edi, word ptr [esi+0Ah]
0x6FEC24: movzx   ecx, word ptr [esi+8]
0x6FEC28: add     esp, 4
0x6FEC2B: cmp     edi, ecx
0x6FEC2D: mov     [esp+14h+arg_0], eax
0x6FEC31: jb      short loc_6FEC41
0x6FEC33: movzx   edx, word ptr [esi+0Eh]
0x6FEC37: add     edx, edi
0x6FEC39: push    edx
0x6FEC3A: mov     ecx, esi
0x6FEC3C: call    NiTArray_SetSize
0x6FEC41: lea     eax, [esp+14h+arg_0]
0x6FEC45: push    eax
0x6FEC46: push    edi
0x6FEC47: mov     ecx, esi
0x6FEC49: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FEC4E: mov     eax, [ebx+54h]
0x6FEC51: push    eax
0x6FEC52: push    offset aArraytype; "ArrayType"
0x6FEC57: mov     ecx, ebx
0x6FEC59: call    sub_6FE340
0x6FEC5E: movzx   edi, word ptr [esi+0Ah]
0x6FEC62: movzx   ecx, word ptr [esi+8]
0x6FEC66: cmp     edi, ecx
0x6FEC68: mov     [esp+14h+arg_0], eax
0x6FEC6C: jb      short loc_6FEC7C
0x6FEC6E: movzx   edx, word ptr [esi+0Eh]
0x6FEC72: add     edx, edi
0x6FEC74: push    edx
0x6FEC75: mov     ecx, esi
0x6FEC77: call    NiTArray_SetSize
0x6FEC7C: lea     eax, [esp+14h+arg_0]
0x6FEC80: push    eax
0x6FEC81: push    edi
0x6FEC82: mov     ecx, esi
0x6FEC84: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6FEC89: movzx   ebp, word ptr [ebx+62h]
0x6FEC8D: test    ebp, ebp
0x6FEC8F: jz      loc_6FED1F
0x6FEC95: mov     ecx, [ebx+5Ch]
0x6FEC98: mov     eax, [ecx+ebp*4-4]
0x6FEC9C: sub     ebp, 1
0x6FEC9F: test    eax, eax
0x6FECA1: jz      short loc_6FED17
0x6FECA3: mov     eax, [eax+8]
0x6FECA6: push    eax; int
0x6FECA7: push    offset aE; "E"
0x6FECAC: call    TESOutput_PrintLabeledString
0x6FECB1: movzx   edi, word ptr [esi+0Ah]
0x6FECB5: movzx   edx, word ptr [esi+8]
0x6FECB9: add     esp, 8
0x6FECBC: cmp     edi, edx
0x6FECBE: mov     ebx, eax
0x6FECC0: jb      short loc_6FECD0
0x6FECC2: movzx   eax, word ptr [esi+0Eh]
0x6FECC6: add     eax, edi
0x6FECC8: push    eax
0x6FECC9: mov     ecx, esi
0x6FECCB: call    NiTArray_SetSize
0x6FECD0: movzx   ecx, word ptr [esi+0Ah]
0x6FECD4: cmp     edi, ecx
0x6FECD6: jb      short loc_6FECEA
0x6FECD8: test    ebx, ebx
0x6FECDA: lea     edx, [edi+1]
0x6FECDD: mov     [esi+0Ah], dx
0x6FECE1: jz      short loc_6FED0D
0x6FECE3: add     word ptr [esi+0Ch], 1
0x6FECE8: jmp     short loc_6FED0D
0x6FECEA: test    ebx, ebx
0x6FECEC: jz      short loc_6FECFE
0x6FECEE: mov     eax, [esi+4]
0x6FECF1: cmp     dword ptr [eax+edi*4], 0
0x6FECF5: jnz     short loc_6FED0D
0x6FECF7: add     word ptr [esi+0Ch], 1
0x6FECFC: jmp     short loc_6FED0D
0x6FECFE: mov     ecx, [esi+4]
0x6FED01: cmp     dword ptr [ecx+edi*4], 0
0x6FED05: jz      short loc_6FED0D
0x6FED07: add     word ptr [esi+0Ch], 0FFFFh
0x6FED0D: mov     edx, [esi+4]
0x6FED10: mov     [edx+edi*4], ebx
0x6FED13: mov     ebx, [esp+14h+var_4]
0x6FED17: test    ebp, ebp
0x6FED19: jnz     loc_6FEC95
0x6FED1F: pop     edi
0x6FED20: pop     esi
0x6FED21: pop     ebp
0x6FED22: pop     ebx
0x6FED23: pop     ecx
0x6FED24: retn    4
