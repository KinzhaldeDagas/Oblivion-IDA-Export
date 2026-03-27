0x724E30: push    0FFFFFFFFh
0x724E32: push    offset SEH_8C62B0
0x724E37: mov     eax, large fs:0
0x724E3D: push    eax
0x724E3E: push    ecx
0x724E3F: push    esi
0x724E40: mov     eax, ds:0B30AACh
0x724E45: xor     eax, esp
0x724E47: push    eax
0x724E48: lea     eax, [esp+18h+var_C]
0x724E4C: mov     large fs:0, eax
0x724E52: push    28h ; '('; Size
0x724E54: call    FormHeapAlloc
0x724E59: mov     esi, eax
0x724E5B: add     esp, 4
0x724E5E: mov     [esp+18h+var_10], esi
0x724E62: test    esi, esi
0x724E64: mov     [esp+18h+var_4], 0
0x724E6C: jz      short loc_724EB6
0x724E6E: mov     ecx, esi
0x724E70: call    sub_738760
0x724E75: mov     dword ptr [esi], offset ??_7NiRangeLODData@@6B@; const NiRangeLODData::`vftable'
0x724E7B: mov     eax, ds:0B3F9A8h
0x724E80: mov     [esi+8], eax
0x724E83: mov     ecx, ds:0B3F9ACh
0x724E89: mov     [esi+0Ch], ecx
0x724E8C: mov     edx, ds:0B3F9B0h
0x724E92: mov     [esi+10h], edx
0x724E95: mov     dword ptr [esi+20h], 0
0x724E9C: mov     dword ptr [esi+24h], 0
0x724EA3: mov     eax, esi
0x724EA5: mov     ecx, [esp+18h+var_C]
0x724EA9: mov     large fs:0, ecx
0x724EB0: pop     ecx
0x724EB1: pop     esi
0x724EB2: add     esp, 10h
0x724EB5: retn
0x724EB6: xor     eax, eax
0x724EB8: mov     ecx, [esp+18h+var_C]
0x724EBC: mov     large fs:0, ecx
0x724EC3: pop     ecx
0x724EC4: pop     esi
0x724EC5: add     esp, 10h
0x724EC8: retn
