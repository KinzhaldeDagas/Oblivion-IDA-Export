0x75A500: push    ebx
0x75A501: push    esi
0x75A502: mov     esi, [esp+8+arg_0]
0x75A506: push    edi
0x75A507: push    esi
0x75A508: mov     ebx, ecx
0x75A50A: call    sub_752EC0
0x75A50F: mov     eax, ds:0B418ECh
0x75A514: push    eax; ArgList
0x75A515: call    TESOutput_PrintString
0x75A51A: movzx   edi, word ptr [esi+0Ah]
0x75A51E: movzx   ecx, word ptr [esi+8]
0x75A522: add     esp, 4
0x75A525: cmp     edi, ecx
0x75A527: mov     [esp+0Ch+arg_0], eax
0x75A52B: jb      short loc_75A53B
0x75A52D: movzx   edx, word ptr [esi+0Eh]
0x75A531: add     edx, edi
0x75A533: push    edx
0x75A534: mov     ecx, esi
0x75A536: call    NiTArray_SetSize
0x75A53B: lea     eax, [esp+0Ch+arg_0]
0x75A53F: push    eax
0x75A540: push    edi
0x75A541: mov     ecx, esi
0x75A543: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A548: mov     ecx, [ebx+18h]
0x75A54B: mov     edx, [ecx]
0x75A54D: mov     eax, [edx+30h]
0x75A550: push    esi
0x75A551: call    eax
0x75A553: pop     edi
0x75A554: pop     esi
0x75A555: pop     ebx
0x75A556: retn    4
