0x72FD30: push    esi
0x72FD31: mov     esi, [esp+4+a2]
0x72FD35: push    edi
0x72FD36: push    esi; a2
0x72FD37: call    sub_7009A0
0x72FD3C: mov     eax, ds:0B3FF3Ch
0x72FD41: push    eax; ArgList
0x72FD42: call    TESOutput_PrintString
0x72FD47: movzx   edi, word ptr [esi+0Ah]
0x72FD4B: movzx   ecx, word ptr [esi+8]
0x72FD4F: add     esp, 4
0x72FD52: cmp     edi, ecx
0x72FD54: mov     [esp+8+a2], eax
0x72FD58: jb      short loc_72FD68
0x72FD5A: movzx   edx, word ptr [esi+0Eh]
0x72FD5E: add     edx, edi
0x72FD60: push    edx
0x72FD61: mov     ecx, esi
0x72FD63: call    NiTArray_SetSize
0x72FD68: lea     eax, [esp+8+a2]
0x72FD6C: push    eax
0x72FD6D: push    edi
0x72FD6E: mov     ecx, esi
0x72FD70: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72FD75: pop     edi
0x72FD76: pop     esi
0x72FD77: retn    4
