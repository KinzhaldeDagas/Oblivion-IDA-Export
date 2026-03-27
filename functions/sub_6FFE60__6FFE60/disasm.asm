0x6FFE60: push    edi
0x6FFE61: mov     edi, [esp+4+a2]
0x6FFE65: test    edi, edi
0x6FFE67: jz      short loc_6FFE81
0x6FFE69: mov     eax, [ecx+0Ch]
0x6FFE6C: push    esi
0x6FFE6D: lea     esi, [ecx+0Ch]
0x6FFE70: push    eax
0x6FFE71: mov     ecx, edi
0x6FFE73: call    sub_6C61E0
0x6FFE78: push    edi; a2
0x6FFE79: mov     ecx, esi; this
0x6FFE7B: call    NiSmartPointer_Set??
0x6FFE80: pop     esi
0x6FFE81: pop     edi
0x6FFE82: retn    4
