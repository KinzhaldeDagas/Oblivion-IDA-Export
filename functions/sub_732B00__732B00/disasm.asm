0x732B00: push    0FFFFFFFFh
0x732B02: push    offset SEH_8C62B0
0x732B07: mov     eax, large fs:0
0x732B0D: push    eax
0x732B0E: push    ecx
0x732B0F: push    esi
0x732B10: mov     eax, ds:0B30AACh
0x732B15: xor     eax, esp
0x732B17: push    eax
0x732B18: lea     eax, [esp+18h+var_C]
0x732B1C: mov     large fs:0, eax
0x732B22: push    44h ; 'D'; Size
0x732B24: call    FormHeapAlloc
0x732B29: mov     esi, eax
0x732B2B: add     esp, 4
0x732B2E: mov     [esp+18h+var_10], esi
0x732B32: test    esi, esi
0x732B34: mov     [esp+18h+var_4], 0
0x732B3C: jz      short loc_732B65
0x732B3E: mov     ecx, esi
0x732B40: call    sub_728770
0x732B45: mov     dword ptr [esi], offset ??_7NiLinesData@@6B@; const NiLinesData::`vftable'
0x732B4B: mov     dword ptr [esi+40h], 0
0x732B52: mov     eax, esi
0x732B54: mov     ecx, [esp+18h+var_C]
0x732B58: mov     large fs:0, ecx
0x732B5F: pop     ecx
0x732B60: pop     esi
0x732B61: add     esp, 10h
0x732B64: retn
0x732B65: xor     eax, eax
0x732B67: mov     ecx, [esp+18h+var_C]
0x732B6B: mov     large fs:0, ecx
0x732B72: pop     ecx
0x732B73: pop     esi
0x732B74: add     esp, 10h
0x732B77: retn
