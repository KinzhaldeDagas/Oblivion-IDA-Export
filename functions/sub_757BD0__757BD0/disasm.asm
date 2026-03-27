0x757BD0: push    esi
0x757BD1: mov     esi, [esp+4+arg_0]
0x757BD5: push    edi
0x757BD6: push    esi
0x757BD7: call    sub_75F730
0x757BDC: mov     eax, ds:0B4146Ch
0x757BE1: push    eax; ArgList
0x757BE2: call    TESOutput_PrintString
0x757BE7: movzx   edi, word ptr [esi+0Ah]
0x757BEB: movzx   ecx, word ptr [esi+8]
0x757BEF: add     esp, 4
0x757BF2: cmp     edi, ecx
0x757BF4: mov     [esp+8+arg_0], eax
0x757BF8: jb      short loc_757C08
0x757BFA: movzx   edx, word ptr [esi+0Eh]
0x757BFE: add     edx, edi
0x757C00: push    edx
0x757C01: mov     ecx, esi
0x757C03: call    NiTArray_SetSize
0x757C08: lea     eax, [esp+8+arg_0]
0x757C0C: push    eax
0x757C0D: push    edi
0x757C0E: mov     ecx, esi
0x757C10: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757C15: pop     edi
0x757C16: pop     esi
0x757C17: retn    4
