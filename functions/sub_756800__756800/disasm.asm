0x756800: push    esi
0x756801: mov     esi, [esp+4+arg_0]
0x756805: push    edi
0x756806: push    esi
0x756807: call    sub_75F4B0
0x75680C: mov     eax, ds:0B410ACh
0x756811: push    eax; ArgList
0x756812: call    TESOutput_PrintString
0x756817: movzx   edi, word ptr [esi+0Ah]
0x75681B: movzx   ecx, word ptr [esi+8]
0x75681F: add     esp, 4
0x756822: cmp     edi, ecx
0x756824: mov     [esp+8+arg_0], eax
0x756828: jb      short loc_756838
0x75682A: movzx   edx, word ptr [esi+0Eh]
0x75682E: add     edx, edi
0x756830: push    edx
0x756831: mov     ecx, esi
0x756833: call    NiTArray_SetSize
0x756838: lea     eax, [esp+8+arg_0]
0x75683C: push    eax
0x75683D: push    edi
0x75683E: mov     ecx, esi
0x756840: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x756845: pop     edi
0x756846: pop     esi
0x756847: retn    4
