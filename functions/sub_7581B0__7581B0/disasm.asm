0x7581B0: push    esi
0x7581B1: mov     esi, [esp+4+arg_0]
0x7581B5: push    edi
0x7581B6: push    esi
0x7581B7: call    sub_75F730
0x7581BC: mov     eax, ds:0B416CCh
0x7581C1: push    eax; ArgList
0x7581C2: call    TESOutput_PrintString
0x7581C7: movzx   edi, word ptr [esi+0Ah]
0x7581CB: movzx   ecx, word ptr [esi+8]
0x7581CF: add     esp, 4
0x7581D2: cmp     edi, ecx
0x7581D4: mov     [esp+8+arg_0], eax
0x7581D8: jb      short loc_7581E8
0x7581DA: movzx   edx, word ptr [esi+0Eh]
0x7581DE: add     edx, edi
0x7581E0: push    edx
0x7581E1: mov     ecx, esi
0x7581E3: call    NiTArray_SetSize
0x7581E8: lea     eax, [esp+8+arg_0]
0x7581EC: push    eax
0x7581ED: push    edi
0x7581EE: mov     ecx, esi
0x7581F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7581F5: pop     edi
0x7581F6: pop     esi
0x7581F7: retn    4
