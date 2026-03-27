0x6E6040: push    esi
0x6E6041: mov     esi, [esp+4+arg_0]
0x6E6045: push    edi
0x6E6046: push    esi
0x6E6047: call    sub_6E5400
0x6E604C: mov     eax, ds:0B3E548h
0x6E6051: push    eax; ArgList
0x6E6052: call    TESOutput_PrintString
0x6E6057: movzx   edi, word ptr [esi+0Ah]
0x6E605B: movzx   ecx, word ptr [esi+8]
0x6E605F: add     esp, 4
0x6E6062: cmp     edi, ecx
0x6E6064: mov     [esp+8+arg_0], eax
0x6E6068: jb      short loc_6E6078
0x6E606A: movzx   edx, word ptr [esi+0Eh]
0x6E606E: add     edx, edi
0x6E6070: push    edx
0x6E6071: mov     ecx, esi
0x6E6073: call    NiTArray_SetSize
0x6E6078: lea     eax, [esp+8+arg_0]
0x6E607C: push    eax
0x6E607D: push    edi
0x6E607E: mov     ecx, esi
0x6E6080: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E6085: pop     edi
0x6E6086: pop     esi
0x6E6087: retn    4
