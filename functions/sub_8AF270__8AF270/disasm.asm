0x8AF270: push    esi
0x8AF271: mov     esi, [esp+4+arg_0]
0x8AF275: push    edi
0x8AF276: push    esi
0x8AF277: call    sub_8AEE90
0x8AF27C: mov     eax, ds:0BA7F78h
0x8AF281: push    eax; ArgList
0x8AF282: call    TESOutput_PrintString
0x8AF287: movzx   edi, word ptr [esi+0Ah]
0x8AF28B: movzx   ecx, word ptr [esi+8]
0x8AF28F: add     esp, 4
0x8AF292: cmp     edi, ecx
0x8AF294: mov     [esp+8+arg_0], eax
0x8AF298: jb      short loc_8AF2A8
0x8AF29A: movzx   edx, word ptr [esi+0Eh]
0x8AF29E: add     edx, edi
0x8AF2A0: push    edx
0x8AF2A1: mov     ecx, esi
0x8AF2A3: call    NiTArray_SetSize
0x8AF2A8: lea     eax, [esp+8+arg_0]
0x8AF2AC: push    eax
0x8AF2AD: push    edi
0x8AF2AE: mov     ecx, esi
0x8AF2B0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AF2B5: pop     edi
0x8AF2B6: pop     esi
0x8AF2B7: retn    4
