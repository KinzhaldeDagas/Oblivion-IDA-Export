0x6E3CD0: push    0FFFFFFFFh
0x6E3CD2: push    offset SEH_8C62B0
0x6E3CD7: mov     eax, large fs:0
0x6E3CDD: push    eax
0x6E3CDE: push    ecx
0x6E3CDF: push    esi
0x6E3CE0: mov     eax, ds:0B30AACh
0x6E3CE5: xor     eax, esp
0x6E3CE7: push    eax
0x6E3CE8: lea     eax, [esp+18h+var_C]
0x6E3CEC: mov     large fs:0, eax
0x6E3CF2: push    24h ; '$'; Size
0x6E3CF4: call    FormHeapAlloc
0x6E3CF9: mov     esi, eax
0x6E3CFB: add     esp, 4
0x6E3CFE: mov     [esp+18h+var_10], esi
0x6E3D02: test    esi, esi
0x6E3D04: mov     [esp+18h+var_4], 0
0x6E3D0C: jz      short loc_6E3D5E
0x6E3D0E: mov     ecx, esi
0x6E3D10: call    sub_6EC220
0x6E3D15: mov     dword ptr [esi], offset ??_7NiColorInterpolator@@6B@; const NiColorInterpolator::`vftable'
0x6E3D1B: mov     eax, ds:0B24FD4h
0x6E3D20: mov     [esi+0Ch], eax
0x6E3D23: mov     ecx, ds:0B24FD8h
0x6E3D29: mov     [esi+10h], ecx
0x6E3D2C: mov     edx, ds:0B24FDCh
0x6E3D32: mov     [esi+14h], edx
0x6E3D35: mov     eax, ds:0B24FE0h
0x6E3D3A: mov     [esi+18h], eax
0x6E3D3D: mov     dword ptr [esi+1Ch], 0
0x6E3D44: mov     dword ptr [esi+20h], 0
0x6E3D4B: mov     eax, esi
0x6E3D4D: mov     ecx, [esp+18h+var_C]
0x6E3D51: mov     large fs:0, ecx
0x6E3D58: pop     ecx
0x6E3D59: pop     esi
0x6E3D5A: add     esp, 10h
0x6E3D5D: retn
0x6E3D5E: xor     eax, eax
0x6E3D60: mov     ecx, [esp+18h+var_C]
0x6E3D64: mov     large fs:0, ecx
0x6E3D6B: pop     ecx
0x6E3D6C: pop     esi
0x6E3D6D: add     esp, 10h
0x6E3D70: retn
