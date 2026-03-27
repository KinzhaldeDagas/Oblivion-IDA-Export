0x8AF680: push    esi
0x8AF681: mov     esi, [esp+4+arg_0]
0x8AF685: push    edi
0x8AF686: push    esi
0x8AF687: call    sub_8AEAC0
0x8AF68C: mov     eax, ds:0BA7F84h
0x8AF691: push    eax; ArgList
0x8AF692: call    TESOutput_PrintString
0x8AF697: movzx   edi, word ptr [esi+0Ah]
0x8AF69B: movzx   ecx, word ptr [esi+8]
0x8AF69F: add     esp, 4
0x8AF6A2: cmp     edi, ecx
0x8AF6A4: mov     [esp+8+arg_0], eax
0x8AF6A8: jb      short loc_8AF6B8
0x8AF6AA: movzx   edx, word ptr [esi+0Eh]
0x8AF6AE: add     edx, edi
0x8AF6B0: push    edx
0x8AF6B1: mov     ecx, esi
0x8AF6B3: call    NiTArray_SetSize
0x8AF6B8: lea     eax, [esp+8+arg_0]
0x8AF6BC: push    eax
0x8AF6BD: push    edi
0x8AF6BE: mov     ecx, esi
0x8AF6C0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8AF6C5: pop     edi
0x8AF6C6: pop     esi
0x8AF6C7: retn    4
