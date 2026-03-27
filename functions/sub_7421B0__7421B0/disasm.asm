0x7421B0: push    esi
0x7421B1: mov     esi, [esp+4+arg_0]
0x7421B5: push    edi
0x7421B6: push    esi
0x7421B7: call    sub_723620
0x7421BC: mov     eax, ds:0B4021Ch
0x7421C1: push    eax; ArgList
0x7421C2: call    TESOutput_PrintString
0x7421C7: movzx   edi, word ptr [esi+0Ah]
0x7421CB: movzx   ecx, word ptr [esi+8]
0x7421CF: add     esp, 4
0x7421D2: cmp     edi, ecx
0x7421D4: mov     [esp+8+arg_0], eax
0x7421D8: jb      short loc_7421E8
0x7421DA: movzx   edx, word ptr [esi+0Eh]
0x7421DE: add     edx, edi
0x7421E0: push    edx
0x7421E1: mov     ecx, esi
0x7421E3: call    NiTArray_SetSize
0x7421E8: lea     eax, [esp+8+arg_0]
0x7421EC: push    eax
0x7421ED: push    edi
0x7421EE: mov     ecx, esi
0x7421F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7421F5: pop     edi
0x7421F6: pop     esi
0x7421F7: retn    4
