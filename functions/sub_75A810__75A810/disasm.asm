0x75A810: push    ebx
0x75A811: push    esi
0x75A812: mov     esi, [esp+8+arg_0]
0x75A816: push    edi
0x75A817: push    esi
0x75A818: mov     ebx, ecx
0x75A81A: call    sub_752EC0
0x75A81F: mov     eax, ds:0B41944h
0x75A824: push    eax; ArgList
0x75A825: call    TESOutput_PrintString
0x75A82A: movzx   edi, word ptr [esi+0Ah]
0x75A82E: movzx   ecx, word ptr [esi+8]
0x75A832: add     esp, 4
0x75A835: cmp     edi, ecx
0x75A837: mov     [esp+0Ch+arg_0], eax
0x75A83B: jb      short loc_75A84B
0x75A83D: movzx   edx, word ptr [esi+0Eh]
0x75A841: add     edx, edi
0x75A843: push    edx
0x75A844: mov     ecx, esi
0x75A846: call    NiTArray_SetSize
0x75A84B: lea     eax, [esp+0Ch+arg_0]
0x75A84F: push    eax
0x75A850: push    edi
0x75A851: mov     ecx, esi
0x75A853: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75A858: mov     ecx, [ebx+18h]
0x75A85B: mov     edx, [ecx]
0x75A85D: mov     eax, [edx+30h]
0x75A860: push    esi
0x75A861: call    eax
0x75A863: pop     edi
0x75A864: pop     esi
0x75A865: pop     ebx
0x75A866: retn    4
