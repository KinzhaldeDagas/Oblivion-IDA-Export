0x8B7110: push    esi
0x8B7111: mov     esi, [esp+4+arg_0]
0x8B7115: push    edi
0x8B7116: push    esi
0x8B7117: call    sub_8AEAC0
0x8B711C: mov     eax, ds:0BA7FD8h
0x8B7121: push    eax; ArgList
0x8B7122: call    TESOutput_PrintString
0x8B7127: movzx   edi, word ptr [esi+0Ah]
0x8B712B: movzx   ecx, word ptr [esi+8]
0x8B712F: add     esp, 4
0x8B7132: cmp     edi, ecx
0x8B7134: mov     [esp+8+arg_0], eax
0x8B7138: jb      short loc_8B7148
0x8B713A: movzx   edx, word ptr [esi+0Eh]
0x8B713E: add     edx, edi
0x8B7140: push    edx
0x8B7141: mov     ecx, esi
0x8B7143: call    NiTArray_SetSize
0x8B7148: lea     eax, [esp+8+arg_0]
0x8B714C: push    eax
0x8B714D: push    edi
0x8B714E: mov     ecx, esi
0x8B7150: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8B7155: pop     edi
0x8B7156: pop     esi
0x8B7157: retn    4
