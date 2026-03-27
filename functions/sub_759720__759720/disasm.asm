0x759720: push    ebx
0x759721: push    esi
0x759722: mov     esi, [esp+8+arg_0]
0x759726: push    edi
0x759727: push    esi
0x759728: mov     ebx, ecx
0x75972A: call    sub_75EAA0
0x75972F: mov     eax, ds:0B4182Ch
0x759734: push    eax; ArgList
0x759735: call    TESOutput_PrintString
0x75973A: movzx   edi, word ptr [esi+0Ah]
0x75973E: movzx   ecx, word ptr [esi+8]
0x759742: add     esp, 4
0x759745: cmp     edi, ecx
0x759747: mov     [esp+0Ch+arg_0], eax
0x75974B: jb      short loc_75975B
0x75974D: movzx   edx, word ptr [esi+0Eh]
0x759751: add     edx, edi
0x759753: push    edx
0x759754: mov     ecx, esi
0x759756: call    NiTArray_SetSize
0x75975B: lea     eax, [esp+0Ch+arg_0]
0x75975F: push    eax
0x759760: push    edi
0x759761: mov     ecx, esi
0x759763: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x759768: movzx   ecx, byte ptr [ebx+30h]
0x75976C: push    ecx; char
0x75976D: push    offset aUseDirection; "Use Direction"
0x759772: call    TESOutput_PrintLabeledBool
0x759777: movzx   edi, word ptr [esi+0Ah]
0x75977B: movzx   edx, word ptr [esi+8]
0x75977F: add     esp, 8
0x759782: cmp     edi, edx
0x759784: mov     [esp+0Ch+arg_0], eax
0x759788: jb      short loc_759798
0x75978A: movzx   eax, word ptr [esi+0Eh]
0x75978E: add     eax, edi
0x759790: push    eax
0x759791: mov     ecx, esi
0x759793: call    NiTArray_SetSize
0x759798: lea     ecx, [esp+0Ch+arg_0]
0x75979C: push    ecx
0x75979D: push    edi
0x75979E: mov     ecx, esi
0x7597A0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7597A5: push    offset aDirection_0; "Direction"
0x7597AA: lea     ecx, [ebx+34h]
0x7597AD: call    sub_707280
0x7597B2: movzx   edi, word ptr [esi+0Ah]
0x7597B6: movzx   edx, word ptr [esi+8]
0x7597BA: cmp     edi, edx
0x7597BC: mov     [esp+0Ch+arg_0], eax
0x7597C0: jb      short loc_7597D0
0x7597C2: movzx   eax, word ptr [esi+0Eh]
0x7597C6: add     eax, edi
0x7597C8: push    eax
0x7597C9: mov     ecx, esi
0x7597CB: call    NiTArray_SetSize
0x7597D0: lea     ecx, [esp+0Ch+arg_0]
0x7597D4: push    ecx
0x7597D5: push    edi
0x7597D6: mov     ecx, esi
0x7597D8: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7597DD: pop     edi
0x7597DE: pop     esi
0x7597DF: pop     ebx
0x7597E0: retn    4
