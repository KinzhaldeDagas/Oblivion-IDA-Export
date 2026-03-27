0x7F35A0: push    esi
0x7F35A1: mov     esi, [esp+4+arg_0]
0x7F35A5: push    edi
0x7F35A6: push    esi
0x7F35A7: call    sub_7E28E0
0x7F35AC: mov     eax, ds:0B468ECh
0x7F35B1: push    eax; ArgList
0x7F35B2: call    TESOutput_PrintString
0x7F35B7: movzx   edi, word ptr [esi+0Ah]
0x7F35BB: movzx   ecx, word ptr [esi+8]
0x7F35BF: add     esp, 4
0x7F35C2: cmp     edi, ecx
0x7F35C4: mov     [esp+8+arg_0], eax
0x7F35C8: jb      short loc_7F35D8
0x7F35CA: movzx   edx, word ptr [esi+0Eh]
0x7F35CE: add     edx, edi
0x7F35D0: push    edx
0x7F35D1: mov     ecx, esi
0x7F35D3: call    NiTArray_SetSize
0x7F35D8: lea     eax, [esp+8+arg_0]
0x7F35DC: push    eax
0x7F35DD: push    edi
0x7F35DE: mov     ecx, esi
0x7F35E0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x7F35E5: pop     edi
0x7F35E6: pop     esi
0x7F35E7: retn    4
