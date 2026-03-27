0x727D50: push    0FFFFFFFFh
0x727D52: push    offset SEH_8C62B0
0x727D57: mov     eax, large fs:0
0x727D5D: push    eax
0x727D5E: push    ecx
0x727D5F: push    esi
0x727D60: mov     eax, ds:0B30AACh
0x727D65: xor     eax, esp
0x727D67: push    eax
0x727D68: lea     eax, [esp+18h+var_C]
0x727D6C: mov     large fs:0, eax
0x727D72: push    34h ; '4'; Size
0x727D74: call    FormHeapAlloc
0x727D79: mov     esi, eax
0x727D7B: add     esp, 4
0x727D7E: mov     [esp+18h+var_10], esi
0x727D82: test    esi, esi
0x727D84: mov     [esp+18h+var_4], 0
0x727D8C: jz      short loc_727DBC
0x727D8E: mov     ecx, esi
0x727D90: call    sub_726010
0x727D95: mov     dword ptr [esi], offset ??_7BSPackedAdditionalGeometryData@@6B@; const BSPackedAdditionalGeometryData::`vftable'
0x727D9B: mov     dword ptr [esi+2Ch], 0
0x727DA2: mov     dword ptr [esi+30h], 0
0x727DA9: mov     eax, esi
0x727DAB: mov     ecx, [esp+18h+var_C]
0x727DAF: mov     large fs:0, ecx
0x727DB6: pop     ecx
0x727DB7: pop     esi
0x727DB8: add     esp, 10h
0x727DBB: retn
0x727DBC: xor     eax, eax
0x727DBE: mov     ecx, [esp+18h+var_C]
0x727DC2: mov     large fs:0, ecx
0x727DC9: pop     ecx
0x727DCA: pop     esi
0x727DCB: add     esp, 10h
0x727DCE: retn
