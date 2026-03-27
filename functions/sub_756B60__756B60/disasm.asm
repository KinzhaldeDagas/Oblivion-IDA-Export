0x756B60: push    esi
0x756B61: mov     esi, [esp+4+arg_0]
0x756B65: push    edi
0x756B66: push    esi
0x756B67: call    sub_75F730
0x756B6C: mov     eax, ds:0B411ACh
0x756B71: push    eax; ArgList
0x756B72: call    TESOutput_PrintString
0x756B77: movzx   edi, word ptr [esi+0Ah]
0x756B7B: movzx   ecx, word ptr [esi+8]
0x756B7F: add     esp, 4
0x756B82: cmp     edi, ecx
0x756B84: mov     [esp+8+arg_0], eax
0x756B88: jb      short loc_756B98
0x756B8A: movzx   edx, word ptr [esi+0Eh]
0x756B8E: add     edx, edi
0x756B90: push    edx
0x756B91: mov     ecx, esi
0x756B93: call    NiTArray_SetSize
0x756B98: lea     eax, [esp+8+arg_0]
0x756B9C: push    eax
0x756B9D: push    edi
0x756B9E: mov     ecx, esi
0x756BA0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x756BA5: pop     edi
0x756BA6: pop     esi
0x756BA7: retn    4
