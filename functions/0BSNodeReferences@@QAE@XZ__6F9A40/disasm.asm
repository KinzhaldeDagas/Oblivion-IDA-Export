0x6F9A40: push    0FFFFFFFFh
0x6F9A42: push    offset SEH_7F1810
0x6F9A47: mov     eax, large fs:0
0x6F9A4D: push    eax
0x6F9A4E: push    ecx
0x6F9A4F: push    esi
0x6F9A50: mov     eax, ds:0B30AACh
0x6F9A55: xor     eax, esp
0x6F9A57: push    eax
0x6F9A58: lea     eax, [esp+18h+var_C]
0x6F9A5C: mov     large fs:0, eax
0x6F9A62: mov     esi, ecx
0x6F9A64: call    NiObject_constr
0x6F9A69: mov     dword ptr [esi], offset ??_7BSNodeReferences@@6B@; const BSNodeReferences::`vftable'
0x6F9A6F: xor     eax, eax
0x6F9A71: mov     [esi+10h], ax
0x6F9A75: mov     [esi+12h], ax
0x6F9A79: mov     [esi+14h], ax
0x6F9A7D: mov     [esi+0Ch], eax
0x6F9A80: mov     dword ptr [esi+8], offset ??_7?$NiTArray@PAVNiAVObject@@@@6B@; const NiTArray<NiAVObject *>::`vftable'
0x6F9A87: mov     word ptr [esi+16h], 1
0x6F9A8D: mov     eax, esi
0x6F9A8F: mov     ecx, [esp+18h+var_C]
0x6F9A93: mov     large fs:0, ecx
0x6F9A9A: pop     ecx
0x6F9A9B: pop     esi
0x6F9A9C: add     esp, 10h
0x6F9A9F: retn
