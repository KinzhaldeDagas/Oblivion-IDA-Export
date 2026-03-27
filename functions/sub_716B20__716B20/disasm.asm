0x716B20: push    0FFFFFFFFh
0x716B22: push    offset SEH_8C62B0
0x716B27: mov     eax, large fs:0
0x716B2D: push    eax
0x716B2E: push    ecx
0x716B2F: push    esi
0x716B30: mov     eax, ds:0B30AACh
0x716B35: xor     eax, esp
0x716B37: push    eax
0x716B38: lea     eax, [esp+18h+var_C]
0x716B3C: mov     large fs:0, eax
0x716B42: push    10h; Size
0x716B44: call    FormHeapAlloc
0x716B49: mov     esi, eax
0x716B4B: add     esp, 4
0x716B4E: mov     [esp+18h+var_10], esi
0x716B52: test    esi, esi
0x716B54: mov     [esp+18h+var_4], 0
0x716B5C: jz      short loc_716B85
0x716B5E: mov     ecx, esi
0x716B60: call    sub_721350
0x716B65: mov     dword ptr [esi], offset ??_7NiStringExtraData@@6B@; const NiStringExtraData::`vftable'
0x716B6B: mov     dword ptr [esi+0Ch], 0
0x716B72: mov     eax, esi
0x716B74: mov     ecx, [esp+18h+var_C]
0x716B78: mov     large fs:0, ecx
0x716B7F: pop     ecx
0x716B80: pop     esi
0x716B81: add     esp, 10h
0x716B84: retn
0x716B85: xor     eax, eax
0x716B87: mov     ecx, [esp+18h+var_C]
0x716B8B: mov     large fs:0, ecx
0x716B92: pop     ecx
0x716B93: pop     esi
0x716B94: add     esp, 10h
0x716B97: retn
