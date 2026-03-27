0x757CB0: push    esi
0x757CB1: mov     esi, [esp+4+arg_0]
0x757CB5: push    edi
0x757CB6: push    esi
0x757CB7: call    sub_75F730
0x757CBC: mov     eax, ds:0B414CCh
0x757CC1: push    eax; ArgList
0x757CC2: call    TESOutput_PrintString
0x757CC7: movzx   edi, word ptr [esi+0Ah]
0x757CCB: movzx   ecx, word ptr [esi+8]
0x757CCF: add     esp, 4
0x757CD2: cmp     edi, ecx
0x757CD4: mov     [esp+8+arg_0], eax
0x757CD8: jb      short loc_757CE8
0x757CDA: movzx   edx, word ptr [esi+0Eh]
0x757CDE: add     edx, edi
0x757CE0: push    edx
0x757CE1: mov     ecx, esi
0x757CE3: call    NiTArray_SetSize
0x757CE8: lea     eax, [esp+8+arg_0]
0x757CEC: push    eax
0x757CED: push    edi
0x757CEE: mov     ecx, esi
0x757CF0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x757CF5: pop     edi
0x757CF6: pop     esi
0x757CF7: retn    4
