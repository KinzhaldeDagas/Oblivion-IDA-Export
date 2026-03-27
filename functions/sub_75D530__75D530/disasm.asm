0x75D530: push    esi
0x75D531: mov     esi, [esp+4+arg_0]
0x75D535: push    edi
0x75D536: push    esi
0x75D537: call    sub_75F730
0x75D53C: mov     eax, ds:0B41BF8h
0x75D541: push    eax; ArgList
0x75D542: call    TESOutput_PrintString
0x75D547: movzx   edi, word ptr [esi+0Ah]
0x75D54B: movzx   ecx, word ptr [esi+8]
0x75D54F: add     esp, 4
0x75D552: cmp     edi, ecx
0x75D554: mov     [esp+8+arg_0], eax
0x75D558: jb      short loc_75D568
0x75D55A: movzx   edx, word ptr [esi+0Eh]
0x75D55E: add     edx, edi
0x75D560: push    edx
0x75D561: mov     ecx, esi
0x75D563: call    NiTArray_SetSize
0x75D568: lea     eax, [esp+8+arg_0]
0x75D56C: push    eax
0x75D56D: push    edi
0x75D56E: mov     ecx, esi
0x75D570: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x75D575: pop     edi
0x75D576: pop     esi
0x75D577: retn    4
